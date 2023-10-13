/********************************************************************************
** Form generated from reading UI file 'settingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSDIALOG_H
#define UI_SETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab_2;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout_3;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer_16;
    QSpinBox *transparency;
    QLabel *label_11;
    QSpacerItem *horizontalSpacer_15;
    QPushButton *backgroundColor;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer_14;
    QPushButton *stateColor;
    QLabel *label_13;
    QSpacerItem *horizontalSpacer_13;
    QPushButton *transitionColor;
    QLabel *label_14;
    QSpacerItem *horizontalSpacer_12;
    QPushButton *backpointerColor;
    QLabel *label_15;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *markColor;
    QLabel *label_16;
    QSpacerItem *horizontalSpacer_10;
    QCheckBox *longInterpolation;
    QPushButton *clusterColorTop;
    QPushButton *clusterColorBottom;
    QSpacerItem *verticalSpacer_3;
    QWidget *tab_3;
    QHBoxLayout *horizontalLayout_4;
    QGridLayout *gridLayout_2;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer;
    QPushButton *simulationHistoryColor;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *simulationCurrentStateColor;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *simulationSelectedColor;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *simulationNextStateColor;
    QSpacerItem *verticalSpacer;
    QWidget *tab_5;
    QHBoxLayout *horizontalLayout_5;
    QGridLayout *gridLayout_5;
    QLabel *label_21;
    QCheckBox *navShowBackpointers;
    QCheckBox *navShowStates;
    QCheckBox *navShowTransitions;
    QCheckBox *navSmoothShading;
    QCheckBox *navLighting;
    QCheckBox *navTransparency;
    QSpacerItem *verticalSpacer_5;

    void setupUi(QDialog *SettingsDialog)
    {
        if (SettingsDialog->objectName().isEmpty())
            SettingsDialog->setObjectName(QString::fromUtf8("SettingsDialog"));
        SettingsDialog->resize(434, 315);
        verticalLayout = new QVBoxLayout(SettingsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(SettingsDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        horizontalLayout = new QHBoxLayout(tab_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_10 = new QLabel(tab_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_3->addWidget(label_10, 0, 0, 1, 1);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_16, 0, 1, 1, 1);

        transparency = new QSpinBox(tab_2);
        transparency->setObjectName(QString::fromUtf8("transparency"));

        gridLayout_3->addWidget(transparency, 0, 4, 1, 1);

        label_11 = new QLabel(tab_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_3->addWidget(label_11, 1, 0, 1, 1);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_15, 1, 1, 1, 1);

        backgroundColor = new QPushButton(tab_2);
        backgroundColor->setObjectName(QString::fromUtf8("backgroundColor"));

        gridLayout_3->addWidget(backgroundColor, 1, 4, 1, 1);

        label_12 = new QLabel(tab_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_3->addWidget(label_12, 2, 0, 1, 1);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_14, 2, 1, 1, 1);

        stateColor = new QPushButton(tab_2);
        stateColor->setObjectName(QString::fromUtf8("stateColor"));

        gridLayout_3->addWidget(stateColor, 2, 4, 1, 1);

        label_13 = new QLabel(tab_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_3->addWidget(label_13, 3, 0, 1, 1);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_13, 3, 1, 1, 1);

        transitionColor = new QPushButton(tab_2);
        transitionColor->setObjectName(QString::fromUtf8("transitionColor"));

        gridLayout_3->addWidget(transitionColor, 3, 4, 1, 1);

        label_14 = new QLabel(tab_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_3->addWidget(label_14, 4, 0, 1, 1);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_12, 4, 1, 1, 1);

        backpointerColor = new QPushButton(tab_2);
        backpointerColor->setObjectName(QString::fromUtf8("backpointerColor"));

        gridLayout_3->addWidget(backpointerColor, 4, 4, 1, 1);

        label_15 = new QLabel(tab_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_3->addWidget(label_15, 5, 0, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_11, 5, 1, 1, 1);

        markColor = new QPushButton(tab_2);
        markColor->setObjectName(QString::fromUtf8("markColor"));

        gridLayout_3->addWidget(markColor, 5, 4, 1, 1);

        label_16 = new QLabel(tab_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_3->addWidget(label_16, 6, 0, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_10, 6, 1, 1, 1);

        longInterpolation = new QCheckBox(tab_2);
        longInterpolation->setObjectName(QString::fromUtf8("longInterpolation"));

        gridLayout_3->addWidget(longInterpolation, 6, 2, 1, 1);

        clusterColorTop = new QPushButton(tab_2);
        clusterColorTop->setObjectName(QString::fromUtf8("clusterColorTop"));

        gridLayout_3->addWidget(clusterColorTop, 6, 3, 1, 1);

        clusterColorBottom = new QPushButton(tab_2);
        clusterColorBottom->setObjectName(QString::fromUtf8("clusterColorBottom"));

        gridLayout_3->addWidget(clusterColorBottom, 6, 4, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_3, 7, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout_3);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        horizontalLayout_4 = new QHBoxLayout(tab_3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_6 = new QLabel(tab_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 1, 1, 1);

        simulationHistoryColor = new QPushButton(tab_3);
        simulationHistoryColor->setObjectName(QString::fromUtf8("simulationHistoryColor"));

        gridLayout_2->addWidget(simulationHistoryColor, 0, 2, 1, 1);

        label_7 = new QLabel(tab_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 1, 1, 1);

        simulationCurrentStateColor = new QPushButton(tab_3);
        simulationCurrentStateColor->setObjectName(QString::fromUtf8("simulationCurrentStateColor"));

        gridLayout_2->addWidget(simulationCurrentStateColor, 1, 2, 1, 1);

        label_8 = new QLabel(tab_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 2, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 2, 1, 1, 1);

        simulationSelectedColor = new QPushButton(tab_3);
        simulationSelectedColor->setObjectName(QString::fromUtf8("simulationSelectedColor"));

        gridLayout_2->addWidget(simulationSelectedColor, 2, 2, 1, 1);

        label_9 = new QLabel(tab_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_2->addWidget(label_9, 3, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 3, 1, 1, 1);

        simulationNextStateColor = new QPushButton(tab_3);
        simulationNextStateColor->setObjectName(QString::fromUtf8("simulationNextStateColor"));

        gridLayout_2->addWidget(simulationNextStateColor, 3, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 4, 0, 1, 1);


        horizontalLayout_4->addLayout(gridLayout_2);

        tabWidget->addTab(tab_3, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        horizontalLayout_5 = new QHBoxLayout(tab_5);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_21 = new QLabel(tab_5);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout_5->addWidget(label_21, 0, 0, 1, 1);

        navShowBackpointers = new QCheckBox(tab_5);
        navShowBackpointers->setObjectName(QString::fromUtf8("navShowBackpointers"));

        gridLayout_5->addWidget(navShowBackpointers, 1, 0, 1, 1);

        navShowStates = new QCheckBox(tab_5);
        navShowStates->setObjectName(QString::fromUtf8("navShowStates"));

        gridLayout_5->addWidget(navShowStates, 2, 0, 1, 1);

        navShowTransitions = new QCheckBox(tab_5);
        navShowTransitions->setObjectName(QString::fromUtf8("navShowTransitions"));

        gridLayout_5->addWidget(navShowTransitions, 3, 0, 1, 1);

        navSmoothShading = new QCheckBox(tab_5);
        navSmoothShading->setObjectName(QString::fromUtf8("navSmoothShading"));

        gridLayout_5->addWidget(navSmoothShading, 4, 0, 1, 1);

        navLighting = new QCheckBox(tab_5);
        navLighting->setObjectName(QString::fromUtf8("navLighting"));

        gridLayout_5->addWidget(navLighting, 5, 0, 1, 1);

        navTransparency = new QCheckBox(tab_5);
        navTransparency->setObjectName(QString::fromUtf8("navTransparency"));

        gridLayout_5->addWidget(navTransparency, 6, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_5, 7, 0, 1, 1);


        horizontalLayout_5->addLayout(gridLayout_5);

        tabWidget->addTab(tab_5, QString());

        verticalLayout->addWidget(tabWidget);

#if QT_CONFIG(shortcut)
        label_10->setBuddy(transparency);
        label_11->setBuddy(backgroundColor);
        label_12->setBuddy(stateColor);
        label_13->setBuddy(transitionColor);
        label_14->setBuddy(backpointerColor);
        label_15->setBuddy(markColor);
        label_6->setBuddy(simulationHistoryColor);
        label_7->setBuddy(simulationCurrentStateColor);
        label_8->setBuddy(simulationSelectedColor);
        label_9->setBuddy(simulationNextStateColor);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(tabWidget, transparency);
        QWidget::setTabOrder(transparency, backgroundColor);
        QWidget::setTabOrder(backgroundColor, stateColor);
        QWidget::setTabOrder(stateColor, transitionColor);
        QWidget::setTabOrder(transitionColor, backpointerColor);
        QWidget::setTabOrder(backpointerColor, markColor);
        QWidget::setTabOrder(markColor, longInterpolation);
        QWidget::setTabOrder(longInterpolation, clusterColorTop);
        QWidget::setTabOrder(clusterColorTop, clusterColorBottom);
        QWidget::setTabOrder(clusterColorBottom, simulationHistoryColor);
        QWidget::setTabOrder(simulationHistoryColor, simulationCurrentStateColor);
        QWidget::setTabOrder(simulationCurrentStateColor, simulationSelectedColor);
        QWidget::setTabOrder(simulationSelectedColor, simulationNextStateColor);

        retranslateUi(SettingsDialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *SettingsDialog)
    {
        SettingsDialog->setWindowTitle(QCoreApplication::translate("SettingsDialog", "Settings", nullptr));
        label_10->setText(QCoreApplication::translate("SettingsDialog", "Transparency:", nullptr));
        label_11->setText(QCoreApplication::translate("SettingsDialog", "Background:", nullptr));
        backgroundColor->setText(QString());
        label_12->setText(QCoreApplication::translate("SettingsDialog", "States:", nullptr));
        stateColor->setText(QString());
        label_13->setText(QCoreApplication::translate("SettingsDialog", "Transitions:", nullptr));
        transitionColor->setText(QString());
        label_14->setText(QCoreApplication::translate("SettingsDialog", "Backpointers:", nullptr));
        backpointerColor->setText(QString());
        label_15->setText(QCoreApplication::translate("SettingsDialog", "Mark:", nullptr));
        markColor->setText(QString());
        label_16->setText(QCoreApplication::translate("SettingsDialog", "Cluster range:", nullptr));
        longInterpolation->setText(QCoreApplication::translate("SettingsDialog", "Long interpolation", nullptr));
        clusterColorTop->setText(QString());
        clusterColorBottom->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("SettingsDialog", "Colors", nullptr));
        label_6->setText(QCoreApplication::translate("SettingsDialog", "Previous states/transitions:", nullptr));
        simulationHistoryColor->setText(QString());
        label_7->setText(QCoreApplication::translate("SettingsDialog", "Current state:", nullptr));
        simulationCurrentStateColor->setText(QString());
        label_8->setText(QCoreApplication::translate("SettingsDialog", "Selected state/transition:", nullptr));
        simulationSelectedColor->setText(QString());
        label_9->setText(QCoreApplication::translate("SettingsDialog", "Possible states/transitions:", nullptr));
        simulationNextStateColor->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("SettingsDialog", "Simulation", nullptr));
        label_21->setText(QCoreApplication::translate("SettingsDialog", "While zooming/panning/rotating:", nullptr));
        navShowBackpointers->setText(QCoreApplication::translate("SettingsDialog", "Show backpointers", nullptr));
        navShowStates->setText(QCoreApplication::translate("SettingsDialog", "Show states", nullptr));
        navShowTransitions->setText(QCoreApplication::translate("SettingsDialog", "Show transitions", nullptr));
        navSmoothShading->setText(QCoreApplication::translate("SettingsDialog", "Enable smooth shading", nullptr));
        navLighting->setText(QCoreApplication::translate("SettingsDialog", "Enable lighting", nullptr));
        navTransparency->setText(QCoreApplication::translate("SettingsDialog", "Render transparent objects correctly", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("SettingsDialog", "Performance", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsDialog: public Ui_SettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDIALOG_H
