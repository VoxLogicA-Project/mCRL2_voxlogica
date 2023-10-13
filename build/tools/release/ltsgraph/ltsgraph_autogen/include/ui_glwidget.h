/********************************************************************************
** Form generated from reading UI file 'glwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GLWIDGET_H
#define UI_GLWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GLWidget
{
public:
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnPaint;
    QPushButton *btnSelectColor;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelRadius;
    QSpinBox *spinRadius;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelFontSize;
    QSpinBox *spinFontSize;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *cbFog;
    QSpinBox *spinFog;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *cbTransitionLabels;
    QSpinBox *sb_transLabels;
    QHBoxLayout *horizontalLayout_6;
    QCheckBox *cbStateLabels;
    QSpinBox *sb_stateLabels;
    QHBoxLayout *horizontalLayout_7;
    QCheckBox *cbStateNumbers;
    QSpinBox *sb_stateNumbers;
    QCheckBox *cbSelfLoops;
    QCheckBox *cbInitial;
    QCheckBox *cbThreeDimensional;

    void setupUi(QDockWidget *GLWidget)
    {
        if (GLWidget->objectName().isEmpty())
            GLWidget->setObjectName(QString::fromUtf8("GLWidget"));
        GLWidget->resize(248, 345);
        QFont font;
        font.setBold(true);
        GLWidget->setFont(font);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        QFont font1;
        font1.setBold(false);
        dockWidgetContents->setFont(font1);
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        btnPaint = new QPushButton(dockWidgetContents);
        btnPaint->setObjectName(QString::fromUtf8("btnPaint"));
        btnPaint->setCheckable(true);
        btnPaint->setChecked(false);

        horizontalLayout->addWidget(btnPaint);

        btnSelectColor = new QPushButton(dockWidgetContents);
        btnSelectColor->setObjectName(QString::fromUtf8("btnSelectColor"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnSelectColor->sizePolicy().hasHeightForWidth());
        btnSelectColor->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(btnSelectColor);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        labelRadius = new QLabel(dockWidgetContents);
        labelRadius->setObjectName(QString::fromUtf8("labelRadius"));

        horizontalLayout_2->addWidget(labelRadius);

        spinRadius = new QSpinBox(dockWidgetContents);
        spinRadius->setObjectName(QString::fromUtf8("spinRadius"));
        sizePolicy.setHeightForWidth(spinRadius->sizePolicy().hasHeightForWidth());
        spinRadius->setSizePolicy(sizePolicy);
        spinRadius->setMinimumSize(QSize(80, 0));
        spinRadius->setMinimum(1);
        spinRadius->setMaximum(50);
        spinRadius->setValue(20);

        horizontalLayout_2->addWidget(spinRadius);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        labelFontSize = new QLabel(dockWidgetContents);
        labelFontSize->setObjectName(QString::fromUtf8("labelFontSize"));

        horizontalLayout_3->addWidget(labelFontSize);

        spinFontSize = new QSpinBox(dockWidgetContents);
        spinFontSize->setObjectName(QString::fromUtf8("spinFontSize"));
        sizePolicy.setHeightForWidth(spinFontSize->sizePolicy().hasHeightForWidth());
        spinFontSize->setSizePolicy(sizePolicy);
        spinFontSize->setMinimumSize(QSize(80, 0));
        spinFontSize->setMinimum(1);
        spinFontSize->setMaximum(50);
        spinFontSize->setValue(16);

        horizontalLayout_3->addWidget(spinFontSize);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        cbFog = new QCheckBox(dockWidgetContents);
        cbFog->setObjectName(QString::fromUtf8("cbFog"));
        cbFog->setChecked(true);

        horizontalLayout_4->addWidget(cbFog);

        spinFog = new QSpinBox(dockWidgetContents);
        spinFog->setObjectName(QString::fromUtf8("spinFog"));
        sizePolicy.setHeightForWidth(spinFog->sizePolicy().hasHeightForWidth());
        spinFog->setSizePolicy(sizePolicy);
        spinFog->setMinimumSize(QSize(80, 0));
        spinFog->setMaximum(10000);
        spinFog->setSingleStep(100);
        spinFog->setValue(5500);

        horizontalLayout_4->addWidget(spinFog);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        cbTransitionLabels = new QCheckBox(dockWidgetContents);
        cbTransitionLabels->setObjectName(QString::fromUtf8("cbTransitionLabels"));
        cbTransitionLabels->setChecked(true);

        horizontalLayout_5->addWidget(cbTransitionLabels);

        sb_transLabels = new QSpinBox(dockWidgetContents);
        sb_transLabels->setObjectName(QString::fromUtf8("sb_transLabels"));
        sizePolicy.setHeightForWidth(sb_transLabels->sizePolicy().hasHeightForWidth());
        sb_transLabels->setSizePolicy(sizePolicy);
        sb_transLabels->setMinimumSize(QSize(80, 0));
        sb_transLabels->setMaximum(9999999);

        horizontalLayout_5->addWidget(sb_transLabels);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        cbStateLabels = new QCheckBox(dockWidgetContents);
        cbStateLabels->setObjectName(QString::fromUtf8("cbStateLabels"));
        cbStateLabels->setChecked(false);

        horizontalLayout_6->addWidget(cbStateLabels);

        sb_stateLabels = new QSpinBox(dockWidgetContents);
        sb_stateLabels->setObjectName(QString::fromUtf8("sb_stateLabels"));
        sizePolicy.setHeightForWidth(sb_stateLabels->sizePolicy().hasHeightForWidth());
        sb_stateLabels->setSizePolicy(sizePolicy);
        sb_stateLabels->setMinimumSize(QSize(80, 0));
        sb_stateLabels->setMaximum(9999999);

        horizontalLayout_6->addWidget(sb_stateLabels);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        cbStateNumbers = new QCheckBox(dockWidgetContents);
        cbStateNumbers->setObjectName(QString::fromUtf8("cbStateNumbers"));

        horizontalLayout_7->addWidget(cbStateNumbers);

        sb_stateNumbers = new QSpinBox(dockWidgetContents);
        sb_stateNumbers->setObjectName(QString::fromUtf8("sb_stateNumbers"));
        sizePolicy.setHeightForWidth(sb_stateNumbers->sizePolicy().hasHeightForWidth());
        sb_stateNumbers->setSizePolicy(sizePolicy);
        sb_stateNumbers->setMinimumSize(QSize(80, 0));
        sb_stateNumbers->setMaximum(9999999);

        horizontalLayout_7->addWidget(sb_stateNumbers);


        verticalLayout->addLayout(horizontalLayout_7);

        cbSelfLoops = new QCheckBox(dockWidgetContents);
        cbSelfLoops->setObjectName(QString::fromUtf8("cbSelfLoops"));
        cbSelfLoops->setChecked(true);

        verticalLayout->addWidget(cbSelfLoops);

        cbInitial = new QCheckBox(dockWidgetContents);
        cbInitial->setObjectName(QString::fromUtf8("cbInitial"));
        cbInitial->setChecked(true);

        verticalLayout->addWidget(cbInitial);

        cbThreeDimensional = new QCheckBox(dockWidgetContents);
        cbThreeDimensional->setObjectName(QString::fromUtf8("cbThreeDimensional"));

        verticalLayout->addWidget(cbThreeDimensional);

        GLWidget->setWidget(dockWidgetContents);

        retranslateUi(GLWidget);

        QMetaObject::connectSlotsByName(GLWidget);
    } // setupUi

    void retranslateUi(QDockWidget *GLWidget)
    {
        GLWidget->setWindowTitle(QCoreApplication::translate("GLWidget", "Visualisation", nullptr));
        btnPaint->setText(QCoreApplication::translate("GLWidget", "Enable painting", nullptr));
        btnSelectColor->setText(QString());
        labelRadius->setText(QCoreApplication::translate("GLWidget", "State radius:", nullptr));
        labelFontSize->setText(QCoreApplication::translate("GLWidget", "Font size:", nullptr));
        cbFog->setText(QCoreApplication::translate("GLWidget", "Show fog at:", nullptr));
        cbTransitionLabels->setText(QCoreApplication::translate("GLWidget", "Transition labels:", nullptr));
#if QT_CONFIG(tooltip)
        sb_transLabels->setToolTip(QCoreApplication::translate("GLWidget", "<html><head/><body><p>The number of transition labels that are shown.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        cbStateLabels->setText(QCoreApplication::translate("GLWidget", "State labels:", nullptr));
#if QT_CONFIG(tooltip)
        sb_stateLabels->setToolTip(QCoreApplication::translate("GLWidget", "<html><head/><body><p>The number of state labels that are shown.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        cbStateNumbers->setText(QCoreApplication::translate("GLWidget", "State numbers:", nullptr));
#if QT_CONFIG(tooltip)
        sb_stateNumbers->setToolTip(QCoreApplication::translate("GLWidget", "<html><head/><body><p>The number of state numbers that are shown.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        cbSelfLoops->setText(QCoreApplication::translate("GLWidget", "Show self loops", nullptr));
        cbInitial->setText(QCoreApplication::translate("GLWidget", "Mark initial state", nullptr));
        cbThreeDimensional->setText(QCoreApplication::translate("GLWidget", "3D", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GLWidget: public Ui_GLWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GLWIDGET_H
