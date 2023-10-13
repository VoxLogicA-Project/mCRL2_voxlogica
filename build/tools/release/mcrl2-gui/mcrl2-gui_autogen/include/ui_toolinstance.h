/********************************************************************************
** Form generated from reading UI file 'toolinstance.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOOLINSTANCE_H
#define UI_TOOLINSTANCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ToolInstance
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnRun;
    QPushButton *btnAbort;
    QLabel *lblState;
    QSpacerItem *horizontalSpacer_2;
    QTabWidget *tabWidget;
    QWidget *tabConfig;
    QVBoxLayout *verticalLayout_3;
    QFormLayout *frmOptions;
    QLabel *lblDirectory;
    QLabel *lblDirectoryValue;
    QLabel *lblFile;
    QLabel *lblFileValue;
    QLabel *lblFileOut;
    QWidget *pckFileOut;
    QVBoxLayout *verticalLayout_5;
    QLabel *lblFileIn;
    QWidget *pckFileIn;
    QVBoxLayout *verticalLayout_8;
    QScrollArea *scrollArea;
    QWidget *scrollWidget;
    QWidget *tabLogging;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *edtOutput;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnClear;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnSave;

    void setupUi(QWidget *ToolInstance)
    {
        if (ToolInstance->objectName().isEmpty())
            ToolInstance->setObjectName(QString::fromUtf8("ToolInstance"));
        ToolInstance->resize(760, 304);
        verticalLayout = new QVBoxLayout(ToolInstance);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 9, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        btnRun = new QPushButton(ToolInstance);
        btnRun->setObjectName(QString::fromUtf8("btnRun"));

        horizontalLayout_2->addWidget(btnRun);

        btnAbort = new QPushButton(ToolInstance);
        btnAbort->setObjectName(QString::fromUtf8("btnAbort"));
        btnAbort->setEnabled(false);

        horizontalLayout_2->addWidget(btnAbort);

        lblState = new QLabel(ToolInstance);
        lblState->setObjectName(QString::fromUtf8("lblState"));

        horizontalLayout_2->addWidget(lblState);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        tabWidget = new QTabWidget(ToolInstance);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setTabPosition(QTabWidget::South);
        tabConfig = new QWidget();
        tabConfig->setObjectName(QString::fromUtf8("tabConfig"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabConfig->sizePolicy().hasHeightForWidth());
        tabConfig->setSizePolicy(sizePolicy);
        verticalLayout_3 = new QVBoxLayout(tabConfig);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(10, 10, 10, 10);
        frmOptions = new QFormLayout();
        frmOptions->setObjectName(QString::fromUtf8("frmOptions"));
        frmOptions->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        lblDirectory = new QLabel(tabConfig);
        lblDirectory->setObjectName(QString::fromUtf8("lblDirectory"));

        frmOptions->setWidget(0, QFormLayout::LabelRole, lblDirectory);

        lblDirectoryValue = new QLabel(tabConfig);
        lblDirectoryValue->setObjectName(QString::fromUtf8("lblDirectoryValue"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lblDirectoryValue->sizePolicy().hasHeightForWidth());
        lblDirectoryValue->setSizePolicy(sizePolicy1);

        frmOptions->setWidget(0, QFormLayout::FieldRole, lblDirectoryValue);

        lblFile = new QLabel(tabConfig);
        lblFile->setObjectName(QString::fromUtf8("lblFile"));

        frmOptions->setWidget(1, QFormLayout::LabelRole, lblFile);

        lblFileValue = new QLabel(tabConfig);
        lblFileValue->setObjectName(QString::fromUtf8("lblFileValue"));

        frmOptions->setWidget(1, QFormLayout::FieldRole, lblFileValue);

        lblFileOut = new QLabel(tabConfig);
        lblFileOut->setObjectName(QString::fromUtf8("lblFileOut"));

        frmOptions->setWidget(2, QFormLayout::LabelRole, lblFileOut);

        pckFileOut = new QWidget(tabConfig);
        pckFileOut->setObjectName(QString::fromUtf8("pckFileOut"));
        verticalLayout_5 = new QVBoxLayout(pckFileOut);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);

        frmOptions->setWidget(2, QFormLayout::FieldRole, pckFileOut);

        lblFileIn = new QLabel(tabConfig);
        lblFileIn->setObjectName(QString::fromUtf8("lblFileIn"));

        frmOptions->setWidget(3, QFormLayout::LabelRole, lblFileIn);

        pckFileIn = new QWidget(tabConfig);
        pckFileIn->setObjectName(QString::fromUtf8("pckFileIn"));
        verticalLayout_8 = new QVBoxLayout(pckFileIn);
        verticalLayout_8->setSpacing(0);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);

        frmOptions->setWidget(3, QFormLayout::FieldRole, pckFileIn);


        verticalLayout_3->addLayout(frmOptions);

        scrollArea = new QScrollArea(tabConfig);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollWidget = new QWidget();
        scrollWidget->setObjectName(QString::fromUtf8("scrollWidget"));
        scrollWidget->setGeometry(QRect(0, 0, 732, 94));
        scrollArea->setWidget(scrollWidget);

        verticalLayout_3->addWidget(scrollArea);

        tabWidget->addTab(tabConfig, QString());
        tabLogging = new QWidget();
        tabLogging->setObjectName(QString::fromUtf8("tabLogging"));
        verticalLayout_2 = new QVBoxLayout(tabLogging);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        edtOutput = new QTextEdit(tabLogging);
        edtOutput->setObjectName(QString::fromUtf8("edtOutput"));
        edtOutput->setTabChangesFocus(true);
        edtOutput->setReadOnly(true);

        verticalLayout_2->addWidget(edtOutput);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnClear = new QPushButton(tabLogging);
        btnClear->setObjectName(QString::fromUtf8("btnClear"));

        horizontalLayout->addWidget(btnClear);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnSave = new QPushButton(tabLogging);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));

        horizontalLayout->addWidget(btnSave);


        verticalLayout_2->addLayout(horizontalLayout);

        tabWidget->addTab(tabLogging, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(ToolInstance);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ToolInstance);
    } // setupUi

    void retranslateUi(QWidget *ToolInstance)
    {
        ToolInstance->setWindowTitle(QCoreApplication::translate("ToolInstance", "Form", nullptr));
        btnRun->setText(QCoreApplication::translate("ToolInstance", "Run", nullptr));
        btnAbort->setText(QCoreApplication::translate("ToolInstance", "Abort", nullptr));
        lblState->setText(QString());
        lblDirectory->setText(QCoreApplication::translate("ToolInstance", "Working directory:", nullptr));
        lblFile->setText(QCoreApplication::translate("ToolInstance", "Input file:", nullptr));
        lblFileValue->setText(QString());
        lblFileOut->setText(QCoreApplication::translate("ToolInstance", "Output file:", nullptr));
        lblFileIn->setText(QCoreApplication::translate("ToolInstance", "Input file #2:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabConfig), QCoreApplication::translate("ToolInstance", "Configuration", nullptr));
        btnClear->setText(QCoreApplication::translate("ToolInstance", "Clear Output", nullptr));
        btnSave->setText(QCoreApplication::translate("ToolInstance", "Save Output", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabLogging), QCoreApplication::translate("ToolInstance", "Logging", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ToolInstance: public Ui_ToolInstance {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOOLINSTANCE_H
