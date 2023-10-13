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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *open;
    QAction *openTrace;
    QAction *exit;
    QAction *exportBitmap;
    QAction *exportText;
    QAction *resetViewpoint;
    QAction *zoomIntoAbove;
    QAction *zoomIntoBelow;
    QAction *zoomOut;
    QAction *displayStates;
    QAction *displayTransitions;
    QAction *displayBackpointers;
    QAction *displayWireframe;
    QAction *preferences;
    QWidget *centralWidget;
    QMenuBar *menubar;
    QMenu *menu_File;
    QMenu *menuExport;
    QMenu *viewMenu;
    QStatusBar *statusbar;
    QDockWidget *informationDock;
    QWidget *dockWidgetContents;
    QDockWidget *simulationDock;
    QWidget *dockWidgetContents_2;
    QDockWidget *markDock;
    QWidget *dockWidgetContents_3;
    QDockWidget *settingsDock;
    QWidget *dockWidgetContents_4;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1280, 1024);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/ltsview/icons/ltsview.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        open = new QAction(MainWindow);
        open->setObjectName(QString::fromUtf8("open"));
        openTrace = new QAction(MainWindow);
        openTrace->setObjectName(QString::fromUtf8("openTrace"));
        exit = new QAction(MainWindow);
        exit->setObjectName(QString::fromUtf8("exit"));
        exportBitmap = new QAction(MainWindow);
        exportBitmap->setObjectName(QString::fromUtf8("exportBitmap"));
        exportText = new QAction(MainWindow);
        exportText->setObjectName(QString::fromUtf8("exportText"));
        resetViewpoint = new QAction(MainWindow);
        resetViewpoint->setObjectName(QString::fromUtf8("resetViewpoint"));
        zoomIntoAbove = new QAction(MainWindow);
        zoomIntoAbove->setObjectName(QString::fromUtf8("zoomIntoAbove"));
        zoomIntoBelow = new QAction(MainWindow);
        zoomIntoBelow->setObjectName(QString::fromUtf8("zoomIntoBelow"));
        zoomOut = new QAction(MainWindow);
        zoomOut->setObjectName(QString::fromUtf8("zoomOut"));
        displayStates = new QAction(MainWindow);
        displayStates->setObjectName(QString::fromUtf8("displayStates"));
        displayStates->setCheckable(true);
        displayTransitions = new QAction(MainWindow);
        displayTransitions->setObjectName(QString::fromUtf8("displayTransitions"));
        displayTransitions->setCheckable(true);
        displayBackpointers = new QAction(MainWindow);
        displayBackpointers->setObjectName(QString::fromUtf8("displayBackpointers"));
        displayBackpointers->setCheckable(true);
        displayWireframe = new QAction(MainWindow);
        displayWireframe->setObjectName(QString::fromUtf8("displayWireframe"));
        displayWireframe->setCheckable(true);
        preferences = new QAction(MainWindow);
        preferences->setObjectName(QString::fromUtf8("preferences"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        MainWindow->setCentralWidget(centralWidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1280, 23));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        menuExport = new QMenu(menu_File);
        menuExport->setObjectName(QString::fromUtf8("menuExport"));
        viewMenu = new QMenu(menubar);
        viewMenu->setObjectName(QString::fromUtf8("viewMenu"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        informationDock = new QDockWidget(MainWindow);
        informationDock->setObjectName(QString::fromUtf8("informationDock"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        informationDock->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(Qt::RightDockWidgetArea, informationDock);
        simulationDock = new QDockWidget(MainWindow);
        simulationDock->setObjectName(QString::fromUtf8("simulationDock"));
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QString::fromUtf8("dockWidgetContents_2"));
        simulationDock->setWidget(dockWidgetContents_2);
        MainWindow->addDockWidget(Qt::RightDockWidgetArea, simulationDock);
        markDock = new QDockWidget(MainWindow);
        markDock->setObjectName(QString::fromUtf8("markDock"));
        dockWidgetContents_3 = new QWidget();
        dockWidgetContents_3->setObjectName(QString::fromUtf8("dockWidgetContents_3"));
        markDock->setWidget(dockWidgetContents_3);
        MainWindow->addDockWidget(Qt::RightDockWidgetArea, markDock);
        settingsDock = new QDockWidget(MainWindow);
        settingsDock->setObjectName(QString::fromUtf8("settingsDock"));
        dockWidgetContents_4 = new QWidget();
        dockWidgetContents_4->setObjectName(QString::fromUtf8("dockWidgetContents_4"));
        settingsDock->setWidget(dockWidgetContents_4);
        MainWindow->addDockWidget(Qt::RightDockWidgetArea, settingsDock);

        menubar->addAction(menu_File->menuAction());
        menubar->addAction(viewMenu->menuAction());
        menu_File->addAction(open);
        menu_File->addAction(openTrace);
        menu_File->addSeparator();
        menu_File->addAction(menuExport->menuAction());
        menu_File->addSeparator();
        menu_File->addAction(exit);
        menuExport->addAction(exportBitmap);
        menuExport->addAction(exportText);
        viewMenu->addAction(resetViewpoint);
        viewMenu->addSeparator();
        viewMenu->addAction(zoomIntoAbove);
        viewMenu->addAction(zoomIntoBelow);
        viewMenu->addAction(zoomOut);
        viewMenu->addSeparator();
        viewMenu->addAction(displayStates);
        viewMenu->addAction(displayTransitions);
        viewMenu->addAction(displayBackpointers);
        viewMenu->addAction(displayWireframe);
        viewMenu->addSeparator();
        viewMenu->addAction(preferences);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "LTSView", nullptr));
        open->setText(QCoreApplication::translate("MainWindow", "&Open...", nullptr));
#if QT_CONFIG(shortcut)
        open->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        openTrace->setText(QCoreApplication::translate("MainWindow", "Open &Trace...", nullptr));
#if QT_CONFIG(shortcut)
        openTrace->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+T", nullptr));
#endif // QT_CONFIG(shortcut)
        exit->setText(QCoreApplication::translate("MainWindow", "E&xit", nullptr));
#if QT_CONFIG(shortcut)
        exit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        exportBitmap->setText(QCoreApplication::translate("MainWindow", "&Bitmap...", nullptr));
        exportText->setText(QCoreApplication::translate("MainWindow", "&Text...", nullptr));
        resetViewpoint->setText(QCoreApplication::translate("MainWindow", "&Reset Viewpoint", nullptr));
#if QT_CONFIG(shortcut)
        resetViewpoint->setShortcut(QCoreApplication::translate("MainWindow", "F2", nullptr));
#endif // QT_CONFIG(shortcut)
        zoomIntoAbove->setText(QCoreApplication::translate("MainWindow", "Zoom Into &Above", nullptr));
#if QT_CONFIG(shortcut)
        zoomIntoAbove->setShortcut(QCoreApplication::translate("MainWindow", "Z", nullptr));
#endif // QT_CONFIG(shortcut)
        zoomIntoBelow->setText(QCoreApplication::translate("MainWindow", "Zoom Into &Below", nullptr));
#if QT_CONFIG(shortcut)
        zoomIntoBelow->setShortcut(QCoreApplication::translate("MainWindow", "X", nullptr));
#endif // QT_CONFIG(shortcut)
        zoomOut->setText(QCoreApplication::translate("MainWindow", "Zoom &Out", nullptr));
#if QT_CONFIG(shortcut)
        zoomOut->setShortcut(QCoreApplication::translate("MainWindow", "C", nullptr));
#endif // QT_CONFIG(shortcut)
        displayStates->setText(QCoreApplication::translate("MainWindow", "Display &States", nullptr));
#if QT_CONFIG(shortcut)
        displayStates->setShortcut(QCoreApplication::translate("MainWindow", "F3", nullptr));
#endif // QT_CONFIG(shortcut)
        displayTransitions->setText(QCoreApplication::translate("MainWindow", "Display &Transitions", nullptr));
#if QT_CONFIG(shortcut)
        displayTransitions->setShortcut(QCoreApplication::translate("MainWindow", "F4", nullptr));
#endif // QT_CONFIG(shortcut)
        displayBackpointers->setText(QCoreApplication::translate("MainWindow", "Display Back&pointers", nullptr));
#if QT_CONFIG(shortcut)
        displayBackpointers->setShortcut(QCoreApplication::translate("MainWindow", "F5", nullptr));
#endif // QT_CONFIG(shortcut)
        displayWireframe->setText(QCoreApplication::translate("MainWindow", "Display &Wireframe", nullptr));
#if QT_CONFIG(shortcut)
        displayWireframe->setShortcut(QCoreApplication::translate("MainWindow", "F6", nullptr));
#endif // QT_CONFIG(shortcut)
        preferences->setText(QCoreApplication::translate("MainWindow", "&Preferences...", nullptr));
        menu_File->setTitle(QCoreApplication::translate("MainWindow", "&File", nullptr));
        menuExport->setTitle(QCoreApplication::translate("MainWindow", "Export", nullptr));
        viewMenu->setTitle(QCoreApplication::translate("MainWindow", "&View", nullptr));
        informationDock->setWindowTitle(QCoreApplication::translate("MainWindow", "Information", nullptr));
        simulationDock->setWindowTitle(QCoreApplication::translate("MainWindow", "Simulation", nullptr));
        markDock->setWindowTitle(QCoreApplication::translate("MainWindow", "Marks", nullptr));
        settingsDock->setWindowTitle(QCoreApplication::translate("MainWindow", "Settings", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
