/********************************************************************************
** Form generated from reading UI file 'UASMessageView.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UASMESSAGEVIEW_H
#define UI_UASMESSAGEVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UASMessageView
{
public:
    QHBoxLayout *horizontalLayout;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *UASMessageView)
    {
        if (UASMessageView->objectName().isEmpty())
            UASMessageView->setObjectName(QStringLiteral("UASMessageView"));
        UASMessageView->resize(248, 249);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(UASMessageView->sizePolicy().hasHeightForWidth());
        UASMessageView->setSizePolicy(sizePolicy);
        UASMessageView->setContextMenuPolicy(Qt::NoContextMenu);
        horizontalLayout = new QHBoxLayout(UASMessageView);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(4, 8, 4, 4);
        plainTextEdit = new QPlainTextEdit(UASMessageView);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setMinimumSize(QSize(0, 0));
        plainTextEdit->setContextMenuPolicy(Qt::ActionsContextMenu);
        plainTextEdit->setAcceptDrops(false);
        plainTextEdit->setUndoRedoEnabled(false);
        plainTextEdit->setReadOnly(true);
        plainTextEdit->setPlainText(QStringLiteral(""));

        horizontalLayout->addWidget(plainTextEdit);


        retranslateUi(UASMessageView);

        QMetaObject::connectSlotsByName(UASMessageView);
    } // setupUi

    void retranslateUi(QWidget *UASMessageView)
    {
        UASMessageView->setWindowTitle(QApplication::translate("UASMessageView", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class UASMessageView: public Ui_UASMessageView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UASMESSAGEVIEW_H
