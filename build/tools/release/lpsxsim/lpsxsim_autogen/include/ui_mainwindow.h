/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>
#include "mcrl2/gui/logwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionPlayTrace;
    QAction *actionRandomPlay;
    QAction *actionStop;
    QAction *actionEnableTauPrioritisation;
    QAction *actionOpen;
    QAction *actionLoadTrace;
    QAction *actionSaveTrace;
    QAction *actionQuit;
    QAction *actionShowDontCaresInStateChanges;
    QAction *actionSetPlayDelay;
    QAction *action_Fit_to_Current_State;
    QAction *actionContents;
    QAction *actionAbout;
    QAction *actionOutput;
    QAction *actionUndo_last;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_4;
    QSplitter *splitter_2;
    QSplitter *splitter;
    QGroupBox *transitionGroup;
    QHBoxLayout *horizontalLayout_2;
    QTableWidget *transitionTable;
    QGroupBox *stateGroup;
    QHBoxLayout *horizontalLayout;
    QTableWidget *stateTable;
    QGroupBox *traceGroup;
    QHBoxLayout *horizontalLayout_3;
    QTableWidget *traceTable;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuPlay;
    QMenu *menuOptions;
    QStatusBar *statusBar;
    QDockWidget *dockWidget;
    mcrl2::gui::qt::LogWidget *dockWidgetContents;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/lpsxsim/icons/lpsxsim.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionPlayTrace = new QAction(MainWindow);
        actionPlayTrace->setObjectName(QString::fromUtf8("actionPlayTrace"));
        actionRandomPlay = new QAction(MainWindow);
        actionRandomPlay->setObjectName(QString::fromUtf8("actionRandomPlay"));
        actionStop = new QAction(MainWindow);
        actionStop->setObjectName(QString::fromUtf8("actionStop"));
        actionEnableTauPrioritisation = new QAction(MainWindow);
        actionEnableTauPrioritisation->setObjectName(QString::fromUtf8("actionEnableTauPrioritisation"));
        actionEnableTauPrioritisation->setCheckable(true);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionLoadTrace = new QAction(MainWindow);
        actionLoadTrace->setObjectName(QString::fromUtf8("actionLoadTrace"));
        actionSaveTrace = new QAction(MainWindow);
        actionSaveTrace->setObjectName(QString::fromUtf8("actionSaveTrace"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionShowDontCaresInStateChanges = new QAction(MainWindow);
        actionShowDontCaresInStateChanges->setObjectName(QString::fromUtf8("actionShowDontCaresInStateChanges"));
        actionShowDontCaresInStateChanges->setCheckable(true);
        actionSetPlayDelay = new QAction(MainWindow);
        actionSetPlayDelay->setObjectName(QString::fromUtf8("actionSetPlayDelay"));
        action_Fit_to_Current_State = new QAction(MainWindow);
        action_Fit_to_Current_State->setObjectName(QString::fromUtf8("action_Fit_to_Current_State"));
        actionContents = new QAction(MainWindow);
        actionContents->setObjectName(QString::fromUtf8("actionContents"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionOutput = new QAction(MainWindow);
        actionOutput->setObjectName(QString::fromUtf8("actionOutput"));
        actionOutput->setCheckable(true);
        actionUndo_last = new QAction(MainWindow);
        actionUndo_last->setObjectName(QString::fromUtf8("actionUndo_last"));
        actionUndo_last->setEnabled(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_4 = new QHBoxLayout(centralwidget);
        horizontalLayout_4->setContentsMargins(3, 3, 3, 3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        splitter_2 = new QSplitter(centralwidget);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        splitter = new QSplitter(splitter_2);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        transitionGroup = new QGroupBox(splitter);
        transitionGroup->setObjectName(QString::fromUtf8("transitionGroup"));
        horizontalLayout_2 = new QHBoxLayout(transitionGroup);
        horizontalLayout_2->setContentsMargins(3, 3, 3, 3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        transitionTable = new QTableWidget(transitionGroup);
        if (transitionTable->columnCount() < 2)
            transitionTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        transitionTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        transitionTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        transitionTable->setObjectName(QString::fromUtf8("transitionTable"));
        transitionTable->setTabKeyNavigation(false);
        transitionTable->setSelectionMode(QAbstractItemView::SingleSelection);
        transitionTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        transitionTable->setWordWrap(false);
        transitionTable->horizontalHeader()->setDefaultSectionSize(180);
        transitionTable->horizontalHeader()->setStretchLastSection(true);
        transitionTable->verticalHeader()->setVisible(false);

        horizontalLayout_2->addWidget(transitionTable);

        splitter->addWidget(transitionGroup);
        stateGroup = new QGroupBox(splitter);
        stateGroup->setObjectName(QString::fromUtf8("stateGroup"));
        horizontalLayout = new QHBoxLayout(stateGroup);
        horizontalLayout->setContentsMargins(3, 3, 3, 3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        stateTable = new QTableWidget(stateGroup);
        if (stateTable->columnCount() < 2)
            stateTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        stateTable->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        stateTable->setHorizontalHeaderItem(1, __qtablewidgetitem3);
        stateTable->setObjectName(QString::fromUtf8("stateTable"));
        stateTable->setTabKeyNavigation(false);
        stateTable->setSelectionMode(QAbstractItemView::NoSelection);
        stateTable->setWordWrap(false);
        stateTable->horizontalHeader()->setStretchLastSection(true);
        stateTable->verticalHeader()->setVisible(false);

        horizontalLayout->addWidget(stateTable);

        splitter->addWidget(stateGroup);
        splitter_2->addWidget(splitter);
        traceGroup = new QGroupBox(splitter_2);
        traceGroup->setObjectName(QString::fromUtf8("traceGroup"));
        horizontalLayout_3 = new QHBoxLayout(traceGroup);
        horizontalLayout_3->setContentsMargins(3, 3, 3, 3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        traceTable = new QTableWidget(traceGroup);
        if (traceTable->columnCount() < 3)
            traceTable->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        traceTable->setHorizontalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        traceTable->setHorizontalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        traceTable->setHorizontalHeaderItem(2, __qtablewidgetitem6);
        traceTable->setObjectName(QString::fromUtf8("traceTable"));
        traceTable->setTabKeyNavigation(false);
        traceTable->setSelectionMode(QAbstractItemView::SingleSelection);
        traceTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        traceTable->setWordWrap(false);
        traceTable->horizontalHeader()->setDefaultSectionSize(180);
        traceTable->horizontalHeader()->setStretchLastSection(true);
        traceTable->verticalHeader()->setVisible(false);

        horizontalLayout_3->addWidget(traceTable);

        splitter_2->addWidget(traceGroup);

        horizontalLayout_4->addWidget(splitter_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuPlay = new QMenu(menubar);
        menuPlay->setObjectName(QString::fromUtf8("menuPlay"));
        menuOptions = new QMenu(menubar);
        menuOptions->setObjectName(QString::fromUtf8("menuOptions"));
        MainWindow->setMenuBar(menubar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        dockWidget = new QDockWidget(MainWindow);
        dockWidget->setObjectName(QString::fromUtf8("dockWidget"));
        dockWidgetContents = new mcrl2::gui::qt::LogWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        dockWidget->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(Qt::BottomDockWidgetArea, dockWidget);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuPlay->menuAction());
        menubar->addAction(menuOptions->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addSeparator();
        menuFile->addAction(actionLoadTrace);
        menuFile->addAction(actionSaveTrace);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);
        menuPlay->addAction(actionUndo_last);
        menuPlay->addSeparator();
        menuPlay->addAction(actionPlayTrace);
        menuPlay->addAction(actionRandomPlay);
        menuPlay->addAction(actionStop);
        menuPlay->addSeparator();
        menuPlay->addAction(actionSetPlayDelay);
        menuOptions->addAction(actionEnableTauPrioritisation);
        menuOptions->addAction(actionShowDontCaresInStateChanges);
        menuOptions->addSeparator();
        menuOptions->addAction(actionOutput);

        retranslateUi(MainWindow);
        QObject::connect(actionUndo_last, SIGNAL(triggered()), MainWindow, SLOT(undoLast()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "LpsXSim", nullptr));
        actionPlayTrace->setText(QCoreApplication::translate("MainWindow", "Play &Trace", nullptr));
        actionRandomPlay->setText(QCoreApplication::translate("MainWindow", "&Random Play", nullptr));
        actionStop->setText(QCoreApplication::translate("MainWindow", "&Stop", nullptr));
#if QT_CONFIG(shortcut)
        actionStop->setShortcut(QCoreApplication::translate("MainWindow", "Esc", nullptr));
#endif // QT_CONFIG(shortcut)
        actionEnableTauPrioritisation->setText(QCoreApplication::translate("MainWindow", "Enable &Tau Prioritisation", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWindow", "&Open...", nullptr));
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionLoadTrace->setText(QCoreApplication::translate("MainWindow", "&Load Trace...", nullptr));
#if QT_CONFIG(shortcut)
        actionLoadTrace->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+L", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSaveTrace->setText(QCoreApplication::translate("MainWindow", "&Save Trace...", nullptr));
#if QT_CONFIG(shortcut)
        actionSaveTrace->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionQuit->setText(QCoreApplication::translate("MainWindow", "&Quit", nullptr));
#if QT_CONFIG(shortcut)
        actionQuit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionShowDontCaresInStateChanges->setText(QCoreApplication::translate("MainWindow", "Show &Don't Cares in State Changes", nullptr));
        actionSetPlayDelay->setText(QCoreApplication::translate("MainWindow", "Set Play &Delay...", nullptr));
        action_Fit_to_Current_State->setText(QCoreApplication::translate("MainWindow", "&Fit to Current State", nullptr));
#if QT_CONFIG(shortcut)
        action_Fit_to_Current_State->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+F", nullptr));
#endif // QT_CONFIG(shortcut)
        actionContents->setText(QCoreApplication::translate("MainWindow", "&Contents", nullptr));
#if QT_CONFIG(shortcut)
        actionContents->setShortcut(QCoreApplication::translate("MainWindow", "F1", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAbout->setText(QCoreApplication::translate("MainWindow", "&About", nullptr));
        actionOutput->setText(QCoreApplication::translate("MainWindow", "Show mCRL2 Output", nullptr));
        actionUndo_last->setText(QCoreApplication::translate("MainWindow", "Undo last", nullptr));
#if QT_CONFIG(shortcut)
        actionUndo_last->setShortcut(QCoreApplication::translate("MainWindow", "Backspace", nullptr));
#endif // QT_CONFIG(shortcut)
        transitionGroup->setTitle(QCoreApplication::translate("MainWindow", "Transitions", nullptr));
        QTableWidgetItem *___qtablewidgetitem = transitionTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Action", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = transitionTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "State Change", nullptr));
        stateGroup->setTitle(QCoreApplication::translate("MainWindow", "Current State", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = stateTable->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Parameter", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = stateTable->horizontalHeaderItem(1);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Value", nullptr));
        traceGroup->setTitle(QCoreApplication::translate("MainWindow", "Trace", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = traceTable->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "#", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = traceTable->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "Action", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = traceTable->horizontalHeaderItem(2);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "State Change", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "&File", nullptr));
        menuPlay->setTitle(QCoreApplication::translate("MainWindow", "&Play", nullptr));
        menuOptions->setTitle(QCoreApplication::translate("MainWindow", "&Options", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
