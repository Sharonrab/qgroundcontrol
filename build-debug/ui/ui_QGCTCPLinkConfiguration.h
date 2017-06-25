/********************************************************************************
** Form generated from reading UI file 'QGCTCPLinkConfiguration.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCTCPLINKCONFIGURATION_H
#define UI_QGCTCPLINKCONFIGURATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QGCTCPLinkConfiguration
{
public:
    QFormLayout *formLayout;
    QLabel *portLabel;
    QSpinBox *portSpinBox;
    QLabel *label;
    QLineEdit *hostAddressLineEdit;

    void setupUi(QWidget *QGCTCPLinkConfiguration)
    {
        if (QGCTCPLinkConfiguration->objectName().isEmpty())
            QGCTCPLinkConfiguration->setObjectName(QStringLiteral("QGCTCPLinkConfiguration"));
        QGCTCPLinkConfiguration->resize(400, 300);
        formLayout = new QFormLayout(QGCTCPLinkConfiguration);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        portLabel = new QLabel(QGCTCPLinkConfiguration);
        portLabel->setObjectName(QStringLiteral("portLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, portLabel);

        portSpinBox = new QSpinBox(QGCTCPLinkConfiguration);
        portSpinBox->setObjectName(QStringLiteral("portSpinBox"));
        portSpinBox->setMinimum(1024);
        portSpinBox->setMaximum(65535);
        portSpinBox->setValue(3000);

        formLayout->setWidget(0, QFormLayout::FieldRole, portSpinBox);

        label = new QLabel(QGCTCPLinkConfiguration);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        hostAddressLineEdit = new QLineEdit(QGCTCPLinkConfiguration);
        hostAddressLineEdit->setObjectName(QStringLiteral("hostAddressLineEdit"));
        hostAddressLineEdit->setMinimumSize(QSize(200, 0));

        formLayout->setWidget(1, QFormLayout::FieldRole, hostAddressLineEdit);


        retranslateUi(QGCTCPLinkConfiguration);

        QMetaObject::connectSlotsByName(QGCTCPLinkConfiguration);
    } // setupUi

    void retranslateUi(QWidget *QGCTCPLinkConfiguration)
    {
        QGCTCPLinkConfiguration->setWindowTitle(QApplication::translate("QGCTCPLinkConfiguration", "Form", 0));
        portLabel->setText(QApplication::translate("QGCTCPLinkConfiguration", "TCP Port", 0));
        label->setText(QApplication::translate("QGCTCPLinkConfiguration", "Host Address", 0));
    } // retranslateUi

};

namespace Ui {
    class QGCTCPLinkConfiguration: public Ui_QGCTCPLinkConfiguration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCTCPLINKCONFIGURATION_H
