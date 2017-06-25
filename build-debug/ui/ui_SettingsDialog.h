/********************************************************************************
** Form generated from reading UI file 'SettingsDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSDIALOG_H
#define UI_SETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsDialog
{
public:
    QVBoxLayout *verticalLayout_5;
    QTabWidget *tabWidget;
    QWidget *general;
    QVBoxLayout *verticalLayout_8;
    QCheckBox *audioMuteCheckBox;
    QCheckBox *reconnectCheckBox;
    QCheckBox *lowPowerCheckBox;
    QCheckBox *promptFlightDataSave;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QComboBox *styleChooser;
    QGroupBox *fileLocationsLayout;
    QVBoxLayout *verticalLayout_7;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *savedFilesLocation;
    QPushButton *browseSavedFilesLocation;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *showGPS;
    QCheckBox *showMessages;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *showBattery;
    QCheckBox *showMav;
    QCheckBox *showRSSI;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *deleteSettings;
    QLabel *label_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SettingsDialog)
    {
        if (SettingsDialog->objectName().isEmpty())
            SettingsDialog->setObjectName(QStringLiteral("SettingsDialog"));
        SettingsDialog->resize(500, 596);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SettingsDialog->sizePolicy().hasHeightForWidth());
        SettingsDialog->setSizePolicy(sizePolicy);
        verticalLayout_5 = new QVBoxLayout(SettingsDialog);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        tabWidget = new QTabWidget(SettingsDialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        general = new QWidget();
        general->setObjectName(QStringLiteral("general"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(general->sizePolicy().hasHeightForWidth());
        general->setSizePolicy(sizePolicy1);
        verticalLayout_8 = new QVBoxLayout(general);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        audioMuteCheckBox = new QCheckBox(general);
        audioMuteCheckBox->setObjectName(QStringLiteral("audioMuteCheckBox"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(audioMuteCheckBox->sizePolicy().hasHeightForWidth());
        audioMuteCheckBox->setSizePolicy(sizePolicy2);
        audioMuteCheckBox->setIconSize(QSize(0, 0));

        verticalLayout_8->addWidget(audioMuteCheckBox);

        reconnectCheckBox = new QCheckBox(general);
        reconnectCheckBox->setObjectName(QStringLiteral("reconnectCheckBox"));
        sizePolicy2.setHeightForWidth(reconnectCheckBox->sizePolicy().hasHeightForWidth());
        reconnectCheckBox->setSizePolicy(sizePolicy2);
        reconnectCheckBox->setIconSize(QSize(0, 0));

        verticalLayout_8->addWidget(reconnectCheckBox);

        lowPowerCheckBox = new QCheckBox(general);
        lowPowerCheckBox->setObjectName(QStringLiteral("lowPowerCheckBox"));
        sizePolicy2.setHeightForWidth(lowPowerCheckBox->sizePolicy().hasHeightForWidth());
        lowPowerCheckBox->setSizePolicy(sizePolicy2);
        lowPowerCheckBox->setIconSize(QSize(0, 0));

        verticalLayout_8->addWidget(lowPowerCheckBox);

        promptFlightDataSave = new QCheckBox(general);
        promptFlightDataSave->setObjectName(QStringLiteral("promptFlightDataSave"));
        sizePolicy2.setHeightForWidth(promptFlightDataSave->sizePolicy().hasHeightForWidth());
        promptFlightDataSave->setSizePolicy(sizePolicy2);
        promptFlightDataSave->setIconSize(QSize(0, 0));

        verticalLayout_8->addWidget(promptFlightDataSave);

        groupBox = new QGroupBox(general);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy3);
        groupBox->setFlat(false);
        groupBox->setCheckable(false);
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, 8, -1, 8);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout->setContentsMargins(0, -1, 80, -1);
        styleChooser = new QComboBox(groupBox);
        styleChooser->setObjectName(QStringLiteral("styleChooser"));
        sizePolicy2.setHeightForWidth(styleChooser->sizePolicy().hasHeightForWidth());
        styleChooser->setSizePolicy(sizePolicy2);
        styleChooser->setMinimumSize(QSize(200, 0));

        horizontalLayout->addWidget(styleChooser);


        verticalLayout_3->addLayout(horizontalLayout);


        verticalLayout_8->addWidget(groupBox);

        fileLocationsLayout = new QGroupBox(general);
        fileLocationsLayout->setObjectName(QStringLiteral("fileLocationsLayout"));
        sizePolicy2.setHeightForWidth(fileLocationsLayout->sizePolicy().hasHeightForWidth());
        fileLocationsLayout->setSizePolicy(sizePolicy2);
        fileLocationsLayout->setMinimumSize(QSize(0, 0));
        verticalLayout_7 = new QVBoxLayout(fileLocationsLayout);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        label = new QLabel(fileLocationsLayout);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy4);
        label->setMinimumSize(QSize(0, 0));
        label->setWordWrap(true);

        verticalLayout_7->addWidget(label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        savedFilesLocation = new QLineEdit(fileLocationsLayout);
        savedFilesLocation->setObjectName(QStringLiteral("savedFilesLocation"));
        savedFilesLocation->setMinimumSize(QSize(200, 21));
        savedFilesLocation->setMaxLength(1024);

        horizontalLayout_2->addWidget(savedFilesLocation);

        browseSavedFilesLocation = new QPushButton(fileLocationsLayout);
        browseSavedFilesLocation->setObjectName(QStringLiteral("browseSavedFilesLocation"));

        horizontalLayout_2->addWidget(browseSavedFilesLocation);


        verticalLayout_7->addLayout(horizontalLayout_2);


        verticalLayout_8->addWidget(fileLocationsLayout);

        groupBox_3 = new QGroupBox(general);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        sizePolicy2.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy2);
        verticalLayout_6 = new QVBoxLayout(groupBox_3);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        showGPS = new QCheckBox(groupBox_3);
        showGPS->setObjectName(QStringLiteral("showGPS"));
        showGPS->setMinimumSize(QSize(160, 0));

        horizontalLayout_3->addWidget(showGPS);

        showMessages = new QCheckBox(groupBox_3);
        showMessages->setObjectName(QStringLiteral("showMessages"));

        horizontalLayout_3->addWidget(showMessages);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        showBattery = new QCheckBox(groupBox_3);
        showBattery->setObjectName(QStringLiteral("showBattery"));
        showBattery->setMinimumSize(QSize(160, 0));

        horizontalLayout_4->addWidget(showBattery);

        showMav = new QCheckBox(groupBox_3);
        showMav->setObjectName(QStringLiteral("showMav"));

        horizontalLayout_4->addWidget(showMav);


        verticalLayout_2->addLayout(horizontalLayout_4);

        showRSSI = new QCheckBox(groupBox_3);
        showRSSI->setObjectName(QStringLiteral("showRSSI"));

        verticalLayout_2->addWidget(showRSSI);


        verticalLayout_6->addLayout(verticalLayout_2);


        verticalLayout_8->addWidget(groupBox_3);

        groupBox_2 = new QGroupBox(general);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_4 = new QVBoxLayout(groupBox_2);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        deleteSettings = new QCheckBox(groupBox_2);
        deleteSettings->setObjectName(QStringLiteral("deleteSettings"));

        verticalLayout_4->addWidget(deleteSettings);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setPointSize(11);
        label_2->setFont(font);
        label_2->setWordWrap(true);

        verticalLayout_4->addWidget(label_2);


        verticalLayout_8->addWidget(groupBox_2);

        tabWidget->addTab(general, QString());

        verticalLayout_5->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(SettingsDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(false);

        verticalLayout_5->addWidget(buttonBox);


        retranslateUi(SettingsDialog);

        QMetaObject::connectSlotsByName(SettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *SettingsDialog)
    {
        SettingsDialog->setWindowTitle(QApplication::translate("SettingsDialog", "Dialog", 0));
        audioMuteCheckBox->setText(QApplication::translate("SettingsDialog", "Mute all audio output", 0));
        reconnectCheckBox->setText(QApplication::translate("SettingsDialog", "Automatically reconnect last link on application startup", 0));
#ifndef QT_NO_TOOLTIP
        lowPowerCheckBox->setToolTip(QApplication::translate("SettingsDialog", "Lowers all update rates to save battery power", 0));
#endif // QT_NO_TOOLTIP
        lowPowerCheckBox->setText(QApplication::translate("SettingsDialog", "Enable low power mode", 0));
        promptFlightDataSave->setText(QApplication::translate("SettingsDialog", "Prompt to save Flight Data Log after each flight", 0));
        groupBox->setTitle(QApplication::translate("SettingsDialog", "Style", 0));
        styleChooser->clear();
        styleChooser->insertItems(0, QStringList()
         << QApplication::translate("SettingsDialog", "Dark (for indoor use)", 0)
         << QApplication::translate("SettingsDialog", "Light (for outdoor use)", 0)
        );
        fileLocationsLayout->setTitle(QApplication::translate("SettingsDialog", "File Locations", 0));
        label->setText(QApplication::translate("SettingsDialog", "Specify the location you would like to save files:", 0));
        browseSavedFilesLocation->setText(QApplication::translate("SettingsDialog", "Browse", 0));
        groupBox_3->setTitle(QApplication::translate("SettingsDialog", "Tool Bar", 0));
        showGPS->setText(QApplication::translate("SettingsDialog", "Show GPS", 0));
        showMessages->setText(QApplication::translate("SettingsDialog", "Show Messages", 0));
        showBattery->setText(QApplication::translate("SettingsDialog", "Show Battery", 0));
        showMav->setText(QApplication::translate("SettingsDialog", "Show Mav Icon", 0));
        showRSSI->setText(QApplication::translate("SettingsDialog", "Show RSSI", 0));
        groupBox_2->setTitle(QApplication::translate("SettingsDialog", "Reset All Settings to Default", 0));
        deleteSettings->setText(QApplication::translate("SettingsDialog", "Delete all saved settings on next boot", 0));
        label_2->setText(QApplication::translate("SettingsDialog", "Note: You can also use --clear-settings as a command line option to accomplish this.", 0));
        tabWidget->setTabText(tabWidget->indexOf(general), QApplication::translate("SettingsDialog", "General", 0));
        tabWidget->setTabToolTip(tabWidget->indexOf(general), QApplication::translate("SettingsDialog", "General Settings", 0));
    } // retranslateUi

};

namespace Ui {
    class SettingsDialog: public Ui_SettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDIALOG_H
