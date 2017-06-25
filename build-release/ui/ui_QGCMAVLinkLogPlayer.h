/********************************************************************************
** Form generated from reading UI file 'QGCMAVLinkLogPlayer.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCMAVLINKLOGPLAYER_H
#define UI_QGCMAVLINKLOGPLAYER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QGCMAVLinkLogPlayer
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *logStatsLabel;
    QToolButton *playButton;
    QLabel *timeLabel;
    QSlider *positionSlider;
    QLabel *speedLabel;
    QSlider *speedSlider;
    QLabel *logFileNameLabel;
    QPushButton *selectFileButton;

    void setupUi(QWidget *QGCMAVLinkLogPlayer)
    {
        if (QGCMAVLinkLogPlayer->objectName().isEmpty())
            QGCMAVLinkLogPlayer->setObjectName(QStringLiteral("QGCMAVLinkLogPlayer"));
        QGCMAVLinkLogPlayer->resize(789, 38);
        horizontalLayout = new QHBoxLayout(QGCMAVLinkLogPlayer);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(12, 0, 4, 0);
        logStatsLabel = new QLabel(QGCMAVLinkLogPlayer);
        logStatsLabel->setObjectName(QStringLiteral("logStatsLabel"));

        horizontalLayout->addWidget(logStatsLabel);

        playButton = new QToolButton(QGCMAVLinkLogPlayer);
        playButton->setObjectName(QStringLiteral("playButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/Play"), QSize(), QIcon::Normal, QIcon::Off);
        playButton->setIcon(icon);
        playButton->setCheckable(true);
        playButton->setChecked(false);

        horizontalLayout->addWidget(playButton);

        timeLabel = new QLabel(QGCMAVLinkLogPlayer);
        timeLabel->setObjectName(QStringLiteral("timeLabel"));

        horizontalLayout->addWidget(timeLabel);

        positionSlider = new QSlider(QGCMAVLinkLogPlayer);
        positionSlider->setObjectName(QStringLiteral("positionSlider"));
        positionSlider->setMaximum(10000);
        positionSlider->setPageStep(100);
        positionSlider->setTracking(false);
        positionSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(positionSlider);

        speedLabel = new QLabel(QGCMAVLinkLogPlayer);
        speedLabel->setObjectName(QStringLiteral("speedLabel"));

        horizontalLayout->addWidget(speedLabel);

        speedSlider = new QSlider(QGCMAVLinkLogPlayer);
        speedSlider->setObjectName(QStringLiteral("speedSlider"));
        speedSlider->setMinimum(1);
        speedSlider->setMaximum(100);
        speedSlider->setValue(50);
        speedSlider->setSliderPosition(50);
        speedSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(speedSlider);

        logFileNameLabel = new QLabel(QGCMAVLinkLogPlayer);
        logFileNameLabel->setObjectName(QStringLiteral("logFileNameLabel"));

        horizontalLayout->addWidget(logFileNameLabel);

        selectFileButton = new QPushButton(QGCMAVLinkLogPlayer);
        selectFileButton->setObjectName(QStringLiteral("selectFileButton"));

        horizontalLayout->addWidget(selectFileButton);


        retranslateUi(QGCMAVLinkLogPlayer);

        QMetaObject::connectSlotsByName(QGCMAVLinkLogPlayer);
    } // setupUi

    void retranslateUi(QWidget *QGCMAVLinkLogPlayer)
    {
        QGCMAVLinkLogPlayer->setWindowTitle(QApplication::translate("QGCMAVLinkLogPlayer", "Form", 0));
        logStatsLabel->setText(QString());
#ifndef QT_NO_TOOLTIP
        playButton->setToolTip(QApplication::translate("QGCMAVLinkLogPlayer", "Start to replay Flight Data", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        playButton->setStatusTip(QApplication::translate("QGCMAVLinkLogPlayer", "Start to replay Flight Data", 0));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        playButton->setWhatsThis(QApplication::translate("QGCMAVLinkLogPlayer", "Start to replay Flight Data", 0));
#endif // QT_NO_WHATSTHIS
        playButton->setText(QApplication::translate("QGCMAVLinkLogPlayer", "...", 0));
        timeLabel->setText(QApplication::translate("QGCMAVLinkLogPlayer", "Time", 0));
#ifndef QT_NO_TOOLTIP
        speedLabel->setToolTip(QApplication::translate("QGCMAVLinkLogPlayer", "Current replay speed", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        speedLabel->setStatusTip(QApplication::translate("QGCMAVLinkLogPlayer", "Current replay speed", 0));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        speedLabel->setWhatsThis(QApplication::translate("QGCMAVLinkLogPlayer", "Current replay speed", 0));
#endif // QT_NO_WHATSTHIS
        speedLabel->setText(QApplication::translate("QGCMAVLinkLogPlayer", "Speed", 0));
#ifndef QT_NO_TOOLTIP
        speedSlider->setToolTip(QApplication::translate("QGCMAVLinkLogPlayer", "Set the replay speed", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        speedSlider->setStatusTip(QApplication::translate("QGCMAVLinkLogPlayer", "Set the replay speed", 0));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        speedSlider->setWhatsThis(QApplication::translate("QGCMAVLinkLogPlayer", "Set the replay speed", 0));
#endif // QT_NO_WHATSTHIS
        logFileNameLabel->setText(QApplication::translate("QGCMAVLinkLogPlayer", "No Flight Data selected..", 0));
#ifndef QT_NO_TOOLTIP
        selectFileButton->setToolTip(QApplication::translate("QGCMAVLinkLogPlayer", "Select the Flight Data to replay", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        selectFileButton->setStatusTip(QApplication::translate("QGCMAVLinkLogPlayer", "Select the Flight Data to replay", 0));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        selectFileButton->setWhatsThis(QApplication::translate("QGCMAVLinkLogPlayer", "Select the Flight Data to replay", 0));
#endif // QT_NO_WHATSTHIS
        selectFileButton->setText(QApplication::translate("QGCMAVLinkLogPlayer", "Replay Flight Data", 0));
    } // retranslateUi

};

namespace Ui {
    class QGCMAVLinkLogPlayer: public Ui_QGCMAVLinkLogPlayer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCMAVLINKLOGPLAYER_H
