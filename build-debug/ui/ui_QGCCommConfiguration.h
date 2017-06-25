/********************************************************************************
** Form generated from reading UI file 'QGCCommConfiguration.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCCOMMCONFIGURATION_H
#define UI_QGCCOMMCONFIGURATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QGCCommConfiguration
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *nameLabel;
    QLineEdit *nameEdit;
    QHBoxLayout *horizontalLayout_6;
    QLabel *typeLabel_3;
    QComboBox *typeCombo;
    QGroupBox *linkGroupBox;
    QHBoxLayout *horizontalLayout_2;
    QScrollArea *linkScrollArea;
    QWidget *scrollAreaWidgetContents;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *QGCCommConfiguration)
    {
        if (QGCCommConfiguration->objectName().isEmpty())
            QGCCommConfiguration->setObjectName(QStringLiteral("QGCCommConfiguration"));
        QGCCommConfiguration->resize(450, 450);
        QGCCommConfiguration->setMinimumSize(QSize(450, 450));
        QGCCommConfiguration->setMaximumSize(QSize(600, 600));
        verticalLayout = new QVBoxLayout(QGCCommConfiguration);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        nameLabel = new QLabel(QGCCommConfiguration);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        nameLabel->setMinimumSize(QSize(160, 0));

        horizontalLayout_5->addWidget(nameLabel);

        nameEdit = new QLineEdit(QGCCommConfiguration);
        nameEdit->setObjectName(QStringLiteral("nameEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(nameEdit->sizePolicy().hasHeightForWidth());
        nameEdit->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(nameEdit);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        typeLabel_3 = new QLabel(QGCCommConfiguration);
        typeLabel_3->setObjectName(QStringLiteral("typeLabel_3"));
        typeLabel_3->setMinimumSize(QSize(160, 0));

        horizontalLayout_6->addWidget(typeLabel_3);

        typeCombo = new QComboBox(QGCCommConfiguration);
        typeCombo->setObjectName(QStringLiteral("typeCombo"));
        sizePolicy.setHeightForWidth(typeCombo->sizePolicy().hasHeightForWidth());
        typeCombo->setSizePolicy(sizePolicy);

        horizontalLayout_6->addWidget(typeCombo);


        verticalLayout_2->addLayout(horizontalLayout_6);


        verticalLayout->addLayout(verticalLayout_2);

        linkGroupBox = new QGroupBox(QGCCommConfiguration);
        linkGroupBox->setObjectName(QStringLiteral("linkGroupBox"));
        horizontalLayout_2 = new QHBoxLayout(linkGroupBox);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        linkScrollArea = new QScrollArea(linkGroupBox);
        linkScrollArea->setObjectName(QStringLiteral("linkScrollArea"));
        linkScrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 418, 304));
        linkScrollArea->setWidget(scrollAreaWidgetContents);

        horizontalLayout_2->addWidget(linkScrollArea);


        verticalLayout->addWidget(linkGroupBox);

        buttonBox = new QDialogButtonBox(QGCCommConfiguration);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(QGCCommConfiguration);

        QMetaObject::connectSlotsByName(QGCCommConfiguration);
    } // setupUi

    void retranslateUi(QWidget *QGCCommConfiguration)
    {
        QGCCommConfiguration->setWindowTitle(QApplication::translate("QGCCommConfiguration", "Form", 0));
        nameLabel->setText(QApplication::translate("QGCCommConfiguration", "Link Name:", 0));
        typeLabel_3->setText(QApplication::translate("QGCCommConfiguration", "Link Type:", 0));
        linkGroupBox->setTitle(QApplication::translate("QGCCommConfiguration", "Link", 0));
    } // retranslateUi

};

namespace Ui {
    class QGCCommConfiguration: public Ui_QGCCommConfiguration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCCOMMCONFIGURATION_H
