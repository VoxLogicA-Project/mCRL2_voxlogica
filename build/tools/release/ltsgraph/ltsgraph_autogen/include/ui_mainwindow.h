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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "mcrl2/gui/logwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actExit;
    QAction *actLayoutControl;
    QAction *actOpenFile;
    QAction *act3D;
    QAction *actLayout;
    QAction *actReset;
    QAction *actExportImage;
    QAction *actImport_XML;
    QAction *actExport_XML;
    QAction *actVisualization;
    QAction *actInformation;
    QAction *actOutput;
    QAction *actFullscreen;
    QAction *actExplorationMode;
    QAction *actionAdvancedSpringlayout;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *widgetLayout;
    QMenuBar *mnuMain;
    QMenu *mnuFile;
    QMenu *menu_View;
    QMenu *menu_Tools;
    QStatusBar *statusBar;
    QDockWidget *dockOutput;
    mcrl2::gui::qt::LogWidget *dockWidgetOutput;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(738, 519);
        MainWindow->setMinimumSize(QSize(300, 0));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/ltsgraph/icons/ltsgraph.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actExit = new QAction(MainWindow);
        actExit->setObjectName(QString::fromUtf8("actExit"));
        actLayoutControl = new QAction(MainWindow);
        actLayoutControl->setObjectName(QString::fromUtf8("actLayoutControl"));
        actLayoutControl->setCheckable(true);
        actOpenFile = new QAction(MainWindow);
        actOpenFile->setObjectName(QString::fromUtf8("actOpenFile"));
        act3D = new QAction(MainWindow);
        act3D->setObjectName(QString::fromUtf8("act3D"));
        act3D->setCheckable(true);
        actLayout = new QAction(MainWindow);
        actLayout->setObjectName(QString::fromUtf8("actLayout"));
        actLayout->setCheckable(true);
        actReset = new QAction(MainWindow);
        actReset->setObjectName(QString::fromUtf8("actReset"));
        actExportImage = new QAction(MainWindow);
        actExportImage->setObjectName(QString::fromUtf8("actExportImage"));
        actImport_XML = new QAction(MainWindow);
        actImport_XML->setObjectName(QString::fromUtf8("actImport_XML"));
        actExport_XML = new QAction(MainWindow);
        actExport_XML->setObjectName(QString::fromUtf8("actExport_XML"));
        actVisualization = new QAction(MainWindow);
        actVisualization->setObjectName(QString::fromUtf8("actVisualization"));
        actVisualization->setCheckable(true);
        actInformation = new QAction(MainWindow);
        actInformation->setObjectName(QString::fromUtf8("actInformation"));
        actInformation->setCheckable(true);
        actOutput = new QAction(MainWindow);
        actOutput->setObjectName(QString::fromUtf8("actOutput"));
        actOutput->setCheckable(true);
        actFullscreen = new QAction(MainWindow);
        actFullscreen->setObjectName(QString::fromUtf8("actFullscreen"));
        actExplorationMode = new QAction(MainWindow);
        actExplorationMode->setObjectName(QString::fromUtf8("actExplorationMode"));
        actExplorationMode->setCheckable(true);
        actionAdvancedSpringlayout = new QAction(MainWindow);
        actionAdvancedSpringlayout->setObjectName(QString::fromUtf8("actionAdvancedSpringlayout"));
        actionAdvancedSpringlayout->setCheckable(true);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::Panel);
        frame->setFrameShadow(QFrame::Sunken);
        frame->setLineWidth(1);
        frame->setMidLineWidth(0);
        horizontalLayout_2 = new QHBoxLayout(frame);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        widgetLayout = new QHBoxLayout();
        widgetLayout->setSpacing(0);
        widgetLayout->setObjectName(QString::fromUtf8("widgetLayout"));

        horizontalLayout_2->addLayout(widgetLayout);


        horizontalLayout->addWidget(frame);

        MainWindow->setCentralWidget(centralWidget);
        mnuMain = new QMenuBar(MainWindow);
        mnuMain->setObjectName(QString::fromUtf8("mnuMain"));
        mnuMain->setGeometry(QRect(0, 0, 738, 21));
        mnuFile = new QMenu(mnuMain);
        mnuFile->setObjectName(QString::fromUtf8("mnuFile"));
        menu_View = new QMenu(mnuMain);
        menu_View->setObjectName(QString::fromUtf8("menu_View"));
        menu_Tools = new QMenu(mnuMain);
        menu_Tools->setObjectName(QString::fromUtf8("menu_Tools"));
        MainWindow->setMenuBar(mnuMain);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        dockOutput = new QDockWidget(MainWindow);
        dockOutput->setObjectName(QString::fromUtf8("dockOutput"));
        dockOutput->setMinimumSize(QSize(200, 100));
        dockOutput->setFeatures(QDockWidget::DockWidgetFloatable|QDockWidget::DockWidgetMovable);
        dockWidgetOutput = new mcrl2::gui::qt::LogWidget();
        dockWidgetOutput->setObjectName(QString::fromUtf8("dockWidgetOutput"));
        dockOutput->setWidget(dockWidgetOutput);
        MainWindow->addDockWidget(Qt::BottomDockWidgetArea, dockOutput);

        mnuMain->addAction(mnuFile->menuAction());
        mnuMain->addAction(menu_View->menuAction());
        mnuMain->addAction(menu_Tools->menuAction());
        mnuFile->addAction(actOpenFile);
        mnuFile->addAction(actExportImage);
        mnuFile->addSeparator();
        mnuFile->addAction(actImport_XML);
        mnuFile->addAction(actExport_XML);
        mnuFile->addAction(actExit);
        menu_View->addAction(act3D);
        menu_View->addSeparator();
        menu_View->addAction(actLayoutControl);
        menu_View->addAction(actVisualization);
        menu_View->addAction(actInformation);
        menu_View->addAction(actOutput);
        menu_View->addSeparator();
        menu_View->addAction(actFullscreen);
        menu_View->addAction(actReset);
        menu_Tools->addAction(actExplorationMode);
        menu_Tools->addAction(actLayout);
        menu_Tools->addAction(actionAdvancedSpringlayout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "LTSGraph", nullptr));
        actExit->setText(QCoreApplication::translate("MainWindow", "E&xit", nullptr));
#if QT_CONFIG(shortcut)
        actExit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actLayoutControl->setText(QCoreApplication::translate("MainWindow", "&Layout control", nullptr));
#if QT_CONFIG(shortcut)
        actLayoutControl->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+L", nullptr));
#endif // QT_CONFIG(shortcut)
        actOpenFile->setText(QCoreApplication::translate("MainWindow", "&Open", nullptr));
#if QT_CONFIG(shortcut)
        actOpenFile->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        act3D->setText(QCoreApplication::translate("MainWindow", "&3D", nullptr));
#if QT_CONFIG(shortcut)
        act3D->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actLayout->setText(QCoreApplication::translate("MainWindow", "Automatic layout", nullptr));
#if QT_CONFIG(shortcut)
        actLayout->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+T", nullptr));
#endif // QT_CONFIG(shortcut)
        actReset->setText(QCoreApplication::translate("MainWindow", "Reset viewpoint", nullptr));
#if QT_CONFIG(shortcut)
        actReset->setShortcut(QCoreApplication::translate("MainWindow", "Esc", nullptr));
#endif // QT_CONFIG(shortcut)
        actExportImage->setText(QCoreApplication::translate("MainWindow", "&Export image...", nullptr));
#if QT_CONFIG(shortcut)
        actExportImage->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actImport_XML->setText(QCoreApplication::translate("MainWindow", "Import XML", nullptr));
        actExport_XML->setText(QCoreApplication::translate("MainWindow", "Export XML", nullptr));
        actVisualization->setText(QCoreApplication::translate("MainWindow", "Visualization", nullptr));
        actInformation->setText(QCoreApplication::translate("MainWindow", "Information", nullptr));
        actOutput->setText(QCoreApplication::translate("MainWindow", "mCRL2 Output", nullptr));
        actFullscreen->setText(QCoreApplication::translate("MainWindow", "Toggle Full Screen", nullptr));
        actExplorationMode->setText(QCoreApplication::translate("MainWindow", "&Exploration mode", nullptr));
#if QT_CONFIG(shortcut)
        actExplorationMode->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+E", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAdvancedSpringlayout->setText(QCoreApplication::translate("MainWindow", "Advanced Springlayout", nullptr));
        mnuFile->setTitle(QCoreApplication::translate("MainWindow", "&File", nullptr));
        menu_View->setTitle(QCoreApplication::translate("MainWindow", "&View", nullptr));
        menu_Tools->setTitle(QCoreApplication::translate("MainWindow", "&Tools", nullptr));
        dockOutput->setWindowTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
