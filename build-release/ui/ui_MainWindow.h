/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QAction *actionLiftoff;
    QAction *actionLand;
    QAction *actionEmergency_Land;
    QAction *actionEmergency_Kill;
    QAction *actionAdd_Link;
    QAction *actionOnline_Documentation;
    QAction *actionProject_Roadmap;
    QAction *actionDeveloper_Credits;
    QAction *actionPlan;
    QAction *actionAnalyze;
    QAction *actionFlight;
    QAction *actionMuteAudioOutput;
    QAction *actionShutdownMAV;
    QAction *actionSettings;
    QAction *actionFullscreen;
    QAction *actionNormal;
    QAction *actionSetup;
    QAction *actionAdvanced_Mode;
    QAction *actionSimulationView;
    QAction *actionStatusBar;
    QAction *actionExperimentalPlanView;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuMGround;
    QMenu *menuHelp;
    QMenu *menuPerspectives;
    QMenu *menuAdvanced;
    QMenu *menuTools;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1024, 600);
        MainWindow->setMinimumSize(QSize(640, 400));
        MainWindow->setBaseSize(QSize(1100, 800));
        MainWindow->setMouseTracking(false);
        MainWindow->setStyleSheet(QStringLiteral(""));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionLiftoff = new QAction(MainWindow);
        actionLiftoff->setObjectName(QStringLiteral("actionLiftoff"));
        actionLiftoff->setEnabled(true);
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/Launch"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QStringLiteral(":/res/Launch"), QSize(), QIcon::Normal, QIcon::On);
        actionLiftoff->setIcon(icon);
        actionLand = new QAction(MainWindow);
        actionLand->setObjectName(QStringLiteral("actionLand"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/res/Land"), QSize(), QIcon::Normal, QIcon::Off);
        actionLand->setIcon(icon1);
        actionEmergency_Land = new QAction(MainWindow);
        actionEmergency_Land->setObjectName(QStringLiteral("actionEmergency_Land"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/res/Kill"), QSize(), QIcon::Normal, QIcon::Off);
        actionEmergency_Land->setIcon(icon2);
        actionEmergency_Kill = new QAction(MainWindow);
        actionEmergency_Kill->setObjectName(QStringLiteral("actionEmergency_Kill"));
        actionEmergency_Kill->setIcon(icon2);
        actionAdd_Link = new QAction(MainWindow);
        actionAdd_Link->setObjectName(QStringLiteral("actionAdd_Link"));
        actionOnline_Documentation = new QAction(MainWindow);
        actionOnline_Documentation->setObjectName(QStringLiteral("actionOnline_Documentation"));
        actionProject_Roadmap = new QAction(MainWindow);
        actionProject_Roadmap->setObjectName(QStringLiteral("actionProject_Roadmap"));
        actionDeveloper_Credits = new QAction(MainWindow);
        actionDeveloper_Credits->setObjectName(QStringLiteral("actionDeveloper_Credits"));
        actionPlan = new QAction(MainWindow);
        actionPlan->setObjectName(QStringLiteral("actionPlan"));
        actionPlan->setCheckable(true);
        actionAnalyze = new QAction(MainWindow);
        actionAnalyze->setObjectName(QStringLiteral("actionAnalyze"));
        actionAnalyze->setCheckable(true);
        actionFlight = new QAction(MainWindow);
        actionFlight->setObjectName(QStringLiteral("actionFlight"));
        actionFlight->setCheckable(true);
        actionMuteAudioOutput = new QAction(MainWindow);
        actionMuteAudioOutput->setObjectName(QStringLiteral("actionMuteAudioOutput"));
        actionMuteAudioOutput->setCheckable(true);
        actionShutdownMAV = new QAction(MainWindow);
        actionShutdownMAV->setObjectName(QStringLiteral("actionShutdownMAV"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/res/Shutdown"), QSize(), QIcon::Normal, QIcon::Off);
        actionShutdownMAV->setIcon(icon3);
        actionSettings = new QAction(MainWindow);
        actionSettings->setObjectName(QStringLiteral("actionSettings"));
        actionSettings->setMenuRole(QAction::PreferencesRole);
        actionFullscreen = new QAction(MainWindow);
        actionFullscreen->setObjectName(QStringLiteral("actionFullscreen"));
        actionFullscreen->setCheckable(true);
        actionFullscreen->setChecked(false);
        actionNormal = new QAction(MainWindow);
        actionNormal->setObjectName(QStringLiteral("actionNormal"));
        actionNormal->setCheckable(true);
        actionNormal->setChecked(false);
        actionSetup = new QAction(MainWindow);
        actionSetup->setObjectName(QStringLiteral("actionSetup"));
        actionSetup->setCheckable(true);
        actionSetup->setMenuRole(QAction::NoRole);
        actionAdvanced_Mode = new QAction(MainWindow);
        actionAdvanced_Mode->setObjectName(QStringLiteral("actionAdvanced_Mode"));
        actionAdvanced_Mode->setCheckable(true);
        actionSimulationView = new QAction(MainWindow);
        actionSimulationView->setObjectName(QStringLiteral("actionSimulationView"));
        actionSimulationView->setCheckable(true);
        actionStatusBar = new QAction(MainWindow);
        actionStatusBar->setObjectName(QStringLiteral("actionStatusBar"));
        actionStatusBar->setCheckable(true);
        actionExperimentalPlanView = new QAction(MainWindow);
        actionExperimentalPlanView->setObjectName(QStringLiteral("actionExperimentalPlanView"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        centralWidget->setMinimumSize(QSize(200, 150));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1024, 22));
        menuMGround = new QMenu(menuBar);
        menuMGround->setObjectName(QStringLiteral("menuMGround"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuPerspectives = new QMenu(menuBar);
        menuPerspectives->setObjectName(QStringLiteral("menuPerspectives"));
        menuAdvanced = new QMenu(menuBar);
        menuAdvanced->setObjectName(QStringLiteral("menuAdvanced"));
        menuTools = new QMenu(menuAdvanced);
        menuTools->setObjectName(QStringLiteral("menuTools"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuMGround->menuAction());
        menuBar->addAction(menuPerspectives->menuAction());
        menuBar->addAction(menuAdvanced->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuMGround->addSeparator();
        menuMGround->addAction(actionMuteAudioOutput);
        menuMGround->addAction(actionAdd_Link);
        menuMGround->addAction(actionSettings);
        menuMGround->addSeparator();
        menuMGround->addAction(actionExit);
        menuHelp->addAction(actionOnline_Documentation);
        menuHelp->addAction(actionProject_Roadmap);
        menuHelp->addAction(actionDeveloper_Credits);
        menuPerspectives->addAction(actionSetup);
        menuPerspectives->addAction(actionPlan);
        menuPerspectives->addAction(actionFlight);
        menuPerspectives->addAction(actionAnalyze);
        menuPerspectives->addSeparator();
        menuPerspectives->addAction(actionFullscreen);
        menuPerspectives->addAction(actionNormal);
        menuPerspectives->addSeparator();
        menuPerspectives->addAction(actionStatusBar);
        menuAdvanced->addAction(actionExperimentalPlanView);
        menuAdvanced->addAction(actionSimulationView);
        menuAdvanced->addSeparator();
        menuAdvanced->addSeparator();
        menuAdvanced->addAction(menuTools->menuAction());
        menuTools->addSeparator();

        retranslateUi(MainWindow);
        QObject::connect(actionExit, SIGNAL(triggered()), MainWindow, SLOT(close()));
        QObject::connect(actionFullscreen, SIGNAL(triggered()), MainWindow, SLOT(showFullScreen()));
        QObject::connect(actionNormal, SIGNAL(triggered()), MainWindow, SLOT(showNormal()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MGMainWindow", 0));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0));
        actionExit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", 0));
        actionLiftoff->setText(QApplication::translate("MainWindow", "Liftoff", 0));
        actionLand->setText(QApplication::translate("MainWindow", "Land", 0));
        actionEmergency_Land->setText(QApplication::translate("MainWindow", "Emergency Land", 0));
        actionEmergency_Land->setShortcut(QApplication::translate("MainWindow", "Ctrl+L", 0));
        actionEmergency_Kill->setText(QApplication::translate("MainWindow", "Kill UAS", 0));
        actionEmergency_Kill->setShortcut(QApplication::translate("MainWindow", "Ctrl+K", 0));
        actionAdd_Link->setText(QApplication::translate("MainWindow", "Manage Communication Links", 0));
        actionOnline_Documentation->setText(QApplication::translate("MainWindow", "Online Documentation", 0));
        actionProject_Roadmap->setText(QApplication::translate("MainWindow", "Project Roadmap", 0));
        actionDeveloper_Credits->setText(QApplication::translate("MainWindow", "Developer Credits", 0));
        actionPlan->setText(QApplication::translate("MainWindow", "Plan", 0));
        actionAnalyze->setText(QApplication::translate("MainWindow", "Analyze", 0));
        actionFlight->setText(QApplication::translate("MainWindow", "Fly", 0));
        actionMuteAudioOutput->setText(QApplication::translate("MainWindow", "Mute Audio Output", 0));
        actionShutdownMAV->setText(QApplication::translate("MainWindow", "Shutdown MAV", 0));
#ifndef QT_NO_TOOLTIP
        actionShutdownMAV->setToolTip(QApplication::translate("MainWindow", "Shutdown the onboard computer - works not during flight", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionShutdownMAV->setStatusTip(QApplication::translate("MainWindow", "Shutdown the onboard computer - works not during flight", 0));
#endif // QT_NO_STATUSTIP
        actionSettings->setText(QApplication::translate("MainWindow", "Settings", 0));
#ifndef QT_NO_TOOLTIP
        actionSettings->setToolTip(QApplication::translate("MainWindow", "Application settings", 0));
#endif // QT_NO_TOOLTIP
        actionFullscreen->setText(QApplication::translate("MainWindow", "Fullscreen", 0));
        actionNormal->setText(QApplication::translate("MainWindow", "Normal", 0));
        actionNormal->setShortcut(QApplication::translate("MainWindow", "Esc", 0));
        actionSetup->setText(QApplication::translate("MainWindow", "Setup", 0));
#ifndef QT_NO_TOOLTIP
        actionSetup->setToolTip(QApplication::translate("MainWindow", "Setup of the vehicle", 0));
#endif // QT_NO_TOOLTIP
        actionAdvanced_Mode->setText(QApplication::translate("MainWindow", "Advanced Mode", 0));
        actionSimulationView->setText(QApplication::translate("MainWindow", "HIL Simulation", 0));
        actionStatusBar->setText(QApplication::translate("MainWindow", "Show Status Bar", 0));
        actionExperimentalPlanView->setText(QApplication::translate("MainWindow", "Experimental Plan View", 0));
        menuMGround->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0));
        menuPerspectives->setTitle(QApplication::translate("MainWindow", "View", 0));
        menuAdvanced->setTitle(QApplication::translate("MainWindow", "Advanced", 0));
        menuTools->setTitle(QApplication::translate("MainWindow", "Tool Widgets", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
