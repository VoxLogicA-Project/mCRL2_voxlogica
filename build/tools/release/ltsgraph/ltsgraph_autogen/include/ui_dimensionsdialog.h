/********************************************************************************
** Form generated from reading UI file 'dimensionsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIMENSIONSDIALOG_H
#define UI_DIMENSIONSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DimensionsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *labelWidth;
    QSpinBox *spinWidth;
    QSpinBox *spinHeight;
    QLabel *labelHeight;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DimensionsDialog)
    {
        if (DimensionsDialog->objectName().isEmpty())
            DimensionsDialog->setObjectName(QString::fromUtf8("DimensionsDialog"));
        DimensionsDialog->resize(300, 150);
        DimensionsDialog->setMinimumSize(QSize(200, 120));
        DimensionsDialog->setMaximumSize(QSize(300, 150));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/ltsgraph/icons/ltsgraph.ico"), QSize(), QIcon::Normal, QIcon::Off);
        DimensionsDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(DimensionsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        labelWidth = new QLabel(DimensionsDialog);
        labelWidth->setObjectName(QString::fromUtf8("labelWidth"));

        gridLayout->addWidget(labelWidth, 0, 0, 1, 1);

        spinWidth = new QSpinBox(DimensionsDialog);
        spinWidth->setObjectName(QString::fromUtf8("spinWidth"));
        spinWidth->setMinimum(64);
        spinWidth->setMaximum(8192);
        spinWidth->setSingleStep(64);
        spinWidth->setValue(1024);

        gridLayout->addWidget(spinWidth, 0, 1, 1, 1);

        spinHeight = new QSpinBox(DimensionsDialog);
        spinHeight->setObjectName(QString::fromUtf8("spinHeight"));
        spinHeight->setMinimum(64);
        spinHeight->setMaximum(8192);
        spinHeight->setSingleStep(64);
        spinHeight->setValue(768);

        gridLayout->addWidget(spinHeight, 1, 1, 1, 1);

        labelHeight = new QLabel(DimensionsDialog);
        labelHeight->setObjectName(QString::fromUtf8("labelHeight"));

        gridLayout->addWidget(labelHeight, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        buttonBox = new QDialogButtonBox(DimensionsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(DimensionsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), DimensionsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DimensionsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(DimensionsDialog);
    } // setupUi

    void retranslateUi(QDialog *DimensionsDialog)
    {
        DimensionsDialog->setWindowTitle(QCoreApplication::translate("DimensionsDialog", "Specify Dimensions", nullptr));
        labelWidth->setText(QCoreApplication::translate("DimensionsDialog", "Width", nullptr));
        labelHeight->setText(QCoreApplication::translate("DimensionsDialog", "Height", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DimensionsDialog: public Ui_DimensionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIMENSIONSDIALOG_H
