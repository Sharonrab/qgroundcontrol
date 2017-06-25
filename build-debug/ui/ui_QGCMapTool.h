/********************************************************************************
** Form generated from reading UI file 'QGCMapTool.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCMAPTOOL_H
#define UI_QGCMAPTOOL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>
#include "QGCMapToolBar.h"
#include "QGCMapWidget.h"

QT_BEGIN_NAMESPACE

class Ui_QGCMapTool
{
public:
    QGridLayout *gridLayout;
    QGCMapWidget *map;
    QSlider *zoomSlider;
    QGCMapToolBar *toolBar;

    void setupUi(QWidget *QGCMapTool)
    {
        if (QGCMapTool->objectName().isEmpty())
            QGCMapTool->setObjectName(QStringLiteral("QGCMapTool"));
        QGCMapTool->resize(261, 206);
        gridLayout = new QGridLayout(QGCMapTool);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(3);
        gridLayout->setVerticalSpacing(0);
        map = new QGCMapWidget(QGCMapTool);
        map->setObjectName(QStringLiteral("map"));

        gridLayout->addWidget(map, 0, 0, 1, 1);

        zoomSlider = new QSlider(QGCMapTool);
        zoomSlider->setObjectName(QStringLiteral("zoomSlider"));
        zoomSlider->setMaximum(60);
        zoomSlider->setOrientation(Qt::Vertical);

        gridLayout->addWidget(zoomSlider, 0, 1, 2, 1);

        toolBar = new QGCMapToolBar(QGCMapTool);
        toolBar->setObjectName(QStringLiteral("toolBar"));

        gridLayout->addWidget(toolBar, 1, 0, 1, 1);

        gridLayout->setRowStretch(0, 100);
        gridLayout->setRowStretch(1, 1);

        retranslateUi(QGCMapTool);

        QMetaObject::connectSlotsByName(QGCMapTool);
    } // setupUi

    void retranslateUi(QWidget *QGCMapTool)
    {
        QGCMapTool->setWindowTitle(QApplication::translate("QGCMapTool", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class QGCMapTool: public Ui_QGCMapTool {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCMAPTOOL_H
