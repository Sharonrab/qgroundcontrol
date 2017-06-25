/********************************************************************************
** Form generated from reading UI file 'QGCLinkConfiguration.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCLINKCONFIGURATION_H
#define UI_QGCLINKCONFIGURATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QGCLinkConfiguration
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QListView *linkView;
    QHBoxLayout *horizontalLayout;
    QPushButton *delLinkButton;
    QPushButton *editLinkButton;
    QPushButton *addLinkButton;
    QPushButton *connectLinkButton;

    void setupUi(QWidget *QGCLinkConfiguration)
    {
        if (QGCLinkConfiguration->objectName().isEmpty())
            QGCLinkConfiguration->setObjectName(QStringLiteral("QGCLinkConfiguration"));
        QGCLinkConfiguration->resize(400, 391);
        verticalLayout_2 = new QVBoxLayout(QGCLinkConfiguration);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        linkView = new QListView(QGCLinkConfiguration);
        linkView->setObjectName(QStringLiteral("linkView"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(linkView->sizePolicy().hasHeightForWidth());
        linkView->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(linkView);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        delLinkButton = new QPushButton(QGCLinkConfiguration);
        delLinkButton->setObjectName(QStringLiteral("delLinkButton"));

        horizontalLayout->addWidget(delLinkButton);

        editLinkButton = new QPushButton(QGCLinkConfiguration);
        editLinkButton->setObjectName(QStringLiteral("editLinkButton"));

        horizontalLayout->addWidget(editLinkButton);

        addLinkButton = new QPushButton(QGCLinkConfiguration);
        addLinkButton->setObjectName(QStringLiteral("addLinkButton"));

        horizontalLayout->addWidget(addLinkButton);

        connectLinkButton = new QPushButton(QGCLinkConfiguration);
        connectLinkButton->setObjectName(QStringLiteral("connectLinkButton"));

        horizontalLayout->addWidget(connectLinkButton);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(QGCLinkConfiguration);

        QMetaObject::connectSlotsByName(QGCLinkConfiguration);
    } // setupUi

    void retranslateUi(QWidget *QGCLinkConfiguration)
    {
        QGCLinkConfiguration->setWindowTitle(QApplication::translate("QGCLinkConfiguration", "Form", 0));
        delLinkButton->setText(QApplication::translate("QGCLinkConfiguration", "Delete", 0));
        editLinkButton->setText(QApplication::translate("QGCLinkConfiguration", "Edit", 0));
        addLinkButton->setText(QApplication::translate("QGCLinkConfiguration", "Add", 0));
        connectLinkButton->setText(QApplication::translate("QGCLinkConfiguration", "Connect", 0));
    } // retranslateUi

};

namespace Ui {
    class QGCLinkConfiguration: public Ui_QGCLinkConfiguration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCLINKCONFIGURATION_H
