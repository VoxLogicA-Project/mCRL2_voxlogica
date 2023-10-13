/********************************************************************************
** Form generated from reading UI file 'infodock.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFODOCK_H
#define UI_INFODOCK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InfoDock
{
public:
    QHBoxLayout *horizontalLayout_4;
    QTabWidget *tabWidget;
    QWidget *tab;
    QHBoxLayout *horizontalLayout;
    QTableWidget *ltsTable;
    QWidget *tab_2;
    QHBoxLayout *horizontalLayout_2;
    QTableWidget *clusterTable;
    QWidget *tab_3;
    QHBoxLayout *horizontalLayout_3;
    QTableWidget *stateTable;

    void setupUi(QWidget *InfoDock)
    {
        if (InfoDock->objectName().isEmpty())
            InfoDock->setObjectName(QString::fromUtf8("InfoDock"));
        InfoDock->resize(492, 438);
        horizontalLayout_4 = new QHBoxLayout(InfoDock);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        tabWidget = new QTabWidget(InfoDock);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        horizontalLayout = new QHBoxLayout(tab);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        ltsTable = new QTableWidget(tab);
        if (ltsTable->columnCount() < 2)
            ltsTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        ltsTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        ltsTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (ltsTable->rowCount() < 6)
            ltsTable->setRowCount(6);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        ltsTable->setVerticalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        ltsTable->setVerticalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        ltsTable->setVerticalHeaderItem(2, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        ltsTable->setVerticalHeaderItem(3, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        ltsTable->setVerticalHeaderItem(4, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        ltsTable->setVerticalHeaderItem(5, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        ltsTable->setItem(0, 0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        ltsTable->setItem(0, 1, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        ltsTable->setItem(1, 0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        ltsTable->setItem(1, 1, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        ltsTable->setItem(2, 0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        ltsTable->setItem(3, 0, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        ltsTable->setItem(4, 0, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        ltsTable->setItem(5, 0, __qtablewidgetitem15);
        ltsTable->setObjectName(QString::fromUtf8("ltsTable"));
        ltsTable->setSelectionMode(QAbstractItemView::SingleSelection);
        ltsTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        ltsTable->verticalHeader()->setVisible(false);

        horizontalLayout->addWidget(ltsTable);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        horizontalLayout_2 = new QHBoxLayout(tab_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        clusterTable = new QTableWidget(tab_2);
        if (clusterTable->columnCount() < 2)
            clusterTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        clusterTable->setHorizontalHeaderItem(0, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        clusterTable->setHorizontalHeaderItem(1, __qtablewidgetitem17);
        if (clusterTable->rowCount() < 3)
            clusterTable->setRowCount(3);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        clusterTable->setVerticalHeaderItem(0, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        clusterTable->setVerticalHeaderItem(1, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        clusterTable->setVerticalHeaderItem(2, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        clusterTable->setItem(0, 0, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        clusterTable->setItem(2, 0, __qtablewidgetitem22);
        clusterTable->setObjectName(QString::fromUtf8("clusterTable"));
        clusterTable->setSelectionMode(QAbstractItemView::SingleSelection);
        clusterTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        clusterTable->verticalHeader()->setVisible(false);

        horizontalLayout_2->addWidget(clusterTable);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        horizontalLayout_3 = new QHBoxLayout(tab_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        stateTable = new QTableWidget(tab_3);
        if (stateTable->columnCount() < 2)
            stateTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        stateTable->setHorizontalHeaderItem(0, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        stateTable->setHorizontalHeaderItem(1, __qtablewidgetitem24);
        stateTable->setObjectName(QString::fromUtf8("stateTable"));

        horizontalLayout_3->addWidget(stateTable);

        tabWidget->addTab(tab_3, QString());

        horizontalLayout_4->addWidget(tabWidget);


        retranslateUi(InfoDock);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(InfoDock);
    } // setupUi

    void retranslateUi(QWidget *InfoDock)
    {
        InfoDock->setWindowTitle(QCoreApplication::translate("InfoDock", "Info", nullptr));
        QTableWidgetItem *___qtablewidgetitem = ltsTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("InfoDock", "Property", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = ltsTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("InfoDock", "Value", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = ltsTable->verticalHeaderItem(0);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("InfoDock", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = ltsTable->verticalHeaderItem(1);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("InfoDock", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = ltsTable->verticalHeaderItem(2);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("InfoDock", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = ltsTable->verticalHeaderItem(3);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("InfoDock", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = ltsTable->verticalHeaderItem(4);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("InfoDock", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = ltsTable->verticalHeaderItem(5);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("InfoDock", "New Row", nullptr));

        const bool __sortingEnabled = ltsTable->isSortingEnabled();
        ltsTable->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem8 = ltsTable->item(0, 0);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("InfoDock", "States:", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = ltsTable->item(1, 0);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("InfoDock", "Transitions:", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = ltsTable->item(2, 0);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("InfoDock", "Clusters:", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = ltsTable->item(3, 0);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("InfoDock", "Ranks:", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = ltsTable->item(4, 0);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("InfoDock", "Marked states:", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = ltsTable->item(5, 0);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("InfoDock", "Marked transitions:", nullptr));
        ltsTable->setSortingEnabled(__sortingEnabled);

        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("InfoDock", "LTS info", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = clusterTable->horizontalHeaderItem(0);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("InfoDock", "Parameter", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = clusterTable->horizontalHeaderItem(1);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("InfoDock", "Value", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = clusterTable->verticalHeaderItem(0);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("InfoDock", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = clusterTable->verticalHeaderItem(1);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("InfoDock", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = clusterTable->verticalHeaderItem(2);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("InfoDock", "New Row", nullptr));

        const bool __sortingEnabled1 = clusterTable->isSortingEnabled();
        clusterTable->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem19 = clusterTable->item(0, 0);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("InfoDock", "Number of states:", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = clusterTable->item(2, 0);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("InfoDock", "Parameter:", nullptr));
        clusterTable->setSortingEnabled(__sortingEnabled1);

        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("InfoDock", "Cluster info", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = stateTable->horizontalHeaderItem(0);
        ___qtablewidgetitem21->setText(QCoreApplication::translate("InfoDock", "Parameter", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = stateTable->horizontalHeaderItem(1);
        ___qtablewidgetitem22->setText(QCoreApplication::translate("InfoDock", "Value", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("InfoDock", "State info", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InfoDock: public Ui_InfoDock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFODOCK_H
