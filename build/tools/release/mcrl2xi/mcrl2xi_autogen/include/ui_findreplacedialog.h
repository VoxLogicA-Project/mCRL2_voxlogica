/********************************************************************************
** Form generated from reading UI file 'findreplacedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDREPLACEDIALOG_H
#define UI_FINDREPLACEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
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

class Ui_FindReplaceDialog
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
    QLabel *errorLabel;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *downRadioButton;
    QRadioButton *upRadioButton;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *caseCheckBox;
    QCheckBox *wholeCheckBox;
    QVBoxLayout *verticalLayout;
    QPushButton *findButton;
    QPushButton *closeButton;
    QPushButton *replaceButton;
    QPushButton *replaceAllButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *FindReplaceDialog)
    {
        if (FindReplaceDialog->objectName().isEmpty())
            FindReplaceDialog->setObjectName(QString::fromUtf8("FindReplaceDialog"));
        FindReplaceDialog->resize(350, 170);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/mcrl2xi/icons/mcrl2xi.ico"), QSize(), QIcon::Normal, QIcon::Off);
        FindReplaceDialog->setWindowIcon(icon);
        horizontalLayout_2 = new QHBoxLayout(FindReplaceDialog);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label = new QLabel(FindReplaceDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        textToFind = new QLineEdit(FindReplaceDialog);
        textToFind->setObjectName(QString::fromUtf8("textToFind"));

        gridLayout_3->addWidget(textToFind, 0, 1, 1, 1);

        replaceLabel = new QLabel(FindReplaceDialog);
        replaceLabel->setObjectName(QString::fromUtf8("replaceLabel"));

        gridLayout_3->addWidget(replaceLabel, 1, 0, 1, 1);

        textToReplace = new QLineEdit(FindReplaceDialog);
        textToReplace->setObjectName(QString::fromUtf8("textToReplace"));

        gridLayout_3->addWidget(textToReplace, 1, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout_3);


        verticalLayout_5->addLayout(verticalLayout_2);

        errorLabel = new QLabel(FindReplaceDialog);
        errorLabel->setObjectName(QString::fromUtf8("errorLabel"));

        verticalLayout_5->addWidget(errorLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox = new QGroupBox(FindReplaceDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        downRadioButton = new QRadioButton(groupBox);
        downRadioButton->setObjectName(QString::fromUtf8("downRadioButton"));
        downRadioButton->setChecked(true);

        verticalLayout_3->addWidget(downRadioButton);

        upRadioButton = new QRadioButton(groupBox);
        upRadioButton->setObjectName(QString::fromUtf8("upRadioButton"));

        verticalLayout_3->addWidget(upRadioButton);


        horizontalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(FindReplaceDialog);
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


        verticalLayout_5->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout_5);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(10, -1, -1, -1);
        findButton = new QPushButton(FindReplaceDialog);
        findButton->setObjectName(QString::fromUtf8("findButton"));
        findButton->setEnabled(false);

        verticalLayout->addWidget(findButton);

        closeButton = new QPushButton(FindReplaceDialog);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));

        verticalLayout->addWidget(closeButton);

        replaceButton = new QPushButton(FindReplaceDialog);
        replaceButton->setObjectName(QString::fromUtf8("replaceButton"));
        replaceButton->setEnabled(false);

        verticalLayout->addWidget(replaceButton);

        replaceAllButton = new QPushButton(FindReplaceDialog);
        replaceAllButton->setObjectName(QString::fromUtf8("replaceAllButton"));
        replaceAllButton->setEnabled(true);

        verticalLayout->addWidget(replaceAllButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout);

#if QT_CONFIG(shortcut)
        label->setBuddy(textToFind);
        replaceLabel->setBuddy(textToReplace);
#endif // QT_CONFIG(shortcut)

        retranslateUi(FindReplaceDialog);

        QMetaObject::connectSlotsByName(FindReplaceDialog);
    } // setupUi

    void retranslateUi(QDialog *FindReplaceDialog)
    {
        FindReplaceDialog->setWindowTitle(QCoreApplication::translate("FindReplaceDialog", "Find and Replace", nullptr));
        label->setText(QCoreApplication::translate("FindReplaceDialog", "&Find:", nullptr));
        replaceLabel->setText(QCoreApplication::translate("FindReplaceDialog", "R&eplace with:", nullptr));
        errorLabel->setText(QCoreApplication::translate("FindReplaceDialog", "errorLabel", nullptr));
        groupBox->setTitle(QCoreApplication::translate("FindReplaceDialog", "D&irection", nullptr));
        downRadioButton->setText(QCoreApplication::translate("FindReplaceDialog", "&Down", nullptr));
        upRadioButton->setText(QCoreApplication::translate("FindReplaceDialog", "&Up", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("FindReplaceDialog", "&Options", nullptr));
        caseCheckBox->setText(QCoreApplication::translate("FindReplaceDialog", "&Case sensitive", nullptr));
        wholeCheckBox->setText(QCoreApplication::translate("FindReplaceDialog", "&Whole words only", nullptr));
        findButton->setText(QCoreApplication::translate("FindReplaceDialog", "&Find", nullptr));
        closeButton->setText(QCoreApplication::translate("FindReplaceDialog", "&Close", nullptr));
        replaceButton->setText(QCoreApplication::translate("FindReplaceDialog", "&Replace", nullptr));
        replaceAllButton->setText(QCoreApplication::translate("FindReplaceDialog", "Replace &All", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FindReplaceDialog: public Ui_FindReplaceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDREPLACEDIALOG_H
