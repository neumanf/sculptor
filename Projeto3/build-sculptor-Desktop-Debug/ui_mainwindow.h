/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "plotter.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_11;
    QPushButton *pushButton_10;
    QVBoxLayout *verticalLayout_8;
    Plotter *widget;
    QFrame *frame_5;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_14;
    QLabel *zLabel;
    QSlider *zSlider;
    QSpinBox *spinBox_13;
    QVBoxLayout *verticalLayout_6;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QLabel *sphereTitle;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSlider *radiusSlider;
    QSpinBox *spinBox;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *elipsoidTitle;
    QHBoxLayout *horizontalLayout_4;
    QLabel *rx;
    QSlider *rxSlider;
    QSpinBox *spinBox_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *ry;
    QSlider *rySlider;
    QSpinBox *spinBox_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *rz;
    QSlider *rzSlider;
    QSpinBox *spinBox_4;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *boxTitle;
    QHBoxLayout *horizontalLayout_6;
    QLabel *dimx;
    QSlider *dimXSlider;
    QSpinBox *spinBox_5;
    QHBoxLayout *horizontalLayout_7;
    QLabel *dimy;
    QSlider *dimYSlider;
    QSpinBox *spinBox_6;
    QHBoxLayout *horizontalLayout_8;
    QLabel *dimz;
    QSlider *dimZSlider;
    QSpinBox *spinBox_7;
    QFrame *frame_4;
    QVBoxLayout *verticalLayout_5;
    QLabel *colorTitle;
    QHBoxLayout *horizontalLayout_9;
    QLabel *rColor;
    QSlider *rColorSlider;
    QSpinBox *spinBox_8;
    QHBoxLayout *horizontalLayout_10;
    QLabel *gColor;
    QSlider *gColorSlider;
    QSpinBox *spinBox_9;
    QHBoxLayout *horizontalLayout_11;
    QLabel *bColor;
    QSlider *bColorSlider;
    QSpinBox *spinBox_10;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(916, 621);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(-1, -1, -1, 0);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("add")));
        pushButton_2->setIcon(icon);

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        QIcon icon1(QIcon::fromTheme(QString::fromUtf8("remove")));
        pushButton_3->setIcon(icon1);
        pushButton_3->setFlat(false);

        verticalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setIcon(icon);

        verticalLayout->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setIcon(icon1);

        verticalLayout->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);
        pushButton_6->setIcon(icon);

        verticalLayout->addWidget(pushButton_6);

        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setIcon(icon1);

        verticalLayout->addWidget(pushButton_7);

        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setIcon(icon);

        verticalLayout->addWidget(pushButton_8);

        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setIcon(icon1);

        verticalLayout->addWidget(pushButton_9);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pushButton_11 = new QPushButton(centralwidget);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));

        verticalLayout->addWidget(pushButton_11);

        pushButton_10 = new QPushButton(centralwidget);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));

        verticalLayout->addWidget(pushButton_10);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        widget = new Plotter(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);

        verticalLayout_8->addWidget(widget);

        frame_5 = new QFrame(centralwidget);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        verticalLayout_7 = new QVBoxLayout(frame_5);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        zLabel = new QLabel(frame_5);
        zLabel->setObjectName(QString::fromUtf8("zLabel"));

        horizontalLayout_14->addWidget(zLabel);

        zSlider = new QSlider(frame_5);
        zSlider->setObjectName(QString::fromUtf8("zSlider"));
        zSlider->setMinimum(0);
        zSlider->setMaximum(99);
        zSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_14->addWidget(zSlider);

        spinBox_13 = new QSpinBox(frame_5);
        spinBox_13->setObjectName(QString::fromUtf8("spinBox_13"));

        horizontalLayout_14->addWidget(spinBox_13);

        horizontalLayout_14->setStretch(1, 95);

        verticalLayout_7->addLayout(horizontalLayout_14);


        verticalLayout_8->addWidget(frame_5);

        verticalLayout_8->setStretch(0, 90);
        verticalLayout_8->setStretch(1, 10);

        horizontalLayout->addLayout(verticalLayout_8);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        sphereTitle = new QLabel(frame);
        sphereTitle->setObjectName(QString::fromUtf8("sphereTitle"));
        sphereTitle->setLayoutDirection(Qt::LeftToRight);
        sphereTitle->setAutoFillBackground(false);
        sphereTitle->setTextFormat(Qt::MarkdownText);
        sphereTitle->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(sphereTitle);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        radiusSlider = new QSlider(frame);
        radiusSlider->setObjectName(QString::fromUtf8("radiusSlider"));
        radiusSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(radiusSlider);

        spinBox = new QSpinBox(frame);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        horizontalLayout_2->addWidget(spinBox);

        horizontalLayout_2->setStretch(1, 95);

        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout_6->addWidget(frame);

        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        elipsoidTitle = new QLabel(frame_2);
        elipsoidTitle->setObjectName(QString::fromUtf8("elipsoidTitle"));
        elipsoidTitle->setLayoutDirection(Qt::LeftToRight);
        elipsoidTitle->setAutoFillBackground(false);
        elipsoidTitle->setTextFormat(Qt::MarkdownText);
        elipsoidTitle->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(elipsoidTitle);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        rx = new QLabel(frame_2);
        rx->setObjectName(QString::fromUtf8("rx"));

        horizontalLayout_4->addWidget(rx);

        rxSlider = new QSlider(frame_2);
        rxSlider->setObjectName(QString::fromUtf8("rxSlider"));
        rxSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(rxSlider);

        spinBox_2 = new QSpinBox(frame_2);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));

        horizontalLayout_4->addWidget(spinBox_2);

        horizontalLayout_4->setStretch(1, 95);

        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        ry = new QLabel(frame_2);
        ry->setObjectName(QString::fromUtf8("ry"));

        horizontalLayout_3->addWidget(ry);

        rySlider = new QSlider(frame_2);
        rySlider->setObjectName(QString::fromUtf8("rySlider"));
        rySlider->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(rySlider);

        spinBox_3 = new QSpinBox(frame_2);
        spinBox_3->setObjectName(QString::fromUtf8("spinBox_3"));

        horizontalLayout_3->addWidget(spinBox_3);

        horizontalLayout_3->setStretch(1, 95);

        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        rz = new QLabel(frame_2);
        rz->setObjectName(QString::fromUtf8("rz"));

        horizontalLayout_5->addWidget(rz);

        rzSlider = new QSlider(frame_2);
        rzSlider->setObjectName(QString::fromUtf8("rzSlider"));
        rzSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(rzSlider);

        spinBox_4 = new QSpinBox(frame_2);
        spinBox_4->setObjectName(QString::fromUtf8("spinBox_4"));

        horizontalLayout_5->addWidget(spinBox_4);

        horizontalLayout_5->setStretch(1, 95);

        verticalLayout_3->addLayout(horizontalLayout_5);


        verticalLayout_6->addWidget(frame_2);

        frame_3 = new QFrame(centralwidget);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_3);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        boxTitle = new QLabel(frame_3);
        boxTitle->setObjectName(QString::fromUtf8("boxTitle"));
        boxTitle->setLayoutDirection(Qt::LeftToRight);
        boxTitle->setAutoFillBackground(false);
        boxTitle->setTextFormat(Qt::MarkdownText);
        boxTitle->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(boxTitle);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        dimx = new QLabel(frame_3);
        dimx->setObjectName(QString::fromUtf8("dimx"));

        horizontalLayout_6->addWidget(dimx);

        dimXSlider = new QSlider(frame_3);
        dimXSlider->setObjectName(QString::fromUtf8("dimXSlider"));
        dimXSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_6->addWidget(dimXSlider);

        spinBox_5 = new QSpinBox(frame_3);
        spinBox_5->setObjectName(QString::fromUtf8("spinBox_5"));
        spinBox_5->setMaximum(255);

        horizontalLayout_6->addWidget(spinBox_5);

        horizontalLayout_6->setStretch(1, 95);

        verticalLayout_4->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        dimy = new QLabel(frame_3);
        dimy->setObjectName(QString::fromUtf8("dimy"));

        horizontalLayout_7->addWidget(dimy);

        dimYSlider = new QSlider(frame_3);
        dimYSlider->setObjectName(QString::fromUtf8("dimYSlider"));
        dimYSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_7->addWidget(dimYSlider);

        spinBox_6 = new QSpinBox(frame_3);
        spinBox_6->setObjectName(QString::fromUtf8("spinBox_6"));
        spinBox_6->setMaximum(255);

        horizontalLayout_7->addWidget(spinBox_6);

        horizontalLayout_7->setStretch(1, 95);

        verticalLayout_4->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        dimz = new QLabel(frame_3);
        dimz->setObjectName(QString::fromUtf8("dimz"));

        horizontalLayout_8->addWidget(dimz);

        dimZSlider = new QSlider(frame_3);
        dimZSlider->setObjectName(QString::fromUtf8("dimZSlider"));
        dimZSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_8->addWidget(dimZSlider);

        spinBox_7 = new QSpinBox(frame_3);
        spinBox_7->setObjectName(QString::fromUtf8("spinBox_7"));
        spinBox_7->setMaximum(255);

        horizontalLayout_8->addWidget(spinBox_7);

        horizontalLayout_8->setStretch(1, 95);

        verticalLayout_4->addLayout(horizontalLayout_8);


        verticalLayout_6->addWidget(frame_3);

        frame_4 = new QFrame(centralwidget);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(frame_4);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        colorTitle = new QLabel(frame_4);
        colorTitle->setObjectName(QString::fromUtf8("colorTitle"));
        colorTitle->setLayoutDirection(Qt::LeftToRight);
        colorTitle->setAutoFillBackground(false);
        colorTitle->setTextFormat(Qt::MarkdownText);
        colorTitle->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(colorTitle);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        rColor = new QLabel(frame_4);
        rColor->setObjectName(QString::fromUtf8("rColor"));

        horizontalLayout_9->addWidget(rColor);

        rColorSlider = new QSlider(frame_4);
        rColorSlider->setObjectName(QString::fromUtf8("rColorSlider"));
        rColorSlider->setMaximum(255);
        rColorSlider->setValue(0);
        rColorSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_9->addWidget(rColorSlider);

        spinBox_8 = new QSpinBox(frame_4);
        spinBox_8->setObjectName(QString::fromUtf8("spinBox_8"));
        spinBox_8->setMaximum(255);
        spinBox_8->setValue(0);

        horizontalLayout_9->addWidget(spinBox_8);

        horizontalLayout_9->setStretch(1, 95);

        verticalLayout_5->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        gColor = new QLabel(frame_4);
        gColor->setObjectName(QString::fromUtf8("gColor"));

        horizontalLayout_10->addWidget(gColor);

        gColorSlider = new QSlider(frame_4);
        gColorSlider->setObjectName(QString::fromUtf8("gColorSlider"));
        gColorSlider->setMaximum(255);
        gColorSlider->setValue(0);
        gColorSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_10->addWidget(gColorSlider);

        spinBox_9 = new QSpinBox(frame_4);
        spinBox_9->setObjectName(QString::fromUtf8("spinBox_9"));
        spinBox_9->setMaximum(255);
        spinBox_9->setValue(0);

        horizontalLayout_10->addWidget(spinBox_9);

        horizontalLayout_10->setStretch(1, 95);

        verticalLayout_5->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        bColor = new QLabel(frame_4);
        bColor->setObjectName(QString::fromUtf8("bColor"));

        horizontalLayout_11->addWidget(bColor);

        bColorSlider = new QSlider(frame_4);
        bColorSlider->setObjectName(QString::fromUtf8("bColorSlider"));
        bColorSlider->setMaximum(255);
        bColorSlider->setValue(0);
        bColorSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_11->addWidget(bColorSlider);

        spinBox_10 = new QSpinBox(frame_4);
        spinBox_10->setObjectName(QString::fromUtf8("spinBox_10"));
        spinBox_10->setMaximum(255);
        spinBox_10->setValue(0);

        horizontalLayout_11->addWidget(spinBox_10);

        horizontalLayout_11->setStretch(1, 95);

        verticalLayout_5->addLayout(horizontalLayout_11);


        verticalLayout_6->addWidget(frame_4);


        horizontalLayout->addLayout(verticalLayout_6);

        horizontalLayout->setStretch(0, 10);
        horizontalLayout->setStretch(1, 70);
        horizontalLayout->setStretch(2, 20);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 916, 30));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(radiusSlider, SIGNAL(valueChanged(int)), spinBox, SLOT(setValue(int)));
        QObject::connect(rxSlider, SIGNAL(valueChanged(int)), spinBox_2, SLOT(setValue(int)));
        QObject::connect(rySlider, SIGNAL(valueChanged(int)), spinBox_3, SLOT(setValue(int)));
        QObject::connect(rzSlider, SIGNAL(valueChanged(int)), spinBox_4, SLOT(setValue(int)));
        QObject::connect(dimXSlider, SIGNAL(valueChanged(int)), spinBox_5, SLOT(setValue(int)));
        QObject::connect(dimYSlider, SIGNAL(valueChanged(int)), spinBox_6, SLOT(setValue(int)));
        QObject::connect(dimZSlider, SIGNAL(valueChanged(int)), spinBox_7, SLOT(setValue(int)));
        QObject::connect(rColorSlider, SIGNAL(valueChanged(int)), spinBox_8, SLOT(setValue(int)));
        QObject::connect(gColorSlider, SIGNAL(valueChanged(int)), spinBox_9, SLOT(setValue(int)));
        QObject::connect(bColorSlider, SIGNAL(valueChanged(int)), spinBox_10, SLOT(setValue(int)));
        QObject::connect(spinBox, SIGNAL(valueChanged(int)), radiusSlider, SLOT(setValue(int)));
        QObject::connect(spinBox_2, SIGNAL(valueChanged(int)), rxSlider, SLOT(setValue(int)));
        QObject::connect(spinBox_3, SIGNAL(valueChanged(int)), rySlider, SLOT(setValue(int)));
        QObject::connect(spinBox_4, SIGNAL(valueChanged(int)), rzSlider, SLOT(setValue(int)));
        QObject::connect(spinBox_5, SIGNAL(valueChanged(int)), dimXSlider, SLOT(setValue(int)));
        QObject::connect(spinBox_6, SIGNAL(valueChanged(int)), dimYSlider, SLOT(setValue(int)));
        QObject::connect(spinBox_7, SIGNAL(valueChanged(int)), dimZSlider, SLOT(setValue(int)));
        QObject::connect(spinBox_8, SIGNAL(valueChanged(int)), rColorSlider, SLOT(setValue(int)));
        QObject::connect(spinBox_9, SIGNAL(valueChanged(int)), gColorSlider, SLOT(setValue(int)));
        QObject::connect(spinBox_10, SIGNAL(valueChanged(int)), bColorSlider, SLOT(setValue(int)));
        QObject::connect(zSlider, SIGNAL(valueChanged(int)), spinBox_13, SLOT(setValue(int)));
        QObject::connect(spinBox_13, SIGNAL(valueChanged(int)), zSlider, SLOT(setValue(int)));
        QObject::connect(pushButton, SIGNAL(clicked()), MainWindow, SLOT(openNewSculptureDialog()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Novo", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Voxel", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Voxel", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Caixa", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Caixa", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Esfera", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "Esfera", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "Elipsoide", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "Elipsoide", nullptr));
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "Salvar", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "Geomview", nullptr));
#if QT_CONFIG(statustip)
        frame_5->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        frame_5->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        frame_5->setAccessibleName(QString());
#endif // QT_CONFIG(accessibility)
        zLabel->setText(QCoreApplication::translate("MainWindow", "z", nullptr));
#if QT_CONFIG(statustip)
        frame->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        frame->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        frame->setAccessibleName(QString());
#endif // QT_CONFIG(accessibility)
        sphereTitle->setText(QCoreApplication::translate("MainWindow", "**Esfera**", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Raio", nullptr));
#if QT_CONFIG(statustip)
        frame_2->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        frame_2->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        frame_2->setAccessibleName(QString());
#endif // QT_CONFIG(accessibility)
        elipsoidTitle->setText(QCoreApplication::translate("MainWindow", "**Elipsoide**", nullptr));
        rx->setText(QCoreApplication::translate("MainWindow", "Rx", nullptr));
        ry->setText(QCoreApplication::translate("MainWindow", "Ry", nullptr));
        rz->setText(QCoreApplication::translate("MainWindow", "Rz", nullptr));
#if QT_CONFIG(statustip)
        frame_3->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        frame_3->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        frame_3->setAccessibleName(QString());
#endif // QT_CONFIG(accessibility)
        boxTitle->setText(QCoreApplication::translate("MainWindow", "**Caixa**", nullptr));
        dimx->setText(QCoreApplication::translate("MainWindow", "dimX", nullptr));
        dimy->setText(QCoreApplication::translate("MainWindow", "dimY", nullptr));
        dimz->setText(QCoreApplication::translate("MainWindow", "dimZ", nullptr));
#if QT_CONFIG(statustip)
        frame_4->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        frame_4->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        frame_4->setAccessibleName(QString());
#endif // QT_CONFIG(accessibility)
        colorTitle->setText(QCoreApplication::translate("MainWindow", "**Cor**", nullptr));
        rColor->setText(QCoreApplication::translate("MainWindow", "R", nullptr));
        gColor->setText(QCoreApplication::translate("MainWindow", "G", nullptr));
        bColor->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
