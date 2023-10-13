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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "filebrowser.h"
#include "mcrl2/gui/extendedtabwidget.h"
#include "mcrl2/gui/logwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QAction *actionReset_perspective;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    mcrl2::gui::qt::ExtendedTabWidget *tabInstances;
    QMenuBar *mnuMain;
    QStatusBar *statusBar;
    QDockWidget *dockOutput;
    mcrl2::gui::qt::LogWidget *dockWidgetOutput;
    QDockWidget *dockFiles;
    QWidget *dockWidgetFiles;
    QVBoxLayout *verticalLayout;
    FileBrowser *treeFiles;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 700);
        MainWindow->setMinimumSize(QSize(800, 700));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/mcrl2-gui/icons/mcrl2-gui.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionReset_perspective = new QAction(MainWindow);
        actionReset_perspective->setObjectName(QString::fromUtf8("actionReset_perspective"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tabInstances = new mcrl2::gui::qt::ExtendedTabWidget(centralWidget);
        tabInstances->setObjectName(QString::fromUtf8("tabInstances"));
        tabInstances->setTabsClosable(true);

        verticalLayout_2->addWidget(tabInstances);

        MainWindow->setCentralWidget(centralWidget);
        mnuMain = new QMenuBar(MainWindow);
        mnuMain->setObjectName(QString::fromUtf8("mnuMain"));
        mnuMain->setGeometry(QRect(0, 0, 800, 21));
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
        dockFiles = new QDockWidget(MainWindow);
        dockFiles->setObjectName(QString::fromUtf8("dockFiles"));
        dockFiles->setMinimumSize(QSize(300, 200));
        dockWidgetFiles = new QWidget();
        dockWidgetFiles->setObjectName(QString::fromUtf8("dockWidgetFiles"));
        verticalLayout = new QVBoxLayout(dockWidgetFiles);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        treeFiles = new FileBrowser(dockWidgetFiles);
        treeFiles->setObjectName(QString::fromUtf8("treeFiles"));
        treeFiles->setMinimumSize(QSize(300, 0));
        treeFiles->setEditTriggers(QAbstractItemView::EditKeyPressed|QAbstractItemView::SelectedClicked);
        treeFiles->setDragDropMode(QAbstractItemView::DragOnly);
        treeFiles->setSelectionMode(QAbstractItemView::ExtendedSelection);
        treeFiles->setIndentation(15);
        treeFiles->setHeaderHidden(false);
        treeFiles->header()->setProperty("showSortIndicator", QVariant(true));

        verticalLayout->addWidget(treeFiles);

        dockFiles->setWidget(dockWidgetFiles);
        MainWindow->addDockWidget(Qt::LeftDockWidgetArea, dockFiles);

        retranslateUi(MainWindow);

        tabInstances->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "mCRL2-gui", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        actionReset_perspective->setText(QCoreApplication::translate("MainWindow", "Revert to default layout", nullptr));
        dockFiles->setWindowTitle(QCoreApplication::translate("MainWindow", "File Browser", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
