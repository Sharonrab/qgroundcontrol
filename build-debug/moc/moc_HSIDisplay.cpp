/****************************************************************************
** Meta object code from reading C++ file 'HSIDisplay.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/HSIDisplay.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'HSIDisplay.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_HSIDisplay_t {
    QByteArrayData data[136];
    char stringdata[1804];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HSIDisplay_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HSIDisplay_t qt_meta_stringdata_HSIDisplay = {
    {
QT_MOC_LITERAL(0, 0, 10), // "HSIDisplay"
QT_MOC_LITERAL(1, 11, 18), // "metricWidthChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 5), // "width"
QT_MOC_LITERAL(4, 37, 12), // "setActiveUAS"
QT_MOC_LITERAL(5, 50, 13), // "UASInterface*"
QT_MOC_LITERAL(6, 64, 3), // "uas"
QT_MOC_LITERAL(7, 68, 14), // "setMetricWidth"
QT_MOC_LITERAL(8, 83, 15), // "updateSatellite"
QT_MOC_LITERAL(9, 99, 5), // "uasid"
QT_MOC_LITERAL(10, 105, 5), // "satid"
QT_MOC_LITERAL(11, 111, 7), // "azimuth"
QT_MOC_LITERAL(12, 119, 9), // "direction"
QT_MOC_LITERAL(13, 129, 3), // "snr"
QT_MOC_LITERAL(14, 133, 4), // "used"
QT_MOC_LITERAL(15, 138, 23), // "updateAttitudeSetpoints"
QT_MOC_LITERAL(16, 162, 11), // "rollDesired"
QT_MOC_LITERAL(17, 174, 12), // "pitchDesired"
QT_MOC_LITERAL(18, 187, 10), // "yawDesired"
QT_MOC_LITERAL(19, 198, 13), // "thrustDesired"
QT_MOC_LITERAL(20, 212, 4), // "usec"
QT_MOC_LITERAL(21, 217, 14), // "updateAttitude"
QT_MOC_LITERAL(22, 232, 4), // "roll"
QT_MOC_LITERAL(23, 237, 5), // "pitch"
QT_MOC_LITERAL(24, 243, 3), // "yaw"
QT_MOC_LITERAL(25, 247, 4), // "time"
QT_MOC_LITERAL(26, 252, 27), // "updateUserPositionSetpoints"
QT_MOC_LITERAL(27, 280, 8), // "xDesired"
QT_MOC_LITERAL(28, 289, 8), // "yDesired"
QT_MOC_LITERAL(29, 298, 8), // "zDesired"
QT_MOC_LITERAL(30, 307, 23), // "updatePositionSetpoints"
QT_MOC_LITERAL(31, 331, 19), // "updateLocalPosition"
QT_MOC_LITERAL(32, 351, 1), // "x"
QT_MOC_LITERAL(33, 353, 1), // "y"
QT_MOC_LITERAL(34, 355, 1), // "z"
QT_MOC_LITERAL(35, 357, 20), // "updateGlobalPosition"
QT_MOC_LITERAL(36, 378, 3), // "lat"
QT_MOC_LITERAL(37, 382, 3), // "lon"
QT_MOC_LITERAL(38, 386, 7), // "altAMSL"
QT_MOC_LITERAL(39, 394, 8), // "altWGS84"
QT_MOC_LITERAL(40, 403, 11), // "updateSpeed"
QT_MOC_LITERAL(41, 415, 2), // "vx"
QT_MOC_LITERAL(42, 418, 2), // "vy"
QT_MOC_LITERAL(43, 421, 2), // "vz"
QT_MOC_LITERAL(44, 424, 15), // "UpdateNavErrors"
QT_MOC_LITERAL(45, 440, 13), // "altitudeError"
QT_MOC_LITERAL(46, 454, 13), // "airspeedError"
QT_MOC_LITERAL(47, 468, 15), // "crosstrackError"
QT_MOC_LITERAL(48, 484, 18), // "updatePositionLock"
QT_MOC_LITERAL(49, 503, 4), // "lock"
QT_MOC_LITERAL(50, 508, 31), // "updateAttitudeControllerEnabled"
QT_MOC_LITERAL(51, 540, 7), // "enabled"
QT_MOC_LITERAL(52, 548, 33), // "updatePositionXYControllerEna..."
QT_MOC_LITERAL(53, 582, 32), // "updatePositionZControllerEnabled"
QT_MOC_LITERAL(54, 615, 23), // "updateOpticalFlowStatus"
QT_MOC_LITERAL(55, 639, 9), // "supported"
QT_MOC_LITERAL(56, 649, 2), // "ok"
QT_MOC_LITERAL(57, 652, 30), // "updateVisionLocalizationStatus"
QT_MOC_LITERAL(58, 683, 26), // "updateDistanceSensorStatus"
QT_MOC_LITERAL(59, 710, 16), // "updateGyroStatus"
QT_MOC_LITERAL(60, 727, 17), // "updateAccelStatus"
QT_MOC_LITERAL(61, 745, 21), // "updateMagSensorStatus"
QT_MOC_LITERAL(62, 767, 16), // "updateBaroStatus"
QT_MOC_LITERAL(63, 784, 20), // "updateAirspeedStatus"
QT_MOC_LITERAL(64, 805, 20), // "updateActuatorStatus"
QT_MOC_LITERAL(65, 826, 17), // "updateLaserStatus"
QT_MOC_LITERAL(66, 844, 29), // "updateGroundTruthSensorStatus"
QT_MOC_LITERAL(67, 874, 20), // "updateObjectPosition"
QT_MOC_LITERAL(68, 895, 2), // "id"
QT_MOC_LITERAL(69, 898, 4), // "type"
QT_MOC_LITERAL(70, 903, 4), // "name"
QT_MOC_LITERAL(71, 908, 7), // "quality"
QT_MOC_LITERAL(72, 916, 7), // "bearing"
QT_MOC_LITERAL(73, 924, 8), // "distance"
QT_MOC_LITERAL(74, 933, 34), // "updatePositionYawControllerEn..."
QT_MOC_LITERAL(75, 968, 18), // "updateLocalization"
QT_MOC_LITERAL(76, 987, 12), // "localization"
QT_MOC_LITERAL(77, 1000, 21), // "updateGpsLocalization"
QT_MOC_LITERAL(78, 1022, 24), // "updateVisionLocalization"
QT_MOC_LITERAL(79, 1047, 36), // "updateInfraredUltrasoundLocal..."
QT_MOC_LITERAL(80, 1084, 3), // "fix"
QT_MOC_LITERAL(81, 1088, 10), // "paintEvent"
QT_MOC_LITERAL(82, 1099, 12), // "QPaintEvent*"
QT_MOC_LITERAL(83, 1112, 5), // "event"
QT_MOC_LITERAL(84, 1118, 14), // "updateJoystick"
QT_MOC_LITERAL(85, 1133, 6), // "thrust"
QT_MOC_LITERAL(86, 1140, 4), // "xHat"
QT_MOC_LITERAL(87, 1145, 4), // "yHat"
QT_MOC_LITERAL(88, 1150, 8), // "pressKey"
QT_MOC_LITERAL(89, 1159, 3), // "key"
QT_MOC_LITERAL(90, 1163, 13), // "resetMAVState"
QT_MOC_LITERAL(91, 1177, 18), // "clearStatusMessage"
QT_MOC_LITERAL(92, 1196, 13), // "renderOverlay"
QT_MOC_LITERAL(93, 1210, 7), // "drawGPS"
QT_MOC_LITERAL(94, 1218, 9), // "QPainter&"
QT_MOC_LITERAL(95, 1228, 7), // "painter"
QT_MOC_LITERAL(96, 1236, 11), // "drawObjects"
QT_MOC_LITERAL(97, 1248, 21), // "drawPositionDirection"
QT_MOC_LITERAL(98, 1270, 4), // "xRef"
QT_MOC_LITERAL(99, 1275, 4), // "yRef"
QT_MOC_LITERAL(100, 1280, 6), // "radius"
QT_MOC_LITERAL(101, 1287, 5), // "color"
QT_MOC_LITERAL(102, 1293, 9), // "QPainter*"
QT_MOC_LITERAL(103, 1303, 21), // "drawAttitudeDirection"
QT_MOC_LITERAL(104, 1325, 20), // "drawAltitudeSetpoint"
QT_MOC_LITERAL(105, 1346, 14), // "drawStatusFlag"
QT_MOC_LITERAL(106, 1361, 5), // "label"
QT_MOC_LITERAL(107, 1367, 6), // "status"
QT_MOC_LITERAL(108, 1374, 5), // "known"
QT_MOC_LITERAL(109, 1380, 16), // "drawPositionLock"
QT_MOC_LITERAL(110, 1397, 27), // "setBodySetpointCoordinateXY"
QT_MOC_LITERAL(111, 1425, 28), // "setBodySetpointCoordinateYaw"
QT_MOC_LITERAL(112, 1454, 26), // "setBodySetpointCoordinateZ"
QT_MOC_LITERAL(113, 1481, 27), // "sendBodySetPointCoordinates"
QT_MOC_LITERAL(114, 1509, 18), // "drawSetpointXYZYaw"
QT_MOC_LITERAL(115, 1528, 13), // "drawWaypoints"
QT_MOC_LITERAL(116, 1542, 12), // "drawWaypoint"
QT_MOC_LITERAL(117, 1555, 15), // "const Waypoint*"
QT_MOC_LITERAL(118, 1571, 1), // "w"
QT_MOC_LITERAL(119, 1573, 1), // "p"
QT_MOC_LITERAL(120, 1575, 14), // "drawSafetyArea"
QT_MOC_LITERAL(121, 1590, 7), // "topLeft"
QT_MOC_LITERAL(122, 1598, 11), // "bottomRight"
QT_MOC_LITERAL(123, 1610, 21), // "mouseDoubleClickEvent"
QT_MOC_LITERAL(124, 1632, 12), // "QMouseEvent*"
QT_MOC_LITERAL(125, 1645, 15), // "mousePressEvent"
QT_MOC_LITERAL(126, 1661, 17), // "mouseReleaseEvent"
QT_MOC_LITERAL(127, 1679, 14), // "mouseMoveEvent"
QT_MOC_LITERAL(128, 1694, 10), // "wheelEvent"
QT_MOC_LITERAL(129, 1705, 12), // "QWheelEvent*"
QT_MOC_LITERAL(130, 1718, 13), // "keyPressEvent"
QT_MOC_LITERAL(131, 1732, 10), // "QKeyEvent*"
QT_MOC_LITERAL(132, 1743, 16), // "contextMenuEvent"
QT_MOC_LITERAL(133, 1760, 18), // "QContextMenuEvent*"
QT_MOC_LITERAL(134, 1779, 16), // "setStatusMessage"
QT_MOC_LITERAL(135, 1796, 7) // "message"

    },
    "HSIDisplay\0metricWidthChanged\0\0width\0"
    "setActiveUAS\0UASInterface*\0uas\0"
    "setMetricWidth\0updateSatellite\0uasid\0"
    "satid\0azimuth\0direction\0snr\0used\0"
    "updateAttitudeSetpoints\0rollDesired\0"
    "pitchDesired\0yawDesired\0thrustDesired\0"
    "usec\0updateAttitude\0roll\0pitch\0yaw\0"
    "time\0updateUserPositionSetpoints\0"
    "xDesired\0yDesired\0zDesired\0"
    "updatePositionSetpoints\0updateLocalPosition\0"
    "x\0y\0z\0updateGlobalPosition\0lat\0lon\0"
    "altAMSL\0altWGS84\0updateSpeed\0vx\0vy\0"
    "vz\0UpdateNavErrors\0altitudeError\0"
    "airspeedError\0crosstrackError\0"
    "updatePositionLock\0lock\0"
    "updateAttitudeControllerEnabled\0enabled\0"
    "updatePositionXYControllerEnabled\0"
    "updatePositionZControllerEnabled\0"
    "updateOpticalFlowStatus\0supported\0ok\0"
    "updateVisionLocalizationStatus\0"
    "updateDistanceSensorStatus\0updateGyroStatus\0"
    "updateAccelStatus\0updateMagSensorStatus\0"
    "updateBaroStatus\0updateAirspeedStatus\0"
    "updateActuatorStatus\0updateLaserStatus\0"
    "updateGroundTruthSensorStatus\0"
    "updateObjectPosition\0id\0type\0name\0"
    "quality\0bearing\0distance\0"
    "updatePositionYawControllerEnabled\0"
    "updateLocalization\0localization\0"
    "updateGpsLocalization\0updateVisionLocalization\0"
    "updateInfraredUltrasoundLocalization\0"
    "fix\0paintEvent\0QPaintEvent*\0event\0"
    "updateJoystick\0thrust\0xHat\0yHat\0"
    "pressKey\0key\0resetMAVState\0"
    "clearStatusMessage\0renderOverlay\0"
    "drawGPS\0QPainter&\0painter\0drawObjects\0"
    "drawPositionDirection\0xRef\0yRef\0radius\0"
    "color\0QPainter*\0drawAttitudeDirection\0"
    "drawAltitudeSetpoint\0drawStatusFlag\0"
    "label\0status\0known\0drawPositionLock\0"
    "setBodySetpointCoordinateXY\0"
    "setBodySetpointCoordinateYaw\0"
    "setBodySetpointCoordinateZ\0"
    "sendBodySetPointCoordinates\0"
    "drawSetpointXYZYaw\0drawWaypoints\0"
    "drawWaypoint\0const Waypoint*\0w\0p\0"
    "drawSafetyArea\0topLeft\0bottomRight\0"
    "mouseDoubleClickEvent\0QMouseEvent*\0"
    "mousePressEvent\0mouseReleaseEvent\0"
    "mouseMoveEvent\0wheelEvent\0QWheelEvent*\0"
    "keyPressEvent\0QKeyEvent*\0contextMenuEvent\0"
    "QContextMenuEvent*\0setStatusMessage\0"
    "message"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HSIDisplay[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      63,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  329,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,  332,    2, 0x0a /* Public */,
       7,    1,  335,    2, 0x0a /* Public */,
       8,    6,  338,    2, 0x0a /* Public */,
      15,    6,  351,    2, 0x0a /* Public */,
      21,    5,  364,    2, 0x0a /* Public */,
      26,    5,  375,    2, 0x0a /* Public */,
      30,    6,  386,    2, 0x0a /* Public */,
      31,    5,  399,    2, 0x0a /* Public */,
      35,    6,  410,    2, 0x0a /* Public */,
      40,    5,  423,    2, 0x0a /* Public */,
      44,    4,  434,    2, 0x0a /* Public */,
      48,    2,  443,    2, 0x0a /* Public */,
      50,    1,  448,    2, 0x0a /* Public */,
      52,    1,  451,    2, 0x0a /* Public */,
      53,    1,  454,    2, 0x0a /* Public */,
      54,    3,  457,    2, 0x0a /* Public */,
      57,    3,  464,    2, 0x0a /* Public */,
      58,    3,  471,    2, 0x0a /* Public */,
      59,    3,  478,    2, 0x0a /* Public */,
      60,    3,  485,    2, 0x0a /* Public */,
      61,    3,  492,    2, 0x0a /* Public */,
      62,    3,  499,    2, 0x0a /* Public */,
      63,    3,  506,    2, 0x0a /* Public */,
      64,    3,  513,    2, 0x0a /* Public */,
      65,    3,  520,    2, 0x0a /* Public */,
      66,    3,  527,    2, 0x0a /* Public */,
      67,    7,  534,    2, 0x0a /* Public */,
      74,    1,  549,    2, 0x0a /* Public */,
      75,    2,  552,    2, 0x0a /* Public */,
      77,    2,  557,    2, 0x0a /* Public */,
      78,    2,  562,    2, 0x0a /* Public */,
      79,    2,  567,    2, 0x0a /* Public */,
      81,    1,  572,    2, 0x0a /* Public */,
      84,    6,  575,    2, 0x0a /* Public */,
      88,    1,  588,    2, 0x0a /* Public */,
      90,    0,  591,    2, 0x0a /* Public */,
      91,    0,  592,    2, 0x0a /* Public */,
      92,    0,  593,    2, 0x09 /* Protected */,
      93,    1,  594,    2, 0x09 /* Protected */,
      96,    1,  597,    2, 0x09 /* Protected */,
      97,    5,  600,    2, 0x09 /* Protected */,
     103,    5,  611,    2, 0x09 /* Protected */,
     104,    5,  622,    2, 0x09 /* Protected */,
     105,    6,  633,    2, 0x09 /* Protected */,
     105,    7,  646,    2, 0x09 /* Protected */,
     109,    6,  661,    2, 0x09 /* Protected */,
     110,    2,  674,    2, 0x09 /* Protected */,
     111,    1,  679,    2, 0x09 /* Protected */,
     112,    1,  682,    2, 0x09 /* Protected */,
     113,    0,  685,    2, 0x09 /* Protected */,
     114,    6,  686,    2, 0x09 /* Protected */,
     115,    1,  699,    2, 0x09 /* Protected */,
     116,    5,  702,    2, 0x09 /* Protected */,
     120,    4,  713,    2, 0x09 /* Protected */,
     123,    1,  722,    2, 0x09 /* Protected */,
     125,    1,  725,    2, 0x09 /* Protected */,
     126,    1,  728,    2, 0x09 /* Protected */,
     127,    1,  731,    2, 0x09 /* Protected */,
     128,    1,  734,    2, 0x09 /* Protected */,
     130,    1,  737,    2, 0x09 /* Protected */,
     132,    1,  740,    2, 0x09 /* Protected */,
     134,    1,  743,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Bool,    9,   10,   11,   12,   13,   14,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::ULongLong,    2,   16,   17,   18,   19,   20,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::ULongLong,    6,   22,   23,   24,   25,
    QMetaType::Void, QMetaType::Int, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,    9,   27,   28,   29,   18,
    QMetaType::Void, QMetaType::Int, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::ULongLong,    9,   27,   28,   29,   18,   20,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::ULongLong,    2,   32,   33,   34,   20,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::ULongLong,    2,   36,   37,   38,   39,   20,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::ULongLong,    6,   41,   42,   43,   25,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Double, QMetaType::Double, QMetaType::Double,    6,   45,   46,   47,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Bool,    6,   49,
    QMetaType::Void, QMetaType::Bool,   51,
    QMetaType::Void, QMetaType::Bool,   51,
    QMetaType::Void, QMetaType::Bool,   51,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,   55,   51,   56,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,   55,   51,   56,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,   55,   51,   56,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,   55,   51,   56,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,   55,   51,   56,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,   55,   51,   56,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,   55,   51,   56,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,   55,   51,   56,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,   55,   51,   56,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,   55,   51,   56,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,   55,   51,   56,
    QMetaType::Void, QMetaType::UInt, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::Int, QMetaType::Float, QMetaType::Float,   25,   68,   69,   70,   71,   72,   73,
    QMetaType::Void, QMetaType::Bool,   51,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Int,    6,   76,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Int,    6,   76,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Int,    6,   76,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Int,    6,   80,
    QMetaType::Void, 0x80000000 | 82,   83,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Int, QMetaType::Int,   22,   23,   24,   85,   86,   87,
    QMetaType::Void, QMetaType::Int,   89,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 94,   95,
    QMetaType::Void, 0x80000000 | 94,   95,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::QColor, 0x80000000 | 102,   98,   99,  100,  101,   95,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::QColor, 0x80000000 | 102,   98,   99,  100,  101,   95,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::QColor, 0x80000000 | 102,   98,   99,  100,  101,   95,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::QString, QMetaType::Bool, QMetaType::Bool, 0x80000000 | 94,   32,   33,  106,  107,  108,   95,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::QString, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool, 0x80000000 | 94,   32,   33,  106,  107,  108,   56,   95,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::QString, QMetaType::Int, QMetaType::Bool, 0x80000000 | 94,   32,   33,  106,  107,  108,   95,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,   32,   33,
    QMetaType::Void, QMetaType::Double,   24,
    QMetaType::Void, QMetaType::Double,   34,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::QColor, 0x80000000 | 94,   32,   33,   34,   24,  101,   95,
    QMetaType::Void, 0x80000000 | 94,   95,
    QMetaType::Void, 0x80000000 | 94, QMetaType::QColor, QMetaType::Float, 0x80000000 | 117, QMetaType::QPointF,   95,  101,    3,  118,  119,
    QMetaType::Void, QMetaType::QPointF, QMetaType::QPointF, QMetaType::QColor, 0x80000000 | 94,  121,  122,  101,   95,
    QMetaType::Void, 0x80000000 | 124,   83,
    QMetaType::Void, 0x80000000 | 124,   83,
    QMetaType::Void, 0x80000000 | 124,   83,
    QMetaType::Void, 0x80000000 | 124,   83,
    QMetaType::Void, 0x80000000 | 129,   83,
    QMetaType::Void, 0x80000000 | 131,   83,
    QMetaType::Void, 0x80000000 | 133,   83,
    QMetaType::Void, QMetaType::QString,  135,

       0        // eod
};

void HSIDisplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HSIDisplay *_t = static_cast<HSIDisplay *>(_o);
        switch (_id) {
        case 0: _t->metricWidthChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->setActiveUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 2: _t->setMetricWidth((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->updateSatellite((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6]))); break;
        case 4: _t->updateAttitudeSetpoints((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< quint64(*)>(_a[6]))); break;
        case 5: _t->updateAttitude((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< quint64(*)>(_a[5]))); break;
        case 6: _t->updateUserPositionSetpoints((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5]))); break;
        case 7: _t->updatePositionSetpoints((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< quint64(*)>(_a[6]))); break;
        case 8: _t->updateLocalPosition((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< quint64(*)>(_a[5]))); break;
        case 9: _t->updateGlobalPosition((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< quint64(*)>(_a[6]))); break;
        case 10: _t->updateSpeed((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< quint64(*)>(_a[5]))); break;
        case 11: _t->UpdateNavErrors((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 12: _t->updatePositionLock((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 13: _t->updateAttitudeControllerEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->updatePositionXYControllerEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->updatePositionZControllerEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->updateOpticalFlowStatus((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 17: _t->updateVisionLocalizationStatus((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 18: _t->updateDistanceSensorStatus((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 19: _t->updateGyroStatus((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 20: _t->updateAccelStatus((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 21: _t->updateMagSensorStatus((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 22: _t->updateBaroStatus((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 23: _t->updateAirspeedStatus((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 24: _t->updateActuatorStatus((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 25: _t->updateLaserStatus((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 26: _t->updateGroundTruthSensorStatus((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 27: _t->updateObjectPosition((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7]))); break;
        case 28: _t->updatePositionYawControllerEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 29: _t->updateLocalization((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 30: _t->updateGpsLocalization((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 31: _t->updateVisionLocalization((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 32: _t->updateInfraredUltrasoundLocalization((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 33: _t->paintEvent((*reinterpret_cast< QPaintEvent*(*)>(_a[1]))); break;
        case 34: _t->updateJoystick((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6]))); break;
        case 35: _t->pressKey((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 36: _t->resetMAVState(); break;
        case 37: _t->clearStatusMessage(); break;
        case 38: _t->renderOverlay(); break;
        case 39: _t->drawGPS((*reinterpret_cast< QPainter(*)>(_a[1]))); break;
        case 40: _t->drawObjects((*reinterpret_cast< QPainter(*)>(_a[1]))); break;
        case 41: _t->drawPositionDirection((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< const QColor(*)>(_a[4])),(*reinterpret_cast< QPainter*(*)>(_a[5]))); break;
        case 42: _t->drawAttitudeDirection((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< const QColor(*)>(_a[4])),(*reinterpret_cast< QPainter*(*)>(_a[5]))); break;
        case 43: _t->drawAltitudeSetpoint((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< const QColor(*)>(_a[4])),(*reinterpret_cast< QPainter*(*)>(_a[5]))); break;
        case 44: _t->drawStatusFlag((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< QPainter(*)>(_a[6]))); break;
        case 45: _t->drawStatusFlag((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6])),(*reinterpret_cast< QPainter(*)>(_a[7]))); break;
        case 46: _t->drawPositionLock((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< QPainter(*)>(_a[6]))); break;
        case 47: _t->setBodySetpointCoordinateXY((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 48: _t->setBodySetpointCoordinateYaw((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 49: _t->setBodySetpointCoordinateZ((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 50: _t->sendBodySetPointCoordinates(); break;
        case 51: _t->drawSetpointXYZYaw((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< const QColor(*)>(_a[5])),(*reinterpret_cast< QPainter(*)>(_a[6]))); break;
        case 52: _t->drawWaypoints((*reinterpret_cast< QPainter(*)>(_a[1]))); break;
        case 53: _t->drawWaypoint((*reinterpret_cast< QPainter(*)>(_a[1])),(*reinterpret_cast< const QColor(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< const Waypoint*(*)>(_a[4])),(*reinterpret_cast< const QPointF(*)>(_a[5]))); break;
        case 54: _t->drawSafetyArea((*reinterpret_cast< const QPointF(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2])),(*reinterpret_cast< const QColor(*)>(_a[3])),(*reinterpret_cast< QPainter(*)>(_a[4]))); break;
        case 55: _t->mouseDoubleClickEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 56: _t->mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 57: _t->mouseReleaseEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 58: _t->mouseMoveEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 59: _t->wheelEvent((*reinterpret_cast< QWheelEvent*(*)>(_a[1]))); break;
        case 60: _t->keyPressEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 61: _t->contextMenuEvent((*reinterpret_cast< QContextMenuEvent*(*)>(_a[1]))); break;
        case 62: _t->setStatusMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 29:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 30:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 31:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 32:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (HSIDisplay::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HSIDisplay::metricWidthChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject HSIDisplay::staticMetaObject = {
    { &HDDisplay::staticMetaObject, qt_meta_stringdata_HSIDisplay.data,
      qt_meta_data_HSIDisplay,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *HSIDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HSIDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_HSIDisplay.stringdata))
        return static_cast<void*>(const_cast< HSIDisplay*>(this));
    return HDDisplay::qt_metacast(_clname);
}

int HSIDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = HDDisplay::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 63)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 63;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 63)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 63;
    }
    return _id;
}

// SIGNAL 0
void HSIDisplay::metricWidthChanged(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
