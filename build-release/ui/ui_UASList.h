/********************************************************************************
** Form generated from reading UI file 'UASList.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UASLIST_H
#define UI_UASLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UASList
{
public:
    QVBoxLayout *verticalLayout;

    void setupUi(QWidget *UASList)
    {
        if (UASList->objectName().isEmpty())
            UASList->setObjectName(QStringLiteral("UASList"));
        UASList->resize(500, 300);
        UASList->setMinimumSize(QSize(0, 0));
        verticalLayout = new QVBoxLayout(UASList);
#ifndef Q_OS_MAC
        verticalLayout->setSpacing(6);
#endif
        verticalLayout->setContentsMargins(3, 3, 3, 3);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));

        retranslateUi(UASList);

        QMetaObject::connectSlotsByName(UASList);
    } // setupUi

    void retranslateUi(QWidget *UASList)
    {
        UASList->setWindowTitle(QApplication::translate("UASList", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class UASList: public Ui_UASList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UASLIST_H
