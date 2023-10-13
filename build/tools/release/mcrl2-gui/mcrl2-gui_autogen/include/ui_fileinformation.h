/********************************************************************************
** Form generated from reading UI file 'fileinformation.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILEINFORMATION_H
#define UI_FILEINFORMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FileInformation
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *lblProperties;
    QFormLayout *formLayout;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *FileInformation)
    {
        if (FileInformation->objectName().isEmpty())
            FileInformation->setObjectName(QString::fromUtf8("FileInformation"));
        FileInformation->resize(400, 300);
        verticalLayout = new QVBoxLayout(FileInformation);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lblProperties = new QLabel(FileInformation);
        lblProperties->setObjectName(QString::fromUtf8("lblProperties"));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        lblProperties->setFont(font);

        verticalLayout->addWidget(lblProperties);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));

        verticalLayout->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(FileInformation);

        QMetaObject::connectSlotsByName(FileInformation);
    } // setupUi

    void retranslateUi(QWidget *FileInformation)
    {
        FileInformation->setWindowTitle(QCoreApplication::translate("FileInformation", "Form", nullptr));
        lblProperties->setText(QCoreApplication::translate("FileInformation", "Properties", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FileInformation: public Ui_FileInformation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILEINFORMATION_H
