/********************************************************************************
** Form generated from reading UI file 'QGCHilXPlaneConfiguration.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCHILXPLANECONFIGURATION_H
#define UI_QGCHILXPLANECONFIGURATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QGCHilXPlaneConfiguration
{
public:
    QGridLayout *gridLayout;
    QComboBox *hostComboBox;
    QLabel *hostLabel;
    QCheckBox *sensorHilCheckBox;
    QSpacerItem *verticalSpacer;
    QPushButton *startButton;

    void setupUi(QWidget *QGCHilXPlaneConfiguration)
    {
        if (QGCHilXPlaneConfiguration->objectName().isEmpty())
            QGCHilXPlaneConfiguration->setObjectName(QStringLiteral("QGCHilXPlaneConfiguration"));
        QGCHilXPlaneConfiguration->resize(226, 150);
        gridLayout = new QGridLayout(QGCHilXPlaneConfiguration);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        hostComboBox = new QComboBox(QGCHilXPlaneConfiguration);
        hostComboBox->setObjectName(QStringLiteral("hostComboBox"));
        hostComboBox->setEditable(true);

        gridLayout->addWidget(hostComboBox, 0, 1, 1, 2);

        hostLabel = new QLabel(QGCHilXPlaneConfiguration);
        hostLabel->setObjectName(QStringLiteral("hostLabel"));

        gridLayout->addWidget(hostLabel, 0, 0, 1, 1);

        sensorHilCheckBox = new QCheckBox(QGCHilXPlaneConfiguration);
        sensorHilCheckBox->setObjectName(QStringLiteral("sensorHilCheckBox"));

        gridLayout->addWidget(sensorHilCheckBox, 3, 0, 1, 3);

        verticalSpacer = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 0, 1, 3);

        startButton = new QPushButton(QGCHilXPlaneConfiguration);
        startButton->setObjectName(QStringLiteral("startButton"));

        gridLayout->addWidget(startButton, 1, 1, 1, 2);

        gridLayout->setColumnStretch(0, 20);

        retranslateUi(QGCHilXPlaneConfiguration);

        QMetaObject::connectSlotsByName(QGCHilXPlaneConfiguration);
    } // setupUi

    void retranslateUi(QWidget *QGCHilXPlaneConfiguration)
    {
        QGCHilXPlaneConfiguration->setWindowTitle(QApplication::translate("QGCHilXPlaneConfiguration", "Form", 0));
        hostComboBox->clear();
        hostComboBox->insertItems(0, QStringList()
         << QApplication::translate("QGCHilXPlaneConfiguration", "127.0.0.1:49000", 0)
        );
        hostLabel->setText(QApplication::translate("QGCHilXPlaneConfiguration", "Host", 0));
        sensorHilCheckBox->setText(QApplication::translate("QGCHilXPlaneConfiguration", "Enable sensor level HIL", 0));
        startButton->setText(QApplication::translate("QGCHilXPlaneConfiguration", "Start", 0));
    } // retranslateUi

};

namespace Ui {
    class QGCHilXPlaneConfiguration: public Ui_QGCHilXPlaneConfiguration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCHILXPLANECONFIGURATION_H
