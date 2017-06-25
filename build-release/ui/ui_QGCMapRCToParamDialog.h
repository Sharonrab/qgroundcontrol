/********************************************************************************
** Form generated from reading UI file 'QGCMapRCToParamDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCMAPRCTOPARAMDIALOG_H
#define UI_QGCMAPRCTOPARAMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QGCMapRCToParamDialog
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label1;
    QLabel *rcParamChannelInfoLabel;
    QComboBox *rcParamChannelComboBox;
    QLabel *label2;
    QLabel *paramIdInfoLabel;
    QLabel *paramIdLabel;
    QLabel *label3;
    QLabel *scaleInfoLabel;
    QDoubleSpinBox *scaleDoubleSpinBox;
    QLabel *value0InfoLabel;
    QDoubleSpinBox *value0DoubleSpinBox;
    QLabel *minInfoLabel;
    QDoubleSpinBox *minValueDoubleSpinBox;
    QLabel *maxInfoLabel;
    QDoubleSpinBox *maxValueDoubleSpinBox;
    QLabel *infoLabel;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *QGCMapRCToParamDialog)
    {
        if (QGCMapRCToParamDialog->objectName().isEmpty())
            QGCMapRCToParamDialog->setObjectName(QStringLiteral("QGCMapRCToParamDialog"));
        QGCMapRCToParamDialog->resize(400, 315);
        buttonBox = new QDialogButtonBox(QGCMapRCToParamDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 280, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        formLayoutWidget = new QWidget(QGCMapRCToParamDialog);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(9, 9, 381, 271));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label1 = new QLabel(formLayoutWidget);
        label1->setObjectName(QStringLiteral("label1"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label1);

        rcParamChannelInfoLabel = new QLabel(formLayoutWidget);
        rcParamChannelInfoLabel->setObjectName(QStringLiteral("rcParamChannelInfoLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, rcParamChannelInfoLabel);

        rcParamChannelComboBox = new QComboBox(formLayoutWidget);
        rcParamChannelComboBox->setObjectName(QStringLiteral("rcParamChannelComboBox"));
        rcParamChannelComboBox->setEditable(false);

        formLayout->setWidget(1, QFormLayout::FieldRole, rcParamChannelComboBox);

        label2 = new QLabel(formLayoutWidget);
        label2->setObjectName(QStringLiteral("label2"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label2);

        paramIdInfoLabel = new QLabel(formLayoutWidget);
        paramIdInfoLabel->setObjectName(QStringLiteral("paramIdInfoLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, paramIdInfoLabel);

        paramIdLabel = new QLabel(formLayoutWidget);
        paramIdLabel->setObjectName(QStringLiteral("paramIdLabel"));

        formLayout->setWidget(3, QFormLayout::FieldRole, paramIdLabel);

        label3 = new QLabel(formLayoutWidget);
        label3->setObjectName(QStringLiteral("label3"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label3);

        scaleInfoLabel = new QLabel(formLayoutWidget);
        scaleInfoLabel->setObjectName(QStringLiteral("scaleInfoLabel"));

        formLayout->setWidget(5, QFormLayout::LabelRole, scaleInfoLabel);

        scaleDoubleSpinBox = new QDoubleSpinBox(formLayoutWidget);
        scaleDoubleSpinBox->setObjectName(QStringLiteral("scaleDoubleSpinBox"));
        scaleDoubleSpinBox->setValue(1);

        formLayout->setWidget(5, QFormLayout::FieldRole, scaleDoubleSpinBox);

        value0InfoLabel = new QLabel(formLayoutWidget);
        value0InfoLabel->setObjectName(QStringLiteral("value0InfoLabel"));

        formLayout->setWidget(6, QFormLayout::LabelRole, value0InfoLabel);

        value0DoubleSpinBox = new QDoubleSpinBox(formLayoutWidget);
        value0DoubleSpinBox->setObjectName(QStringLiteral("value0DoubleSpinBox"));
        value0DoubleSpinBox->setEnabled(false);
        value0DoubleSpinBox->setDecimals(8);
        value0DoubleSpinBox->setMinimum(-100000);
        value0DoubleSpinBox->setMaximum(100000);

        formLayout->setWidget(6, QFormLayout::FieldRole, value0DoubleSpinBox);

        minInfoLabel = new QLabel(formLayoutWidget);
        minInfoLabel->setObjectName(QStringLiteral("minInfoLabel"));

        formLayout->setWidget(7, QFormLayout::LabelRole, minInfoLabel);

        minValueDoubleSpinBox = new QDoubleSpinBox(formLayoutWidget);
        minValueDoubleSpinBox->setObjectName(QStringLiteral("minValueDoubleSpinBox"));
        minValueDoubleSpinBox->setDecimals(8);
        minValueDoubleSpinBox->setMinimum(-100000);
        minValueDoubleSpinBox->setMaximum(100000);

        formLayout->setWidget(7, QFormLayout::FieldRole, minValueDoubleSpinBox);

        maxInfoLabel = new QLabel(formLayoutWidget);
        maxInfoLabel->setObjectName(QStringLiteral("maxInfoLabel"));

        formLayout->setWidget(8, QFormLayout::LabelRole, maxInfoLabel);

        maxValueDoubleSpinBox = new QDoubleSpinBox(formLayoutWidget);
        maxValueDoubleSpinBox->setObjectName(QStringLiteral("maxValueDoubleSpinBox"));
        maxValueDoubleSpinBox->setDecimals(8);
        maxValueDoubleSpinBox->setMinimum(-10000);
        maxValueDoubleSpinBox->setMaximum(100000);
        maxValueDoubleSpinBox->setSingleStep(1);
        maxValueDoubleSpinBox->setValue(10);

        formLayout->setWidget(8, QFormLayout::FieldRole, maxValueDoubleSpinBox);

        infoLabel = new QLabel(formLayoutWidget);
        infoLabel->setObjectName(QStringLiteral("infoLabel"));

        formLayout->setWidget(10, QFormLayout::LabelRole, infoLabel);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(9, QFormLayout::LabelRole, verticalSpacer);


        retranslateUi(QGCMapRCToParamDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QGCMapRCToParamDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QGCMapRCToParamDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QGCMapRCToParamDialog);
    } // setupUi

    void retranslateUi(QDialog *QGCMapRCToParamDialog)
    {
        QGCMapRCToParamDialog->setWindowTitle(QApplication::translate("QGCMapRCToParamDialog", "Dialog", 0));
        label1->setText(QApplication::translate("QGCMapRCToParamDialog", "Bind", 0));
        rcParamChannelInfoLabel->setText(QApplication::translate("QGCMapRCToParamDialog", "RC-Parameter Channel (Knob No.)", 0));
        rcParamChannelComboBox->clear();
        rcParamChannelComboBox->insertItems(0, QStringList()
         << QApplication::translate("QGCMapRCToParamDialog", "1", 0)
         << QApplication::translate("QGCMapRCToParamDialog", "2", 0)
         << QApplication::translate("QGCMapRCToParamDialog", "3", 0)
        );
        rcParamChannelComboBox->setCurrentText(QApplication::translate("QGCMapRCToParamDialog", "1", 0));
        label2->setText(QApplication::translate("QGCMapRCToParamDialog", "to", 0));
        paramIdInfoLabel->setText(QApplication::translate("QGCMapRCToParamDialog", "Parameter", 0));
        paramIdLabel->setText(QApplication::translate("QGCMapRCToParamDialog", "TextLabel", 0));
        label3->setText(QApplication::translate("QGCMapRCToParamDialog", "with", 0));
        scaleInfoLabel->setText(QApplication::translate("QGCMapRCToParamDialog", "Scale", 0));
        value0InfoLabel->setText(QApplication::translate("QGCMapRCToParamDialog", "Initial Value", 0));
        minInfoLabel->setText(QApplication::translate("QGCMapRCToParamDialog", "Minimum Value", 0));
        maxInfoLabel->setText(QApplication::translate("QGCMapRCToParamDialog", "Maximum Value", 0));
        infoLabel->setText(QApplication::translate("QGCMapRCToParamDialog", "Waiting for parameter refresh,,,", 0));
    } // retranslateUi

};

namespace Ui {
    class QGCMapRCToParamDialog: public Ui_QGCMapRCToParamDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCMAPRCTOPARAMDIALOG_H
