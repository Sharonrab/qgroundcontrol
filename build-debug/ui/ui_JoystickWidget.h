/********************************************************************************
** Form generated from reading UI file 'JoystickWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JOYSTICKWIDGET_H
#define UI_JOYSTICKWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_JoystickWidget
{
public:
    QVBoxLayout *verticalLayout;
    QCheckBox *enableCheckBox;
    QComboBox *joystickNameComboBox;
    QComboBox *joystickModeComboBox;
    QFrame *joystickFrame;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QGroupBox *buttonBox;
    QVBoxLayout *buttonLayout;
    QGroupBox *axesBox;
    QHBoxLayout *axesLayout;
    QLabel *statusLabel;
    QPushButton *calibrationButton;

    void setupUi(QWidget *JoystickWidget)
    {
        if (JoystickWidget->objectName().isEmpty())
            JoystickWidget->setObjectName(QStringLiteral("JoystickWidget"));
        JoystickWidget->resize(368, 274);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(JoystickWidget->sizePolicy().hasHeightForWidth());
        JoystickWidget->setSizePolicy(sizePolicy);
        JoystickWidget->setMinimumSize(QSize(368, 274));
        verticalLayout = new QVBoxLayout(JoystickWidget);
        verticalLayout->setSpacing(8);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(8, 8, 8, 8);
        enableCheckBox = new QCheckBox(JoystickWidget);
        enableCheckBox->setObjectName(QStringLiteral("enableCheckBox"));
        enableCheckBox->setEnabled(true);

        verticalLayout->addWidget(enableCheckBox);

        joystickNameComboBox = new QComboBox(JoystickWidget);
        joystickNameComboBox->setObjectName(QStringLiteral("joystickNameComboBox"));
        joystickNameComboBox->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(joystickNameComboBox->sizePolicy().hasHeightForWidth());
        joystickNameComboBox->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(joystickNameComboBox);

        joystickModeComboBox = new QComboBox(JoystickWidget);
        joystickModeComboBox->setObjectName(QStringLiteral("joystickModeComboBox"));

        verticalLayout->addWidget(joystickModeComboBox);

        joystickFrame = new QFrame(JoystickWidget);
        joystickFrame->setObjectName(QStringLiteral("joystickFrame"));
        joystickFrame->setEnabled(false);
        joystickFrame->setFrameShape(QFrame::StyledPanel);
        joystickFrame->setFrameShadow(QFrame::Sunken);
        verticalLayout_2 = new QVBoxLayout(joystickFrame);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        buttonBox = new QGroupBox(joystickFrame);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy2);
        buttonBox->setMinimumSize(QSize(100, 0));
        buttonBox->setMaximumSize(QSize(16777215, 16777215));
        buttonBox->setAlignment(Qt::AlignCenter);
        buttonBox->setFlat(false);
        buttonLayout = new QVBoxLayout(buttonBox);
        buttonLayout->setSpacing(1);
        buttonLayout->setObjectName(QStringLiteral("buttonLayout"));
        buttonLayout->setSizeConstraint(QLayout::SetMinimumSize);
        buttonLayout->setContentsMargins(3, 3, 3, 3);

        horizontalLayout->addWidget(buttonBox);

        axesBox = new QGroupBox(joystickFrame);
        axesBox->setObjectName(QStringLiteral("axesBox"));
        sizePolicy2.setHeightForWidth(axesBox->sizePolicy().hasHeightForWidth());
        axesBox->setSizePolicy(sizePolicy2);
        axesBox->setMinimumSize(QSize(100, 0));
        axesBox->setAlignment(Qt::AlignCenter);
        axesLayout = new QHBoxLayout(axesBox);
        axesLayout->setObjectName(QStringLiteral("axesLayout"));
        axesLayout->setSizeConstraint(QLayout::SetMinimumSize);

        horizontalLayout->addWidget(axesBox);


        verticalLayout_2->addLayout(horizontalLayout);

        statusLabel = new QLabel(joystickFrame);
        statusLabel->setObjectName(QStringLiteral("statusLabel"));

        verticalLayout_2->addWidget(statusLabel);

        calibrationButton = new QPushButton(joystickFrame);
        calibrationButton->setObjectName(QStringLiteral("calibrationButton"));

        verticalLayout_2->addWidget(calibrationButton);


        verticalLayout->addWidget(joystickFrame);


        retranslateUi(JoystickWidget);

        QMetaObject::connectSlotsByName(JoystickWidget);
    } // setupUi

    void retranslateUi(QWidget *JoystickWidget)
    {
        JoystickWidget->setWindowTitle(QApplication::translate("JoystickWidget", "Joystick Settings", 0));
        enableCheckBox->setText(QApplication::translate("JoystickWidget", "Enable controllers", 0));
        buttonBox->setTitle(QApplication::translate("JoystickWidget", "Buttons", 0));
        axesBox->setTitle(QApplication::translate("JoystickWidget", "Axes", 0));
        statusLabel->setText(QString());
        calibrationButton->setText(QApplication::translate("JoystickWidget", "Calibrate range", 0));
    } // retranslateUi

};

namespace Ui {
    class JoystickWidget: public Ui_JoystickWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JOYSTICKWIDGET_H
