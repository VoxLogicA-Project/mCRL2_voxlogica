/********************************************************************************
** Form generated from reading UI file 'simdock.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIMDOCK_H
#define UI_SIMDOCK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SimDock
{
public:
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QPushButton *start;
    QPushButton *stop;
    QPushButton *backtrace;
    QPushButton *reset;
    QTableWidget *transitionTable;
    QHBoxLayout *horizontalLayout;
    QPushButton *trigger;
    QPushButton *undo;

    void setupUi(QWidget *SimDock)
    {
        if (SimDock->objectName().isEmpty())
            SimDock->setObjectName(QString::fromUtf8("SimDock"));
        SimDock->resize(232, 236);
        horizontalLayout_2 = new QHBoxLayout(SimDock);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        start = new QPushButton(SimDock);
        start->setObjectName(QString::fromUtf8("start"));

        gridLayout->addWidget(start, 0, 0, 1, 1);

        stop = new QPushButton(SimDock);
        stop->setObjectName(QString::fromUtf8("stop"));

        gridLayout->addWidget(stop, 0, 1, 1, 1);

        backtrace = new QPushButton(SimDock);
        backtrace->setObjectName(QString::fromUtf8("backtrace"));

        gridLayout->addWidget(backtrace, 1, 0, 1, 1);

        reset = new QPushButton(SimDock);
        reset->setObjectName(QString::fromUtf8("reset"));

        gridLayout->addWidget(reset, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        transitionTable = new QTableWidget(SimDock);
        if (transitionTable->columnCount() < 2)
            transitionTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        transitionTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        transitionTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        transitionTable->setObjectName(QString::fromUtf8("transitionTable"));
        transitionTable->setSelectionMode(QAbstractItemView::SingleSelection);
        transitionTable->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout->addWidget(transitionTable);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        trigger = new QPushButton(SimDock);
        trigger->setObjectName(QString::fromUtf8("trigger"));

        horizontalLayout->addWidget(trigger);

        undo = new QPushButton(SimDock);
        undo->setObjectName(QString::fromUtf8("undo"));

        horizontalLayout->addWidget(undo);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout);


        retranslateUi(SimDock);

        QMetaObject::connectSlotsByName(SimDock);
    } // setupUi

    void retranslateUi(QWidget *SimDock)
    {
        SimDock->setWindowTitle(QCoreApplication::translate("SimDock", "Simulation", nullptr));
        start->setText(QCoreApplication::translate("SimDock", "Start", nullptr));
        stop->setText(QCoreApplication::translate("SimDock", "Stop", nullptr));
        backtrace->setText(QCoreApplication::translate("SimDock", "Backtrace", nullptr));
        reset->setText(QCoreApplication::translate("SimDock", "Reset", nullptr));
        QTableWidgetItem *___qtablewidgetitem = transitionTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("SimDock", "Action", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = transitionTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("SimDock", "State change", nullptr));
        trigger->setText(QCoreApplication::translate("SimDock", "Trigger", nullptr));
        undo->setText(QCoreApplication::translate("SimDock", "Undo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SimDock: public Ui_SimDock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIMDOCK_H
