/********************************************************************************
** Form generated from reading UI file 'copydialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COPYDIALOG_H
#define UI_COPYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CopyDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *lblCopy;
    QProgressBar *pbFiles;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CopyDialog)
    {
        if (CopyDialog->objectName().isEmpty())
            CopyDialog->setObjectName(QString::fromUtf8("CopyDialog"));
        CopyDialog->resize(400, 100);
        CopyDialog->setMaximumSize(QSize(16777215, 100));
        verticalLayout = new QVBoxLayout(CopyDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lblCopy = new QLabel(CopyDialog);
        lblCopy->setObjectName(QString::fromUtf8("lblCopy"));

        verticalLayout->addWidget(lblCopy);

        pbFiles = new QProgressBar(CopyDialog);
        pbFiles->setObjectName(QString::fromUtf8("pbFiles"));
        pbFiles->setValue(0);
        pbFiles->setTextVisible(true);

        verticalLayout->addWidget(pbFiles);

        buttonBox = new QDialogButtonBox(CopyDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(CopyDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), CopyDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CopyDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(CopyDialog);
    } // setupUi

    void retranslateUi(QDialog *CopyDialog)
    {
        CopyDialog->setWindowTitle(QCoreApplication::translate("CopyDialog", "Dialog", nullptr));
        lblCopy->setText(QCoreApplication::translate("CopyDialog", "Copying:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CopyDialog: public Ui_CopyDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COPYDIALOG_H
