/********************************************************************************
** Form generated from reading UI file 'addeditpropertydialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDEDITPROPERTYDIALOG_H
#define UI_ADDEDITPROPERTYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "addeditpropertydialog.h"
#include "mcrl2/gui/codeeditor.h"

QT_BEGIN_NAMESPACE

class Ui_AddEditPropertyDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *propertyNameWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *propertyNameLabel;
    QLineEdit *propertyNameField;
    QTabWidget *tabWidget;
    QWidget *mucalculusTab;
    QVBoxLayout *verticalLayout;
    QLabel *mcfLabel;
    mcrl2::gui::qt::CodeEditor *formulaTextField;
    QWidget *equivalenceTab;
    QVBoxLayout *verticalLayout_3;
    QLabel *equLabel1;
    mcrl2::gui::qt::CodeEditor *initTextField1;
    QLabel *equLabel2;
    EquivalenceComboBox *equivalenceComboBox;
    QLabel *equLabel3;
    mcrl2::gui::qt::CodeEditor *initTextField2;
    QWidget *buttonsWidget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *parseLabel;
    QPushButton *saveAndParseButton;
    QPushButton *saveAndCloseButton;
    QPushButton *closeButton;

    void setupUi(QDialog *AddEditPropertyDialog)
    {
        if (AddEditPropertyDialog->objectName().isEmpty())
            AddEditPropertyDialog->setObjectName(QString::fromUtf8("AddEditPropertyDialog"));
        AddEditPropertyDialog->resize(521, 461);
        verticalLayout_2 = new QVBoxLayout(AddEditPropertyDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        propertyNameWidget = new QWidget(AddEditPropertyDialog);
        propertyNameWidget->setObjectName(QString::fromUtf8("propertyNameWidget"));
        horizontalLayout = new QHBoxLayout(propertyNameWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        propertyNameLabel = new QLabel(propertyNameWidget);
        propertyNameLabel->setObjectName(QString::fromUtf8("propertyNameLabel"));

        horizontalLayout->addWidget(propertyNameLabel);

        propertyNameField = new QLineEdit(propertyNameWidget);
        propertyNameField->setObjectName(QString::fromUtf8("propertyNameField"));

        horizontalLayout->addWidget(propertyNameField);


        verticalLayout_2->addWidget(propertyNameWidget);

        tabWidget = new QTabWidget(AddEditPropertyDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        mucalculusTab = new QWidget();
        mucalculusTab->setObjectName(QString::fromUtf8("mucalculusTab"));
        verticalLayout = new QVBoxLayout(mucalculusTab);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mcfLabel = new QLabel(mucalculusTab);
        mcfLabel->setObjectName(QString::fromUtf8("mcfLabel"));

        verticalLayout->addWidget(mcfLabel);

        formulaTextField = new mcrl2::gui::qt::CodeEditor(mucalculusTab);
        formulaTextField->setObjectName(QString::fromUtf8("formulaTextField"));

        verticalLayout->addWidget(formulaTextField);

        tabWidget->addTab(mucalculusTab, QString());
        equivalenceTab = new QWidget();
        equivalenceTab->setObjectName(QString::fromUtf8("equivalenceTab"));
        verticalLayout_3 = new QVBoxLayout(equivalenceTab);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        equLabel1 = new QLabel(equivalenceTab);
        equLabel1->setObjectName(QString::fromUtf8("equLabel1"));

        verticalLayout_3->addWidget(equLabel1);

        initTextField1 = new mcrl2::gui::qt::CodeEditor(equivalenceTab);
        initTextField1->setObjectName(QString::fromUtf8("initTextField1"));

        verticalLayout_3->addWidget(initTextField1);

        equLabel2 = new QLabel(equivalenceTab);
        equLabel2->setObjectName(QString::fromUtf8("equLabel2"));

        verticalLayout_3->addWidget(equLabel2);

        equivalenceComboBox = new EquivalenceComboBox(equivalenceTab);
        equivalenceComboBox->setObjectName(QString::fromUtf8("equivalenceComboBox"));

        verticalLayout_3->addWidget(equivalenceComboBox);

        equLabel3 = new QLabel(equivalenceTab);
        equLabel3->setObjectName(QString::fromUtf8("equLabel3"));

        verticalLayout_3->addWidget(equLabel3);

        initTextField2 = new mcrl2::gui::qt::CodeEditor(equivalenceTab);
        initTextField2->setObjectName(QString::fromUtf8("initTextField2"));

        verticalLayout_3->addWidget(initTextField2);

        tabWidget->addTab(equivalenceTab, QString());

        verticalLayout_2->addWidget(tabWidget);

        buttonsWidget = new QWidget(AddEditPropertyDialog);
        buttonsWidget->setObjectName(QString::fromUtf8("buttonsWidget"));
        horizontalLayout_2 = new QHBoxLayout(buttonsWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        parseLabel = new QLabel(buttonsWidget);
        parseLabel->setObjectName(QString::fromUtf8("parseLabel"));

        horizontalLayout_2->addWidget(parseLabel);

        saveAndParseButton = new QPushButton(buttonsWidget);
        saveAndParseButton->setObjectName(QString::fromUtf8("saveAndParseButton"));

        horizontalLayout_2->addWidget(saveAndParseButton);

        saveAndCloseButton = new QPushButton(buttonsWidget);
        saveAndCloseButton->setObjectName(QString::fromUtf8("saveAndCloseButton"));

        horizontalLayout_2->addWidget(saveAndCloseButton);

        closeButton = new QPushButton(buttonsWidget);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));

        horizontalLayout_2->addWidget(closeButton);


        verticalLayout_2->addWidget(buttonsWidget);


        retranslateUi(AddEditPropertyDialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AddEditPropertyDialog);
    } // setupUi

    void retranslateUi(QDialog *AddEditPropertyDialog)
    {
        AddEditPropertyDialog->setWindowTitle(QCoreApplication::translate("AddEditPropertyDialog", "Dialog", nullptr));
        propertyNameLabel->setText(QCoreApplication::translate("AddEditPropertyDialog", "Name:", nullptr));
        mcfLabel->setText(QCoreApplication::translate("AddEditPropertyDialog", "Mu-calculus formula:", nullptr));
        formulaTextField->setPlaceholderText(QCoreApplication::translate("AddEditPropertyDialog", "Type your mu-calculus formula here", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(mucalculusTab), QCoreApplication::translate("AddEditPropertyDialog", "Mu-calculus", nullptr));
        equLabel1->setText(QCoreApplication::translate("AddEditPropertyDialog", "The process:", nullptr));
        initTextField1->setPlaceholderText(QCoreApplication::translate("AddEditPropertyDialog", "Type your process expression here", nullptr));
        equLabel2->setText(QCoreApplication::translate("AddEditPropertyDialog", "is equivalent under:", nullptr));
        equLabel3->setText(QCoreApplication::translate("AddEditPropertyDialog", "to the process:", nullptr));
        initTextField2->setPlaceholderText(QCoreApplication::translate("AddEditPropertyDialog", "Type your process expression here", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(equivalenceTab), QCoreApplication::translate("AddEditPropertyDialog", "Equivalence", nullptr));
        parseLabel->setText(QString());
        saveAndParseButton->setText(QCoreApplication::translate("AddEditPropertyDialog", " Save and Parse ", nullptr));
        saveAndCloseButton->setText(QCoreApplication::translate("AddEditPropertyDialog", " Save and Close ", nullptr));
        closeButton->setText(QCoreApplication::translate("AddEditPropertyDialog", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddEditPropertyDialog: public Ui_AddEditPropertyDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDEDITPROPERTYDIALOG_H
