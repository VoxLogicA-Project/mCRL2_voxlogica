// Author(s): Olav Bunte
// Copyright: see the accompanying file COPYING or copy at
// https://github.com/mCRL2org/mCRL2/blob/master/COPYING
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
//

#include "mcrl2/utilities/toolset_version.h"
#include "processsystem.h"

#include <QEventLoop>

ProcessThread::ProcessThread(QQueue<int>* processQueue, ProcessType processType)
    : processQueue(processQueue), processType(processType), running(false),
      currentProcessid(-1)
{
}

void ProcessThread::newProcessQueued(ProcessType processType)
{
  if (this->processType == processType)
  {
    emit newProcessInQueue();
  }
}

void ProcessThread::processFinished(int processid)
{
  if (processid == currentProcessid)
  {
    emit currentProcessFinished();
  }
}

void ProcessThread::run()
{
  QEventLoop queueLoop;
  connect(this, SIGNAL(newProcessInQueue()), &queueLoop, SLOT(quit()));
  QEventLoop finishLoop;
  connect(this, SIGNAL(currentProcessFinished()), &finishLoop, SLOT(quit()));

  while (true)
  {
    if (!processQueue->isEmpty())
    {
      /* start a new process */
      currentProcessid = processQueue->dequeue();
      emit startProcess(currentProcessid);
      running = true;
      emit statusChanged(true, processType);

      /* wait until it has finished */
      finishLoop.exec();
      currentProcessid = -1;
    }
    else
    {
      /* wait until a process is added to the queue */
      running = false;
      emit statusChanged(false, processType);
      queueLoop.exec();
    }
  }
}

bool ProcessThread::isRunning()
{
  return running;
}

int ProcessThread::getCurrentProcessId()
{
  return currentProcessid;
}

ProcessSystem::ProcessSystem(FileSystem* fileSystem)
    : fileSystem(fileSystem), pid(0)
{
  qRegisterMetaType<ProcessType>("ProcessType");

  /* create, connect and start all process threads */
  for (ProcessType processType : PROCESSTYPES)
  {
    processQueues[processType] = new QQueue<int>();
    processThreads[processType] =
        new ProcessThread(processQueues[processType], processType);
    connect(this, SIGNAL(newProcessQueued(ProcessType)),
            processThreads[processType], SLOT(newProcessQueued(ProcessType)));
    connect(processThreads[processType], SIGNAL(startProcess(int)), this,
            SLOT(startProcess(int)));
    connect(this, SIGNAL(processFinished(int)), processThreads[processType],
            SLOT(processFinished(int)));

    processThreads[processType]->start();
  }
}

ProcessSystem::~ProcessSystem()
{
  for (ProcessType processType : PROCESSTYPES)
  {
    delete processQueues[processType];
    processThreads[processType]->deleteLater();
  }
}

void ProcessSystem::setConsoleDock(ConsoleDock* consoleDock)
{
  this->consoleDock = consoleDock;
}

void ProcessSystem::testExecutableExistence()
{
  /* get this tool's version */
  QString mcrl2ideVersion =
      QString::fromStdString(mcrl2::utilities::get_toolset_version());

  QStringList tools = {"mcrl22lps", "lpsxsim",  "lps2lts",  "ltsconvert",
                       "ltsgraph",  "lps2pbes", "pbessolve"};

  /* for each necessary executable, check if it exists by trying to run it and
   *   compare its version with mcrl2ide's version */
  for (QString tool : tools)
  {
    /* try to run the tool */
    QProcess process;
    process.start(fileSystem->toolPath(tool), {"--version"});
    bool started = process.waitForStarted();

    if (started)
    {
      /* if found, get the tool version from the output
       * the version is the fourth plus the fifth word in the output */
      process.waitForFinished();
      QString output = process.readAllStandardOutput();
      QStringList splittedOutput = output.split(QRegExp("[ \r\n]"));
      /* check if the output has the correct output */
      if (splittedOutput.length() >= 4 && splittedOutput[1] == "mCRL2" &&
          splittedOutput[2] == "toolset" && splittedOutput[3].startsWith("2"))
      {
        QString version = splittedOutput[3] + " " + splittedOutput[4];
        if (version != mcrl2ideVersion)
        {
          consoleDock->broadcast(
              "WARNING: Tool " + tool +
              " does not have the same version as mCRL2 IDE: "
              "mCRL2 IDE has version " +
              mcrl2ideVersion + " whereas " + tool + " has version " + version +
              ".\n");
        }
      }
      else
      {
        consoleDock->broadcast(
            "WARNING: The executable of tool " + tool +
            " produced unexpected version output. Either the version output "
            "has changed or the tool has crashed (using --version).\n");
      }
    }
    else
    {
      consoleDock->broadcast("WARNING: The executable of tool " + tool +
                             " could not be found! Make sure it is in the "
                             "running directory or in PATH.\n");
    }
  }
}

ProcessThread* ProcessSystem::getProcessThread(ProcessType processType)
{
  return processThreads[processType];
}

bool ProcessSystem::isThreadRunning(ProcessType processType)
{
  return processThreads[processType]->isRunning();
}

QProcess*
ProcessSystem::createSubprocess(SubprocessType subprocessType, int processid,
                                int subprocessIndex,
                                const QString& propertyName, bool evidence,
                                mcrl2::lts::lts_equivalence equivalence)
{
  QProcess* subprocess = new QProcess();
  ProcessType processType = processTypes[processid];

  /* connect to logger */
  if (subprocessType == SubprocessType::ParseMcrl2 ||
      subprocessType == SubprocessType::ParseMcf)
  {
    connect(subprocess, SIGNAL(readyReadStandardError()), consoleDock,
            SLOT(logToParsingConsole()));
  }
  else
  {
    switch (processType)
    {
    case ProcessType::Parsing:
      connect(subprocess, SIGNAL(readyReadStandardError()), consoleDock,
              SLOT(logToParsingConsole()));
      break;
    case ProcessType::Simulation:
      connect(subprocess, SIGNAL(readyReadStandardError()), consoleDock,
              SLOT(logToSimulationConsole()));
      break;
    case ProcessType::LtsCreation:
      connect(subprocess, SIGNAL(readyReadStandardError()), consoleDock,
              SLOT(logToLtsCreationConsole()));
      break;
    case ProcessType::Verification:
      connect(subprocess, SIGNAL(readyReadStandardError()), consoleDock,
              SLOT(logToVerificationConsole()));
      break;
    default:
      break;
    }
  }

  /* connect the subprocess to the subprocess handler to execute the next one
   *   when finished */
  connect(subprocess, SIGNAL(finished(int)), this,
          SLOT(executeNextSubprocess(int)));

  /* the subprocess should delete itself when finished */
  connect(subprocess, SIGNAL(finished(int)), subprocess, SLOT(deleteLater()));

  /* add properties we might need */
  subprocess->setProperty("processid", processid);
  subprocess->setProperty("subprocessType", int(subprocessType));
  subprocess->setProperty("subprocessIndex", subprocessIndex);
  subprocess->setProperty("propertyName", propertyName);
  subprocess->setProperty("evidence", evidence);

  QString program = "";
  QString inputFile = "";
  QString inputFile2 = "";
  QString outputFile = "";
  QStringList arguments = {};

  /* set program, arguments and more connects depending on the type of the
   *   subprocess */
  switch (subprocessType)
  {
  case SubprocessType::ParseMcrl2:
    arguments << "--check-only";
    connect(subprocess, SIGNAL(finished(int)), this,
            SLOT(mcrl2ParsingResult(int)));

  case SubprocessType::Mcrl22lps:
    program = "mcrl22lps";
    inputFile = fileSystem->specificationFilePath();
    outputFile = fileSystem->lpsFilePath();
    arguments << inputFile << outputFile << "--lin-method=regular"
              << "--rewriter=jitty"
              << "--verbose";
    break;

  case SubprocessType::Lpsxsim:
    program = "lpsxsim";
    inputFile = fileSystem->lpsFilePath();
    arguments << inputFile << "--rewriter=jitty";
    break;

  case SubprocessType::Lps2lts:
    program = "lps2lts";
    inputFile = fileSystem->lpsFilePath(propertyName, evidence);
    outputFile = fileSystem->ltsFilePath(mcrl2::lts::lts_eq_none, propertyName,
                                         evidence);
    arguments << inputFile << outputFile << "--rewriter=jitty"
              << "--strategy=breadth"
              << "--verbose";
    break;

  case SubprocessType::Ltsconvert:
    program = "ltsconvert";
    inputFile = fileSystem->ltsFilePath();
    outputFile = fileSystem->ltsFilePath(equivalence);
    arguments << inputFile << outputFile << "--verbose"
              << "--equivalence=" +
                     QString::fromStdString(
                         mcrl2::lts::print_equivalence(equivalence));
    break;

  case SubprocessType::Ltsgraph:
    program = "ltsgraph";
    inputFile = fileSystem->ltsFilePath(equivalence, propertyName, evidence);
    arguments << inputFile;
    break;

  case SubprocessType::ParseMcf:
    arguments << "--check-only";
    connect(subprocess, SIGNAL(finished(int)), this,
            SLOT(mcfParsingResult(int)));

  case SubprocessType::Lps2pbes:
    program = "lps2pbes";
    inputFile = fileSystem->lpsFilePath();
    inputFile2 = fileSystem->propertyFilePath(propertyName);
    outputFile = fileSystem->pbesFilePath(propertyName, evidence);
    arguments << inputFile << outputFile << "--formula=" + inputFile2
              << "--out=pbes"
              << "--verbose";
    if (evidence)
    {
      arguments << "--counter-example";
    }
    break;

  case SubprocessType::Pbessolve:
    program = "pbessolve";
    inputFile = fileSystem->pbesFilePath(propertyName, evidence);
    arguments << inputFile << "--in=pbes"
              << "--rewriter=jitty"
              << "--search=breadth-first"
              << "--strategy=0"
              << "--verbose";
    if (evidence)
    {
      inputFile2 = fileSystem->lpsFilePath();
      outputFile = fileSystem->lpsFilePath(propertyName, evidence);
      arguments << "--file=" + inputFile2 << "--evidence-file=" + outputFile;
    }
    else
    {
      connect(subprocess, SIGNAL(finished(int)), this,
              SLOT(verificationResult(int)));
    }
    break;

  default:
    break;
  }

  subprocess->setProgram(fileSystem->toolPath(program));
  subprocess->setArguments(arguments);
  subprocess->setProperty("inputFile", inputFile);
  subprocess->setProperty("inputFile2", inputFile2);
  subprocess->setProperty("outputFile", outputFile);

  return subprocess;
}

int ProcessSystem::parseSpecification()
{
  if (fileSystem->save())
  {
    /* create the subprocesses */
    int processid = pid++;
    ProcessType processType = ProcessType::Parsing;
    processTypes[processid] = processType;
    consoleDock->setConsoleTab(processType);

    processes[processid] = {
        createSubprocess(SubprocessType::ParseMcrl2, processid, 0)};
    processQueues[processType]->enqueue(processid);
    emit newProcessQueued(processType);

    return processid;
  }
  return -1;
}

int ProcessSystem::simulate()
{
  if (fileSystem->save())
  {
    /* create the subprocesses */
    int processid = pid++;
    ProcessType processType = ProcessType::Simulation;
    processTypes[processid] = processType;
    consoleDock->setConsoleTab(processType);

    processes[processid] = {
        createSubprocess(SubprocessType::ParseMcrl2, processid, 0),
        createSubprocess(SubprocessType::Mcrl22lps, processid, 1),
        createSubprocess(SubprocessType::Lpsxsim, processid, 2)};
    processQueues[processType]->enqueue(processid);
    emit newProcessQueued(processType);

    return processid;
  }
  return -1;
}

int ProcessSystem::showLts(mcrl2::lts::lts_equivalence reduction)
{
  if (fileSystem->save())
  {
    /* create the subprocesses */
    std::vector<QProcess*> showLtsProcesses = {};
    int processid = pid++;
    ProcessType processType = ProcessType::LtsCreation;
    processTypes[processid] = processType;
    consoleDock->setConsoleTab(processType);
    bool noReduction = reduction == mcrl2::lts::lts_eq_none;

    showLtsProcesses.push_back(
        createSubprocess(SubprocessType::ParseMcrl2, processid, 0));
    showLtsProcesses.push_back(
        createSubprocess(SubprocessType::Mcrl22lps, processid, 1));
    showLtsProcesses.push_back(
        createSubprocess(SubprocessType::Lps2lts, processid, 2));
    /* create the ltsconvert process if we need to reduce */
    if (!noReduction)
    {
      showLtsProcesses.push_back(createSubprocess(
          SubprocessType::Ltsconvert, processid, 3, "", false, reduction));
    }
    showLtsProcesses.push_back(createSubprocess(SubprocessType::Ltsgraph,
                                                processid, noReduction ? 3 : 4,
                                                "", false, reduction));

    processes[processid] = showLtsProcesses;
    processQueues[processType]->enqueue(processid);
    emit newProcessQueued(processType);

    return processid;
  }
  return -1;
}

int ProcessSystem::parseProperty(const Property& property)
{
  if (fileSystem->save())
  {
    /* create the subprocesses */
    int processid = pid++;
    ProcessType processType = ProcessType::Parsing;
    processTypes[processid] = processType;
    consoleDock->setConsoleTab(processType);

    processes[processid] = {
        createSubprocess(SubprocessType::ParseMcrl2, processid, 0),
        createSubprocess(SubprocessType::Mcrl22lps, processid, 1),
        createSubprocess(SubprocessType::ParseMcf, processid, 2,
                         property.name)};
    processQueues[processType]->enqueue(processid);
    emit newProcessQueued(processType);

    return processid;
  }
  return -1;
}

int ProcessSystem::verifyProperty(const Property& property)
{
  if (fileSystem->save())
  {
    /* create the subprocesses */
    int processid = pid++;
    ProcessType processType = ProcessType::Verification;
    processTypes[processid] = processType;
    consoleDock->setConsoleTab(processType);

    processes[processid] = {
        createSubprocess(SubprocessType::ParseMcrl2, processid, 0),
        createSubprocess(SubprocessType::Mcrl22lps, processid, 1),
        createSubprocess(SubprocessType::ParseMcf, processid, 2, property.name),
        createSubprocess(SubprocessType::Lps2pbes, processid, 3, property.name),
        createSubprocess(SubprocessType::Pbessolve, processid, 4,
                         property.name)};
    processQueues[processType]->enqueue(processid);
    emit newProcessQueued(processType);

    return processid;
  }
  return -1;
}

int ProcessSystem::showEvidence(const Property& property)
{
  if (fileSystem->save())
  {
    /* create the subprocesses */
    int processid = pid++;
    ProcessType processType = ProcessType::Verification;
    processTypes[processid] = processType;
    consoleDock->setConsoleTab(processType);

    processes[processid] = {
        createSubprocess(SubprocessType::ParseMcrl2, processid, 0),
        createSubprocess(SubprocessType::Mcrl22lps, processid, 1),
        createSubprocess(SubprocessType::ParseMcf, processid, 2, property.name),
        createSubprocess(SubprocessType::Lps2pbes, processid, 3, property.name,
                         true),
        createSubprocess(SubprocessType::Pbessolve, processid, 4, property.name,
                         true),
        createSubprocess(SubprocessType::Lps2lts, processid, 5, property.name,
                         true),
        createSubprocess(SubprocessType::Ltsgraph, processid, 6, property.name,
                         true)};
    processQueues[processType]->enqueue(processid);
    emit newProcessQueued(processType);

    return processid;
  }
  return -1;
}

void ProcessSystem::startProcess(int processid)
{
  executeNextSubprocess(0, processid);
}

void ProcessSystem::executeNextSubprocess(int previousExitCode, int processid)
{
  int nextSubprocessIndex;
  /* if the processid is set we need to run the first subprocess, else get info
   *   from the previous process */
  if (processid >= 0)
  {
    nextSubprocessIndex = 0;
  }
  else
  {
    QProcess* previousProcess = qobject_cast<QProcess*>(sender());
    processid = previousProcess->property("processid").toInt();
    nextSubprocessIndex =
        previousProcess->property("subprocessIndex").toInt() + 1;
  }

  /* if the previous process was the last process, we are done */
  if (nextSubprocessIndex < int(processes[processid].size()))
  {
    /* check if the previous process terminated successfully */
    if (previousExitCode > 0)
    {
      /* if not, abort the process */
      consoleDock->writeToConsole(processTypes[processid],
                                  "Process finished unsuccessfully\n");
      emit processFinished(processid);
      deleteProcess(processid, nextSubprocessIndex);
    }
    else
    {
      /* get the process and its properties */
      ProcessType processType = processTypes[processid];
      QProcess* subprocess = processes[processid][nextSubprocessIndex];

      SubprocessType subprocessType = static_cast<SubprocessType>(
          subprocess->property("subprocessType").toInt());
      QString inputFile = subprocess->property("inputFile").toString();
      QString inputFile2 = subprocess->property("inputFile2").toString();
      QString outputFile = subprocess->property("outputFile").toString();
      QString propertyName = subprocess->property("propertyName").toString();
      bool evidence = subprocess->property("evidence").toBool();

      bool noNeedToRun = false;

      /* prepare for execution (mention in console, check if the subprocess can
       *   be skipped, emit processFinished when executing a UI tool) */
      switch (subprocessType)
      {
      case SubprocessType::ParseMcrl2:
        consoleDock->writeToConsole(ProcessType::Parsing,
                                    "##### PARSING SPECIFICATION #####\n");
        if (processType != ProcessType::Parsing)
        {
          consoleDock->writeToConsole(processType,
                                      "##### PARSING SPECIFICATION #####\n");
        }

        /* no need to run if there is an up to date lps file with respect to the
         *   input mcrl2 file */
        if (fileSystem->upToDateOutputFileExists(inputFile, outputFile))
        {
          noNeedToRun = true;
          consoleDock->writeToConsole(
              ProcessType::Parsing,
              "Parsing is not needed as specification has not changed\n");
        }
        break;

      case SubprocessType::Mcrl22lps:
        consoleDock->writeToConsole(processType, "##### CREATING LPS #####\n");

        /* no need to run if there is an up to date lps file with respect to the
         *   input mcrl2 file */
        if (fileSystem->upToDateOutputFileExists(inputFile, outputFile))
        {
          noNeedToRun = true;
          consoleDock->writeToConsole(processType,
                                      "Up to date LPS already exists\n");
        }
        break;

      case SubprocessType::Lpsxsim:
        consoleDock->writeToConsole(processType,
                                    "##### SHOWING SIMULATION #####\n");

        emit processFinished(processid);
        break;

      case SubprocessType::Lps2lts:
        consoleDock->writeToConsole(processType, "##### CREATING LTS #####\n");

        /* no need to run if there is an up to date lts file with respect to the
         *   input lps file */
        if (fileSystem->upToDateOutputFileExists(inputFile, outputFile))
        {
          noNeedToRun = true;
          consoleDock->writeToConsole(
              processType, "Up to date" + QString(evidence ? " evidence" : "") +
                               " LTS already exists\n");
        }
        break;

      case SubprocessType::Ltsconvert:
        consoleDock->writeToConsole(processType, "##### REDUCING LTS #####\n");

        /* no need to run if there is an up to date reduced lts file with
         *   respect to the input unreduced lts file */
        if (fileSystem->upToDateOutputFileExists(inputFile, outputFile))
        {
          noNeedToRun = true;
          consoleDock->writeToConsole(processType,
                                      "Up to date LTS already exists\n");
        }
        break;

      case SubprocessType::Ltsgraph:
        consoleDock->writeToConsole(processType, "##### SHOWING LTS #####\n");

        emit processFinished(processid);
        break;

      case SubprocessType::ParseMcf:
        consoleDock->writeToConsole(ProcessType::Parsing,
                                    "##### PARSING PROPERTY " +
                                        propertyName.toUpper() + " #####\n");
        if (processType != ProcessType::Parsing)
        {
          consoleDock->writeToConsole(processType, "##### PARSING PROPERTY " +
                                                       propertyName.toUpper() +
                                                       " #####\n");
        }
        break;

      case SubprocessType::Lps2pbes:
        consoleDock->writeToConsole(processType, "##### CREATING PBES #####\n");

        /* no need to run if there is an up to date pbes file with respect to
         *   the input lps and property files */
        if (fileSystem->upToDateOutputFileExists(inputFile, outputFile,
                                                 inputFile2))
        {
          noNeedToRun = true;
          consoleDock->writeToConsole(processType,
                                      "Up to date PBES already exists\n");
        }
        break;

      case SubprocessType::Pbessolve:
        consoleDock->writeToConsole(processType, "##### SOLVING PBES #####\n");

        /* no need to run if there is an up to date evidence lps file with
         *   respect to the input pbes and lps files */
        if (evidence && fileSystem->upToDateOutputFileExists(
                            inputFile, outputFile, inputFile2))
        {
          noNeedToRun = true;
          consoleDock->writeToConsole(
              ProcessType::Verification,
              "Up to date evidence LPS already exists\n");
        }

      default:
        break;
      }

      /* if we can skip this subprocess act like it has finished, else execute
       *   it */
      if (noNeedToRun)
      {
        emit subprocess->finished(0);
      }
      else
      {
        subprocess->start();
      }
    }
  }
}

void ProcessSystem::mcrl2ParsingResult(int previousExitCode)
{
  QProcess* mcrl2ParsingProcess = qobject_cast<QProcess*>(sender());
  int processid = mcrl2ParsingProcess->property("processid").toInt();

  /* if the full process was only for parsing the specification, signal that the
   *   process has finished */
  if (processTypes[processid] == ProcessType::Parsing &&
      processes[processid].size() == 1)
  {
    emit processFinished(processid);
  }

  /* if parsing gave an error, move to the parsing tab and move the cursor in
   *   the code editor to the parsing error if possible */
  if (previousExitCode > 0)
  {
    consoleDock->writeToConsole(
        ProcessType::Parsing,
        "The given specification is not a valid mCRL2 specification\n");
    consoleDock->setConsoleTab(ProcessType::Parsing);
    QString parsingOutput = consoleDock->getConsoleOutput(ProcessType::Parsing);
    QRegExp parsingError = QRegExp("Line (\\d+), column (\\d+): syntax error");
    int parsingErrorIndex =
        parsingOutput.indexOf(parsingError, parsingOutput.lastIndexOf("#####"));
    if (parsingErrorIndex >= 0)
    {
      fileSystem->setSpecificationEditorCursor(parsingError.cap(1).toInt(),
                                               parsingError.cap(2).toInt());
    }
  }
}

void ProcessSystem::mcfParsingResult(int previousExitCode)
{
  int processid =
      qobject_cast<QProcess*>(sender())->property("processid").toInt();
  ProcessType processType = processTypes[processid];

  /* if parsing gave an error, move to parsing tab */
  if (previousExitCode > 0)
  {
    consoleDock->setConsoleTab(ProcessType::Parsing);
  }

  /* if this belonged to a parsing process, write the result and emit that the
   *   process has finished */
  if (processType == ProcessType::Parsing)
  {
    if (previousExitCode == 0)
    {
      results[processid] = "valid";
    }
    else
    {
      results[processid] = "invalid";
    }

    emit processFinished(processid);
  }
}

void ProcessSystem::verificationResult(int previousExitCode)
{
  QProcess* previousProcess = qobject_cast<QProcess*>(sender());
  int processid = previousProcess->property("processid").toInt();
  QString propertyName = previousProcess->property("propertyName").toString();

  if (previousExitCode == 0)
  {
    QString output = QString(previousProcess->readAllStandardOutput());
    if (output.startsWith("true"))
    {
      results[processid] = "true";
      consoleDock->writeToConsole(
          ProcessType::Verification,
          "The property " + propertyName +
              " on this specification evaluates to true\n");
    }
    else if (output.startsWith("false"))
    {
      results[processid] = "false";
      consoleDock->writeToConsole(
          ProcessType::Verification,
          "The property " + propertyName +
              " on this specification evaluates to false\n");
    }
  }
  emit processFinished(processid);
}

void ProcessSystem::abortProcess(int processid)
{
  ProcessType processType = processTypes[processid];
  bool aborted;

  /* if this process is running, terminate it */
  if (processThreads[processType]->getCurrentProcessId() == processid)
  {
    killProcess(processid);
    aborted = true;
  }
  else
  {
    /* if it is not running, simply remove it from the queue */
    aborted = processQueues[processType]->removeOne(processid);
    if (aborted)
    {
      deleteProcess(processid);
    }
  }

  if (aborted)
  {
    emit processFinished(processid);
    consoleDock->writeToConsole(processTypes[processid],
                                "##### ABORTING PROCESS #####\n");
  }
}

void ProcessSystem::abortAllProcesses(ProcessType processType)
{
  /* first empty the queue */
  QQueue<int>* processQueue = processQueues[processType];
  for (int processid : *processQueue)
  {
    emit processFinished(processid);
    deleteProcess(processid);
  }
  processQueue->clear();

  /* then stop the process run by the thread */
  int processid = processThreads[processType]->getCurrentProcessId();
  if (processid >= 0 && processes.count(processid) > 0)
  {
    killProcess(processid);
    emit processFinished(processid);
  }

  consoleDock->writeToConsole(processType,
                              "##### ABORTING ALL " +
                                  PROCESSTYPENAMES.at(processType).toUpper() +
                                  " PROCESSES #####\n");
}

void ProcessSystem::killProcess(int processid)
{
  std::vector<QProcess*> subprocesses = processes[processid];
  int numSubprocesses = int(subprocesses.size());

  /* we kill the process by simply killing its running subprocess and deleting
   *   the subprocesses that come after it */
  int i;
  for (i = numSubprocesses - 1; i >= 0; i--)
  {
    QProcess* subprocess = subprocesses[i];
    if (subprocess->state() == QProcess::Running ||
        subprocess->error() != QProcess::UnknownError)
    {
      subprocess->blockSignals(true);
      subprocess->kill();
      break;
    }
  }
  if (i < numSubprocesses - 1)
  {
    deleteProcess(processid, i + 1);
  }
}

void ProcessSystem::deleteProcess(int processid, int fromSubprocessIndex)
{
  std::vector<QProcess*> subprocesses = processes[processid];
  for (int i = fromSubprocessIndex; i < int(subprocesses.size()); i++)
  {
    subprocesses[i]->deleteLater();
  }
}

QString ProcessSystem::getResult(int processid)
{
  if (results.count(processid) > 0)
  {
    return results[processid];
  }
  else
  {
    return "";
  }
}
