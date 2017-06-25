/********************************************************************************
** Form generated from reading UI file 'QGCMapToolBar.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCMAPTOOLBAR_H
#define UI_QGCMAPTOOLBAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QGCMapToolBar
{
public:
    QHBoxLayout *horizontalLayout;
    QPushButton *goToButton;
    QPushButton *editButton;
    QPushButton *goHomeButton;
    QPushButton *lastPosButton;
    QPushButton *ripMapButton;
    QPushButton *clearTrailsButton;
    QCheckBox *lockCheckBox;
    QCheckBox *followCheckBox;
    QSpacerItem *horizontalSpacer;
    QLabel *posLabel;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *optionsButton;

    void setupUi(QWidget *QGCMapToolBar)
    {
        if (QGCMapToolBar->objectName().isEmpty())
            QGCMapToolBar->setObjectName(QStringLiteral("QGCMapToolBar"));
        QGCMapToolBar->resize(809, 35);
        horizontalLayout = new QHBoxLayout(QGCMapToolBar);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(4, 4, 4, 4);
        goToButton = new QPushButton(QGCMapToolBar);
        goToButton->setObjectName(QStringLiteral("goToButton"));

        horizontalLayout->addWidget(goToButton);

        editButton = new QPushButton(QGCMapToolBar);
        editButton->setObjectName(QStringLiteral("editButton"));

        horizontalLayout->addWidget(editButton);

        goHomeButton = new QPushButton(QGCMapToolBar);
        goHomeButton->setObjectName(QStringLiteral("goHomeButton"));

        horizontalLayout->addWidget(goHomeButton);

        lastPosButton = new QPushButton(QGCMapToolBar);
        lastPosButton->setObjectName(QStringLiteral("lastPosButton"));

        horizontalLayout->addWidget(lastPosButton);

        ripMapButton = new QPushButton(QGCMapToolBar);
        ripMapButton->setObjectName(QStringLiteral("ripMapButton"));

        horizontalLayout->addWidget(ripMapButton);

        clearTrailsButton = new QPushButton(QGCMapToolBar);
        clearTrailsButton->setObjectName(QStringLiteral("clearTrailsButton"));

        horizontalLayout->addWidget(clearTrailsButton);

        lockCheckBox = new QCheckBox(QGCMapToolBar);
        lockCheckBox->setObjectName(QStringLiteral("lockCheckBox"));

        horizontalLayout->addWidget(lockCheckBox);

        followCheckBox = new QCheckBox(QGCMapToolBar);
        followCheckBox->setObjectName(QStringLiteral("followCheckBox"));

        horizontalLayout->addWidget(followCheckBox);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        posLabel = new QLabel(QGCMapToolBar);
        posLabel->setObjectName(QStringLiteral("posLabel"));

        horizontalLayout->addWidget(posLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        optionsButton = new QPushButton(QGCMapToolBar);
        optionsButton->setObjectName(QStringLiteral("optionsButton"));

        horizontalLayout->addWidget(optionsButton);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(2, 1);
        horizontalLayout->setStretch(3, 1);
        horizontalLayout->setStretch(4, 1);
        horizontalLayout->setStretch(5, 1);
        horizontalLayout->setStretch(7, 1);
        horizontalLayout->setStretch(8, 5);
        horizontalLayout->setStretch(9, 1);
        horizontalLayout->setStretch(10, 30);
        horizontalLayout->setStretch(11, 1);

        retranslateUi(QGCMapToolBar);

        QMetaObject::connectSlotsByName(QGCMapToolBar);
    } // setupUi

    void retranslateUi(QWidget *QGCMapToolBar)
    {
        QGCMapToolBar->setWindowTitle(QApplication::translate("QGCMapToolBar", "Form", 0));
        goToButton->setText(QApplication::translate("QGCMapToolBar", "Lat/Lon", 0));
        editButton->setText(QApplication::translate("QGCMapToolBar", "Edit", 0));
        goHomeButton->setText(QApplication::translate("QGCMapToolBar", "Go Home", 0));
        lastPosButton->setText(QApplication::translate("QGCMapToolBar", "Last Pos", 0));
        ripMapButton->setText(QApplication::translate("QGCMapToolBar", "Cache", 0));
        clearTrailsButton->setText(QApplication::translate("QGCMapToolBar", "Clear Map", 0));
        lockCheckBox->setText(QApplication::translate("QGCMapToolBar", "Lock", 0));
        followCheckBox->setText(QApplication::translate("QGCMapToolBar", "Follow", 0));
        posLabel->setText(QApplication::translate("QGCMapToolBar", "00.00 00.00", 0));
        optionsButton->setText(QApplication::translate("QGCMapToolBar", "Options", 0));
    } // retranslateUi

};

namespace Ui {
    class QGCMapToolBar: public Ui_QGCMapToolBar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCMAPTOOLBAR_H
