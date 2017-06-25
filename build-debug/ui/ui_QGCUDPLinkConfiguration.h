/********************************************************************************
** Form generated from reading UI file 'QGCUDPLinkConfiguration.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCUDPLINKCONFIGURATION_H
#define UI_QGCUDPLINKCONFIGURATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QGCUDPLinkConfiguration
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpinBox *portNumber;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QListView *listView;
    QHBoxLayout *horizontalLayout;
    QPushButton *addHost;
    QPushButton *removeHost;
    QPushButton *editHost;

    void setupUi(QWidget *QGCUDPLinkConfiguration)
    {
        if (QGCUDPLinkConfiguration->objectName().isEmpty())
            QGCUDPLinkConfiguration->setObjectName(QStringLiteral("QGCUDPLinkConfiguration"));
        QGCUDPLinkConfiguration->resize(314, 285);
        verticalLayout = new QVBoxLayout(QGCUDPLinkConfiguration);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(QGCUDPLinkConfiguration);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        portNumber = new QSpinBox(QGCUDPLinkConfiguration);
        portNumber->setObjectName(QStringLiteral("portNumber"));
        portNumber->setMinimumSize(QSize(80, 0));

        horizontalLayout_2->addWidget(portNumber);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        label_2 = new QLabel(QGCUDPLinkConfiguration);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        listView = new QListView(QGCUDPLinkConfiguration);
        listView->setObjectName(QStringLiteral("listView"));

        verticalLayout->addWidget(listView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        addHost = new QPushButton(QGCUDPLinkConfiguration);
        addHost->setObjectName(QStringLiteral("addHost"));

        horizontalLayout->addWidget(addHost);

        removeHost = new QPushButton(QGCUDPLinkConfiguration);
        removeHost->setObjectName(QStringLiteral("removeHost"));

        horizontalLayout->addWidget(removeHost);

        editHost = new QPushButton(QGCUDPLinkConfiguration);
        editHost->setObjectName(QStringLiteral("editHost"));

        horizontalLayout->addWidget(editHost);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(QGCUDPLinkConfiguration);

        QMetaObject::connectSlotsByName(QGCUDPLinkConfiguration);
    } // setupUi

    void retranslateUi(QWidget *QGCUDPLinkConfiguration)
    {
        QGCUDPLinkConfiguration->setWindowTitle(QApplication::translate("QGCUDPLinkConfiguration", "Form", 0));
        label->setText(QApplication::translate("QGCUDPLinkConfiguration", "Listening Port:", 0));
        label_2->setText(QApplication::translate("QGCUDPLinkConfiguration", "Target Hosts", 0));
        addHost->setText(QApplication::translate("QGCUDPLinkConfiguration", "Add", 0));
        removeHost->setText(QApplication::translate("QGCUDPLinkConfiguration", "Remove", 0));
        editHost->setText(QApplication::translate("QGCUDPLinkConfiguration", "Edit", 0));
    } // retranslateUi

};

namespace Ui {
    class QGCUDPLinkConfiguration: public Ui_QGCUDPLinkConfiguration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCUDPLINKCONFIGURATION_H
