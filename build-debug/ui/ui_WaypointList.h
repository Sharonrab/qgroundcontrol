/********************************************************************************
** Form generated from reading UI file 'WaypointList.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WAYPOINTLIST_H
#define UI_WAYPOINTLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WaypointList
{
public:
    QAction *actionAddWaypoint;
    QAction *actionTransmit;
    QAction *actionRead;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *editTab;
    QGridLayout *gridLayout_2;
    QToolButton *addButton;
    QPushButton *loadButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *saveButton;
    QLabel *statusLabel;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QWidget *editableListWidget;
    QPushButton *readButton;
    QPushButton *transmitButton;
    QToolButton *clearWPListButton;
    QToolButton *positionAddButton;
    QWidget *viewTab;
    QGridLayout *gridLayout_3;
    QScrollArea *readOnlyScrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout;
    QWidget *viewOnlyListWidget;
    QLabel *viewStatusLabel;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *refreshButton;

    void setupUi(QWidget *WaypointList)
    {
        if (WaypointList->objectName().isEmpty())
            WaypointList->setObjectName(QStringLiteral("WaypointList"));
        WaypointList->resize(854, 398);
        WaypointList->setMinimumSize(QSize(100, 120));
        actionAddWaypoint = new QAction(WaypointList);
        actionAddWaypoint->setObjectName(QStringLiteral("actionAddWaypoint"));
        actionTransmit = new QAction(WaypointList);
        actionTransmit->setObjectName(QStringLiteral("actionTransmit"));
        actionRead = new QAction(WaypointList);
        actionRead->setObjectName(QStringLiteral("actionRead"));
        gridLayout = new QGridLayout(WaypointList);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 8, 0, 0);
        tabWidget = new QTabWidget(WaypointList);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setEnabled(true);
        editTab = new QWidget();
        editTab->setObjectName(QStringLiteral("editTab"));
        gridLayout_2 = new QGridLayout(editTab);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(6, 0, 6, 6);
        addButton = new QToolButton(editTab);
        addButton->setObjectName(QStringLiteral("addButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/PlusSign"), QSize(), QIcon::Normal, QIcon::Off);
        addButton->setIcon(icon);

        gridLayout_2->addWidget(addButton, 1, 6, 1, 1);

        loadButton = new QPushButton(editTab);
        loadButton->setObjectName(QStringLiteral("loadButton"));

        gridLayout_2->addWidget(loadButton, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(127, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 3, 1, 1);

        saveButton = new QPushButton(editTab);
        saveButton->setObjectName(QStringLiteral("saveButton"));

        gridLayout_2->addWidget(saveButton, 1, 0, 1, 1);

        statusLabel = new QLabel(editTab);
        statusLabel->setObjectName(QStringLiteral("statusLabel"));

        gridLayout_2->addWidget(statusLabel, 1, 2, 1, 1);

        scrollArea = new QScrollArea(editTab);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 834, 325));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        editableListWidget = new QWidget(scrollAreaWidgetContents);
        editableListWidget->setObjectName(QStringLiteral("editableListWidget"));

        verticalLayout_2->addWidget(editableListWidget);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_2->addWidget(scrollArea, 0, 0, 1, 10);

        readButton = new QPushButton(editTab);
        readButton->setObjectName(QStringLiteral("readButton"));
        readButton->setEnabled(false);

        gridLayout_2->addWidget(readButton, 1, 8, 1, 1);

        transmitButton = new QPushButton(editTab);
        transmitButton->setObjectName(QStringLiteral("transmitButton"));
        transmitButton->setEnabled(false);

        gridLayout_2->addWidget(transmitButton, 1, 9, 1, 1);

        clearWPListButton = new QToolButton(editTab);
        clearWPListButton->setObjectName(QStringLiteral("clearWPListButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/res/Kill"), QSize(), QIcon::Normal, QIcon::Off);
        clearWPListButton->setIcon(icon1);

        gridLayout_2->addWidget(clearWPListButton, 1, 7, 1, 1);

        positionAddButton = new QToolButton(editTab);
        positionAddButton->setObjectName(QStringLiteral("positionAddButton"));
        positionAddButton->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/res/BottomArrow"), QSize(), QIcon::Normal, QIcon::Off);
        positionAddButton->setIcon(icon2);

        gridLayout_2->addWidget(positionAddButton, 1, 5, 1, 1);

        tabWidget->addTab(editTab, QString());
        viewTab = new QWidget();
        viewTab->setObjectName(QStringLiteral("viewTab"));
        gridLayout_3 = new QGridLayout(viewTab);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(6, 0, 6, 6);
        readOnlyScrollArea = new QScrollArea(viewTab);
        readOnlyScrollArea->setObjectName(QStringLiteral("readOnlyScrollArea"));
        readOnlyScrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 834, 323));
        scrollAreaWidgetContents_2->setAutoFillBackground(true);
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        viewOnlyListWidget = new QWidget(scrollAreaWidgetContents_2);
        viewOnlyListWidget->setObjectName(QStringLiteral("viewOnlyListWidget"));
        viewOnlyListWidget->setEnabled(true);
        viewOnlyListWidget->setMaximumSize(QSize(16777215, 16777215));

        verticalLayout->addWidget(viewOnlyListWidget);

        readOnlyScrollArea->setWidget(scrollAreaWidgetContents_2);

        gridLayout_3->addWidget(readOnlyScrollArea, 0, 0, 1, 3);

        viewStatusLabel = new QLabel(viewTab);
        viewStatusLabel->setObjectName(QStringLiteral("viewStatusLabel"));

        gridLayout_3->addWidget(viewStatusLabel, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(714, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 1, 1, 1, 1);

        refreshButton = new QPushButton(viewTab);
        refreshButton->setObjectName(QStringLiteral("refreshButton"));
        refreshButton->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/res/JumpArrow"), QSize(), QIcon::Normal, QIcon::Off);
        refreshButton->setIcon(icon3);

        gridLayout_3->addWidget(refreshButton, 1, 2, 1, 1);

        tabWidget->addTab(viewTab, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(WaypointList);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(WaypointList);
    } // setupUi

    void retranslateUi(QWidget *WaypointList)
    {
        WaypointList->setWindowTitle(QApplication::translate("WaypointList", "Form", 0));
        actionAddWaypoint->setText(QApplication::translate("WaypointList", "Add Waypoint", 0));
#ifndef QT_NO_TOOLTIP
        actionAddWaypoint->setToolTip(QApplication::translate("WaypointList", "Add a new waypoint to the end of the list", 0));
#endif // QT_NO_TOOLTIP
        actionTransmit->setText(QApplication::translate("WaypointList", "Transmit", 0));
#ifndef QT_NO_TOOLTIP
        actionTransmit->setToolTip(QApplication::translate("WaypointList", "Transmit waypoints to unmanned system", 0));
#endif // QT_NO_TOOLTIP
        actionRead->setText(QApplication::translate("WaypointList", "Read", 0));
#ifndef QT_NO_TOOLTIP
        addButton->setToolTip(QApplication::translate("WaypointList", "Add a new waypoint to this list. Transmit via write to the MAV.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        addButton->setStatusTip(QApplication::translate("WaypointList", "Add a new waypoint to this list. Transmit via write to the MAV.", 0));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        addButton->setWhatsThis(QApplication::translate("WaypointList", "Add a new waypoint to this list. Transmit via write to the MAV.", 0));
#endif // QT_NO_WHATSTHIS
        addButton->setText(QApplication::translate("WaypointList", "...", 0));
#ifndef QT_NO_TOOLTIP
        loadButton->setToolTip(QApplication::translate("WaypointList", "Load waypoints from a file on the local harddisk. Does not load the waypoints on the MAV.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        loadButton->setStatusTip(QApplication::translate("WaypointList", "Load waypoints from a file on the local harddisk. Does not load the waypoints on the MAV.", 0));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        loadButton->setWhatsThis(QApplication::translate("WaypointList", "Load waypoints from a file on the local harddisk. Does not load the waypoints on the MAV.", 0));
#endif // QT_NO_WHATSTHIS
        loadButton->setText(QApplication::translate("WaypointList", "Load WPs", 0));
#ifndef QT_NO_TOOLTIP
        saveButton->setToolTip(QApplication::translate("WaypointList", "Save waypoints to a file on the local harddisk. Does not save them on the MAV.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        saveButton->setStatusTip(QApplication::translate("WaypointList", "Save waypoints to a file on the local harddisk. Does not save them on the MAV.", 0));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        saveButton->setWhatsThis(QApplication::translate("WaypointList", "Save waypoints to a file on the local harddisk. Does not save them on the MAV.", 0));
#endif // QT_NO_WHATSTHIS
        saveButton->setText(QApplication::translate("WaypointList", "Save WPs", 0));
#ifndef QT_NO_TOOLTIP
        statusLabel->setToolTip(QApplication::translate("WaypointList", "The current waypoint transmission status", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        statusLabel->setStatusTip(QApplication::translate("WaypointList", "The current waypoint transmission status", 0));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        statusLabel->setWhatsThis(QApplication::translate("WaypointList", "The current waypoint transmission status", 0));
#endif // QT_NO_WHATSTHIS
        statusLabel->setText(QApplication::translate("WaypointList", "Please add first waypoint.", 0));
#ifndef QT_NO_TOOLTIP
        editableListWidget->setToolTip(QApplication::translate("WaypointList", "Waypoint list. The list is empty until you issue a read command or add waypoints.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        editableListWidget->setStatusTip(QApplication::translate("WaypointList", "Waypoint list. The list is empty until you issue a read command or add waypoints.", 0));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        editableListWidget->setWhatsThis(QApplication::translate("WaypointList", "Waypoint list. The list is empty until you issue a read command or add waypoints.", 0));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        readButton->setToolTip(QApplication::translate("WaypointList", "Read all waypoints from the MAV. Clears the list on this computer.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        readButton->setStatusTip(QApplication::translate("WaypointList", "Read all waypoints from the MAV. Clears the list on this computer.", 0));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        readButton->setWhatsThis(QApplication::translate("WaypointList", "Read all waypoints from the MAV. Clears the list on this computer.", 0));
#endif // QT_NO_WHATSTHIS
        readButton->setText(QApplication::translate("WaypointList", "Get", 0));
#ifndef QT_NO_TOOLTIP
        transmitButton->setToolTip(QApplication::translate("WaypointList", "Transmit all waypoints on this list to the MAV.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        transmitButton->setStatusTip(QApplication::translate("WaypointList", "Transmit all waypoints on this list to the MAV.", 0));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        transmitButton->setWhatsThis(QApplication::translate("WaypointList", "Transmit all waypoints on this list to the MAV.", 0));
#endif // QT_NO_WHATSTHIS
        transmitButton->setText(QApplication::translate("WaypointList", "Set", 0));
#ifndef QT_NO_TOOLTIP
        clearWPListButton->setToolTip(QApplication::translate("WaypointList", "Delete all waypoints from this list. You have to click write to clear the list on the MAV as well.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        clearWPListButton->setStatusTip(QApplication::translate("WaypointList", "Delete all waypoints from this list. You have to click write to clear the list on the MAV as well.", 0));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        clearWPListButton->setWhatsThis(QApplication::translate("WaypointList", "Delete all waypoints from this list. You have to click write to clear the list on the MAV as well.", 0));
#endif // QT_NO_WHATSTHIS
        clearWPListButton->setText(QApplication::translate("WaypointList", "...", 0));
#ifndef QT_NO_TOOLTIP
        positionAddButton->setToolTip(QApplication::translate("WaypointList", "Set the current vehicle position as new waypoint", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        positionAddButton->setStatusTip(QApplication::translate("WaypointList", "Set the current vehicle position as new waypoint", 0));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        positionAddButton->setWhatsThis(QApplication::translate("WaypointList", "Set the current vehicle position as new waypoint", 0));
#endif // QT_NO_WHATSTHIS
        positionAddButton->setText(QApplication::translate("WaypointList", "...", 0));
        tabWidget->setTabText(tabWidget->indexOf(editTab), QApplication::translate("WaypointList", "Edit Waypoints", 0));
        viewStatusLabel->setText(QString());
#ifndef QT_NO_TOOLTIP
        refreshButton->setToolTip(QApplication::translate("WaypointList", "Read all waypoints from the MAV and display in View tab..", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        refreshButton->setStatusTip(QApplication::translate("WaypointList", "Read all waypoints from the MAV and display in View tab..", 0));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        refreshButton->setWhatsThis(QApplication::translate("WaypointList", "Read all waypoints from the MAV and display in View tab.", 0));
#endif // QT_NO_WHATSTHIS
        refreshButton->setText(QApplication::translate("WaypointList", "Refresh", 0));
        tabWidget->setTabText(tabWidget->indexOf(viewTab), QApplication::translate("WaypointList", "Onboard Waypoints", 0));
    } // retranslateUi

};

namespace Ui {
    class WaypointList: public Ui_WaypointList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WAYPOINTLIST_H
