/********************************************************************************
** Form generated from reading UI file 'findandreplacedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDANDREPLACEDIALOG_H
#define UI_FINDANDREPLACEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_FindAndReplaceDialog
{
public:
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QLineEdit *textToFind;
    QLabel *replaceLabel;
    QLineEdit *textToReplace;
    QLabel *infoLabel;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *upRadioButton;
    QRadioButton *downRadioButton;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *caseCheckBox;
    QCheckBox *wholeCheckBox;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QPushButton *findButton;
    QPushButton *replaceButton;
    QPushButton *replaceAllButton;
    QPushButton *cancelButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *FindAndReplaceDialog)
    {
        if (FindAndReplaceDialog->objectName().isEmpty())
            FindAndReplaceDialog->setObjectName(QString::fromUtf8("FindAndReplaceDialog"));
        FindAndReplaceDialog->resize(387, 205);
        horizontalLayout_2 = new QHBoxLayout(FindAndReplaceDialog);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label = new QLabel(FindAndReplaceDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        textToFind = new QLineEdit(FindAndReplaceDialog);
        textToFind->setObjectName(QString::fromUtf8("textToFind"));

        gridLayout_3->addWidget(textToFind, 0, 1, 1, 1);

        replaceLabel = new QLabel(FindAndReplaceDialog);
        replaceLabel->setObjectName(QString::fromUtf8("replaceLabel"));

        gridLayout_3->addWidget(replaceLabel, 1, 0, 1, 1);

        textToReplace = new QLineEdit(FindAndReplaceDialog);
        textToReplace->setObjectName(QString::fromUtf8("textToReplace"));

        gridLayout_3->addWidget(textToReplace, 1, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout_3);


        verticalLayout_5->addLayout(verticalLayout_2);

        infoLabel = new QLabel(FindAndReplaceDialog);
        infoLabel->setObjectName(QString::fromUtf8("infoLabel"));

        verticalLayout_5->addWidget(infoLabel);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox = new QGroupBox(FindAndReplaceDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        upRadioButton = new QRadioButton(groupBox);
        upRadioButton->setObjectName(QString::fromUtf8("upRadioButton"));

        verticalLayout_3->addWidget(upRadioButton);

        downRadioButton = new QRadioButton(groupBox);
        downRadioButton->setObjectName(QString::fromUtf8("downRadioButton"));
        downRadioButton->setChecked(true);

        verticalLayout_3->addWidget(downRadioButton);


        horizontalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(FindAndReplaceDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_4 = new QVBoxLayout(groupBox_2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        caseCheckBox = new QCheckBox(groupBox_2);
        caseCheckBox->setObjectName(QString::fromUtf8("caseCheckBox"));

        verticalLayout_4->addWidget(caseCheckBox);

        wholeCheckBox = new QCheckBox(groupBox_2);
        wholeCheckBox->setObjectName(QString::fromUtf8("wholeCheckBox"));

        verticalLayout_4->addWidget(wholeCheckBox);


        horizontalLayout->addWidget(groupBox_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_5->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout_5);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(10, -1, -1, -1);
        findButton = new QPushButton(FindAndReplaceDialog);
        findButton->setObjectName(QString::fromUtf8("findButton"));
        findButton->setEnabled(false);

        verticalLayout->addWidget(findButton);

        replaceButton = new QPushButton(FindAndReplaceDialog);
        replaceButton->setObjectName(QString::fromUtf8("replaceButton"));
        replaceButton->setEnabled(false);

        verticalLayout->addWidget(replaceButton);

        replaceAllButton = new QPushButton(FindAndReplaceDialog);
        replaceAllButton->setObjectName(QString::fromUtf8("replaceAllButton"));
        replaceAllButton->setEnabled(false);

        verticalLayout->addWidget(replaceAllButton);

        cancelButton = new QPushButton(FindAndReplaceDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        verticalLayout->addWidget(cancelButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout);

#if QT_CONFIG(shortcut)
        label->setBuddy(textToFind);
        replaceLabel->setBuddy(textToReplace);
#endif // QT_CONFIG(shortcut)

        retranslateUi(FindAndReplaceDialog);

        QMetaObject::connectSlotsByName(FindAndReplaceDialog);
    } // setupUi

    void retranslateUi(QDialog *FindAndReplaceDialog)
    {
        FindAndReplaceDialog->setWindowTitle(QCoreApplication::translate("FindAndReplaceDialog", "Find and Replace", nullptr));
        label->setText(QCoreApplication::translate("FindAndReplaceDialog", "&Find:", nullptr));
        replaceLabel->setText(QCoreApplication::translate("FindAndReplaceDialog", "R&eplace with:", nullptr));
        infoLabel->setText(QString());
        groupBox->setTitle(QCoreApplication::translate("FindAndReplaceDialog", "D&irection", nullptr));
        upRadioButton->setText(QCoreApplication::translate("FindAndReplaceDialog", "&Up", nullptr));
        downRadioButton->setText(QCoreApplication::translate("FindAndReplaceDialog", "&Down", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("FindAndReplaceDialog", "&Options", nullptr));
        caseCheckBox->setText(QCoreApplication::translate("FindAndReplaceDialog", "&Case sensitive", nullptr));
        wholeCheckBox->setText(QCoreApplication::translate("FindAndReplaceDialog", "&Whole words only", nullptr));
        findButton->setText(QCoreApplication::translate("FindAndReplaceDialog", "Find", nullptr));
        replaceButton->setText(QCoreApplication::translate("FindAndReplaceDialog", "Replace", nullptr));
        replaceAllButton->setText(QCoreApplication::translate("FindAndReplaceDialog", "Replace All", nullptr));
        cancelButton->setText(QCoreApplication::translate("FindAndReplaceDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FindAndReplaceDialog: public Ui_FindAndReplaceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDANDREPLACEDIALOG_H
