/********************************************************************************
** Form generated from reading UI file 'SerialSettings.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERIALSETTINGS_H
#define UI_SERIALSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_serialSettings
{
public:
    QAction *actionDelete;
    QAction *actionConnect;
    QAction *actionClose;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *portlabel;
    QComboBox *portName;
    QHBoxLayout *horizontalLayout_6;
    QLabel *portlabel_2;
    QComboBox *baudRate;
    QCheckBox *advCheckBox;
    QHBoxLayout *horizontalLayout_8;
    QGroupBox *advGroupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *portlabel_3;
    QCheckBox *flowControlCheckBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *portlabel_4;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *parNone;
    QRadioButton *parOdd;
    QRadioButton *parEven;
    QHBoxLayout *horizontalLayout_4;
    QLabel *portlabel_5;
    QSpinBox *dataBitsSpinBox;
    QHBoxLayout *horizontalLayout_5;
    QLabel *portlabel_6;
    QSpinBox *stopBitsSpinBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *serialSettings)
    {
        if (serialSettings->objectName().isEmpty())
            serialSettings->setObjectName(QStringLiteral("serialSettings"));
        serialSettings->resize(325, 347);
        actionDelete = new QAction(serialSettings);
        actionDelete->setObjectName(QStringLiteral("actionDelete"));
        actionConnect = new QAction(serialSettings);
        actionConnect->setObjectName(QStringLiteral("actionConnect"));
        actionClose = new QAction(serialSettings);
        actionClose->setObjectName(QStringLiteral("actionClose"));
        verticalLayout_2 = new QVBoxLayout(serialSettings);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        portlabel = new QLabel(serialSettings);
        portlabel->setObjectName(QStringLiteral("portlabel"));

        horizontalLayout_7->addWidget(portlabel);

        portName = new QComboBox(serialSettings);
        portName->setObjectName(QStringLiteral("portName"));
        portName->setMinimumSize(QSize(100, 0));
        portName->setEditable(false);
        portName->setMaxCount(100);
        portName->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_7->addWidget(portName);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        portlabel_2 = new QLabel(serialSettings);
        portlabel_2->setObjectName(QStringLiteral("portlabel_2"));

        horizontalLayout_6->addWidget(portlabel_2);

        baudRate = new QComboBox(serialSettings);
        baudRate->setObjectName(QStringLiteral("baudRate"));
        baudRate->setMinimumSize(QSize(100, 0));
        baudRate->setEditable(false);
        baudRate->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_6->addWidget(baudRate);


        verticalLayout_2->addLayout(horizontalLayout_6);

        advCheckBox = new QCheckBox(serialSettings);
        advCheckBox->setObjectName(QStringLiteral("advCheckBox"));

        verticalLayout_2->addWidget(advCheckBox);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        advGroupBox = new QGroupBox(serialSettings);
        advGroupBox->setObjectName(QStringLiteral("advGroupBox"));
        verticalLayout = new QVBoxLayout(advGroupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(20, 12, 20, -1);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        portlabel_3 = new QLabel(advGroupBox);
        portlabel_3->setObjectName(QStringLiteral("portlabel_3"));

        horizontalLayout->addWidget(portlabel_3);

        flowControlCheckBox = new QCheckBox(advGroupBox);
        flowControlCheckBox->setObjectName(QStringLiteral("flowControlCheckBox"));

        horizontalLayout->addWidget(flowControlCheckBox);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        portlabel_4 = new QLabel(advGroupBox);
        portlabel_4->setObjectName(QStringLiteral("portlabel_4"));

        horizontalLayout_3->addWidget(portlabel_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        parNone = new QRadioButton(advGroupBox);
        parNone->setObjectName(QStringLiteral("parNone"));
        parNone->setChecked(true);

        horizontalLayout_2->addWidget(parNone);

        parOdd = new QRadioButton(advGroupBox);
        parOdd->setObjectName(QStringLiteral("parOdd"));

        horizontalLayout_2->addWidget(parOdd);

        parEven = new QRadioButton(advGroupBox);
        parEven->setObjectName(QStringLiteral("parEven"));

        horizontalLayout_2->addWidget(parEven);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        portlabel_5 = new QLabel(advGroupBox);
        portlabel_5->setObjectName(QStringLiteral("portlabel_5"));

        horizontalLayout_4->addWidget(portlabel_5);

        dataBitsSpinBox = new QSpinBox(advGroupBox);
        dataBitsSpinBox->setObjectName(QStringLiteral("dataBitsSpinBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dataBitsSpinBox->sizePolicy().hasHeightForWidth());
        dataBitsSpinBox->setSizePolicy(sizePolicy);
        dataBitsSpinBox->setMinimumSize(QSize(0, 0));
        dataBitsSpinBox->setMaximumSize(QSize(60, 16777215));
        dataBitsSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        dataBitsSpinBox->setMinimum(5);
        dataBitsSpinBox->setMaximum(8);
        dataBitsSpinBox->setValue(8);

        horizontalLayout_4->addWidget(dataBitsSpinBox);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        portlabel_6 = new QLabel(advGroupBox);
        portlabel_6->setObjectName(QStringLiteral("portlabel_6"));

        horizontalLayout_5->addWidget(portlabel_6);

        stopBitsSpinBox = new QSpinBox(advGroupBox);
        stopBitsSpinBox->setObjectName(QStringLiteral("stopBitsSpinBox"));
        sizePolicy.setHeightForWidth(stopBitsSpinBox->sizePolicy().hasHeightForWidth());
        stopBitsSpinBox->setSizePolicy(sizePolicy);
        stopBitsSpinBox->setMaximumSize(QSize(60, 16777215));
        stopBitsSpinBox->setFrame(true);
        stopBitsSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        stopBitsSpinBox->setReadOnly(false);
        stopBitsSpinBox->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        stopBitsSpinBox->setMinimum(1);
        stopBitsSpinBox->setMaximum(2);
        stopBitsSpinBox->setValue(2);

        horizontalLayout_5->addWidget(stopBitsSpinBox);


        verticalLayout->addLayout(horizontalLayout_5);


        horizontalLayout_8->addWidget(advGroupBox);


        verticalLayout_2->addLayout(horizontalLayout_8);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        retranslateUi(serialSettings);
        QObject::connect(actionClose, SIGNAL(triggered()), serialSettings, SLOT(close()));

        QMetaObject::connectSlotsByName(serialSettings);
    } // setupUi

    void retranslateUi(QWidget *serialSettings)
    {
        serialSettings->setWindowTitle(QApplication::translate("serialSettings", "Form", 0));
        actionDelete->setText(QApplication::translate("serialSettings", "Delete", 0));
#ifndef QT_NO_TOOLTIP
        actionDelete->setToolTip(QApplication::translate("serialSettings", "Delete this link", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionDelete->setStatusTip(QApplication::translate("serialSettings", "Delete this link", 0));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionDelete->setWhatsThis(QApplication::translate("serialSettings", "Link delete button", 0));
#endif // QT_NO_WHATSTHIS
        actionConnect->setText(QApplication::translate("serialSettings", "Connect", 0));
#ifndef QT_NO_TOOLTIP
        actionConnect->setToolTip(QApplication::translate("serialSettings", "Connect this link", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionConnect->setStatusTip(QApplication::translate("serialSettings", "Connect this link", 0));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionConnect->setWhatsThis(QApplication::translate("serialSettings", "Connect this link", 0));
#endif // QT_NO_WHATSTHIS
        actionClose->setText(QApplication::translate("serialSettings", "Close", 0));
#ifndef QT_NO_TOOLTIP
        actionClose->setToolTip(QApplication::translate("serialSettings", "Close the configuration window", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionClose->setStatusTip(QApplication::translate("serialSettings", "Close the configuration window", 0));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionClose->setWhatsThis(QApplication::translate("serialSettings", "Close the configuration window", 0));
#endif // QT_NO_WHATSTHIS
        portlabel->setText(QApplication::translate("serialSettings", "Serial Port:", 0));
        portName->clear();
        portName->insertItems(0, QStringList()
         << QString()
        );
#ifndef QT_NO_TOOLTIP
        portName->setToolTip(QApplication::translate("serialSettings", "The serial port to which the system is connected.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        portName->setStatusTip(QApplication::translate("serialSettings", "The serial port to which the system is connected.", 0));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        portName->setWhatsThis(QApplication::translate("serialSettings", "The serial port to which the system is connected.", 0));
#endif // QT_NO_WHATSTHIS
        portlabel_2->setText(QApplication::translate("serialSettings", "Baud Rate:", 0));
        baudRate->clear();
        baudRate->insertItems(0, QStringList()
         << QApplication::translate("serialSettings", "50", 0)
         << QApplication::translate("serialSettings", "75", 0)
         << QApplication::translate("serialSettings", "110", 0)
         << QApplication::translate("serialSettings", "134", 0)
         << QApplication::translate("serialSettings", "150", 0)
         << QApplication::translate("serialSettings", "200", 0)
         << QApplication::translate("serialSettings", "300", 0)
         << QApplication::translate("serialSettings", "600", 0)
         << QApplication::translate("serialSettings", "1200", 0)
         << QApplication::translate("serialSettings", "1800", 0)
         << QApplication::translate("serialSettings", "2400", 0)
         << QApplication::translate("serialSettings", "4800", 0)
         << QApplication::translate("serialSettings", "9600", 0)
         << QApplication::translate("serialSettings", "14400", 0)
         << QApplication::translate("serialSettings", "19200", 0)
         << QApplication::translate("serialSettings", "38400", 0)
         << QApplication::translate("serialSettings", "56000", 0)
         << QApplication::translate("serialSettings", "57600", 0)
         << QApplication::translate("serialSettings", "76800", 0)
         << QApplication::translate("serialSettings", "115200", 0)
         << QApplication::translate("serialSettings", "128000", 0)
         << QApplication::translate("serialSettings", "230400", 0)
         << QApplication::translate("serialSettings", "256000", 0)
         << QApplication::translate("serialSettings", "460800", 0)
         << QApplication::translate("serialSettings", "921600", 0)
        );
#ifndef QT_NO_TOOLTIP
        baudRate->setToolTip(QApplication::translate("serialSettings", "The data transmission rate. If unsure 57600 and 115200 are very common rates.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        baudRate->setStatusTip(QApplication::translate("serialSettings", "The data transmission rate. If unsure 57600 and 115200 are very common rates.", 0));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        baudRate->setWhatsThis(QApplication::translate("serialSettings", "The data transmission rate. If unsure 57600 and 115200 are very common rates.", 0));
#endif // QT_NO_WHATSTHIS
        advCheckBox->setText(QApplication::translate("serialSettings", "Show Advanced Port Settings", 0));
        advGroupBox->setTitle(QApplication::translate("serialSettings", "Advanced", 0));
        portlabel_3->setText(QApplication::translate("serialSettings", "Flow Control:", 0));
#ifndef QT_NO_TOOLTIP
        flowControlCheckBox->setToolTip(QApplication::translate("serialSettings", "Activate / deactivate hardware flow control. Commonly deactivated", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        flowControlCheckBox->setStatusTip(QApplication::translate("serialSettings", "Activate / deactivate hardware flow control. Commonly deactivated", 0));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        flowControlCheckBox->setWhatsThis(QApplication::translate("serialSettings", "Activate / deactivate hardware flow control. Commonly deactivated", 0));
#endif // QT_NO_WHATSTHIS
        flowControlCheckBox->setText(QApplication::translate("serialSettings", "Active", 0));
        portlabel_4->setText(QApplication::translate("serialSettings", "Parity:", 0));
#ifndef QT_NO_TOOLTIP
        parNone->setToolTip(QApplication::translate("serialSettings", "Set the parity. In most cases no parity (None) is used.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        parNone->setStatusTip(QApplication::translate("serialSettings", "Set the parity. In most cases no parity (None) is used.", 0));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        parNone->setWhatsThis(QApplication::translate("serialSettings", "Set the parity. In most cases no parity (None) is used.", 0));
#endif // QT_NO_WHATSTHIS
        parNone->setText(QApplication::translate("serialSettings", "None", 0));
#ifndef QT_NO_TOOLTIP
        parOdd->setToolTip(QApplication::translate("serialSettings", "Set the parity. In most cases no parity (None) is used.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        parOdd->setStatusTip(QApplication::translate("serialSettings", "Set the parity. In most cases no parity (None) is used.", 0));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        parOdd->setWhatsThis(QApplication::translate("serialSettings", "Set the parity. In most cases no parity (None) is used.", 0));
#endif // QT_NO_WHATSTHIS
        parOdd->setText(QApplication::translate("serialSettings", "Odd", 0));
#ifndef QT_NO_TOOLTIP
        parEven->setToolTip(QApplication::translate("serialSettings", "Set the parity. In most cases no parity (None) is used.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        parEven->setStatusTip(QApplication::translate("serialSettings", "Set the parity. In most cases no parity (None) is used.", 0));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        parEven->setWhatsThis(QApplication::translate("serialSettings", "Set the parity. In most cases no parity (None) is used.", 0));
#endif // QT_NO_WHATSTHIS
        parEven->setText(QApplication::translate("serialSettings", "Even", 0));
        portlabel_5->setText(QApplication::translate("serialSettings", "Data Bits:", 0));
#ifndef QT_NO_TOOLTIP
        dataBitsSpinBox->setToolTip(QApplication::translate("serialSettings", "Number of data bits per symbol. This is almost always 8.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        dataBitsSpinBox->setStatusTip(QApplication::translate("serialSettings", "Number of data bits per symbol. This is almost always 8.", 0));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        dataBitsSpinBox->setWhatsThis(QApplication::translate("serialSettings", "Number of data bits per symbol. This is almost always 8.", 0));
#endif // QT_NO_WHATSTHIS
        portlabel_6->setText(QApplication::translate("serialSettings", "Stop Bits:", 0));
#ifndef QT_NO_TOOLTIP
        stopBitsSpinBox->setToolTip(QApplication::translate("serialSettings", "Number of stop bits per symbol. This is almost always 2.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        stopBitsSpinBox->setStatusTip(QApplication::translate("serialSettings", "Number of stop bits per symbol. This is almost always 2.", 0));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        stopBitsSpinBox->setWhatsThis(QApplication::translate("serialSettings", "Number of stop bits per symbol. This is almost always 2.", 0));
#endif // QT_NO_WHATSTHIS
    } // retranslateUi

};

namespace Ui {
    class serialSettings: public Ui_serialSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIALSETTINGS_H
