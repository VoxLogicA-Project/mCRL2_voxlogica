/********************************************************************************
** Form generated from reading UI file 'filepicker.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILEPICKER_H
#define UI_FILEPICKER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FilePicker
{
public:
    QHBoxLayout *horizontalLayout;
    QLineEdit *value;
    QPushButton *btnBrowse;

    void setupUi(QWidget *FilePicker)
    {
        if (FilePicker->objectName().isEmpty())
            FilePicker->setObjectName(QString::fromUtf8("FilePicker"));
        FilePicker->resize(300, 23);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(FilePicker->sizePolicy().hasHeightForWidth());
        FilePicker->setSizePolicy(sizePolicy);
        FilePicker->setMinimumSize(QSize(300, 0));
        FilePicker->setAcceptDrops(true);
        horizontalLayout = new QHBoxLayout(FilePicker);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        value = new QLineEdit(FilePicker);
        value->setObjectName(QString::fromUtf8("value"));

        horizontalLayout->addWidget(value);

        btnBrowse = new QPushButton(FilePicker);
        btnBrowse->setObjectName(QString::fromUtf8("btnBrowse"));

        horizontalLayout->addWidget(btnBrowse);


        retranslateUi(FilePicker);

        QMetaObject::connectSlotsByName(FilePicker);
    } // setupUi

    void retranslateUi(QWidget *FilePicker)
    {
        FilePicker->setWindowTitle(QCoreApplication::translate("FilePicker", "Form", nullptr));
        btnBrowse->setText(QCoreApplication::translate("FilePicker", "Browse", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FilePicker: public Ui_FilePicker {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILEPICKER_H
