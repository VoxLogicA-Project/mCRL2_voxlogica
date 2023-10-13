/********************************************************************************
** Form generated from reading UI file 'information.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFORMATION_H
#define UI_INFORMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DockWidgetInfo
{
public:
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *lblInitial;
    QLabel *lblInitialValue;
    QLabel *lblStatesValue;
    QLabel *lblStates;
    QLabel *lblTransitions;
    QLabel *lblTransitionsValue;
    QLabel *lblStateLabels;
    QLabel *lblStateLabelsValue;
    QLabel *lblTransitionLabels;
    QLabel *lblTransitionLabelsValue;
    QSpacerItem *verticalSpacer;

    void setupUi(QDockWidget *DockWidgetInfo)
    {
        if (DockWidgetInfo->objectName().isEmpty())
            DockWidgetInfo->setObjectName(QString::fromUtf8("DockWidgetInfo"));
        DockWidgetInfo->resize(204, 150);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        DockWidgetInfo->setFont(font);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        dockWidgetContents->setFont(font1);
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lblInitial = new QLabel(dockWidgetContents);
        lblInitial->setObjectName(QString::fromUtf8("lblInitial"));

        gridLayout->addWidget(lblInitial, 0, 0, 1, 1);

        lblInitialValue = new QLabel(dockWidgetContents);
        lblInitialValue->setObjectName(QString::fromUtf8("lblInitialValue"));

        gridLayout->addWidget(lblInitialValue, 0, 1, 1, 1);

        lblStatesValue = new QLabel(dockWidgetContents);
        lblStatesValue->setObjectName(QString::fromUtf8("lblStatesValue"));

        gridLayout->addWidget(lblStatesValue, 1, 1, 1, 1);

        lblStates = new QLabel(dockWidgetContents);
        lblStates->setObjectName(QString::fromUtf8("lblStates"));

        gridLayout->addWidget(lblStates, 1, 0, 1, 1);

        lblTransitions = new QLabel(dockWidgetContents);
        lblTransitions->setObjectName(QString::fromUtf8("lblTransitions"));

        gridLayout->addWidget(lblTransitions, 2, 0, 1, 1);

        lblTransitionsValue = new QLabel(dockWidgetContents);
        lblTransitionsValue->setObjectName(QString::fromUtf8("lblTransitionsValue"));

        gridLayout->addWidget(lblTransitionsValue, 2, 1, 1, 1);

        lblStateLabels = new QLabel(dockWidgetContents);
        lblStateLabels->setObjectName(QString::fromUtf8("lblStateLabels"));

        gridLayout->addWidget(lblStateLabels, 3, 0, 1, 1);

        lblStateLabelsValue = new QLabel(dockWidgetContents);
        lblStateLabelsValue->setObjectName(QString::fromUtf8("lblStateLabelsValue"));

        gridLayout->addWidget(lblStateLabelsValue, 3, 1, 1, 1);

        lblTransitionLabels = new QLabel(dockWidgetContents);
        lblTransitionLabels->setObjectName(QString::fromUtf8("lblTransitionLabels"));

        gridLayout->addWidget(lblTransitionLabels, 4, 0, 1, 1);

        lblTransitionLabelsValue = new QLabel(dockWidgetContents);
        lblTransitionLabelsValue->setObjectName(QString::fromUtf8("lblTransitionLabelsValue"));

        gridLayout->addWidget(lblTransitionLabelsValue, 4, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        DockWidgetInfo->setWidget(dockWidgetContents);

        retranslateUi(DockWidgetInfo);

        QMetaObject::connectSlotsByName(DockWidgetInfo);
    } // setupUi

    void retranslateUi(QDockWidget *DockWidgetInfo)
    {
        DockWidgetInfo->setWindowTitle(QCoreApplication::translate("DockWidgetInfo", "Information", nullptr));
        lblInitial->setText(QCoreApplication::translate("DockWidgetInfo", "Initial state:", nullptr));
        lblInitialValue->setText(QString());
        lblStatesValue->setText(QCoreApplication::translate("DockWidgetInfo", "0", nullptr));
        lblStates->setText(QCoreApplication::translate("DockWidgetInfo", "Number of states:", nullptr));
        lblTransitions->setText(QCoreApplication::translate("DockWidgetInfo", "Number of transitions:", nullptr));
        lblTransitionsValue->setText(QCoreApplication::translate("DockWidgetInfo", "0", nullptr));
        lblStateLabels->setText(QCoreApplication::translate("DockWidgetInfo", "Number of state labels:", nullptr));
        lblStateLabelsValue->setText(QCoreApplication::translate("DockWidgetInfo", "0", nullptr));
        lblTransitionLabels->setText(QCoreApplication::translate("DockWidgetInfo", "Number of transition labels:", nullptr));
        lblTransitionLabelsValue->setText(QCoreApplication::translate("DockWidgetInfo", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DockWidgetInfo: public Ui_DockWidgetInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFORMATION_H
