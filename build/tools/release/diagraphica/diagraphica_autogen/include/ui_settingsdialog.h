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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
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
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QPushButton *backgroundColor;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *textColor;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_3;
    QSpinBox *textSize;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_4;
    QDoubleSpinBox *animationSpeed;
    QSpacerItem *verticalSpacer;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_9;
    QComboBox *simulationBlendType;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QCheckBox *showClusters;
    QCheckBox *showBundles;
    QCheckBox *showClusterTree;
    QCheckBox *annotateClusterTree;
    QCheckBox *showBarTree;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *bundleColor;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_6;
    QDoubleSpinBox *bundleTransparency;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_7;
    QComboBox *clusterTreeColorMap;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_8;
    QDoubleSpinBox *barTreeMagnification;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *SettingsDialog)
    {
        if (SettingsDialog->objectName().isEmpty())
            SettingsDialog->setObjectName(QString::fromUtf8("SettingsDialog"));
        SettingsDialog->resize(441, 376);
        horizontalLayout = new QHBoxLayout(SettingsDialog);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tabWidget = new QTabWidget(SettingsDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        horizontalLayout_2 = new QHBoxLayout(tab);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        backgroundColor = new QPushButton(tab);
        backgroundColor->setObjectName(QString::fromUtf8("backgroundColor"));

        gridLayout->addWidget(backgroundColor, 0, 2, 1, 1);

        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 1, 1, 1);

        textColor = new QPushButton(tab);
        textColor->setObjectName(QString::fromUtf8("textColor"));

        gridLayout->addWidget(textColor, 1, 2, 1, 1);

        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 2, 1, 1, 1);

        textSize = new QSpinBox(tab);
        textSize->setObjectName(QString::fromUtf8("textSize"));
        textSize->setMinimum(4);
        textSize->setMaximum(32);
        textSize->setValue(12);

        gridLayout->addWidget(textSize, 2, 2, 1, 1);

        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 3, 1, 1, 1);

        animationSpeed = new QDoubleSpinBox(tab);
        animationSpeed->setObjectName(QString::fromUtf8("animationSpeed"));
        animationSpeed->setDecimals(1);
        animationSpeed->setMinimum(1.000000000000000);
        animationSpeed->setMaximum(40.000000000000000);
        animationSpeed->setSingleStep(0.500000000000000);

        gridLayout->addWidget(animationSpeed, 3, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 0, 1, 1);

        label_9 = new QLabel(tab);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 4, 0, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_9, 4, 1, 1, 1);

        simulationBlendType = new QComboBox(tab);
        simulationBlendType->setObjectName(QString::fromUtf8("simulationBlendType"));

        gridLayout->addWidget(simulationBlendType, 4, 2, 1, 1);


        horizontalLayout_2->addLayout(gridLayout);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_2 = new QVBoxLayout(tab_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox = new QGroupBox(tab_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        showClusters = new QCheckBox(groupBox);
        showClusters->setObjectName(QString::fromUtf8("showClusters"));

        verticalLayout->addWidget(showClusters);

        showBundles = new QCheckBox(groupBox);
        showBundles->setObjectName(QString::fromUtf8("showBundles"));

        verticalLayout->addWidget(showBundles);

        showClusterTree = new QCheckBox(groupBox);
        showClusterTree->setObjectName(QString::fromUtf8("showClusterTree"));

        verticalLayout->addWidget(showClusterTree);

        annotateClusterTree = new QCheckBox(groupBox);
        annotateClusterTree->setObjectName(QString::fromUtf8("annotateClusterTree"));

        verticalLayout->addWidget(annotateClusterTree);

        showBarTree = new QCheckBox(groupBox);
        showBarTree->setObjectName(QString::fromUtf8("showBarTree"));

        verticalLayout->addWidget(showBarTree);


        verticalLayout_2->addWidget(groupBox);

        widget = new QWidget(tab_2);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 0, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 0, 1, 1, 1);

        bundleColor = new QPushButton(widget);
        bundleColor->setObjectName(QString::fromUtf8("bundleColor"));

        gridLayout_2->addWidget(bundleColor, 0, 2, 1, 1);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 1, 0, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_6, 1, 1, 1, 1);

        bundleTransparency = new QDoubleSpinBox(widget);
        bundleTransparency->setObjectName(QString::fromUtf8("bundleTransparency"));
        bundleTransparency->setMaximum(1.000000000000000);
        bundleTransparency->setSingleStep(0.050000000000000);
        bundleTransparency->setValue(0.700000000000000);

        gridLayout_2->addWidget(bundleTransparency, 1, 2, 1, 1);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 2, 0, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_7, 2, 1, 1, 1);

        clusterTreeColorMap = new QComboBox(widget);
        clusterTreeColorMap->setObjectName(QString::fromUtf8("clusterTreeColorMap"));

        gridLayout_2->addWidget(clusterTreeColorMap, 2, 2, 1, 1);

        label_8 = new QLabel(widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 3, 0, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_8, 3, 1, 1, 1);

        barTreeMagnification = new QDoubleSpinBox(widget);
        barTreeMagnification->setObjectName(QString::fromUtf8("barTreeMagnification"));
        barTreeMagnification->setDecimals(1);
        barTreeMagnification->setMaximum(40.000000000000000);
        barTreeMagnification->setSingleStep(0.500000000000000);

        gridLayout_2->addWidget(barTreeMagnification, 3, 2, 1, 1);


        verticalLayout_2->addWidget(widget);

        verticalSpacer_2 = new QSpacerItem(20, 59, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        tabWidget->addTab(tab_2, QString());

        horizontalLayout->addWidget(tabWidget);

#if QT_CONFIG(shortcut)
        label->setBuddy(backgroundColor);
        label_2->setBuddy(textColor);
        label_3->setBuddy(textSize);
        label_4->setBuddy(animationSpeed);
        label_9->setBuddy(simulationBlendType);
        label_5->setBuddy(bundleColor);
        label_6->setBuddy(bundleTransparency);
        label_7->setBuddy(clusterTreeColorMap);
        label_8->setBuddy(barTreeMagnification);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(tabWidget, backgroundColor);
        QWidget::setTabOrder(backgroundColor, textColor);
        QWidget::setTabOrder(textColor, textSize);
        QWidget::setTabOrder(textSize, animationSpeed);
        QWidget::setTabOrder(animationSpeed, simulationBlendType);
        QWidget::setTabOrder(simulationBlendType, showClusters);
        QWidget::setTabOrder(showClusters, showBundles);
        QWidget::setTabOrder(showBundles, showClusterTree);
        QWidget::setTabOrder(showClusterTree, annotateClusterTree);
        QWidget::setTabOrder(annotateClusterTree, showBarTree);
        QWidget::setTabOrder(showBarTree, bundleColor);
        QWidget::setTabOrder(bundleColor, bundleTransparency);
        QWidget::setTabOrder(bundleTransparency, clusterTreeColorMap);
        QWidget::setTabOrder(clusterTreeColorMap, barTreeMagnification);

        retranslateUi(SettingsDialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *SettingsDialog)
    {
        SettingsDialog->setWindowTitle(QCoreApplication::translate("SettingsDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("SettingsDialog", "Background color:", nullptr));
        backgroundColor->setText(QString());
        label_2->setText(QCoreApplication::translate("SettingsDialog", "Text color:", nullptr));
        textColor->setText(QString());
        label_3->setText(QCoreApplication::translate("SettingsDialog", "Text size:", nullptr));
        label_4->setText(QCoreApplication::translate("SettingsDialog", "Animation speed:", nullptr));
        label_9->setText(QCoreApplication::translate("SettingsDialog", "Simulation blend type:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("SettingsDialog", "General", nullptr));
        groupBox->setTitle(QCoreApplication::translate("SettingsDialog", "Components", nullptr));
        showClusters->setText(QCoreApplication::translate("SettingsDialog", "Show Clusters", nullptr));
        showBundles->setText(QCoreApplication::translate("SettingsDialog", "Show Arcs", nullptr));
        showClusterTree->setText(QCoreApplication::translate("SettingsDialog", "Show cluster tree", nullptr));
        annotateClusterTree->setText(QCoreApplication::translate("SettingsDialog", "Show cluster tree annotations", nullptr));
        showBarTree->setText(QCoreApplication::translate("SettingsDialog", "Show bar tree", nullptr));
        label_5->setText(QCoreApplication::translate("SettingsDialog", "Arc color:", nullptr));
        bundleColor->setText(QString());
        label_6->setText(QCoreApplication::translate("SettingsDialog", "Arc transparency:", nullptr));
        label_7->setText(QCoreApplication::translate("SettingsDialog", "Cluster tree color scheme:", nullptr));
        label_8->setText(QCoreApplication::translate("SettingsDialog", "Bar tree magnification:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("SettingsDialog", "Arc Diagram", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsDialog: public Ui_SettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDIALOG_H
