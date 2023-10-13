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
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "movabletablewidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSaveAs;
    QAction *actionOpenAttributes;
    QAction *actionSaveAttributes;
    QAction *actionOpenDiagram;
    QAction *actionSaveDiagram;
    QAction *actionQuit;
    QAction *actionSimulationMode;
    QAction *actionEditMode;
    QAction *actionClusterNodes;
    QAction *actionDistributionPlot;
    QAction *actionCorrelationPlot;
    QAction *actionCombinationPlot;
    QAction *actionDuplicate;
    QAction *actionRenameAttribute;
    QAction *actionDelete;
    QAction *actionGroup;
    QAction *actionUngroup;
    QAction *actionRenameValue;
    QAction *actionSettingsGeneral;
    QAction *actionSettingsArcDiagram;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QSplitter *splitter_2;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QLabel *numberOfStates;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *numberOfTransitions;
    QLabel *label_5;
    MovableTableWidget *attributes;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_6;
    MovableTableWidget *domain;
    QWidget *examinerWidget;
    QVBoxLayout *verticalLayout_4;
    QStackedWidget *mainViewStack;
    QWidget *analysisPage;
    QHBoxLayout *horizontalLayout_2;
    QSplitter *splitter_3;
    QWidget *arcDiagramWidget;
    QVBoxLayout *verticalLayout_5;
    QStackedWidget *analysisStack;
    QWidget *simulatorWidget;
    QVBoxLayout *verticalLayout_6;
    QWidget *editPage;
    QHBoxLayout *horizontalLayout_3;
    QWidget *diagramEditorWidget;
    QVBoxLayout *verticalLayout_8;
    QFrame *editTools;
    QVBoxLayout *verticalLayout_3;
    QToolButton *selectTool;
    QToolButton *configureTool;
    QFrame *line;
    QToolButton *noteTool;
    QToolButton *rectangleTool;
    QToolButton *ellipseTool;
    QToolButton *lineTool;
    QToolButton *arrowTool;
    QToolButton *doubleArrowTool;
    QFrame *line_2;
    QToolButton *colorTool;
    QToolButton *lineColorTool;
    QFrame *line_3;
    QToolButton *showGridButton;
    QToolButton *snapToGridButton;
    QSpacerItem *verticalSpacer;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuMode;
    QMenu *menuAttributes;
    QMenu *menuDomain;
    QMenu *menuSettings;
    QButtonGroup *toolButtonGroup;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(873, 708);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionSave->setEnabled(false);
        actionSaveAs = new QAction(MainWindow);
        actionSaveAs->setObjectName(QString::fromUtf8("actionSaveAs"));
        actionSaveAs->setEnabled(false);
        actionOpenAttributes = new QAction(MainWindow);
        actionOpenAttributes->setObjectName(QString::fromUtf8("actionOpenAttributes"));
        actionOpenAttributes->setEnabled(false);
        actionSaveAttributes = new QAction(MainWindow);
        actionSaveAttributes->setObjectName(QString::fromUtf8("actionSaveAttributes"));
        actionSaveAttributes->setEnabled(false);
        actionOpenDiagram = new QAction(MainWindow);
        actionOpenDiagram->setObjectName(QString::fromUtf8("actionOpenDiagram"));
        actionOpenDiagram->setEnabled(false);
        actionSaveDiagram = new QAction(MainWindow);
        actionSaveDiagram->setObjectName(QString::fromUtf8("actionSaveDiagram"));
        actionSaveDiagram->setEnabled(false);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionSimulationMode = new QAction(MainWindow);
        actionSimulationMode->setObjectName(QString::fromUtf8("actionSimulationMode"));
        actionSimulationMode->setCheckable(true);
        actionSimulationMode->setChecked(true);
        actionEditMode = new QAction(MainWindow);
        actionEditMode->setObjectName(QString::fromUtf8("actionEditMode"));
        actionEditMode->setCheckable(true);
        actionClusterNodes = new QAction(MainWindow);
        actionClusterNodes->setObjectName(QString::fromUtf8("actionClusterNodes"));
        actionDistributionPlot = new QAction(MainWindow);
        actionDistributionPlot->setObjectName(QString::fromUtf8("actionDistributionPlot"));
        actionCorrelationPlot = new QAction(MainWindow);
        actionCorrelationPlot->setObjectName(QString::fromUtf8("actionCorrelationPlot"));
        actionCombinationPlot = new QAction(MainWindow);
        actionCombinationPlot->setObjectName(QString::fromUtf8("actionCombinationPlot"));
        actionDuplicate = new QAction(MainWindow);
        actionDuplicate->setObjectName(QString::fromUtf8("actionDuplicate"));
        actionRenameAttribute = new QAction(MainWindow);
        actionRenameAttribute->setObjectName(QString::fromUtf8("actionRenameAttribute"));
        actionDelete = new QAction(MainWindow);
        actionDelete->setObjectName(QString::fromUtf8("actionDelete"));
        actionGroup = new QAction(MainWindow);
        actionGroup->setObjectName(QString::fromUtf8("actionGroup"));
        actionUngroup = new QAction(MainWindow);
        actionUngroup->setObjectName(QString::fromUtf8("actionUngroup"));
        actionRenameValue = new QAction(MainWindow);
        actionRenameValue->setObjectName(QString::fromUtf8("actionRenameValue"));
        actionSettingsGeneral = new QAction(MainWindow);
        actionSettingsGeneral->setObjectName(QString::fromUtf8("actionSettingsGeneral"));
        actionSettingsArcDiagram = new QAction(MainWindow);
        actionSettingsArcDiagram->setObjectName(QString::fromUtf8("actionSettingsArcDiagram"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        splitter_2 = new QSplitter(centralwidget);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        splitter = new QSplitter(splitter_2);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy);
        splitter->setOrientation(Qt::Vertical);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(102, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        numberOfStates = new QLabel(groupBox);
        numberOfStates->setObjectName(QString::fromUtf8("numberOfStates"));

        gridLayout->addWidget(numberOfStates, 0, 2, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(102, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 1, 1, 1);

        numberOfTransitions = new QLabel(groupBox);
        numberOfTransitions->setObjectName(QString::fromUtf8("numberOfTransitions"));

        gridLayout->addWidget(numberOfTransitions, 1, 2, 1, 1);


        verticalLayout->addWidget(groupBox);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);

        attributes = new MovableTableWidget(layoutWidget);
        if (attributes->columnCount() < 4)
            attributes->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        attributes->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        attributes->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        attributes->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        attributes->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        attributes->setObjectName(QString::fromUtf8("attributes"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(attributes->sizePolicy().hasHeightForWidth());
        attributes->setSizePolicy(sizePolicy1);
        attributes->setMinimumSize(QSize(100, 100));
        attributes->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        attributes->horizontalHeader()->setStretchLastSection(true);
        attributes->verticalHeader()->setVisible(false);
        attributes->verticalHeader()->setDefaultSectionSize(19);

        verticalLayout->addWidget(attributes);

        splitter->addWidget(layoutWidget);
        layoutWidget_2 = new QWidget(splitter);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_2->addWidget(label_6);

        domain = new MovableTableWidget(layoutWidget_2);
        if (domain->columnCount() < 4)
            domain->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        domain->setHorizontalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        domain->setHorizontalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        domain->setHorizontalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        domain->setHorizontalHeaderItem(3, __qtablewidgetitem7);
        domain->setObjectName(QString::fromUtf8("domain"));
        sizePolicy1.setHeightForWidth(domain->sizePolicy().hasHeightForWidth());
        domain->setSizePolicy(sizePolicy1);
        domain->setMinimumSize(QSize(100, 100));
        domain->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        domain->horizontalHeader()->setStretchLastSection(true);
        domain->verticalHeader()->setVisible(false);
        domain->verticalHeader()->setDefaultSectionSize(19);

        verticalLayout_2->addWidget(domain);

        splitter->addWidget(layoutWidget_2);
        examinerWidget = new QWidget(splitter);
        examinerWidget->setObjectName(QString::fromUtf8("examinerWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(examinerWidget->sizePolicy().hasHeightForWidth());
        examinerWidget->setSizePolicy(sizePolicy2);
        examinerWidget->setMinimumSize(QSize(100, 100));
        verticalLayout_4 = new QVBoxLayout(examinerWidget);
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        splitter->addWidget(examinerWidget);
        splitter_2->addWidget(splitter);
        mainViewStack = new QStackedWidget(splitter_2);
        mainViewStack->setObjectName(QString::fromUtf8("mainViewStack"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mainViewStack->sizePolicy().hasHeightForWidth());
        mainViewStack->setSizePolicy(sizePolicy3);
        analysisPage = new QWidget();
        analysisPage->setObjectName(QString::fromUtf8("analysisPage"));
        horizontalLayout_2 = new QHBoxLayout(analysisPage);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        splitter_3 = new QSplitter(analysisPage);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setOrientation(Qt::Vertical);
        arcDiagramWidget = new QWidget(splitter_3);
        arcDiagramWidget->setObjectName(QString::fromUtf8("arcDiagramWidget"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(arcDiagramWidget->sizePolicy().hasHeightForWidth());
        arcDiagramWidget->setSizePolicy(sizePolicy4);
        arcDiagramWidget->setMinimumSize(QSize(100, 100));
        verticalLayout_5 = new QVBoxLayout(arcDiagramWidget);
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        splitter_3->addWidget(arcDiagramWidget);
        analysisStack = new QStackedWidget(splitter_3);
        analysisStack->setObjectName(QString::fromUtf8("analysisStack"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(analysisStack->sizePolicy().hasHeightForWidth());
        analysisStack->setSizePolicy(sizePolicy5);
        analysisStack->setMinimumSize(QSize(100, 100));
        simulatorWidget = new QWidget();
        simulatorWidget->setObjectName(QString::fromUtf8("simulatorWidget"));
        sizePolicy4.setHeightForWidth(simulatorWidget->sizePolicy().hasHeightForWidth());
        simulatorWidget->setSizePolicy(sizePolicy4);
        verticalLayout_6 = new QVBoxLayout(simulatorWidget);
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        analysisStack->addWidget(simulatorWidget);
        splitter_3->addWidget(analysisStack);

        horizontalLayout_2->addWidget(splitter_3);

        mainViewStack->addWidget(analysisPage);
        editPage = new QWidget();
        editPage->setObjectName(QString::fromUtf8("editPage"));
        horizontalLayout_3 = new QHBoxLayout(editPage);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        diagramEditorWidget = new QWidget(editPage);
        diagramEditorWidget->setObjectName(QString::fromUtf8("diagramEditorWidget"));
        sizePolicy4.setHeightForWidth(diagramEditorWidget->sizePolicy().hasHeightForWidth());
        diagramEditorWidget->setSizePolicy(sizePolicy4);
        verticalLayout_8 = new QVBoxLayout(diagramEditorWidget);
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));

        horizontalLayout_3->addWidget(diagramEditorWidget);

        editTools = new QFrame(editPage);
        editTools->setObjectName(QString::fromUtf8("editTools"));
        verticalLayout_3 = new QVBoxLayout(editTools);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        selectTool = new QToolButton(editTools);
        toolButtonGroup = new QButtonGroup(MainWindow);
        toolButtonGroup->setObjectName(QString::fromUtf8("toolButtonGroup"));
        toolButtonGroup->addButton(selectTool);
        selectTool->setObjectName(QString::fromUtf8("selectTool"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/selecticon.png"), QSize(), QIcon::Normal, QIcon::Off);
        selectTool->setIcon(icon1);
        selectTool->setIconSize(QSize(20, 20));
        selectTool->setCheckable(true);
        selectTool->setChecked(true);

        verticalLayout_3->addWidget(selectTool);

        configureTool = new QToolButton(editTools);
        toolButtonGroup->addButton(configureTool);
        configureTool->setObjectName(QString::fromUtf8("configureTool"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/dof.png"), QSize(), QIcon::Normal, QIcon::Off);
        configureTool->setIcon(icon2);
        configureTool->setIconSize(QSize(20, 20));
        configureTool->setCheckable(true);

        verticalLayout_3->addWidget(configureTool);

        line = new QFrame(editTools);
        line->setObjectName(QString::fromUtf8("line"));
        line->setMaximumSize(QSize(27, 16777215));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line);

        noteTool = new QToolButton(editTools);
        toolButtonGroup->addButton(noteTool);
        noteTool->setObjectName(QString::fromUtf8("noteTool"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/note.png"), QSize(), QIcon::Normal, QIcon::Off);
        noteTool->setIcon(icon3);
        noteTool->setIconSize(QSize(20, 20));
        noteTool->setCheckable(true);

        verticalLayout_3->addWidget(noteTool);

        rectangleTool = new QToolButton(editTools);
        toolButtonGroup->addButton(rectangleTool);
        rectangleTool->setObjectName(QString::fromUtf8("rectangleTool"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/rectangle.png"), QSize(), QIcon::Normal, QIcon::Off);
        rectangleTool->setIcon(icon4);
        rectangleTool->setIconSize(QSize(20, 20));
        rectangleTool->setCheckable(true);

        verticalLayout_3->addWidget(rectangleTool);

        ellipseTool = new QToolButton(editTools);
        toolButtonGroup->addButton(ellipseTool);
        ellipseTool->setObjectName(QString::fromUtf8("ellipseTool"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/ellipse.png"), QSize(), QIcon::Normal, QIcon::Off);
        ellipseTool->setIcon(icon5);
        ellipseTool->setIconSize(QSize(20, 20));
        ellipseTool->setCheckable(true);

        verticalLayout_3->addWidget(ellipseTool);

        lineTool = new QToolButton(editTools);
        toolButtonGroup->addButton(lineTool);
        lineTool->setObjectName(QString::fromUtf8("lineTool"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/line.png"), QSize(), QIcon::Normal, QIcon::Off);
        lineTool->setIcon(icon6);
        lineTool->setIconSize(QSize(20, 20));
        lineTool->setCheckable(true);

        verticalLayout_3->addWidget(lineTool);

        arrowTool = new QToolButton(editTools);
        toolButtonGroup->addButton(arrowTool);
        arrowTool->setObjectName(QString::fromUtf8("arrowTool"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/arrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        arrowTool->setIcon(icon7);
        arrowTool->setIconSize(QSize(20, 20));
        arrowTool->setCheckable(true);

        verticalLayout_3->addWidget(arrowTool);

        doubleArrowTool = new QToolButton(editTools);
        toolButtonGroup->addButton(doubleArrowTool);
        doubleArrowTool->setObjectName(QString::fromUtf8("doubleArrowTool"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/darrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        doubleArrowTool->setIcon(icon8);
        doubleArrowTool->setIconSize(QSize(20, 20));
        doubleArrowTool->setCheckable(true);

        verticalLayout_3->addWidget(doubleArrowTool);

        line_2 = new QFrame(editTools);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setMaximumSize(QSize(27, 16777215));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_2);

        colorTool = new QToolButton(editTools);
        colorTool->setObjectName(QString::fromUtf8("colorTool"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/fillcol.png"), QSize(), QIcon::Normal, QIcon::Off);
        colorTool->setIcon(icon9);
        colorTool->setIconSize(QSize(20, 20));

        verticalLayout_3->addWidget(colorTool);

        lineColorTool = new QToolButton(editTools);
        lineColorTool->setObjectName(QString::fromUtf8("lineColorTool"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/linecol.png"), QSize(), QIcon::Normal, QIcon::Off);
        lineColorTool->setIcon(icon10);
        lineColorTool->setIconSize(QSize(20, 20));

        verticalLayout_3->addWidget(lineColorTool);

        line_3 = new QFrame(editTools);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setMaximumSize(QSize(27, 16777215));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_3);

        showGridButton = new QToolButton(editTools);
        showGridButton->setObjectName(QString::fromUtf8("showGridButton"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/showgrid.png"), QSize(), QIcon::Normal, QIcon::Off);
        showGridButton->setIcon(icon11);
        showGridButton->setIconSize(QSize(20, 20));
        showGridButton->setCheckable(true);
        showGridButton->setChecked(true);

        verticalLayout_3->addWidget(showGridButton);

        snapToGridButton = new QToolButton(editTools);
        snapToGridButton->setObjectName(QString::fromUtf8("snapToGridButton"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/images/snapgrid.png"), QSize(), QIcon::Normal, QIcon::Off);
        snapToGridButton->setIcon(icon12);
        snapToGridButton->setIconSize(QSize(20, 20));
        snapToGridButton->setCheckable(true);
        snapToGridButton->setChecked(true);

        verticalLayout_3->addWidget(snapToGridButton);

        verticalSpacer = new QSpacerItem(10, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        horizontalLayout_3->addWidget(editTools);

        mainViewStack->addWidget(editPage);
        splitter_2->addWidget(mainViewStack);

        horizontalLayout->addWidget(splitter_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 873, 27));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuMode = new QMenu(menubar);
        menuMode->setObjectName(QString::fromUtf8("menuMode"));
        menuAttributes = new QMenu(menubar);
        menuAttributes->setObjectName(QString::fromUtf8("menuAttributes"));
        menuDomain = new QMenu(menubar);
        menuDomain->setObjectName(QString::fromUtf8("menuDomain"));
        menuSettings = new QMenu(menubar);
        menuSettings->setObjectName(QString::fromUtf8("menuSettings"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuMode->menuAction());
        menubar->addAction(menuAttributes->menuAction());
        menubar->addAction(menuDomain->menuAction());
        menubar->addAction(menuSettings->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSaveAs);
        menuFile->addSeparator();
        menuFile->addAction(actionOpenAttributes);
        menuFile->addAction(actionSaveAttributes);
        menuFile->addSeparator();
        menuFile->addAction(actionOpenDiagram);
        menuFile->addAction(actionSaveDiagram);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);
        menuMode->addAction(actionSimulationMode);
        menuMode->addAction(actionEditMode);
        menuAttributes->addAction(actionClusterNodes);
        menuAttributes->addSeparator();
        menuAttributes->addAction(actionDistributionPlot);
        menuAttributes->addAction(actionCorrelationPlot);
        menuAttributes->addAction(actionCombinationPlot);
        menuAttributes->addSeparator();
        menuAttributes->addAction(actionDuplicate);
        menuAttributes->addAction(actionRenameAttribute);
        menuAttributes->addAction(actionDelete);
        menuDomain->addAction(actionGroup);
        menuDomain->addAction(actionUngroup);
        menuDomain->addAction(actionRenameValue);
        menuSettings->addAction(actionSettingsGeneral);
        menuSettings->addAction(actionSettingsArcDiagram);

        retranslateUi(MainWindow);

        mainViewStack->setCurrentIndex(0);
        analysisStack->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "DiaGraphica", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWindow", "&Open...", nullptr));
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSaveAs->setText(QCoreApplication::translate("MainWindow", "Save &As...", nullptr));
        actionOpenAttributes->setText(QCoreApplication::translate("MainWindow", "Open Attributes...", nullptr));
        actionSaveAttributes->setText(QCoreApplication::translate("MainWindow", "Save Attributes...", nullptr));
        actionOpenDiagram->setText(QCoreApplication::translate("MainWindow", "Open Diagram...", nullptr));
        actionSaveDiagram->setText(QCoreApplication::translate("MainWindow", "Save Diagram...", nullptr));
        actionQuit->setText(QCoreApplication::translate("MainWindow", "&Quit", nullptr));
        actionSimulationMode->setText(QCoreApplication::translate("MainWindow", "&Simulation Mode", nullptr));
        actionEditMode->setText(QCoreApplication::translate("MainWindow", "&Edit Mode", nullptr));
        actionClusterNodes->setText(QCoreApplication::translate("MainWindow", "Cluster Nodes", nullptr));
        actionDistributionPlot->setText(QCoreApplication::translate("MainWindow", "Distribution Plot", nullptr));
        actionCorrelationPlot->setText(QCoreApplication::translate("MainWindow", "Correlation Plot", nullptr));
        actionCombinationPlot->setText(QCoreApplication::translate("MainWindow", "Combination Plot", nullptr));
        actionDuplicate->setText(QCoreApplication::translate("MainWindow", "Duplicate", nullptr));
        actionRenameAttribute->setText(QCoreApplication::translate("MainWindow", "Rename", nullptr));
        actionDelete->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        actionGroup->setText(QCoreApplication::translate("MainWindow", "Group", nullptr));
        actionUngroup->setText(QCoreApplication::translate("MainWindow", "Ungroup", nullptr));
        actionRenameValue->setText(QCoreApplication::translate("MainWindow", "Rename", nullptr));
        actionSettingsGeneral->setText(QCoreApplication::translate("MainWindow", "General", nullptr));
        actionSettingsArcDiagram->setText(QCoreApplication::translate("MainWindow", "Arc Diagram", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Graph", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Number of states:", nullptr));
        numberOfStates->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Number of transitions:", nullptr));
        numberOfTransitions->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Attributes", nullptr));
        QTableWidgetItem *___qtablewidgetitem = attributes->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "#", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = attributes->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = attributes->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Type", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = attributes->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Cardinality", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Domain", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = domain->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "#", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = domain->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "Value", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = domain->horizontalHeaderItem(2);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "# Nodes", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = domain->horizontalHeaderItem(3);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "% Nodes", nullptr));
#if QT_CONFIG(tooltip)
        selectTool->setToolTip(QCoreApplication::translate("MainWindow", "Select and transform objects (S)", nullptr));
#endif // QT_CONFIG(tooltip)
        selectTool->setText(QCoreApplication::translate("MainWindow", "Select", nullptr));
#if QT_CONFIG(shortcut)
        selectTool->setShortcut(QCoreApplication::translate("MainWindow", "S", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        configureTool->setToolTip(QCoreApplication::translate("MainWindow", "Edit degrees of freedom (DOF) of objects (D)", nullptr));
#endif // QT_CONFIG(tooltip)
        configureTool->setText(QCoreApplication::translate("MainWindow", "Configure", nullptr));
#if QT_CONFIG(shortcut)
        configureTool->setShortcut(QCoreApplication::translate("MainWindow", "D", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        noteTool->setToolTip(QCoreApplication::translate("MainWindow", "Create and edit note objects (T)", nullptr));
#endif // QT_CONFIG(tooltip)
        noteTool->setText(QCoreApplication::translate("MainWindow", "Note", nullptr));
#if QT_CONFIG(shortcut)
        noteTool->setShortcut(QCoreApplication::translate("MainWindow", "T", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        rectangleTool->setToolTip(QCoreApplication::translate("MainWindow", "Create rectangles and squares (R)", nullptr));
#endif // QT_CONFIG(tooltip)
        rectangleTool->setText(QCoreApplication::translate("MainWindow", "Rectangle", nullptr));
#if QT_CONFIG(shortcut)
        rectangleTool->setShortcut(QCoreApplication::translate("MainWindow", "R", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        ellipseTool->setToolTip(QCoreApplication::translate("MainWindow", "Create ellipses and circles (E)", nullptr));
#endif // QT_CONFIG(tooltip)
        ellipseTool->setText(QCoreApplication::translate("MainWindow", "Ellipse", nullptr));
#if QT_CONFIG(shortcut)
        ellipseTool->setShortcut(QCoreApplication::translate("MainWindow", "E", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        lineTool->setToolTip(QCoreApplication::translate("MainWindow", "Create lines (L)", nullptr));
#endif // QT_CONFIG(tooltip)
        lineTool->setText(QCoreApplication::translate("MainWindow", "Line", nullptr));
#if QT_CONFIG(shortcut)
        lineTool->setShortcut(QCoreApplication::translate("MainWindow", "L", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        arrowTool->setToolTip(QCoreApplication::translate("MainWindow", "Create arrows (A)", nullptr));
#endif // QT_CONFIG(tooltip)
        arrowTool->setText(QCoreApplication::translate("MainWindow", "Arrow", nullptr));
#if QT_CONFIG(shortcut)
        arrowTool->setShortcut(QCoreApplication::translate("MainWindow", "A", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        doubleArrowTool->setToolTip(QCoreApplication::translate("MainWindow", "Create double sided arrows (Shift+A)", nullptr));
#endif // QT_CONFIG(tooltip)
        doubleArrowTool->setText(QCoreApplication::translate("MainWindow", "Double Arrow", nullptr));
#if QT_CONFIG(shortcut)
        doubleArrowTool->setShortcut(QCoreApplication::translate("MainWindow", "Shift+A", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        colorTool->setToolTip(QCoreApplication::translate("MainWindow", "Change the fill color of selected objects (C)", nullptr));
#endif // QT_CONFIG(tooltip)
        colorTool->setText(QCoreApplication::translate("MainWindow", "Color", nullptr));
#if QT_CONFIG(shortcut)
        colorTool->setShortcut(QCoreApplication::translate("MainWindow", "C", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        lineColorTool->setToolTip(QCoreApplication::translate("MainWindow", "Change the line color of selected objects (Shift+C)", nullptr));
#endif // QT_CONFIG(tooltip)
        lineColorTool->setText(QCoreApplication::translate("MainWindow", "Line Color", nullptr));
#if QT_CONFIG(shortcut)
        lineColorTool->setShortcut(QCoreApplication::translate("MainWindow", "Shift+C", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        showGridButton->setToolTip(QCoreApplication::translate("MainWindow", "Show or hide the grid (G)", nullptr));
#endif // QT_CONFIG(tooltip)
        showGridButton->setText(QCoreApplication::translate("MainWindow", "Show Grid", nullptr));
#if QT_CONFIG(shortcut)
        showGridButton->setShortcut(QCoreApplication::translate("MainWindow", "G", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        snapToGridButton->setToolTip(QCoreApplication::translate("MainWindow", "Enable or disable objects snapping to the grid (Shift+S)", nullptr));
#endif // QT_CONFIG(tooltip)
        snapToGridButton->setText(QCoreApplication::translate("MainWindow", "Snap to Grid", nullptr));
#if QT_CONFIG(shortcut)
        snapToGridButton->setShortcut(QCoreApplication::translate("MainWindow", "Shift+S", nullptr));
#endif // QT_CONFIG(shortcut)
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "&File", nullptr));
        menuMode->setTitle(QCoreApplication::translate("MainWindow", "&Mode", nullptr));
        menuAttributes->setTitle(QCoreApplication::translate("MainWindow", "&Attributes", nullptr));
        menuDomain->setTitle(QCoreApplication::translate("MainWindow", "&Domain", nullptr));
        menuSettings->setTitle(QCoreApplication::translate("MainWindow", "&Settings", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
