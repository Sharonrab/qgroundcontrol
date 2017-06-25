/****************************************************************************
** Meta object code from reading C++ file 'MavManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/QmlControls/MavManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MavManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MavManager_t {
    QByteArrayData data[135];
    char stringdata[1941];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MavManager_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MavManager_t qt_meta_stringdata_MavManager = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MavManager"
QT_MOC_LITERAL(1, 11, 18), // "messageTypeChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 22), // "newMessageCountChanged"
QT_MOC_LITERAL(4, 54, 19), // "messageCountChanged"
QT_MOC_LITERAL(5, 74, 18), // "latestErrorChanged"
QT_MOC_LITERAL(6, 93, 11), // "rollChanged"
QT_MOC_LITERAL(7, 105, 12), // "pitchChanged"
QT_MOC_LITERAL(8, 118, 14), // "headingChanged"
QT_MOC_LITERAL(9, 133, 18), // "groundSpeedChanged"
QT_MOC_LITERAL(10, 152, 15), // "airSpeedChanged"
QT_MOC_LITERAL(11, 168, 16), // "climbRateChanged"
QT_MOC_LITERAL(12, 185, 23), // "altitudeRelativeChanged"
QT_MOC_LITERAL(13, 209, 20), // "altitudeWGS84Changed"
QT_MOC_LITERAL(14, 230, 19), // "altitudeAMSLChanged"
QT_MOC_LITERAL(15, 250, 15), // "latitudeChanged"
QT_MOC_LITERAL(16, 266, 16), // "longitudeChanged"
QT_MOC_LITERAL(17, 283, 17), // "mavPresentChanged"
QT_MOC_LITERAL(18, 301, 21), // "batteryVoltageChanged"
QT_MOC_LITERAL(19, 323, 21), // "batteryPercentChanged"
QT_MOC_LITERAL(20, 345, 22), // "batteryConsumedChanged"
QT_MOC_LITERAL(21, 368, 18), // "systemArmedChanged"
QT_MOC_LITERAL(22, 387, 23), // "heartbeatTimeoutChanged"
QT_MOC_LITERAL(23, 411, 18), // "currentModeChanged"
QT_MOC_LITERAL(24, 430, 20), // "currentConfigChanged"
QT_MOC_LITERAL(25, 451, 19), // "systemPixmapChanged"
QT_MOC_LITERAL(26, 471, 21), // "satelliteCountChanged"
QT_MOC_LITERAL(27, 493, 19), // "currentStateChanged"
QT_MOC_LITERAL(28, 513, 17), // "systemNameChanged"
QT_MOC_LITERAL(29, 531, 20), // "satelliteLockChanged"
QT_MOC_LITERAL(30, 552, 23), // "waypointDistanceChanged"
QT_MOC_LITERAL(31, 576, 22), // "currentWaypointChanged"
QT_MOC_LITERAL(32, 599, 16), // "waypointsChanged"
QT_MOC_LITERAL(33, 616, 18), // "_handleTextMessage"
QT_MOC_LITERAL(34, 635, 8), // "newCount"
QT_MOC_LITERAL(35, 644, 15), // "_updateAttitude"
QT_MOC_LITERAL(36, 660, 13), // "UASInterface*"
QT_MOC_LITERAL(37, 674, 3), // "uas"
QT_MOC_LITERAL(38, 678, 4), // "roll"
QT_MOC_LITERAL(39, 683, 5), // "pitch"
QT_MOC_LITERAL(40, 689, 3), // "yaw"
QT_MOC_LITERAL(41, 693, 9), // "timestamp"
QT_MOC_LITERAL(42, 703, 9), // "component"
QT_MOC_LITERAL(43, 713, 12), // "_updateSpeed"
QT_MOC_LITERAL(44, 726, 12), // "_groundSpeed"
QT_MOC_LITERAL(45, 739, 9), // "_airSpeed"
QT_MOC_LITERAL(46, 749, 15), // "_updateAltitude"
QT_MOC_LITERAL(47, 765, 13), // "_altitudeAMSL"
QT_MOC_LITERAL(48, 779, 14), // "_altitudeWGS84"
QT_MOC_LITERAL(49, 794, 17), // "_altitudeRelative"
QT_MOC_LITERAL(50, 812, 10), // "_climbRate"
QT_MOC_LITERAL(51, 823, 33), // "_updateNavigationControllerEr..."
QT_MOC_LITERAL(52, 857, 13), // "altitudeError"
QT_MOC_LITERAL(53, 871, 10), // "speedError"
QT_MOC_LITERAL(54, 882, 11), // "xtrackError"
QT_MOC_LITERAL(55, 894, 31), // "_updateNavigationControllerData"
QT_MOC_LITERAL(56, 926, 7), // "navRoll"
QT_MOC_LITERAL(57, 934, 8), // "navPitch"
QT_MOC_LITERAL(58, 943, 10), // "navBearing"
QT_MOC_LITERAL(59, 954, 13), // "targetBearing"
QT_MOC_LITERAL(60, 968, 14), // "targetDistance"
QT_MOC_LITERAL(61, 983, 10), // "_forgetUAS"
QT_MOC_LITERAL(62, 994, 13), // "_setActiveUAS"
QT_MOC_LITERAL(63, 1008, 12), // "_checkUpdate"
QT_MOC_LITERAL(64, 1021, 23), // "_updateBatteryRemaining"
QT_MOC_LITERAL(65, 1045, 7), // "voltage"
QT_MOC_LITERAL(66, 1053, 7), // "percent"
QT_MOC_LITERAL(67, 1061, 29), // "_updateBatteryConsumedChanged"
QT_MOC_LITERAL(68, 1091, 16), // "current_consumed"
QT_MOC_LITERAL(69, 1108, 18), // "_updateArmingState"
QT_MOC_LITERAL(70, 1127, 5), // "armed"
QT_MOC_LITERAL(71, 1133, 12), // "_updateState"
QT_MOC_LITERAL(72, 1146, 6), // "system"
QT_MOC_LITERAL(73, 1153, 4), // "name"
QT_MOC_LITERAL(74, 1158, 11), // "description"
QT_MOC_LITERAL(75, 1170, 11), // "_updateMode"
QT_MOC_LITERAL(76, 1182, 11), // "_updateName"
QT_MOC_LITERAL(77, 1194, 14), // "_setSystemType"
QT_MOC_LITERAL(78, 1209, 10), // "systemType"
QT_MOC_LITERAL(79, 1220, 17), // "_heartbeatTimeout"
QT_MOC_LITERAL(80, 1238, 7), // "timeout"
QT_MOC_LITERAL(81, 1246, 2), // "ms"
QT_MOC_LITERAL(82, 1249, 22), // "_updateCurrentWaypoint"
QT_MOC_LITERAL(83, 1272, 2), // "id"
QT_MOC_LITERAL(84, 1275, 23), // "_updateWaypointDistance"
QT_MOC_LITERAL(85, 1299, 8), // "distance"
QT_MOC_LITERAL(86, 1308, 18), // "_setSatelliteCount"
QT_MOC_LITERAL(87, 1327, 3), // "val"
QT_MOC_LITERAL(88, 1331, 10), // "_setSatLoc"
QT_MOC_LITERAL(89, 1342, 3), // "fix"
QT_MOC_LITERAL(90, 1346, 23), // "_updateWaypointViewOnly"
QT_MOC_LITERAL(91, 1370, 9), // "Waypoint*"
QT_MOC_LITERAL(92, 1380, 2), // "wp"
QT_MOC_LITERAL(93, 1383, 28), // "_waypointViewOnlyListChanged"
QT_MOC_LITERAL(94, 1412, 15), // "getMavIconColor"
QT_MOC_LITERAL(95, 1428, 11), // "saveSetting"
QT_MOC_LITERAL(96, 1440, 3), // "key"
QT_MOC_LITERAL(97, 1444, 5), // "value"
QT_MOC_LITERAL(98, 1450, 11), // "loadSetting"
QT_MOC_LITERAL(99, 1462, 12), // "defaultValue"
QT_MOC_LITERAL(100, 1475, 11), // "messageType"
QT_MOC_LITERAL(101, 1487, 13), // "MessageType_t"
QT_MOC_LITERAL(102, 1501, 15), // "newMessageCount"
QT_MOC_LITERAL(103, 1517, 12), // "messageCount"
QT_MOC_LITERAL(104, 1530, 11), // "latestError"
QT_MOC_LITERAL(105, 1542, 7), // "heading"
QT_MOC_LITERAL(106, 1550, 11), // "groundSpeed"
QT_MOC_LITERAL(107, 1562, 8), // "airSpeed"
QT_MOC_LITERAL(108, 1571, 9), // "climbRate"
QT_MOC_LITERAL(109, 1581, 16), // "altitudeRelative"
QT_MOC_LITERAL(110, 1598, 13), // "altitudeWGS84"
QT_MOC_LITERAL(111, 1612, 12), // "altitudeAMSL"
QT_MOC_LITERAL(112, 1625, 8), // "latitude"
QT_MOC_LITERAL(113, 1634, 9), // "longitude"
QT_MOC_LITERAL(114, 1644, 10), // "mavPresent"
QT_MOC_LITERAL(115, 1655, 14), // "batteryVoltage"
QT_MOC_LITERAL(116, 1670, 14), // "batteryPercent"
QT_MOC_LITERAL(117, 1685, 15), // "batteryConsumed"
QT_MOC_LITERAL(118, 1701, 11), // "systemArmed"
QT_MOC_LITERAL(119, 1713, 11), // "currentMode"
QT_MOC_LITERAL(120, 1725, 12), // "systemPixmap"
QT_MOC_LITERAL(121, 1738, 14), // "satelliteCount"
QT_MOC_LITERAL(122, 1753, 12), // "currentState"
QT_MOC_LITERAL(123, 1766, 10), // "systemName"
QT_MOC_LITERAL(124, 1777, 13), // "satelliteLock"
QT_MOC_LITERAL(125, 1791, 16), // "waypointDistance"
QT_MOC_LITERAL(126, 1808, 15), // "currentWaypoint"
QT_MOC_LITERAL(127, 1824, 8), // "uint16_t"
QT_MOC_LITERAL(128, 1833, 16), // "heartbeatTimeout"
QT_MOC_LITERAL(129, 1850, 9), // "waypoints"
QT_MOC_LITERAL(130, 1860, 26), // "QQmlListProperty<Waypoint>"
QT_MOC_LITERAL(131, 1887, 11), // "MessageNone"
QT_MOC_LITERAL(132, 1899, 13), // "MessageNormal"
QT_MOC_LITERAL(133, 1913, 14), // "MessageWarning"
QT_MOC_LITERAL(134, 1928, 12) // "MessageError"

    },
    "MavManager\0messageTypeChanged\0\0"
    "newMessageCountChanged\0messageCountChanged\0"
    "latestErrorChanged\0rollChanged\0"
    "pitchChanged\0headingChanged\0"
    "groundSpeedChanged\0airSpeedChanged\0"
    "climbRateChanged\0altitudeRelativeChanged\0"
    "altitudeWGS84Changed\0altitudeAMSLChanged\0"
    "latitudeChanged\0longitudeChanged\0"
    "mavPresentChanged\0batteryVoltageChanged\0"
    "batteryPercentChanged\0batteryConsumedChanged\0"
    "systemArmedChanged\0heartbeatTimeoutChanged\0"
    "currentModeChanged\0currentConfigChanged\0"
    "systemPixmapChanged\0satelliteCountChanged\0"
    "currentStateChanged\0systemNameChanged\0"
    "satelliteLockChanged\0waypointDistanceChanged\0"
    "currentWaypointChanged\0waypointsChanged\0"
    "_handleTextMessage\0newCount\0_updateAttitude\0"
    "UASInterface*\0uas\0roll\0pitch\0yaw\0"
    "timestamp\0component\0_updateSpeed\0"
    "_groundSpeed\0_airSpeed\0_updateAltitude\0"
    "_altitudeAMSL\0_altitudeWGS84\0"
    "_altitudeRelative\0_climbRate\0"
    "_updateNavigationControllerErrors\0"
    "altitudeError\0speedError\0xtrackError\0"
    "_updateNavigationControllerData\0navRoll\0"
    "navPitch\0navBearing\0targetBearing\0"
    "targetDistance\0_forgetUAS\0_setActiveUAS\0"
    "_checkUpdate\0_updateBatteryRemaining\0"
    "voltage\0percent\0_updateBatteryConsumedChanged\0"
    "current_consumed\0_updateArmingState\0"
    "armed\0_updateState\0system\0name\0"
    "description\0_updateMode\0_updateName\0"
    "_setSystemType\0systemType\0_heartbeatTimeout\0"
    "timeout\0ms\0_updateCurrentWaypoint\0id\0"
    "_updateWaypointDistance\0distance\0"
    "_setSatelliteCount\0val\0_setSatLoc\0fix\0"
    "_updateWaypointViewOnly\0Waypoint*\0wp\0"
    "_waypointViewOnlyListChanged\0"
    "getMavIconColor\0saveSetting\0key\0value\0"
    "loadSetting\0defaultValue\0messageType\0"
    "MessageType_t\0newMessageCount\0"
    "messageCount\0latestError\0heading\0"
    "groundSpeed\0airSpeed\0climbRate\0"
    "altitudeRelative\0altitudeWGS84\0"
    "altitudeAMSL\0latitude\0longitude\0"
    "mavPresent\0batteryVoltage\0batteryPercent\0"
    "batteryConsumed\0systemArmed\0currentMode\0"
    "systemPixmap\0satelliteCount\0currentState\0"
    "systemName\0satelliteLock\0waypointDistance\0"
    "currentWaypoint\0uint16_t\0heartbeatTimeout\0"
    "waypoints\0QQmlListProperty<Waypoint>\0"
    "MessageNone\0MessageNormal\0MessageWarning\0"
    "MessageError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MavManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      58,   14, // methods
      30,  492, // properties
       1,  612, // enums/sets
       0,    0, // constructors
       0,       // flags
      31,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  304,    2, 0x06 /* Public */,
       3,    0,  305,    2, 0x06 /* Public */,
       4,    0,  306,    2, 0x06 /* Public */,
       5,    0,  307,    2, 0x06 /* Public */,
       6,    0,  308,    2, 0x06 /* Public */,
       7,    0,  309,    2, 0x06 /* Public */,
       8,    0,  310,    2, 0x06 /* Public */,
       9,    0,  311,    2, 0x06 /* Public */,
      10,    0,  312,    2, 0x06 /* Public */,
      11,    0,  313,    2, 0x06 /* Public */,
      12,    0,  314,    2, 0x06 /* Public */,
      13,    0,  315,    2, 0x06 /* Public */,
      14,    0,  316,    2, 0x06 /* Public */,
      15,    0,  317,    2, 0x06 /* Public */,
      16,    0,  318,    2, 0x06 /* Public */,
      17,    0,  319,    2, 0x06 /* Public */,
      18,    0,  320,    2, 0x06 /* Public */,
      19,    0,  321,    2, 0x06 /* Public */,
      20,    0,  322,    2, 0x06 /* Public */,
      21,    0,  323,    2, 0x06 /* Public */,
      22,    0,  324,    2, 0x06 /* Public */,
      23,    0,  325,    2, 0x06 /* Public */,
      24,    0,  326,    2, 0x06 /* Public */,
      25,    0,  327,    2, 0x06 /* Public */,
      26,    0,  328,    2, 0x06 /* Public */,
      27,    0,  329,    2, 0x06 /* Public */,
      28,    0,  330,    2, 0x06 /* Public */,
      29,    0,  331,    2, 0x06 /* Public */,
      30,    0,  332,    2, 0x06 /* Public */,
      31,    0,  333,    2, 0x06 /* Public */,
      32,    0,  334,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      33,    1,  335,    2, 0x08 /* Private */,
      35,    5,  338,    2, 0x08 /* Private */,
      35,    6,  349,    2, 0x08 /* Private */,
      43,    4,  362,    2, 0x08 /* Private */,
      46,    6,  371,    2, 0x08 /* Private */,
      51,    4,  384,    2, 0x08 /* Private */,
      55,    6,  393,    2, 0x08 /* Private */,
      61,    1,  406,    2, 0x08 /* Private */,
      62,    1,  409,    2, 0x08 /* Private */,
      63,    0,  412,    2, 0x08 /* Private */,
      64,    5,  413,    2, 0x08 /* Private */,
      67,    2,  424,    2, 0x08 /* Private */,
      69,    1,  429,    2, 0x08 /* Private */,
      71,    3,  432,    2, 0x08 /* Private */,
      75,    3,  439,    2, 0x08 /* Private */,
      76,    1,  446,    2, 0x08 /* Private */,
      77,    2,  449,    2, 0x08 /* Private */,
      79,    2,  454,    2, 0x08 /* Private */,
      82,    1,  459,    2, 0x08 /* Private */,
      84,    1,  462,    2, 0x08 /* Private */,
      86,    2,  465,    2, 0x08 /* Private */,
      88,    2,  470,    2, 0x08 /* Private */,
      90,    2,  475,    2, 0x08 /* Private */,
      93,    0,  480,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      94,    0,  481,    2, 0x02 /* Public */,
      95,    2,  482,    2, 0x02 /* Public */,
      98,    2,  487,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   34,
    QMetaType::Void, 0x80000000 | 36, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::ULongLong,   37,   38,   39,   40,   41,
    QMetaType::Void, 0x80000000 | 36, QMetaType::Int, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::ULongLong,   37,   42,   38,   39,   40,   41,
    QMetaType::Void, 0x80000000 | 36, QMetaType::Double, QMetaType::Double, QMetaType::ULongLong,   37,   44,   45,   41,
    QMetaType::Void, 0x80000000 | 36, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::ULongLong,   37,   47,   48,   49,   50,   41,
    QMetaType::Void, 0x80000000 | 36, QMetaType::Double, QMetaType::Double, QMetaType::Double,   37,   52,   53,   54,
    QMetaType::Void, 0x80000000 | 36, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,   37,   56,   57,   58,   59,   60,
    QMetaType::Void, 0x80000000 | 36,   37,
    QMetaType::Void, 0x80000000 | 36,   37,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 36, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Int,    2,   65,    2,   66,    2,
    QMetaType::Void, 0x80000000 | 36, QMetaType::Double,    2,   68,
    QMetaType::Void, QMetaType::Bool,   70,
    QMetaType::Void, 0x80000000 | 36, QMetaType::QString, QMetaType::QString,   72,   73,   74,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString,   72,   73,   74,
    QMetaType::Void, QMetaType::QString,   73,
    QMetaType::Void, 0x80000000 | 36, QMetaType::UInt,   37,   78,
    QMetaType::Void, QMetaType::Bool, QMetaType::UInt,   80,   81,
    QMetaType::Void, QMetaType::UShort,   83,
    QMetaType::Void, QMetaType::Double,   85,
    QMetaType::Void, QMetaType::Double, QMetaType::QString,   87,   73,
    QMetaType::Void, 0x80000000 | 36, QMetaType::Int,   37,   89,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 91,   37,   92,
    QMetaType::Void,

 // methods: parameters
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   96,   97,
    QMetaType::QString, QMetaType::QString, QMetaType::QString,   96,   99,

 // properties: name, type, flags
     100, 0x80000000 | 101, 0x00495009,
     102, QMetaType::Int, 0x00495001,
     103, QMetaType::Int, 0x00495001,
     104, QMetaType::QString, 0x00495001,
      38, QMetaType::Float, 0x00495001,
      39, QMetaType::Float, 0x00495001,
     105, QMetaType::Float, 0x00495001,
     106, QMetaType::Float, 0x00495001,
     107, QMetaType::Float, 0x00495001,
     108, QMetaType::Float, 0x00495001,
     109, QMetaType::Float, 0x00495001,
     110, QMetaType::Float, 0x00495001,
     111, QMetaType::Float, 0x00495001,
     112, QMetaType::Float, 0x00495001,
     113, QMetaType::Float, 0x00495001,
     114, QMetaType::Bool, 0x00495001,
     115, QMetaType::Double, 0x00495001,
     116, QMetaType::Double, 0x00495001,
     117, QMetaType::Double, 0x00495001,
     118, QMetaType::Bool, 0x00495001,
     119, QMetaType::QString, 0x00495001,
     120, QMetaType::QString, 0x00495001,
     121, QMetaType::Int, 0x00495001,
     122, QMetaType::QString, 0x00495001,
     123, QMetaType::QString, 0x00495001,
     124, QMetaType::Int, 0x00495001,
     125, QMetaType::Double, 0x00495001,
     126, 0x80000000 | 127, 0x00495009,
     128, QMetaType::UInt, 0x00495001,
     129, 0x80000000 | 130, 0x00495009,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       7,
       8,
       9,
      10,
      11,
      12,
      13,
      14,
      15,
      16,
      17,
      18,
      19,
      21,
      23,
      24,
      25,
      26,
      27,
      28,
      29,
      20,
      30,

 // enums: name, flags, count, data
     101, 0x0,    4,  616,

 // enum data: key, value
     131, uint(MavManager::MessageNone),
     132, uint(MavManager::MessageNormal),
     133, uint(MavManager::MessageWarning),
     134, uint(MavManager::MessageError),

       0        // eod
};

void MavManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MavManager *_t = static_cast<MavManager *>(_o);
        switch (_id) {
        case 0: _t->messageTypeChanged(); break;
        case 1: _t->newMessageCountChanged(); break;
        case 2: _t->messageCountChanged(); break;
        case 3: _t->latestErrorChanged(); break;
        case 4: _t->rollChanged(); break;
        case 5: _t->pitchChanged(); break;
        case 6: _t->headingChanged(); break;
        case 7: _t->groundSpeedChanged(); break;
        case 8: _t->airSpeedChanged(); break;
        case 9: _t->climbRateChanged(); break;
        case 10: _t->altitudeRelativeChanged(); break;
        case 11: _t->altitudeWGS84Changed(); break;
        case 12: _t->altitudeAMSLChanged(); break;
        case 13: _t->latitudeChanged(); break;
        case 14: _t->longitudeChanged(); break;
        case 15: _t->mavPresentChanged(); break;
        case 16: _t->batteryVoltageChanged(); break;
        case 17: _t->batteryPercentChanged(); break;
        case 18: _t->batteryConsumedChanged(); break;
        case 19: _t->systemArmedChanged(); break;
        case 20: _t->heartbeatTimeoutChanged(); break;
        case 21: _t->currentModeChanged(); break;
        case 22: _t->currentConfigChanged(); break;
        case 23: _t->systemPixmapChanged(); break;
        case 24: _t->satelliteCountChanged(); break;
        case 25: _t->currentStateChanged(); break;
        case 26: _t->systemNameChanged(); break;
        case 27: _t->satelliteLockChanged(); break;
        case 28: _t->waypointDistanceChanged(); break;
        case 29: _t->currentWaypointChanged(); break;
        case 30: _t->waypointsChanged(); break;
        case 31: _t->_handleTextMessage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 32: _t->_updateAttitude((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< quint64(*)>(_a[5]))); break;
        case 33: _t->_updateAttitude((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< quint64(*)>(_a[6]))); break;
        case 34: _t->_updateSpeed((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< quint64(*)>(_a[4]))); break;
        case 35: _t->_updateAltitude((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< quint64(*)>(_a[6]))); break;
        case 36: _t->_updateNavigationControllerErrors((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 37: _t->_updateNavigationControllerData((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6]))); break;
        case 38: _t->_forgetUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 39: _t->_setActiveUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 40: _t->_checkUpdate(); break;
        case 41: _t->_updateBatteryRemaining((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 42: _t->_updateBatteryConsumedChanged((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 43: _t->_updateArmingState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 44: _t->_updateState((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 45: _t->_updateMode((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 46: _t->_updateName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 47: _t->_setSystemType((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 48: _t->_heartbeatTimeout((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 49: _t->_updateCurrentWaypoint((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 50: _t->_updateWaypointDistance((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 51: _t->_setSatelliteCount((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 52: _t->_setSatLoc((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 53: _t->_updateWaypointViewOnly((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Waypoint*(*)>(_a[2]))); break;
        case 54: _t->_waypointViewOnlyListChanged(); break;
        case 55: { QString _r = _t->getMavIconColor();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 56: _t->saveSetting((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 57: { QString _r = _t->loadSetting((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 53:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Waypoint* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MavManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MavManager::messageTypeChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (MavManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MavManager::newMessageCountChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (MavManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MavManager::messageCountChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (MavManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MavManager::latestErrorChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (MavManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MavManager::rollChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (MavManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MavManager::pitchChanged)) {
                *result = 5;
            }
        }
        {
            typedef void (MavManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MavManager::headingChanged)) {
                *result = 6;
            }
        }
        {
            typedef void (MavManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MavManager::groundSpeedChanged)) {
                *result = 7;
            }
        }
        {
            typedef void (MavManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MavManager::airSpeedChanged)) {
                *result = 8;
            }
        }
        {
            typedef void (MavManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MavManager::climbRateChanged)) {
                *result = 9;
            }
        }
        {
            typedef void (MavManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MavManager::altitudeRelativeChanged)) {
                *result = 10;
            }
        }
        {
            typedef void (MavManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MavManager::altitudeWGS84Changed)) {
                *result = 11;
            }
        }
        {
            typedef void (MavManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MavManager::altitudeAMSLChanged)) {
                *result = 12;
            }
        }
        {
            typedef void (MavManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MavManager::latitudeChanged)) {
                *result = 13;
            }
        }
        {
            typedef void (MavManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MavManager::longitudeChanged)) {
                *result = 14;
            }
        }
        {
            typedef void (MavManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MavManager::mavPresentChanged)) {
                *result = 15;
            }
        }
        {
            typedef void (MavManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MavManager::batteryVoltageChanged)) {
                *result = 16;
            }
        }
        {
            typedef void (MavManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MavManager::batteryPercentChanged)) {
                *result = 17;
            }
        }
        {
            typedef void (MavManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MavManager::batteryConsumedChanged)) {
                *result = 18;
            }
        }
        {
            typedef void (MavManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MavManager::systemArmedChanged)) {
                *result = 19;
            }
        }
        {
            typedef void (MavManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MavManager::heartbeatTimeoutChanged)) {
                *result = 20;
            }
        }
        {
            typedef void (MavManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MavManager::currentModeChanged)) {
                *result = 21;
            }
        }
        {
            typedef void (MavManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MavManager::currentConfigChanged)) {
                *result = 22;
            }
        }
        {
            typedef void (MavManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MavManager::systemPixmapChanged)) {
                *result = 23;
            }
        }
        {
            typedef void (MavManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MavManager::satelliteCountChanged)) {
                *result = 24;
            }
        }
        {
            typedef void (MavManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MavManager::currentStateChanged)) {
                *result = 25;
            }
        }
        {
            typedef void (MavManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MavManager::systemNameChanged)) {
                *result = 26;
            }
        }
        {
            typedef void (MavManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MavManager::satelliteLockChanged)) {
                *result = 27;
            }
        }
        {
            typedef void (MavManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MavManager::waypointDistanceChanged)) {
                *result = 28;
            }
        }
        {
            typedef void (MavManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MavManager::currentWaypointChanged)) {
                *result = 29;
            }
        }
        {
            typedef void (MavManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MavManager::waypointsChanged)) {
                *result = 30;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 29:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQmlListProperty<Waypoint> >(); break;
        }
    }

}

const QMetaObject MavManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MavManager.data,
      qt_meta_data_MavManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MavManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MavManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MavManager.stringdata))
        return static_cast<void*>(const_cast< MavManager*>(this));
    return QObject::qt_metacast(_clname);
}

int MavManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 58)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 58;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 58)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 58;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< MessageType_t*>(_v) = messageType(); break;
        case 1: *reinterpret_cast< int*>(_v) = newMessageCount(); break;
        case 2: *reinterpret_cast< int*>(_v) = messageCount(); break;
        case 3: *reinterpret_cast< QString*>(_v) = latestError(); break;
        case 4: *reinterpret_cast< float*>(_v) = roll(); break;
        case 5: *reinterpret_cast< float*>(_v) = pitch(); break;
        case 6: *reinterpret_cast< float*>(_v) = heading(); break;
        case 7: *reinterpret_cast< float*>(_v) = groundSpeed(); break;
        case 8: *reinterpret_cast< float*>(_v) = airSpeed(); break;
        case 9: *reinterpret_cast< float*>(_v) = climbRate(); break;
        case 10: *reinterpret_cast< float*>(_v) = altitudeRelative(); break;
        case 11: *reinterpret_cast< float*>(_v) = altitudeWGS84(); break;
        case 12: *reinterpret_cast< float*>(_v) = altitudeAMSL(); break;
        case 13: *reinterpret_cast< float*>(_v) = latitude(); break;
        case 14: *reinterpret_cast< float*>(_v) = longitude(); break;
        case 15: *reinterpret_cast< bool*>(_v) = mavPresent(); break;
        case 16: *reinterpret_cast< double*>(_v) = batteryVoltage(); break;
        case 17: *reinterpret_cast< double*>(_v) = batteryPercent(); break;
        case 18: *reinterpret_cast< double*>(_v) = batteryConsumed(); break;
        case 19: *reinterpret_cast< bool*>(_v) = systemArmed(); break;
        case 20: *reinterpret_cast< QString*>(_v) = currentMode(); break;
        case 21: *reinterpret_cast< QString*>(_v) = systemPixmap(); break;
        case 22: *reinterpret_cast< int*>(_v) = satelliteCount(); break;
        case 23: *reinterpret_cast< QString*>(_v) = currentState(); break;
        case 24: *reinterpret_cast< QString*>(_v) = systemName(); break;
        case 25: *reinterpret_cast< int*>(_v) = satelliteLock(); break;
        case 26: *reinterpret_cast< double*>(_v) = waypointDistance(); break;
        case 27: *reinterpret_cast< uint16_t*>(_v) = currentWaypoint(); break;
        case 28: *reinterpret_cast< uint*>(_v) = heartbeatTimeout(); break;
        case 29: *reinterpret_cast< QQmlListProperty<Waypoint>*>(_v) = waypoints(); break;
        default: break;
        }
        _id -= 30;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 30;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 30;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 30;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 30;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 30;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 30;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 30;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void MavManager::messageTypeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void MavManager::newMessageCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void MavManager::messageCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void MavManager::latestErrorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void MavManager::rollChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void MavManager::pitchChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void MavManager::headingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}

// SIGNAL 7
void MavManager::groundSpeedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}

// SIGNAL 8
void MavManager::airSpeedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, Q_NULLPTR);
}

// SIGNAL 9
void MavManager::climbRateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, Q_NULLPTR);
}

// SIGNAL 10
void MavManager::altitudeRelativeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, Q_NULLPTR);
}

// SIGNAL 11
void MavManager::altitudeWGS84Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 11, Q_NULLPTR);
}

// SIGNAL 12
void MavManager::altitudeAMSLChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, Q_NULLPTR);
}

// SIGNAL 13
void MavManager::latitudeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, Q_NULLPTR);
}

// SIGNAL 14
void MavManager::longitudeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, Q_NULLPTR);
}

// SIGNAL 15
void MavManager::mavPresentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, Q_NULLPTR);
}

// SIGNAL 16
void MavManager::batteryVoltageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, Q_NULLPTR);
}

// SIGNAL 17
void MavManager::batteryPercentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 17, Q_NULLPTR);
}

// SIGNAL 18
void MavManager::batteryConsumedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 18, Q_NULLPTR);
}

// SIGNAL 19
void MavManager::systemArmedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 19, Q_NULLPTR);
}

// SIGNAL 20
void MavManager::heartbeatTimeoutChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 20, Q_NULLPTR);
}

// SIGNAL 21
void MavManager::currentModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 21, Q_NULLPTR);
}

// SIGNAL 22
void MavManager::currentConfigChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 22, Q_NULLPTR);
}

// SIGNAL 23
void MavManager::systemPixmapChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 23, Q_NULLPTR);
}

// SIGNAL 24
void MavManager::satelliteCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 24, Q_NULLPTR);
}

// SIGNAL 25
void MavManager::currentStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 25, Q_NULLPTR);
}

// SIGNAL 26
void MavManager::systemNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 26, Q_NULLPTR);
}

// SIGNAL 27
void MavManager::satelliteLockChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 27, Q_NULLPTR);
}

// SIGNAL 28
void MavManager::waypointDistanceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 28, Q_NULLPTR);
}

// SIGNAL 29
void MavManager::currentWaypointChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 29, Q_NULLPTR);
}

// SIGNAL 30
void MavManager::waypointsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 30, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
