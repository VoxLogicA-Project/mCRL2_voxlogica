/********************************************************************************
** Form generated from reading UI file 'savepicturedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVEPICTUREDIALOG_H
#define UI_SAVEPICTUREDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SavePictureDialog
{
public:
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QSpinBox *width;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QSpinBox *height;
    QCheckBox *maintainAspectRatio;
    QSpacerItem *verticalSpacer;
    QFrame *line;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SavePictureDialog)
    {
        if (SavePictureDialog->objectName().isEmpty())
            SavePictureDialog->setObjectName(QString::fromUtf8("SavePictureDialog"));
        SavePictureDialog->resize(326, 156);
        horizontalLayout_2 = new QHBoxLayout(SavePictureDialog);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(SavePictureDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        width = new QSpinBox(SavePictureDialog);
        width->setObjectName(QString::fromUtf8("width"));
        width->setMinimum(1);
        width->setMaximum(100000);

        gridLayout->addWidget(width, 0, 2, 1, 1);

        label_2 = new QLabel(SavePictureDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 1, 1, 1);

        height = new QSpinBox(SavePictureDialog);
        height->setObjectName(QString::fromUtf8("height"));
        height->setMinimum(1);
        height->setMaximum(100000);

        gridLayout->addWidget(height, 1, 2, 1, 1);

        maintainAspectRatio = new QCheckBox(SavePictureDialog);
        maintainAspectRatio->setObjectName(QString::fromUtf8("maintainAspectRatio"));
        maintainAspectRatio->setChecked(true);

        gridLayout->addWidget(maintainAspectRatio, 2, 0, 1, 3);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        line = new QFrame(SavePictureDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        buttonBox = new QDialogButtonBox(SavePictureDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout);

#if QT_CONFIG(shortcut)
        label->setBuddy(width);
        label_2->setBuddy(height);
#endif // QT_CONFIG(shortcut)

        retranslateUi(SavePictureDialog);

        QMetaObject::connectSlotsByName(SavePictureDialog);
    } // setupUi

    void retranslateUi(QDialog *SavePictureDialog)
    {
        SavePictureDialog->setWindowTitle(QCoreApplication::translate("SavePictureDialog", "Save picture", nullptr));
        label->setText(QCoreApplication::translate("SavePictureDialog", "Width:", nullptr));
        label_2->setText(QCoreApplication::translate("SavePictureDialog", "Height:", nullptr));
        maintainAspectRatio->setText(QCoreApplication::translate("SavePictureDialog", "Maintain aspect ratio", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SavePictureDialog: public Ui_SavePictureDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVEPICTUREDIALOG_H
