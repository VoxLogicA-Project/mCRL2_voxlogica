/********************************************************************************
** Form generated from reading UI file 'dofdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOFDIALOG_H
#define UI_DOFDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DofDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *colorLabel;
    QWidget *colorChooser;
    QVBoxLayout *verticalLayout_2;
    QLabel *opacityLabel;
    QWidget *opacityChooser;
    QVBoxLayout *verticalLayout_3;

    void setupUi(QDialog *DofDialog)
    {
        if (DofDialog->objectName().isEmpty())
            DofDialog->setObjectName(QString::fromUtf8("DofDialog"));
        DofDialog->resize(400, 300);
        verticalLayout = new QVBoxLayout(DofDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);

        verticalLayout->addLayout(formLayout);

        colorLabel = new QLabel(DofDialog);
        colorLabel->setObjectName(QString::fromUtf8("colorLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(colorLabel->sizePolicy().hasHeightForWidth());
        colorLabel->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(colorLabel);

        colorChooser = new QWidget(DofDialog);
        colorChooser->setObjectName(QString::fromUtf8("colorChooser"));
        verticalLayout_2 = new QVBoxLayout(colorChooser);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));

        verticalLayout->addWidget(colorChooser);

        opacityLabel = new QLabel(DofDialog);
        opacityLabel->setObjectName(QString::fromUtf8("opacityLabel"));
        sizePolicy.setHeightForWidth(opacityLabel->sizePolicy().hasHeightForWidth());
        opacityLabel->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(opacityLabel);

        opacityChooser = new QWidget(DofDialog);
        opacityChooser->setObjectName(QString::fromUtf8("opacityChooser"));
        verticalLayout_3 = new QVBoxLayout(opacityChooser);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));

        verticalLayout->addWidget(opacityChooser);


        retranslateUi(DofDialog);

        QMetaObject::connectSlotsByName(DofDialog);
    } // setupUi

    void retranslateUi(QDialog *DofDialog)
    {
        DofDialog->setWindowTitle(QCoreApplication::translate("DofDialog", "Degrees of freedom", nullptr));
        colorLabel->setText(QCoreApplication::translate("DofDialog", "Color", nullptr));
        opacityLabel->setText(QCoreApplication::translate("DofDialog", "Opacity", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DofDialog: public Ui_DofDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOFDIALOG_H
