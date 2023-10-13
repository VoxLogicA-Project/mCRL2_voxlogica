/********************************************************************************
** Form generated from reading UI file 'springlayout.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPRINGLAYOUT_H
#define UI_SPRINGLAYOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DockWidgetLayout
{
public:
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QLabel *lblAttract;
    QLabel *lbl_attractRepulse;
    QLabel *lblRepulse;
    QSlider *sldBalance;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lblHandleWeight;
    QLabel *dispHandleWeight;
    QSlider *sldHandleWeight;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *lblNatLength;
    QLabel *dispNatLength;
    QSlider *sldNatLength;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnStartStop;
    QLabel *lblStable;

    void setupUi(QDockWidget *DockWidgetLayout)
    {
        if (DockWidgetLayout->objectName().isEmpty())
            DockWidgetLayout->setObjectName(QString::fromUtf8("DockWidgetLayout"));
        DockWidgetLayout->resize(229, 219);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DockWidgetLayout->sizePolicy().hasHeightForWidth());
        DockWidgetLayout->setSizePolicy(sizePolicy);
        QFont font;
        font.setBold(true);
        DockWidgetLayout->setFont(font);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        QFont font1;
        font1.setBold(false);
        dockWidgetContents->setFont(font1);
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(dockWidgetContents);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 1, -1, 1);
        lblAttract = new QLabel(frame);
        lblAttract->setObjectName(QString::fromUtf8("lblAttract"));

        horizontalLayout->addWidget(lblAttract);

        lbl_attractRepulse = new QLabel(frame);
        lbl_attractRepulse->setObjectName(QString::fromUtf8("lbl_attractRepulse"));
        lbl_attractRepulse->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(lbl_attractRepulse);

        lblRepulse = new QLabel(frame);
        lblRepulse->setObjectName(QString::fromUtf8("lblRepulse"));
        lblRepulse->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lblRepulse->setMargin(0);

        horizontalLayout->addWidget(lblRepulse);


        verticalLayout->addWidget(frame);

        sldBalance = new QSlider(dockWidgetContents);
        sldBalance->setObjectName(QString::fromUtf8("sldBalance"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(sldBalance->sizePolicy().hasHeightForWidth());
        sldBalance->setSizePolicy(sizePolicy1);
        sldBalance->setMaximum(100);
        sldBalance->setOrientation(Qt::Horizontal);
        sldBalance->setTickPosition(QSlider::TicksBelow);
        sldBalance->setTickInterval(25);

        verticalLayout->addWidget(sldBalance);

        frame_4 = new QFrame(dockWidgetContents);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_4);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(9, 1, -1, 1);
        lblHandleWeight = new QLabel(frame_4);
        lblHandleWeight->setObjectName(QString::fromUtf8("lblHandleWeight"));

        horizontalLayout_3->addWidget(lblHandleWeight);

        dispHandleWeight = new QLabel(frame_4);
        dispHandleWeight->setObjectName(QString::fromUtf8("dispHandleWeight"));
        dispHandleWeight->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(dispHandleWeight);


        verticalLayout->addWidget(frame_4);

        sldHandleWeight = new QSlider(dockWidgetContents);
        sldHandleWeight->setObjectName(QString::fromUtf8("sldHandleWeight"));
        sldHandleWeight->setMaximum(100);
        sldHandleWeight->setOrientation(Qt::Horizontal);
        sldHandleWeight->setTickPosition(QSlider::TicksBelow);
        sldHandleWeight->setTickInterval(25);

        verticalLayout->addWidget(sldHandleWeight);

        frame_3 = new QFrame(dockWidgetContents);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(9, 1, -1, 1);
        lblNatLength = new QLabel(frame_3);
        lblNatLength->setObjectName(QString::fromUtf8("lblNatLength"));

        horizontalLayout_4->addWidget(lblNatLength);

        dispNatLength = new QLabel(frame_3);
        dispNatLength->setObjectName(QString::fromUtf8("dispNatLength"));
        dispNatLength->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(dispNatLength);


        verticalLayout->addWidget(frame_3);

        sldNatLength = new QSlider(dockWidgetContents);
        sldNatLength->setObjectName(QString::fromUtf8("sldNatLength"));
        sldNatLength->setMinimum(1);
        sldNatLength->setMaximum(100);
        sldNatLength->setOrientation(Qt::Horizontal);
        sldNatLength->setTickPosition(QSlider::TicksBelow);
        sldNatLength->setTickInterval(25);

        verticalLayout->addWidget(sldNatLength);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        btnStartStop = new QPushButton(dockWidgetContents);
        btnStartStop->setObjectName(QString::fromUtf8("btnStartStop"));

        horizontalLayout_2->addWidget(btnStartStop);

        lblStable = new QLabel(dockWidgetContents);
        lblStable->setObjectName(QString::fromUtf8("lblStable"));

        horizontalLayout_2->addWidget(lblStable);


        verticalLayout->addLayout(horizontalLayout_2);

        DockWidgetLayout->setWidget(dockWidgetContents);

        retranslateUi(DockWidgetLayout);
        QObject::connect(sldBalance, SIGNAL(valueChanged(int)), DockWidgetLayout, SLOT(onAttractionChanged(int)));
        QObject::connect(sldHandleWeight, SIGNAL(valueChanged(int)), DockWidgetLayout, SLOT(onHandleWeightChanged(int)));
        QObject::connect(sldNatLength, SIGNAL(valueChanged(int)), DockWidgetLayout, SLOT(onNatLengthChanged(int)));
        QObject::connect(btnStartStop, SIGNAL(clicked()), DockWidgetLayout, SLOT(onStartStop()));
        QObject::connect(sldBalance, SIGNAL(valueChanged(int)), DockWidgetLayout, SLOT(onRepulsionChanged(int)));

        QMetaObject::connectSlotsByName(DockWidgetLayout);
    } // setupUi

    void retranslateUi(QDockWidget *DockWidgetLayout)
    {
        DockWidgetLayout->setWindowTitle(QCoreApplication::translate("DockWidgetLayout", "Layout control", nullptr));
        lblAttract->setText(QCoreApplication::translate("DockWidgetLayout", "Attract", nullptr));
        lbl_attractRepulse->setText(QCoreApplication::translate("DockWidgetLayout", "0", nullptr));
        lblRepulse->setText(QCoreApplication::translate("DockWidgetLayout", "Repulse", nullptr));
        lblHandleWeight->setText(QCoreApplication::translate("DockWidgetLayout", "Bend transitions:", nullptr));
        dispHandleWeight->setText(QCoreApplication::translate("DockWidgetLayout", "0", nullptr));
        lblNatLength->setText(QCoreApplication::translate("DockWidgetLayout", "Natural transition length:", nullptr));
        dispNatLength->setText(QCoreApplication::translate("DockWidgetLayout", "0", nullptr));
        btnStartStop->setText(QCoreApplication::translate("DockWidgetLayout", "Start", nullptr));
        lblStable->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DockWidgetLayout: public Ui_DockWidgetLayout {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPRINGLAYOUT_H
