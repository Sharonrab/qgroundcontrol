/********************************************************************************
** Form generated from reading UI file 'MAVLinkSettingsWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAVLINKSETTINGSWIDGET_H
#define UI_MAVLINKSETTINGSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MAVLinkSettingsWidget
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_3;
    QSpinBox *paramRewriteSpinBox;
    QLineEdit *multiplexingFilterLineEdit;
    QSpinBox *actionRetransmissionSpinBox;
    QSpacerItem *horizontalSpacer;
    QSpinBox *paramRetransmissionSpinBox;
    QFrame *line;
    QComboBox *droneOSComboBox;
    QSpacerItem *horizontalSpacer_2;
    QLabel *paramRewriteLabel;
    QLabel *paramRetransmissionLabel;
    QCheckBox *heartbeatCheckBox;
    QCheckBox *multiplexingCheckBox;
    QLabel *actionRetransmissionLabel;
    QSpacerItem *versionSpacer;
    QSpinBox *systemIdSpinBox;
    QCheckBox *droneOSCheckBox;
    QCheckBox *actionGuardCheckBox;
    QCheckBox *multiplexingFilterCheckBox;
    QCheckBox *versionCheckBox;
    QSpacerItem *multiplexingFilterSpacer;
    QLineEdit *droneOSLineEdit;
    QCheckBox *paramGuardCheckBox;
    QLabel *versionLabel;
    QLabel *systemIdLabel;

    void setupUi(QWidget *MAVLinkSettingsWidget)
    {
        if (MAVLinkSettingsWidget->objectName().isEmpty())
            MAVLinkSettingsWidget->setObjectName(QStringLiteral("MAVLinkSettingsWidget"));
        MAVLinkSettingsWidget->resize(431, 442);
        gridLayout = new QGridLayout(MAVLinkSettingsWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer_4 = new QSpacerItem(8, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 16, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(8, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 13, 0, 1, 1);

        paramRewriteSpinBox = new QSpinBox(MAVLinkSettingsWidget);
        paramRewriteSpinBox->setObjectName(QStringLiteral("paramRewriteSpinBox"));
        paramRewriteSpinBox->setMinimum(50);
        paramRewriteSpinBox->setMaximum(60000);
        paramRewriteSpinBox->setSingleStep(50);

        gridLayout->addWidget(paramRewriteSpinBox, 11, 2, 1, 1);

        multiplexingFilterLineEdit = new QLineEdit(MAVLinkSettingsWidget);
        multiplexingFilterLineEdit->setObjectName(QStringLiteral("multiplexingFilterLineEdit"));

        gridLayout->addWidget(multiplexingFilterLineEdit, 5, 1, 1, 2);

        actionRetransmissionSpinBox = new QSpinBox(MAVLinkSettingsWidget);
        actionRetransmissionSpinBox->setObjectName(QStringLiteral("actionRetransmissionSpinBox"));
        actionRetransmissionSpinBox->setMinimum(20);
        actionRetransmissionSpinBox->setMaximum(1000);
        actionRetransmissionSpinBox->setSingleStep(10);

        gridLayout->addWidget(actionRetransmissionSpinBox, 13, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(8, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 10, 0, 1, 1);

        paramRetransmissionSpinBox = new QSpinBox(MAVLinkSettingsWidget);
        paramRetransmissionSpinBox->setObjectName(QStringLiteral("paramRetransmissionSpinBox"));
        paramRetransmissionSpinBox->setMinimum(50);
        paramRetransmissionSpinBox->setMaximum(60000);
        paramRetransmissionSpinBox->setSingleStep(50);
        paramRetransmissionSpinBox->setValue(50);

        gridLayout->addWidget(paramRetransmissionSpinBox, 10, 2, 1, 1);

        line = new QFrame(MAVLinkSettingsWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setMinimumSize(QSize(0, 0));
        line->setMidLineWidth(0);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 14, 0, 1, 3);

        droneOSComboBox = new QComboBox(MAVLinkSettingsWidget);
        droneOSComboBox->setObjectName(QStringLiteral("droneOSComboBox"));
        droneOSComboBox->setEditable(true);

        gridLayout->addWidget(droneOSComboBox, 17, 1, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(8, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 11, 0, 1, 1);

        paramRewriteLabel = new QLabel(MAVLinkSettingsWidget);
        paramRewriteLabel->setObjectName(QStringLiteral("paramRewriteLabel"));

        gridLayout->addWidget(paramRewriteLabel, 11, 1, 1, 1);

        paramRetransmissionLabel = new QLabel(MAVLinkSettingsWidget);
        paramRetransmissionLabel->setObjectName(QStringLiteral("paramRetransmissionLabel"));

        gridLayout->addWidget(paramRetransmissionLabel, 10, 1, 1, 1);

        heartbeatCheckBox = new QCheckBox(MAVLinkSettingsWidget);
        heartbeatCheckBox->setObjectName(QStringLiteral("heartbeatCheckBox"));

        gridLayout->addWidget(heartbeatCheckBox, 1, 0, 1, 3);

        multiplexingCheckBox = new QCheckBox(MAVLinkSettingsWidget);
        multiplexingCheckBox->setObjectName(QStringLiteral("multiplexingCheckBox"));

        gridLayout->addWidget(multiplexingCheckBox, 3, 0, 1, 3);

        actionRetransmissionLabel = new QLabel(MAVLinkSettingsWidget);
        actionRetransmissionLabel->setObjectName(QStringLiteral("actionRetransmissionLabel"));

        gridLayout->addWidget(actionRetransmissionLabel, 13, 1, 1, 1);

        versionSpacer = new QSpacerItem(8, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(versionSpacer, 8, 0, 1, 1);

        systemIdSpinBox = new QSpinBox(MAVLinkSettingsWidget);
        systemIdSpinBox->setObjectName(QStringLiteral("systemIdSpinBox"));
        systemIdSpinBox->setMinimum(1);
        systemIdSpinBox->setMaximum(255);

        gridLayout->addWidget(systemIdSpinBox, 0, 2, 1, 1);

        droneOSCheckBox = new QCheckBox(MAVLinkSettingsWidget);
        droneOSCheckBox->setObjectName(QStringLiteral("droneOSCheckBox"));

        gridLayout->addWidget(droneOSCheckBox, 15, 0, 1, 3);

        actionGuardCheckBox = new QCheckBox(MAVLinkSettingsWidget);
        actionGuardCheckBox->setObjectName(QStringLiteral("actionGuardCheckBox"));

        gridLayout->addWidget(actionGuardCheckBox, 12, 0, 1, 3);

        multiplexingFilterCheckBox = new QCheckBox(MAVLinkSettingsWidget);
        multiplexingFilterCheckBox->setObjectName(QStringLiteral("multiplexingFilterCheckBox"));

        gridLayout->addWidget(multiplexingFilterCheckBox, 4, 0, 1, 3);

        versionCheckBox = new QCheckBox(MAVLinkSettingsWidget);
        versionCheckBox->setObjectName(QStringLiteral("versionCheckBox"));

        gridLayout->addWidget(versionCheckBox, 7, 0, 1, 3);

        multiplexingFilterSpacer = new QSpacerItem(8, 0, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        gridLayout->addItem(multiplexingFilterSpacer, 5, 0, 1, 1);

        droneOSLineEdit = new QLineEdit(MAVLinkSettingsWidget);
        droneOSLineEdit->setObjectName(QStringLiteral("droneOSLineEdit"));
        droneOSLineEdit->setMaxLength(32);

        gridLayout->addWidget(droneOSLineEdit, 16, 1, 1, 2);

        paramGuardCheckBox = new QCheckBox(MAVLinkSettingsWidget);
        paramGuardCheckBox->setObjectName(QStringLiteral("paramGuardCheckBox"));

        gridLayout->addWidget(paramGuardCheckBox, 9, 0, 1, 3);

        versionLabel = new QLabel(MAVLinkSettingsWidget);
        versionLabel->setObjectName(QStringLiteral("versionLabel"));

        gridLayout->addWidget(versionLabel, 8, 1, 1, 2);

        systemIdLabel = new QLabel(MAVLinkSettingsWidget);
        systemIdLabel->setObjectName(QStringLiteral("systemIdLabel"));

        gridLayout->addWidget(systemIdLabel, 0, 0, 1, 2);

        gridLayout->setColumnStretch(0, 1);

        retranslateUi(MAVLinkSettingsWidget);

        QMetaObject::connectSlotsByName(MAVLinkSettingsWidget);
    } // setupUi

    void retranslateUi(QWidget *MAVLinkSettingsWidget)
    {
        MAVLinkSettingsWidget->setWindowTitle(QApplication::translate("MAVLinkSettingsWidget", "Form", 0));
#ifndef QT_NO_TOOLTIP
        paramRewriteSpinBox->setToolTip(QApplication::translate("MAVLinkSettingsWidget", "Time in milliseconds after which a not acknowledged write request is sent again.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        paramRewriteSpinBox->setStatusTip(QApplication::translate("MAVLinkSettingsWidget", "Time in milliseconds after which a not acknowledged write request is sent again.", 0));
#endif // QT_NO_STATUSTIP
        paramRewriteSpinBox->setSuffix(QApplication::translate("MAVLinkSettingsWidget", " ms", 0));
        multiplexingFilterLineEdit->setText(QApplication::translate("MAVLinkSettingsWidget", "Enter a comma-separated list of allowed packets", 0));
        actionRetransmissionSpinBox->setSuffix(QApplication::translate("MAVLinkSettingsWidget", " ms", 0));
#ifndef QT_NO_TOOLTIP
        paramRetransmissionSpinBox->setToolTip(QApplication::translate("MAVLinkSettingsWidget", "Time in milliseconds after which a not acknowledged read request is sent again.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        paramRetransmissionSpinBox->setStatusTip(QApplication::translate("MAVLinkSettingsWidget", "Time in milliseconds after which a not acknowledged read request is sent again.", 0));
#endif // QT_NO_STATUSTIP
        paramRetransmissionSpinBox->setSuffix(QApplication::translate("MAVLinkSettingsWidget", " ms", 0));
        droneOSComboBox->clear();
        droneOSComboBox->insertItems(0, QStringList()
         << QApplication::translate("MAVLinkSettingsWidget", "mavlink.droneos.com:14555", 0)
         << QApplication::translate("MAVLinkSettingsWidget", "localhost:14555", 0)
        );
        paramRewriteLabel->setText(QApplication::translate("MAVLinkSettingsWidget", "Write request retransmission timeout", 0));
        paramRetransmissionLabel->setText(QApplication::translate("MAVLinkSettingsWidget", "Read request retransmission timeout", 0));
        heartbeatCheckBox->setText(QApplication::translate("MAVLinkSettingsWidget", "Emit heartbeat", 0));
        multiplexingCheckBox->setText(QApplication::translate("MAVLinkSettingsWidget", "Enable Multiplexing: Forward packets to all other links", 0));
        actionRetransmissionLabel->setText(QApplication::translate("MAVLinkSettingsWidget", "Action request retransmission timeout", 0));
#ifndef QT_NO_TOOLTIP
        systemIdSpinBox->setToolTip(QApplication::translate("MAVLinkSettingsWidget", "Set the groundstation number", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        systemIdSpinBox->setStatusTip(QApplication::translate("MAVLinkSettingsWidget", "Set the groundstation number", 0));
#endif // QT_NO_STATUSTIP
        droneOSCheckBox->setText(QApplication::translate("MAVLinkSettingsWidget", "Forward MAVLink packets of all links to http://droneos.com", 0));
        actionGuardCheckBox->setText(QApplication::translate("MAVLinkSettingsWidget", "Enable retransmission of actions / commands", 0));
        multiplexingFilterCheckBox->setText(QApplication::translate("MAVLinkSettingsWidget", "Filter multiplexed packets: Only forward selected IDs", 0));
        versionCheckBox->setText(QApplication::translate("MAVLinkSettingsWidget", "Only accept MAVs with same protocol version", 0));
        droneOSLineEdit->setText(QApplication::translate("MAVLinkSettingsWidget", "Enter your DroneOS API Token/Key", 0));
        paramGuardCheckBox->setText(QApplication::translate("MAVLinkSettingsWidget", "Enable retransmission of parameter read/write requests", 0));
        versionLabel->setText(QApplication::translate("MAVLinkSettingsWidget", "MAVLINK_VERSION: ", 0));
#ifndef QT_NO_TOOLTIP
        systemIdLabel->setToolTip(QApplication::translate("MAVLinkSettingsWidget", "The system ID is the number the MAV associates with this computer", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        systemIdLabel->setStatusTip(QApplication::translate("MAVLinkSettingsWidget", "The system ID is the number the MAV associates with this computer", 0));
#endif // QT_NO_STATUSTIP
        systemIdLabel->setText(QApplication::translate("MAVLinkSettingsWidget", "Groundstation MAVLink System ID", 0));
    } // retranslateUi

};

namespace Ui {
    class MAVLinkSettingsWidget: public Ui_MAVLinkSettingsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAVLINKSETTINGSWIDGET_H
