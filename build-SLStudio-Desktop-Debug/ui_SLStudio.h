/********************************************************************************
** Form generated from reading UI file 'SLStudio.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SLSTUDIO_H
#define UI_SLSTUDIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "SLPointCloudWidget.h"

QT_BEGIN_NAMESPACE

class Ui_SLStudio
{
public:
    QAction *actionQuit;
    QAction *actionStart;
    QAction *actionStop;
    QAction *actionCalibration;
    QAction *actionLoadCalibration;
    QAction *actionExportCalibration;
    QAction *actionPreferences;
    QAction *actionSavePointCloud;
    QAction *actionSaveScreenshot;
    QAction *actionTracking;
    QAction *actionAbout;
    QAction *actionTracker;
    QAction *actionUpdatePointClouds;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    SLPointCloudWidget *pointCloudWidget;
    QMenuBar *menuBar;
    QMenu *menuCalibration;
    QMenu *menuSLStudio;
    QMenu *menuScan;
    QMenu *menuView;
    QToolBar *toolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SLStudio)
    {
        if (SLStudio->objectName().isEmpty())
            SLStudio->setObjectName(QStringLiteral("SLStudio"));
        SLStudio->resize(824, 537);
        SLStudio->setAutoFillBackground(false);
        actionQuit = new QAction(SLStudio);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        actionQuit->setMenuRole(QAction::QuitRole);
        actionStart = new QAction(SLStudio);
        actionStart->setObjectName(QStringLiteral("actionStart"));
        actionStop = new QAction(SLStudio);
        actionStop->setObjectName(QStringLiteral("actionStop"));
        actionStop->setEnabled(false);
        actionCalibration = new QAction(SLStudio);
        actionCalibration->setObjectName(QStringLiteral("actionCalibration"));
        actionLoadCalibration = new QAction(SLStudio);
        actionLoadCalibration->setObjectName(QStringLiteral("actionLoadCalibration"));
        actionExportCalibration = new QAction(SLStudio);
        actionExportCalibration->setObjectName(QStringLiteral("actionExportCalibration"));
        actionPreferences = new QAction(SLStudio);
        actionPreferences->setObjectName(QStringLiteral("actionPreferences"));
        actionSavePointCloud = new QAction(SLStudio);
        actionSavePointCloud->setObjectName(QStringLiteral("actionSavePointCloud"));
        actionSavePointCloud->setEnabled(false);
        actionSaveScreenshot = new QAction(SLStudio);
        actionSaveScreenshot->setObjectName(QStringLiteral("actionSaveScreenshot"));
        actionSaveScreenshot->setEnabled(false);
        actionTracking = new QAction(SLStudio);
        actionTracking->setObjectName(QStringLiteral("actionTracking"));
        actionTracking->setEnabled(false);
        actionAbout = new QAction(SLStudio);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionAbout->setMenuRole(QAction::AboutRole);
        actionTracker = new QAction(SLStudio);
        actionTracker->setObjectName(QStringLiteral("actionTracker"));
        actionTracker->setCheckable(true);
        actionTracker->setChecked(true);
        actionUpdatePointClouds = new QAction(SLStudio);
        actionUpdatePointClouds->setObjectName(QStringLiteral("actionUpdatePointClouds"));
        actionUpdatePointClouds->setCheckable(true);
        actionUpdatePointClouds->setChecked(true);
        centralWidget = new QWidget(SLStudio);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setAcceptDrops(false);
        centralWidget->setLayoutDirection(Qt::LeftToRight);
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pointCloudWidget = new SLPointCloudWidget(centralWidget);
        pointCloudWidget->setObjectName(QStringLiteral("pointCloudWidget"));
        pointCloudWidget->setEnabled(true);
        pointCloudWidget->setLayoutDirection(Qt::LeftToRight);
        pointCloudWidget->setAutoFillBackground(false);

        gridLayout->addWidget(pointCloudWidget, 0, 0, 1, 1);

        SLStudio->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(SLStudio);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 824, 25));
        menuCalibration = new QMenu(menuBar);
        menuCalibration->setObjectName(QStringLiteral("menuCalibration"));
        menuSLStudio = new QMenu(menuBar);
        menuSLStudio->setObjectName(QStringLiteral("menuSLStudio"));
        menuScan = new QMenu(menuBar);
        menuScan->setObjectName(QStringLiteral("menuScan"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QStringLiteral("menuView"));
        SLStudio->setMenuBar(menuBar);
        toolBar = new QToolBar(SLStudio);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        toolBar->setEnabled(true);
        QFont font;
        font.setItalic(false);
        font.setStrikeOut(false);
        toolBar->setFont(font);
        toolBar->setMovable(false);
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        SLStudio->addToolBar(Qt::TopToolBarArea, toolBar);
        statusBar = new QStatusBar(SLStudio);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        SLStudio->setStatusBar(statusBar);

        menuBar->addAction(menuSLStudio->menuAction());
        menuBar->addAction(menuScan->menuAction());
        menuBar->addAction(menuCalibration->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuCalibration->addAction(actionLoadCalibration);
        menuCalibration->addAction(actionExportCalibration);
        menuCalibration->addAction(actionCalibration);
        menuSLStudio->addAction(actionPreferences);
        menuSLStudio->addAction(actionQuit);
        menuSLStudio->addAction(actionAbout);
        menuScan->addAction(actionStart);
        menuScan->addAction(actionStop);
        menuScan->addAction(actionSavePointCloud);
        menuScan->addAction(actionSaveScreenshot);
        menuView->addAction(actionUpdatePointClouds);
        toolBar->addAction(actionStart);
        toolBar->addAction(actionStop);
        toolBar->addSeparator();
        toolBar->addAction(actionSavePointCloud);
        toolBar->addAction(actionSaveScreenshot);
        toolBar->addAction(actionCalibration);
        toolBar->addSeparator();

        retranslateUi(SLStudio);
        QObject::connect(actionStart, SIGNAL(triggered()), SLStudio, SLOT(onActionStart()));
        QObject::connect(actionStop, SIGNAL(triggered()), SLStudio, SLOT(onActionStop()));
        QObject::connect(actionQuit, SIGNAL(triggered()), SLStudio, SLOT(close()));
        QObject::connect(actionCalibration, SIGNAL(triggered()), SLStudio, SLOT(onActionCalibration()));
        QObject::connect(actionPreferences, SIGNAL(triggered()), SLStudio, SLOT(onActionPreferences()));
        QObject::connect(actionExportCalibration, SIGNAL(triggered()), SLStudio, SLOT(onActionExportCalibration()));
        QObject::connect(actionSaveScreenshot, SIGNAL(triggered()), pointCloudWidget, SLOT(saveScreenShot()));
        QObject::connect(actionSavePointCloud, SIGNAL(triggered()), pointCloudWidget, SLOT(savePointCloud()));
        QObject::connect(actionLoadCalibration, SIGNAL(triggered()), SLStudio, SLOT(onActionLoadCalibration()));
        QObject::connect(actionAbout, SIGNAL(triggered()), SLStudio, SLOT(onActionAbout()));

        QMetaObject::connectSlotsByName(SLStudio);
    } // setupUi

    void retranslateUi(QMainWindow *SLStudio)
    {
        SLStudio->setWindowTitle(QApplication::translate("SLStudio", "SLStudio", 0));
        actionQuit->setText(QApplication::translate("SLStudio", "&Quit", 0));
        actionStart->setText(QApplication::translate("SLStudio", "Start Scan", 0));
        actionStop->setText(QApplication::translate("SLStudio", "Stop Scan", 0));
        actionCalibration->setText(QApplication::translate("SLStudio", "Perform Calibration", 0));
        actionLoadCalibration->setText(QApplication::translate("SLStudio", "Load Calibration", 0));
        actionExportCalibration->setText(QApplication::translate("SLStudio", "Export Calibration", 0));
        actionPreferences->setText(QApplication::translate("SLStudio", "&Preferences", 0));
        actionSavePointCloud->setText(QApplication::translate("SLStudio", "Save Point Cloud", 0));
        actionSaveScreenshot->setText(QApplication::translate("SLStudio", "Save Screenshot", 0));
        actionTracking->setText(QApplication::translate("SLStudio", "Start Tracking", 0));
        actionAbout->setText(QApplication::translate("SLStudio", "About", 0));
        actionTracker->setText(QApplication::translate("SLStudio", "Tracker", 0));
        actionUpdatePointClouds->setText(QApplication::translate("SLStudio", "Update Point Clouds", 0));
        menuCalibration->setTitle(QApplication::translate("SLStudio", "Calibration", 0));
        menuSLStudio->setTitle(QApplication::translate("SLStudio", "SLStudio", 0));
        menuScan->setTitle(QApplication::translate("SLStudio", "Scan", 0));
        menuView->setTitle(QApplication::translate("SLStudio", "View", 0));
        toolBar->setWindowTitle(QApplication::translate("SLStudio", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class SLStudio: public Ui_SLStudio {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SLSTUDIO_H
