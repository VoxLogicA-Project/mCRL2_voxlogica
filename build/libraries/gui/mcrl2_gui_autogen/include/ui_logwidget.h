/********************************************************************************
** Form generated from reading UI file 'logwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGWIDGET_H
#define UI_LOGWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LogWidget
{
public:
    QVBoxLayout *verticalLayout;
    QTextEdit *editOutput;

    void setupUi(QWidget *LogWidget)
    {
        if (LogWidget->objectName().isEmpty())
            LogWidget->setObjectName(QString::fromUtf8("LogWidget"));
        LogWidget->resize(274, 210);
        verticalLayout = new QVBoxLayout(LogWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        editOutput = new QTextEdit(LogWidget);
        editOutput->setObjectName(QString::fromUtf8("editOutput"));
        editOutput->setReadOnly(true);

        verticalLayout->addWidget(editOutput);


        retranslateUi(LogWidget);

        QMetaObject::connectSlotsByName(LogWidget);
    } // setupUi

    void retranslateUi(QWidget *LogWidget)
    {
        LogWidget->setWindowTitle(QCoreApplication::translate("LogWidget", "Output", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LogWidget: public Ui_LogWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGWIDGET_H
