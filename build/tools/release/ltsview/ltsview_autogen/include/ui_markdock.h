/********************************************************************************
** Form generated from reading UI file 'markdock.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MARKDOCK_H
#define UI_MARKDOCK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MarkDock
{
public:
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout;
    QRadioButton *noMarks;
    QRadioButton *markDeadlocks;
    QRadioButton *markStates;
    QRadioButton *markTransitions;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QComboBox *clusterMatchStyle;
    QComboBox *stateMatchStyle;
    QListWidget *markRuleList;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *add;
    QPushButton *remove;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout;
    QListWidget *markedActionList;
    QButtonGroup *buttonGroup;

    void setupUi(QWidget *MarkDock)
    {
        if (MarkDock->objectName().isEmpty())
            MarkDock->setObjectName(QString::fromUtf8("MarkDock"));
        MarkDock->resize(316, 537);
        verticalLayout_5 = new QVBoxLayout(MarkDock);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        noMarks = new QRadioButton(MarkDock);
        buttonGroup = new QButtonGroup(MarkDock);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(noMarks);
        noMarks->setObjectName(QString::fromUtf8("noMarks"));
        noMarks->setChecked(true);

        verticalLayout->addWidget(noMarks);

        markDeadlocks = new QRadioButton(MarkDock);
        buttonGroup->addButton(markDeadlocks);
        markDeadlocks->setObjectName(QString::fromUtf8("markDeadlocks"));

        verticalLayout->addWidget(markDeadlocks);

        markStates = new QRadioButton(MarkDock);
        buttonGroup->addButton(markStates);
        markStates->setObjectName(QString::fromUtf8("markStates"));

        verticalLayout->addWidget(markStates);

        markTransitions = new QRadioButton(MarkDock);
        buttonGroup->addButton(markTransitions);
        markTransitions->setObjectName(QString::fromUtf8("markTransitions"));

        verticalLayout->addWidget(markTransitions);


        verticalLayout_4->addLayout(verticalLayout);

        groupBox = new QGroupBox(MarkDock);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        clusterMatchStyle = new QComboBox(groupBox);
        clusterMatchStyle->addItem(QString());
        clusterMatchStyle->addItem(QString());
        clusterMatchStyle->setObjectName(QString::fromUtf8("clusterMatchStyle"));

        verticalLayout_2->addWidget(clusterMatchStyle);

        stateMatchStyle = new QComboBox(groupBox);
        stateMatchStyle->addItem(QString());
        stateMatchStyle->addItem(QString());
        stateMatchStyle->addItem(QString());
        stateMatchStyle->setObjectName(QString::fromUtf8("stateMatchStyle"));

        verticalLayout_2->addWidget(stateMatchStyle);

        markRuleList = new QListWidget(groupBox);
        markRuleList->setObjectName(QString::fromUtf8("markRuleList"));

        verticalLayout_2->addWidget(markRuleList);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        add = new QPushButton(groupBox);
        add->setObjectName(QString::fromUtf8("add"));

        horizontalLayout_2->addWidget(add);

        remove = new QPushButton(groupBox);
        remove->setObjectName(QString::fromUtf8("remove"));

        horizontalLayout_2->addWidget(remove);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_4->addWidget(groupBox);

        groupBox_2 = new QGroupBox(MarkDock);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout = new QHBoxLayout(groupBox_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        markedActionList = new QListWidget(groupBox_2);
        markedActionList->setObjectName(QString::fromUtf8("markedActionList"));

        horizontalLayout->addWidget(markedActionList);


        verticalLayout_4->addWidget(groupBox_2);


        verticalLayout_5->addLayout(verticalLayout_4);


        retranslateUi(MarkDock);

        QMetaObject::connectSlotsByName(MarkDock);
    } // setupUi

    void retranslateUi(QWidget *MarkDock)
    {
        MarkDock->setWindowTitle(QCoreApplication::translate("MarkDock", "Mark", nullptr));
        noMarks->setText(QCoreApplication::translate("MarkDock", "No marks", nullptr));
        markDeadlocks->setText(QCoreApplication::translate("MarkDock", "Mark deadlocks", nullptr));
        markStates->setText(QCoreApplication::translate("MarkDock", "Mark states", nullptr));
        markTransitions->setText(QCoreApplication::translate("MarkDock", "Mark transitions", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MarkDock", "Mark states", nullptr));
        clusterMatchStyle->setItemText(0, QCoreApplication::translate("MarkDock", "Mark cluster if any state is marked", nullptr));
        clusterMatchStyle->setItemText(1, QCoreApplication::translate("MarkDock", "Mark cluster if all states are marked", nullptr));

        stateMatchStyle->setItemText(0, QCoreApplication::translate("MarkDock", "Match any of the following", nullptr));
        stateMatchStyle->setItemText(1, QCoreApplication::translate("MarkDock", "Match all of the following", nullptr));
        stateMatchStyle->setItemText(2, QCoreApplication::translate("MarkDock", "Match the following separately", nullptr));

        add->setText(QCoreApplication::translate("MarkDock", "Add", nullptr));
        remove->setText(QCoreApplication::translate("MarkDock", "Remove", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MarkDock", "Mark transitions", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MarkDock: public Ui_MarkDock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MARKDOCK_H
