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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "documentmanager.h"
#include "mcrl2/gui/logwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionNew;
    QAction *actionSave;
    QAction *actionSave_As;
    QAction *actionExit;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionDelete;
    QAction *actionSelect_All;
    QAction *actionReset_perspective;
    QAction *actionFind;
    QAction *actionWrap_mode;
    QAction *actionRewrite;
    QAction *actionSolve;
    QAction *actionParse;
    QAction *actionRewriter;
    QAction *actionSolver;
    QAction *actionOutput;
    QAction *actionZoom_in;
    QAction *actionZoom_out;
    QAction *actionReset_zoom;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    DocumentManager *documentManager;
    QMenuBar *mnuMain;
    QMenu *mnuFile;
    QMenu *menu_Tools;
    QMenu *menuView;
    QMenu *menuActions;
    QStatusBar *statusBar;
    QDockWidget *dockRewriter;
    QWidget *dockWidgetRewriter;
    QVBoxLayout *verticalLayout;
    QLineEdit *editRewriteExpr;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *buttonRewrite;
    QPushButton *buttonRewriteAbort;
    QPlainTextEdit *editRewriteOutput;
    QDockWidget *dockSolver;
    QWidget *dockWidgetSolver;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *editSolveExpr;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *buttonSolve;
    QPushButton *buttonSolveAbort;
    QPlainTextEdit *editSolveOutput;
    QDockWidget *dockOutput;
    mcrl2::gui::qt::LogWidget *dockWidgetOutput;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 700);
        MainWindow->setMinimumSize(QSize(800, 700));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/mcrl2xi/icons/mcrl2xi.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon1(QIcon::fromTheme(QString::fromUtf8(":/document-open")));
        actionOpen->setIcon(icon1);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon2(QIcon::fromTheme(QString::fromUtf8(":/document-new")));
        actionNew->setIcon(icon2);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon3(QIcon::fromTheme(QString::fromUtf8(":/document-save")));
        actionSave->setIcon(icon3);
        actionSave_As = new QAction(MainWindow);
        actionSave_As->setObjectName(QString::fromUtf8("actionSave_As"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        actionDelete = new QAction(MainWindow);
        actionDelete->setObjectName(QString::fromUtf8("actionDelete"));
        actionSelect_All = new QAction(MainWindow);
        actionSelect_All->setObjectName(QString::fromUtf8("actionSelect_All"));
        actionReset_perspective = new QAction(MainWindow);
        actionReset_perspective->setObjectName(QString::fromUtf8("actionReset_perspective"));
        actionFind = new QAction(MainWindow);
        actionFind->setObjectName(QString::fromUtf8("actionFind"));
        actionWrap_mode = new QAction(MainWindow);
        actionWrap_mode->setObjectName(QString::fromUtf8("actionWrap_mode"));
        actionWrap_mode->setCheckable(true);
        actionRewrite = new QAction(MainWindow);
        actionRewrite->setObjectName(QString::fromUtf8("actionRewrite"));
        actionSolve = new QAction(MainWindow);
        actionSolve->setObjectName(QString::fromUtf8("actionSolve"));
        actionParse = new QAction(MainWindow);
        actionParse->setObjectName(QString::fromUtf8("actionParse"));
        actionRewriter = new QAction(MainWindow);
        actionRewriter->setObjectName(QString::fromUtf8("actionRewriter"));
        actionRewriter->setCheckable(true);
        actionSolver = new QAction(MainWindow);
        actionSolver->setObjectName(QString::fromUtf8("actionSolver"));
        actionSolver->setCheckable(true);
        actionOutput = new QAction(MainWindow);
        actionOutput->setObjectName(QString::fromUtf8("actionOutput"));
        actionOutput->setCheckable(true);
        actionZoom_in = new QAction(MainWindow);
        actionZoom_in->setObjectName(QString::fromUtf8("actionZoom_in"));
        actionZoom_out = new QAction(MainWindow);
        actionZoom_out->setObjectName(QString::fromUtf8("actionZoom_out"));
        actionReset_zoom = new QAction(MainWindow);
        actionReset_zoom->setObjectName(QString::fromUtf8("actionReset_zoom"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        documentManager = new DocumentManager(centralWidget);
        documentManager->setObjectName(QString::fromUtf8("documentManager"));

        horizontalLayout->addWidget(documentManager);

        MainWindow->setCentralWidget(centralWidget);
        mnuMain = new QMenuBar(MainWindow);
        mnuMain->setObjectName(QString::fromUtf8("mnuMain"));
        mnuMain->setGeometry(QRect(0, 0, 800, 22));
        mnuFile = new QMenu(mnuMain);
        mnuFile->setObjectName(QString::fromUtf8("mnuFile"));
        menu_Tools = new QMenu(mnuMain);
        menu_Tools->setObjectName(QString::fromUtf8("menu_Tools"));
        menuView = new QMenu(mnuMain);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuActions = new QMenu(mnuMain);
        menuActions->setObjectName(QString::fromUtf8("menuActions"));
        MainWindow->setMenuBar(mnuMain);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        dockRewriter = new QDockWidget(MainWindow);
        dockRewriter->setObjectName(QString::fromUtf8("dockRewriter"));
        dockRewriter->setMinimumSize(QSize(252, 236));
        dockRewriter->setFeatures(QDockWidget::DockWidgetFloatable|QDockWidget::DockWidgetMovable);
        dockWidgetRewriter = new QWidget();
        dockWidgetRewriter->setObjectName(QString::fromUtf8("dockWidgetRewriter"));
        verticalLayout = new QVBoxLayout(dockWidgetRewriter);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        editRewriteExpr = new QLineEdit(dockWidgetRewriter);
        editRewriteExpr->setObjectName(QString::fromUtf8("editRewriteExpr"));

        verticalLayout->addWidget(editRewriteExpr);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setSizeConstraint(QLayout::SetMinimumSize);
        buttonRewrite = new QPushButton(dockWidgetRewriter);
        buttonRewrite->setObjectName(QString::fromUtf8("buttonRewrite"));

        horizontalLayout_3->addWidget(buttonRewrite);

        buttonRewriteAbort = new QPushButton(dockWidgetRewriter);
        buttonRewriteAbort->setObjectName(QString::fromUtf8("buttonRewriteAbort"));
        buttonRewriteAbort->setEnabled(false);

        horizontalLayout_3->addWidget(buttonRewriteAbort);


        verticalLayout->addLayout(horizontalLayout_3);

        editRewriteOutput = new QPlainTextEdit(dockWidgetRewriter);
        editRewriteOutput->setObjectName(QString::fromUtf8("editRewriteOutput"));
        editRewriteOutput->setLineWrapMode(QPlainTextEdit::NoWrap);
        editRewriteOutput->setReadOnly(true);

        verticalLayout->addWidget(editRewriteOutput);

        dockRewriter->setWidget(dockWidgetRewriter);
        MainWindow->addDockWidget(Qt::RightDockWidgetArea, dockRewriter);
        dockSolver = new QDockWidget(MainWindow);
        dockSolver->setObjectName(QString::fromUtf8("dockSolver"));
        dockSolver->setMinimumSize(QSize(200, 206));
        dockSolver->setFeatures(QDockWidget::DockWidgetFloatable|QDockWidget::DockWidgetMovable);
        dockWidgetSolver = new QWidget();
        dockWidgetSolver->setObjectName(QString::fromUtf8("dockWidgetSolver"));
        verticalLayout_4 = new QVBoxLayout(dockWidgetSolver);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        editSolveExpr = new QLineEdit(dockWidgetSolver);
        editSolveExpr->setObjectName(QString::fromUtf8("editSolveExpr"));

        verticalLayout_4->addWidget(editSolveExpr);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        buttonSolve = new QPushButton(dockWidgetSolver);
        buttonSolve->setObjectName(QString::fromUtf8("buttonSolve"));

        horizontalLayout_2->addWidget(buttonSolve);

        buttonSolveAbort = new QPushButton(dockWidgetSolver);
        buttonSolveAbort->setObjectName(QString::fromUtf8("buttonSolveAbort"));
        buttonSolveAbort->setEnabled(false);

        horizontalLayout_2->addWidget(buttonSolveAbort);


        verticalLayout_4->addLayout(horizontalLayout_2);

        editSolveOutput = new QPlainTextEdit(dockWidgetSolver);
        editSolveOutput->setObjectName(QString::fromUtf8("editSolveOutput"));
        editSolveOutput->setAutoFillBackground(false);
        editSolveOutput->setUndoRedoEnabled(false);
        editSolveOutput->setLineWrapMode(QPlainTextEdit::NoWrap);
        editSolveOutput->setReadOnly(true);
        editSolveOutput->setBackgroundVisible(false);

        verticalLayout_4->addWidget(editSolveOutput);

        dockSolver->setWidget(dockWidgetSolver);
        MainWindow->addDockWidget(Qt::RightDockWidgetArea, dockSolver);
        dockOutput = new QDockWidget(MainWindow);
        dockOutput->setObjectName(QString::fromUtf8("dockOutput"));
        dockOutput->setMinimumSize(QSize(200, 100));
        dockOutput->setFeatures(QDockWidget::DockWidgetFloatable|QDockWidget::DockWidgetMovable);
        dockWidgetOutput = new mcrl2::gui::qt::LogWidget();
        dockWidgetOutput->setObjectName(QString::fromUtf8("dockWidgetOutput"));
        dockOutput->setWidget(dockWidgetOutput);
        MainWindow->addDockWidget(Qt::BottomDockWidgetArea, dockOutput);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setMovable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        MainWindow->addAction(actionSave_As);
        MainWindow->addAction(actionRedo);
        MainWindow->addAction(actionFind);
        MainWindow->addAction(actionZoom_in);
        MainWindow->addAction(actionZoom_out);
        MainWindow->addAction(actionReset_zoom);
        MainWindow->addAction(actionWrap_mode);
        MainWindow->addAction(actionParse);
        MainWindow->addAction(actionRewrite);
        MainWindow->addAction(actionSolve);
        mnuMain->addAction(mnuFile->menuAction());
        mnuMain->addAction(menu_Tools->menuAction());
        mnuMain->addAction(menuView->menuAction());
        mnuMain->addAction(menuActions->menuAction());
        mnuFile->addAction(actionNew);
        mnuFile->addAction(actionOpen);
        mnuFile->addAction(actionSave);
        mnuFile->addAction(actionSave_As);
        mnuFile->addSeparator();
        mnuFile->addAction(actionExit);
        menu_Tools->addAction(actionUndo);
        menu_Tools->addAction(actionRedo);
        menu_Tools->addSeparator();
        menu_Tools->addAction(actionCut);
        menu_Tools->addAction(actionCopy);
        menu_Tools->addAction(actionPaste);
        menu_Tools->addAction(actionDelete);
        menu_Tools->addSeparator();
        menu_Tools->addAction(actionSelect_All);
        menu_Tools->addSeparator();
        menu_Tools->addAction(actionFind);
        menu_Tools->addAction(actionZoom_in);
        menu_Tools->addAction(actionZoom_out);
        menu_Tools->addAction(actionReset_zoom);
        menuView->addAction(actionWrap_mode);
        menuView->addAction(actionReset_perspective);
        menuView->addSeparator();
        menuView->addAction(actionRewriter);
        menuView->addAction(actionSolver);
        menuView->addAction(actionOutput);
        menuActions->addAction(actionParse);
        menuActions->addAction(actionRewrite);
        menuActions->addAction(actionSolve);
        toolBar->addAction(actionNew);
        toolBar->addAction(actionOpen);
        toolBar->addAction(actionSave);
        toolBar->addSeparator();
        toolBar->addAction(actionParse);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "mCRL2xi", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWindow", "&Open", nullptr));
#if QT_CONFIG(tooltip)
        actionOpen->setToolTip(QCoreApplication::translate("MainWindow", "Open File", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionNew->setText(QCoreApplication::translate("MainWindow", "&New", nullptr));
#if QT_CONFIG(tooltip)
        actionNew->setToolTip(QCoreApplication::translate("MainWindow", "New File", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionNew->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave->setText(QCoreApplication::translate("MainWindow", "&Save", nullptr));
#if QT_CONFIG(tooltip)
        actionSave->setToolTip(QCoreApplication::translate("MainWindow", "Save File", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave_As->setText(QCoreApplication::translate("MainWindow", "Save As", nullptr));
#if QT_CONFIG(tooltip)
        actionSave_As->setToolTip(QCoreApplication::translate("MainWindow", "Save File As", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionSave_As->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExit->setText(QCoreApplication::translate("MainWindow", "E&xit", nullptr));
#if QT_CONFIG(shortcut)
        actionExit->setShortcut(QCoreApplication::translate("MainWindow", "Alt+F4", nullptr));
#endif // QT_CONFIG(shortcut)
        actionUndo->setText(QCoreApplication::translate("MainWindow", "&Undo", nullptr));
#if QT_CONFIG(shortcut)
        actionUndo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRedo->setText(QCoreApplication::translate("MainWindow", "&Redo", nullptr));
#if QT_CONFIG(shortcut)
        actionRedo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Y", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCut->setText(QCoreApplication::translate("MainWindow", "Cu&t", nullptr));
#if QT_CONFIG(shortcut)
        actionCut->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCopy->setText(QCoreApplication::translate("MainWindow", "&Copy", nullptr));
#if QT_CONFIG(shortcut)
        actionCopy->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPaste->setText(QCoreApplication::translate("MainWindow", "&Paste", nullptr));
#if QT_CONFIG(shortcut)
        actionPaste->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDelete->setText(QCoreApplication::translate("MainWindow", "&Delete", nullptr));
#if QT_CONFIG(shortcut)
        actionDelete->setShortcut(QCoreApplication::translate("MainWindow", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSelect_All->setText(QCoreApplication::translate("MainWindow", "Select All", nullptr));
#if QT_CONFIG(shortcut)
        actionSelect_All->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+A", nullptr));
#endif // QT_CONFIG(shortcut)
        actionReset_perspective->setText(QCoreApplication::translate("MainWindow", "Revert to default layout", nullptr));
        actionFind->setText(QCoreApplication::translate("MainWindow", "Find", nullptr));
#if QT_CONFIG(shortcut)
        actionFind->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+F", nullptr));
#endif // QT_CONFIG(shortcut)
        actionWrap_mode->setText(QCoreApplication::translate("MainWindow", "Enable wrapping", nullptr));
#if QT_CONFIG(shortcut)
        actionWrap_mode->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+U", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRewrite->setText(QCoreApplication::translate("MainWindow", "Rewrite", nullptr));
#if QT_CONFIG(shortcut)
        actionRewrite->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+R", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSolve->setText(QCoreApplication::translate("MainWindow", "Solve", nullptr));
#if QT_CONFIG(shortcut)
        actionSolve->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+T", nullptr));
#endif // QT_CONFIG(shortcut)
        actionParse->setText(QCoreApplication::translate("MainWindow", "Parse", nullptr));
#if QT_CONFIG(shortcut)
        actionParse->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+E", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRewriter->setText(QCoreApplication::translate("MainWindow", "Rewriter", nullptr));
        actionSolver->setText(QCoreApplication::translate("MainWindow", "Solver", nullptr));
        actionOutput->setText(QCoreApplication::translate("MainWindow", "mCRL2 Output", nullptr));
        actionZoom_in->setText(QCoreApplication::translate("MainWindow", "Zoom in", nullptr));
#if QT_CONFIG(shortcut)
        actionZoom_in->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+=", nullptr));
#endif // QT_CONFIG(shortcut)
        actionZoom_out->setText(QCoreApplication::translate("MainWindow", "Zoom out", nullptr));
#if QT_CONFIG(shortcut)
        actionZoom_out->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+-", nullptr));
#endif // QT_CONFIG(shortcut)
        actionReset_zoom->setText(QCoreApplication::translate("MainWindow", "Reset zoom", nullptr));
#if QT_CONFIG(shortcut)
        actionReset_zoom->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+0", nullptr));
#endif // QT_CONFIG(shortcut)
        mnuFile->setTitle(QCoreApplication::translate("MainWindow", "&File", nullptr));
        menu_Tools->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        menuView->setTitle(QCoreApplication::translate("MainWindow", "View", nullptr));
        menuActions->setTitle(QCoreApplication::translate("MainWindow", "Actions", nullptr));
        dockRewriter->setWindowTitle(QCoreApplication::translate("MainWindow", "Rewrite Data expression:", nullptr));
        buttonRewrite->setText(QCoreApplication::translate("MainWindow", "Rewrite", nullptr));
        buttonRewriteAbort->setText(QCoreApplication::translate("MainWindow", "Cancel", nullptr));
        dockSolver->setWindowTitle(QCoreApplication::translate("MainWindow", "Solve Data expression:", nullptr));
        buttonSolve->setText(QCoreApplication::translate("MainWindow", "Solve", nullptr));
        buttonSolveAbort->setText(QCoreApplication::translate("MainWindow", "Cancel", nullptr));
        dockOutput->setWindowTitle(QCoreApplication::translate("MainWindow", "Output", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
