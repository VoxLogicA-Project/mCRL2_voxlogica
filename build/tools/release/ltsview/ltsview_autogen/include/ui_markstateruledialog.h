/********************************************************************************
** Form generated from reading UI file 'markstateruledialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MARKSTATERULEDIALOG_H
#define UI_MARKSTATERULEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MarkStateRuleDialog
{
public:
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QPushButton *color;
    QSpacerItem *horizontalSpacer;
    QSplitter *splitter;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QListWidget *parameterList;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QListWidget *relationList;
    QWidget *widget2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QListWidget *valueList;
    QFrame *line;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *MarkStateRuleDialog)
    {
        if (MarkStateRuleDialog->objectName().isEmpty())
            MarkStateRuleDialog->setObjectName(QString::fromUtf8("MarkStateRuleDialog"));
        MarkStateRuleDialog->resize(597, 359);
        horizontalLayout_3 = new QHBoxLayout(MarkStateRuleDialog);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(MarkStateRuleDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        color = new QPushButton(MarkStateRuleDialog);
        color->setObjectName(QString::fromUtf8("color"));

        horizontalLayout->addWidget(color);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_4->addLayout(horizontalLayout);

        splitter = new QSplitter(MarkStateRuleDialog);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy);
        splitter->setOrientation(Qt::Horizontal);
        widget = new QWidget(splitter);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        parameterList = new QListWidget(widget);
        parameterList->setObjectName(QString::fromUtf8("parameterList"));
        parameterList->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout->addWidget(parameterList);

        splitter->addWidget(widget);
        widget1 = new QWidget(splitter);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);

        relationList = new QListWidget(widget1);
        new QListWidgetItem(relationList);
        new QListWidgetItem(relationList);
        relationList->setObjectName(QString::fromUtf8("relationList"));
        relationList->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout_2->addWidget(relationList);

        splitter->addWidget(widget1);
        widget2 = new QWidget(splitter);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        verticalLayout_3 = new QVBoxLayout(widget2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(widget2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_3->addWidget(label_4);

        valueList = new QListWidget(widget2);
        valueList->setObjectName(QString::fromUtf8("valueList"));
        valueList->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout_3->addWidget(valueList);

        splitter->addWidget(widget2);

        verticalLayout_4->addWidget(splitter);

        line = new QFrame(MarkStateRuleDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        buttonBox = new QDialogButtonBox(MarkStateRuleDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_2->addWidget(buttonBox);


        verticalLayout_4->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout_4);


        retranslateUi(MarkStateRuleDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), MarkStateRuleDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), MarkStateRuleDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(MarkStateRuleDialog);
    } // setupUi

    void retranslateUi(QDialog *MarkStateRuleDialog)
    {
        MarkStateRuleDialog->setWindowTitle(QCoreApplication::translate("MarkStateRuleDialog", "Edit state mark rule", nullptr));
        label->setText(QCoreApplication::translate("MarkStateRuleDialog", "Rule Color:", nullptr));
        color->setText(QString());
        label_2->setText(QCoreApplication::translate("MarkStateRuleDialog", "Parameter:", nullptr));
        label_3->setText(QCoreApplication::translate("MarkStateRuleDialog", "Relation:", nullptr));

        const bool __sortingEnabled = relationList->isSortingEnabled();
        relationList->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = relationList->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("MarkStateRuleDialog", "is an element of", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = relationList->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("MarkStateRuleDialog", "is not an element of", nullptr));
        relationList->setSortingEnabled(__sortingEnabled);

        label_4->setText(QCoreApplication::translate("MarkStateRuleDialog", "Values:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MarkStateRuleDialog: public Ui_MarkStateRuleDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MARKSTATERULEDIALOG_H
