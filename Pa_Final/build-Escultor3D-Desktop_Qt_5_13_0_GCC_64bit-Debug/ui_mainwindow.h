/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "colorwindow.h"
#include "plotter.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionPutVoxel;
    QAction *actionCutVoxel;
    QAction *actionPutBox;
    QAction *actionCutBox;
    QAction *actionPutSphere;
    QAction *actionCutSphere;
    QAction *actionPutEllipsoid;
    QAction *actionCutEllipsoid;
    QAction *actionRotClk;
    QAction *actionRotCClk;
    QAction *actionInvert;
    QAction *actionNewBox;
    QAction *actionShow_OFF;
    QAction *actionShow_VECT;
    QAction *actionSave;
    QAction *actionXY;
    QAction *actionZX;
    QAction *actionYZ;
    QWidget *centralWidget;
    QGridLayout *gridLayout_12;
    QGridLayout *gridLayout_11;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_8;
    QGridLayout *gridLayout_6;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
    QSlider *horizontalSliderRD;
    QLCDNumber *lcdNumber_4;
    QLabel *label_4;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QLCDNumber *lcdNumber_5;
    QSlider *horizontalSliderRY;
    QLCDNumber *lcdNumber_6;
    QSlider *horizontalSliderRZ;
    QSlider *horizontalSliderRX;
    QLabel *label_6;
    QLCDNumber *lcdNumber_7;
    QLabel *label_7;
    QLabel *label_5;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_3;
    QSlider *horizontalSliderX;
    QLCDNumber *lcdNumber;
    QLCDNumber *lcdNumber_3;
    QLabel *label_2;
    QSlider *horizontalSliderZ;
    QLCDNumber *lcdNumber_2;
    QSlider *horizontalSliderY;
    QGridLayout *gridLayout_7;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_5;
    QLCDNumber *lcdNumber_9;
    QLabel *label_9;
    QSlider *horizontalSliderRed;
    QLabel *label_11;
    QLabel *label_10;
    QLCDNumber *lcdNumber_12;
    QSlider *horizontalSliderAlpha;
    QLCDNumber *lcdNumber_10;
    QSlider *horizontalSliderBlue;
    QLabel *label_12;
    QSlider *horizontalSliderGreen;
    QLCDNumber *lcdNumber_11;
    ColorWindow *widgetColor;
    Plotter *widgetPlotter;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_10;
    QLabel *label_8;
    QSlider *horizontalSliderSlice;
    QLCDNumber *lcdNumber_8;
    QGridLayout *gridLayout_9;
    QGridLayout *gridLayout_14;
    QLCDNumber *lcdNumberLinha;
    QLCDNumber *lcdNumberColuna;
    QLabel *labelFG;
    QLabel *labelSize;
    QLabel *labelDim;
    QStatusBar *statusBar;
    QToolBar *toolBar_2;
    QToolBar *toolBar_4;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1104, 744);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        actionPutVoxel = new QAction(MainWindow);
        actionPutVoxel->setObjectName(QString::fromUtf8("actionPutVoxel"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/images/index2.jpeg"), QSize(), QIcon::Normal, QIcon::Off);
        actionPutVoxel->setIcon(icon);
        actionCutVoxel = new QAction(MainWindow);
        actionCutVoxel->setObjectName(QString::fromUtf8("actionCutVoxel"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/images/index1.jpeg"), QSize(), QIcon::Normal, QIcon::Off);
        actionCutVoxel->setIcon(icon1);
        actionPutBox = new QAction(MainWindow);
        actionPutBox->setObjectName(QString::fromUtf8("actionPutBox"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix1/images/index5.jpeg"), QSize(), QIcon::Normal, QIcon::Off);
        actionPutBox->setIcon(icon2);
        actionCutBox = new QAction(MainWindow);
        actionCutBox->setObjectName(QString::fromUtf8("actionCutBox"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/prefix1/images/index6.jpeg"), QSize(), QIcon::Normal, QIcon::Off);
        actionCutBox->setIcon(icon3);
        actionPutSphere = new QAction(MainWindow);
        actionPutSphere->setObjectName(QString::fromUtf8("actionPutSphere"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/prefix1/images/index4.jpeg"), QSize(), QIcon::Normal, QIcon::Off);
        actionPutSphere->setIcon(icon4);
        actionCutSphere = new QAction(MainWindow);
        actionCutSphere->setObjectName(QString::fromUtf8("actionCutSphere"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/new/prefix1/images/index3.jpeg"), QSize(), QIcon::Normal, QIcon::Off);
        actionCutSphere->setIcon(icon5);
        actionPutEllipsoid = new QAction(MainWindow);
        actionPutEllipsoid->setObjectName(QString::fromUtf8("actionPutEllipsoid"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/new/prefix1/images/index14.jpeg"), QSize(), QIcon::Normal, QIcon::Off);
        actionPutEllipsoid->setIcon(icon6);
        actionCutEllipsoid = new QAction(MainWindow);
        actionCutEllipsoid->setObjectName(QString::fromUtf8("actionCutEllipsoid"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/new/prefix1/images/index13.jpeg"), QSize(), QIcon::Normal, QIcon::Off);
        actionCutEllipsoid->setIcon(icon7);
        actionRotClk = new QAction(MainWindow);
        actionRotClk->setObjectName(QString::fromUtf8("actionRotClk"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/new/prefix1/images/index7.jpeg"), QSize(), QIcon::Normal, QIcon::Off);
        actionRotClk->setIcon(icon8);
        actionRotCClk = new QAction(MainWindow);
        actionRotCClk->setObjectName(QString::fromUtf8("actionRotCClk"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/new/prefix1/images/index8.jpeg"), QSize(), QIcon::Normal, QIcon::Off);
        actionRotCClk->setIcon(icon9);
        actionInvert = new QAction(MainWindow);
        actionInvert->setObjectName(QString::fromUtf8("actionInvert"));
        actionNewBox = new QAction(MainWindow);
        actionNewBox->setObjectName(QString::fromUtf8("actionNewBox"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/new/prefix1/images/index12.jpeg"), QSize(), QIcon::Normal, QIcon::Off);
        actionNewBox->setIcon(icon10);
        actionShow_OFF = new QAction(MainWindow);
        actionShow_OFF->setObjectName(QString::fromUtf8("actionShow_OFF"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/new/prefix1/images/index9.jpeg"), QSize(), QIcon::Normal, QIcon::Off);
        actionShow_OFF->setIcon(icon11);
        actionShow_VECT = new QAction(MainWindow);
        actionShow_VECT->setObjectName(QString::fromUtf8("actionShow_VECT"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/new/prefix1/images/index10.jpeg"), QSize(), QIcon::Normal, QIcon::Off);
        actionShow_VECT->setIcon(icon12);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/new/prefix1/images/index11.jpeg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon13);
        actionXY = new QAction(MainWindow);
        actionXY->setObjectName(QString::fromUtf8("actionXY"));
        actionZX = new QAction(MainWindow);
        actionZX->setObjectName(QString::fromUtf8("actionZX"));
        actionYZ = new QAction(MainWindow);
        actionYZ->setObjectName(QString::fromUtf8("actionYZ"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_12 = new QGridLayout(centralWidget);
        gridLayout_12->setSpacing(6);
        gridLayout_12->setContentsMargins(11, 11, 11, 11);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        gridLayout_11 = new QGridLayout();
        gridLayout_11->setSpacing(6);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_8 = new QGridLayout();
        gridLayout_8->setSpacing(6);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setSpacing(6);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_2 = new QGridLayout(groupBox_3);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalSliderRD = new QSlider(groupBox_3);
        horizontalSliderRD->setObjectName(QString::fromUtf8("horizontalSliderRD"));
        horizontalSliderRD->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(horizontalSliderRD, 0, 1, 1, 1);

        lcdNumber_4 = new QLCDNumber(groupBox_3);
        lcdNumber_4->setObjectName(QString::fromUtf8("lcdNumber_4"));

        gridLayout_2->addWidget(lcdNumber_4, 0, 2, 1, 1);

        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);


        gridLayout_6->addWidget(groupBox_3, 1, 0, 1, 1);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        lcdNumber_5 = new QLCDNumber(groupBox_2);
        lcdNumber_5->setObjectName(QString::fromUtf8("lcdNumber_5"));

        gridLayout_3->addWidget(lcdNumber_5, 0, 2, 1, 1);

        horizontalSliderRY = new QSlider(groupBox_2);
        horizontalSliderRY->setObjectName(QString::fromUtf8("horizontalSliderRY"));
        horizontalSliderRY->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(horizontalSliderRY, 1, 1, 1, 1);

        lcdNumber_6 = new QLCDNumber(groupBox_2);
        lcdNumber_6->setObjectName(QString::fromUtf8("lcdNumber_6"));

        gridLayout_3->addWidget(lcdNumber_6, 1, 2, 1, 1);

        horizontalSliderRZ = new QSlider(groupBox_2);
        horizontalSliderRZ->setObjectName(QString::fromUtf8("horizontalSliderRZ"));
        horizontalSliderRZ->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(horizontalSliderRZ, 2, 1, 1, 1);

        horizontalSliderRX = new QSlider(groupBox_2);
        horizontalSliderRX->setObjectName(QString::fromUtf8("horizontalSliderRX"));
        horizontalSliderRX->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(horizontalSliderRX, 0, 1, 1, 1);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_3->addWidget(label_6, 1, 0, 1, 1);

        lcdNumber_7 = new QLCDNumber(groupBox_2);
        lcdNumber_7->setObjectName(QString::fromUtf8("lcdNumber_7"));

        gridLayout_3->addWidget(lcdNumber_7, 2, 2, 1, 1);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_3->addWidget(label_7, 2, 0, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_3->addWidget(label_5, 0, 0, 1, 1);


        gridLayout_6->addWidget(groupBox_2, 2, 0, 1, 1);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        horizontalSliderX = new QSlider(groupBox);
        horizontalSliderX->setObjectName(QString::fromUtf8("horizontalSliderX"));
        horizontalSliderX->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderX, 0, 1, 1, 1);

        lcdNumber = new QLCDNumber(groupBox);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));

        gridLayout->addWidget(lcdNumber, 0, 2, 1, 1);

        lcdNumber_3 = new QLCDNumber(groupBox);
        lcdNumber_3->setObjectName(QString::fromUtf8("lcdNumber_3"));

        gridLayout->addWidget(lcdNumber_3, 2, 2, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        horizontalSliderZ = new QSlider(groupBox);
        horizontalSliderZ->setObjectName(QString::fromUtf8("horizontalSliderZ"));
        horizontalSliderZ->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderZ, 2, 1, 1, 1);

        lcdNumber_2 = new QLCDNumber(groupBox);
        lcdNumber_2->setObjectName(QString::fromUtf8("lcdNumber_2"));

        gridLayout->addWidget(lcdNumber_2, 1, 2, 1, 1);

        horizontalSliderY = new QSlider(groupBox);
        horizontalSliderY->setObjectName(QString::fromUtf8("horizontalSliderY"));
        horizontalSliderY->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderY, 1, 1, 1, 1);


        gridLayout_6->addWidget(groupBox, 0, 0, 1, 1);

        gridLayout_6->setRowStretch(0, 10);

        gridLayout_8->addLayout(gridLayout_6, 0, 0, 1, 1);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setSpacing(6);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setSizeConstraint(QLayout::SetMaximumSize);
        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout_5 = new QGridLayout(groupBox_4);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        lcdNumber_9 = new QLCDNumber(groupBox_4);
        lcdNumber_9->setObjectName(QString::fromUtf8("lcdNumber_9"));

        gridLayout_5->addWidget(lcdNumber_9, 0, 2, 1, 1);

        label_9 = new QLabel(groupBox_4);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_5->addWidget(label_9, 1, 0, 1, 1);

        horizontalSliderRed = new QSlider(groupBox_4);
        horizontalSliderRed->setObjectName(QString::fromUtf8("horizontalSliderRed"));
        horizontalSliderRed->setOrientation(Qt::Horizontal);

        gridLayout_5->addWidget(horizontalSliderRed, 0, 1, 1, 1);

        label_11 = new QLabel(groupBox_4);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_5->addWidget(label_11, 2, 0, 1, 1);

        label_10 = new QLabel(groupBox_4);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_5->addWidget(label_10, 0, 0, 1, 1);

        lcdNumber_12 = new QLCDNumber(groupBox_4);
        lcdNumber_12->setObjectName(QString::fromUtf8("lcdNumber_12"));

        gridLayout_5->addWidget(lcdNumber_12, 3, 2, 1, 1);

        horizontalSliderAlpha = new QSlider(groupBox_4);
        horizontalSliderAlpha->setObjectName(QString::fromUtf8("horizontalSliderAlpha"));
        horizontalSliderAlpha->setOrientation(Qt::Horizontal);

        gridLayout_5->addWidget(horizontalSliderAlpha, 3, 1, 1, 1);

        lcdNumber_10 = new QLCDNumber(groupBox_4);
        lcdNumber_10->setObjectName(QString::fromUtf8("lcdNumber_10"));

        gridLayout_5->addWidget(lcdNumber_10, 1, 2, 1, 1);

        horizontalSliderBlue = new QSlider(groupBox_4);
        horizontalSliderBlue->setObjectName(QString::fromUtf8("horizontalSliderBlue"));
        horizontalSliderBlue->setOrientation(Qt::Horizontal);

        gridLayout_5->addWidget(horizontalSliderBlue, 2, 1, 1, 1);

        label_12 = new QLabel(groupBox_4);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_5->addWidget(label_12, 3, 0, 1, 1);

        horizontalSliderGreen = new QSlider(groupBox_4);
        horizontalSliderGreen->setObjectName(QString::fromUtf8("horizontalSliderGreen"));
        horizontalSliderGreen->setOrientation(Qt::Horizontal);

        gridLayout_5->addWidget(horizontalSliderGreen, 1, 1, 1, 1);

        lcdNumber_11 = new QLCDNumber(groupBox_4);
        lcdNumber_11->setObjectName(QString::fromUtf8("lcdNumber_11"));

        gridLayout_5->addWidget(lcdNumber_11, 2, 2, 1, 1);


        gridLayout_7->addWidget(groupBox_4, 0, 1, 1, 1);

        widgetColor = new ColorWindow(centralWidget);
        widgetColor->setObjectName(QString::fromUtf8("widgetColor"));

        gridLayout_7->addWidget(widgetColor, 0, 0, 1, 1);

        gridLayout_7->setColumnStretch(0, 30);

        gridLayout_8->addLayout(gridLayout_7, 1, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_8, 0, 0, 1, 1);


        gridLayout_11->addLayout(gridLayout_4, 0, 1, 1, 1);

        widgetPlotter = new Plotter(centralWidget);
        widgetPlotter->setObjectName(QString::fromUtf8("widgetPlotter"));
        widgetPlotter->setMinimumSize(QSize(471, 431));
        layoutWidget = new QWidget(widgetPlotter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(700, 50, 66, 431));
        gridLayout_10 = new QGridLayout(layoutWidget);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_10->addWidget(label_8, 0, 0, 1, 1);

        horizontalSliderSlice = new QSlider(layoutWidget);
        horizontalSliderSlice->setObjectName(QString::fromUtf8("horizontalSliderSlice"));
        horizontalSliderSlice->setOrientation(Qt::Vertical);

        gridLayout_10->addWidget(horizontalSliderSlice, 1, 0, 1, 1);

        lcdNumber_8 = new QLCDNumber(layoutWidget);
        lcdNumber_8->setObjectName(QString::fromUtf8("lcdNumber_8"));

        gridLayout_10->addWidget(lcdNumber_8, 2, 0, 1, 1);


        gridLayout_11->addWidget(widgetPlotter, 0, 0, 1, 1);

        gridLayout_11->setColumnStretch(0, 60);

        gridLayout_12->addLayout(gridLayout_11, 0, 0, 1, 1);

        gridLayout_9 = new QGridLayout();
        gridLayout_9->setSpacing(6);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_14 = new QGridLayout();
        gridLayout_14->setSpacing(6);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        lcdNumberLinha = new QLCDNumber(centralWidget);
        lcdNumberLinha->setObjectName(QString::fromUtf8("lcdNumberLinha"));

        gridLayout_14->addWidget(lcdNumberLinha, 0, 0, 1, 1);

        lcdNumberColuna = new QLCDNumber(centralWidget);
        lcdNumberColuna->setObjectName(QString::fromUtf8("lcdNumberColuna"));

        gridLayout_14->addWidget(lcdNumberColuna, 0, 1, 1, 1);


        gridLayout_9->addLayout(gridLayout_14, 0, 0, 1, 1);

        labelFG = new QLabel(centralWidget);
        labelFG->setObjectName(QString::fromUtf8("labelFG"));

        gridLayout_9->addWidget(labelFG, 0, 2, 1, 1);

        labelSize = new QLabel(centralWidget);
        labelSize->setObjectName(QString::fromUtf8("labelSize"));

        gridLayout_9->addWidget(labelSize, 0, 3, 1, 1);

        labelDim = new QLabel(centralWidget);
        labelDim->setObjectName(QString::fromUtf8("labelDim"));

        gridLayout_9->addWidget(labelDim, 0, 1, 1, 1);


        gridLayout_12->addLayout(gridLayout_9, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        toolBar_2 = new QToolBar(MainWindow);
        toolBar_2->setObjectName(QString::fromUtf8("toolBar_2"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar_2);
        toolBar_4 = new QToolBar(MainWindow);
        toolBar_4->setObjectName(QString::fromUtf8("toolBar_4"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar_4);
        MainWindow->insertToolBarBreak(toolBar_4);

        toolBar_2->addAction(actionPutVoxel);
        toolBar_2->addAction(actionCutVoxel);
        toolBar_2->addAction(actionPutBox);
        toolBar_2->addAction(actionCutBox);
        toolBar_2->addAction(actionPutSphere);
        toolBar_2->addAction(actionCutSphere);
        toolBar_2->addAction(actionPutEllipsoid);
        toolBar_2->addAction(actionCutEllipsoid);
        toolBar_4->addAction(actionShow_OFF);
        toolBar_4->addAction(actionShow_VECT);
        toolBar_4->addAction(actionSave);
        toolBar_4->addAction(actionNewBox);

        retranslateUi(MainWindow);
        QObject::connect(horizontalSliderX, SIGNAL(valueChanged(int)), lcdNumber, SLOT(display(int)));
        QObject::connect(horizontalSliderY, SIGNAL(valueChanged(int)), lcdNumber_2, SLOT(display(int)));
        QObject::connect(horizontalSliderZ, SIGNAL(valueChanged(int)), lcdNumber_3, SLOT(display(int)));
        QObject::connect(horizontalSliderRD, SIGNAL(valueChanged(int)), lcdNumber_4, SLOT(display(int)));
        QObject::connect(horizontalSliderRX, SIGNAL(valueChanged(int)), lcdNumber_5, SLOT(display(int)));
        QObject::connect(horizontalSliderRY, SIGNAL(valueChanged(int)), lcdNumber_6, SLOT(display(int)));
        QObject::connect(horizontalSliderRZ, SIGNAL(valueChanged(int)), lcdNumber_7, SLOT(display(int)));
        QObject::connect(horizontalSliderRed, SIGNAL(valueChanged(int)), lcdNumber_9, SLOT(display(int)));
        QObject::connect(horizontalSliderGreen, SIGNAL(valueChanged(int)), lcdNumber_10, SLOT(display(int)));
        QObject::connect(horizontalSliderBlue, SIGNAL(valueChanged(int)), lcdNumber_11, SLOT(display(int)));
        QObject::connect(horizontalSliderAlpha, SIGNAL(valueChanged(int)), lcdNumber_12, SLOT(display(int)));
        QObject::connect(horizontalSliderRed, SIGNAL(valueChanged(int)), widgetPlotter, SLOT(changeRed(int)));
        QObject::connect(horizontalSliderGreen, SIGNAL(valueChanged(int)), widgetPlotter, SLOT(changeGreen(int)));
        QObject::connect(horizontalSliderBlue, SIGNAL(valueChanged(int)), widgetPlotter, SLOT(changeBlue(int)));
        QObject::connect(horizontalSliderSlice, SIGNAL(valueChanged(int)), lcdNumber_8, SLOT(display(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionPutVoxel->setText(QCoreApplication::translate("MainWindow", "Quadro", nullptr));
#if QT_CONFIG(shortcut)
        actionPutVoxel->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+A", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCutVoxel->setText(QCoreApplication::translate("MainWindow", "Corte quadro", nullptr));
#if QT_CONFIG(shortcut)
        actionCutVoxel->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPutBox->setText(QCoreApplication::translate("MainWindow", "Cubo", nullptr));
#if QT_CONFIG(shortcut)
        actionPutBox->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+D", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCutBox->setText(QCoreApplication::translate("MainWindow", "Corte cubo", nullptr));
#if QT_CONFIG(shortcut)
        actionCutBox->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+F", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPutSphere->setText(QCoreApplication::translate("MainWindow", "Esfera", nullptr));
#if QT_CONFIG(shortcut)
        actionPutSphere->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCutSphere->setText(QCoreApplication::translate("MainWindow", "Corte esfera", nullptr));
#if QT_CONFIG(shortcut)
        actionCutSphere->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPutEllipsoid->setText(QCoreApplication::translate("MainWindow", "Elipse", nullptr));
#if QT_CONFIG(shortcut)
        actionPutEllipsoid->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCutEllipsoid->setText(QCoreApplication::translate("MainWindow", "Corte Elipse", nullptr));
#if QT_CONFIG(shortcut)
        actionCutEllipsoid->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRotClk->setText(QCoreApplication::translate("MainWindow", "RotClk", nullptr));
        actionRotCClk->setText(QCoreApplication::translate("MainWindow", "RotCClk", nullptr));
        actionInvert->setText(QCoreApplication::translate("MainWindow", "Invert", nullptr));
        actionNewBox->setText(QCoreApplication::translate("MainWindow", "Nova tela", nullptr));
#if QT_CONFIG(shortcut)
        actionNewBox->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionShow_OFF->setText(QCoreApplication::translate("MainWindow", "Criar off", nullptr));
#if QT_CONFIG(shortcut)
        actionShow_OFF->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionShow_VECT->setText(QCoreApplication::translate("MainWindow", "Criar Vect", nullptr));
#if QT_CONFIG(shortcut)
        actionShow_VECT->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave->setText(QCoreApplication::translate("MainWindow", "Salvar", nullptr));
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionXY->setText(QCoreApplication::translate("MainWindow", "XY", nullptr));
        actionZX->setText(QCoreApplication::translate("MainWindow", "ZX", nullptr));
        actionYZ->setText(QCoreApplication::translate("MainWindow", "YZ", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "Raio da esfera", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Rd", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Raio da elipse", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "RdY", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "RdZ", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "RdX", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Tamanho da caixa", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "Cor", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "G", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "R", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "A", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Slice", nullptr));
        labelFG->setText(QCoreApplication::translate("MainWindow", "Put Voxel", nullptr));
        labelSize->setText(QCoreApplication::translate("MainWindow", "50 x 50 x 50", nullptr));
        labelDim->setText(QString());
        toolBar_2->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar_2", nullptr));
        toolBar_4->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar_4", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
