/****************************************************************************
** Meta object code from reading C++ file 'UAS.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/uas/UAS.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UAS.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_UAS_t {
    QByteArrayData data[229];
    char stringdata[2731];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UAS_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UAS_t qt_meta_stringdata_UAS = {
    {
QT_MOC_LITERAL(0, 0, 3), // "UAS"
QT_MOC_LITERAL(1, 4, 15), // "actuatorChanged"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 13), // "UASInterface*"
QT_MOC_LITERAL(4, 35, 3), // "uas"
QT_MOC_LITERAL(5, 39, 12), // "actuatorName"
QT_MOC_LITERAL(6, 52, 3), // "min"
QT_MOC_LITERAL(7, 56, 3), // "max"
QT_MOC_LITERAL(8, 60, 5), // "value"
QT_MOC_LITERAL(9, 66, 12), // "motorChanged"
QT_MOC_LITERAL(10, 79, 9), // "motorName"
QT_MOC_LITERAL(11, 89, 11), // "loadChanged"
QT_MOC_LITERAL(12, 101, 4), // "load"
QT_MOC_LITERAL(13, 106, 12), // "imageStarted"
QT_MOC_LITERAL(14, 119, 9), // "timestamp"
QT_MOC_LITERAL(15, 129, 10), // "imageReady"
QT_MOC_LITERAL(16, 140, 18), // "hilControlsChanged"
QT_MOC_LITERAL(17, 159, 4), // "time"
QT_MOC_LITERAL(18, 164, 12), // "rollAilerons"
QT_MOC_LITERAL(19, 177, 13), // "pitchElevator"
QT_MOC_LITERAL(20, 191, 9), // "yawRudder"
QT_MOC_LITERAL(21, 201, 8), // "throttle"
QT_MOC_LITERAL(22, 210, 10), // "systemMode"
QT_MOC_LITERAL(23, 221, 7), // "navMode"
QT_MOC_LITERAL(24, 229, 19), // "hilActuatorsChanged"
QT_MOC_LITERAL(25, 249, 4), // "act1"
QT_MOC_LITERAL(26, 254, 4), // "act2"
QT_MOC_LITERAL(27, 259, 4), // "act3"
QT_MOC_LITERAL(28, 264, 4), // "act4"
QT_MOC_LITERAL(29, 269, 4), // "act5"
QT_MOC_LITERAL(30, 274, 4), // "act6"
QT_MOC_LITERAL(31, 279, 4), // "act7"
QT_MOC_LITERAL(32, 284, 4), // "act8"
QT_MOC_LITERAL(33, 289, 13), // "localXChanged"
QT_MOC_LITERAL(34, 303, 3), // "val"
QT_MOC_LITERAL(35, 307, 4), // "name"
QT_MOC_LITERAL(36, 312, 13), // "localYChanged"
QT_MOC_LITERAL(37, 326, 13), // "localZChanged"
QT_MOC_LITERAL(38, 340, 16), // "longitudeChanged"
QT_MOC_LITERAL(39, 357, 15), // "latitudeChanged"
QT_MOC_LITERAL(40, 373, 19), // "altitudeAMSLChanged"
QT_MOC_LITERAL(41, 393, 21), // "altitudeAMSLFTChanged"
QT_MOC_LITERAL(42, 415, 20), // "altitudeWGS84Changed"
QT_MOC_LITERAL(43, 436, 23), // "altitudeRelativeChanged"
QT_MOC_LITERAL(44, 460, 11), // "rollChanged"
QT_MOC_LITERAL(45, 472, 12), // "pitchChanged"
QT_MOC_LITERAL(46, 485, 10), // "yawChanged"
QT_MOC_LITERAL(47, 496, 21), // "satelliteCountChanged"
QT_MOC_LITERAL(48, 518, 21), // "distToWaypointChanged"
QT_MOC_LITERAL(49, 540, 18), // "groundSpeedChanged"
QT_MOC_LITERAL(50, 559, 15), // "airSpeedChanged"
QT_MOC_LITERAL(51, 575, 24), // "bearingToWaypointChanged"
QT_MOC_LITERAL(52, 600, 16), // "setAutopilotType"
QT_MOC_LITERAL(53, 617, 6), // "apType"
QT_MOC_LITERAL(54, 624, 13), // "setSystemType"
QT_MOC_LITERAL(55, 638, 10), // "systemType"
QT_MOC_LITERAL(56, 649, 11), // "setAirframe"
QT_MOC_LITERAL(57, 661, 8), // "airframe"
QT_MOC_LITERAL(58, 670, 10), // "setUASName"
QT_MOC_LITERAL(59, 681, 14), // "executeCommand"
QT_MOC_LITERAL(60, 696, 7), // "MAV_CMD"
QT_MOC_LITERAL(61, 704, 7), // "command"
QT_MOC_LITERAL(62, 712, 12), // "confirmation"
QT_MOC_LITERAL(63, 725, 6), // "param1"
QT_MOC_LITERAL(64, 732, 6), // "param2"
QT_MOC_LITERAL(65, 739, 6), // "param3"
QT_MOC_LITERAL(66, 746, 6), // "param4"
QT_MOC_LITERAL(67, 753, 6), // "param5"
QT_MOC_LITERAL(68, 760, 6), // "param6"
QT_MOC_LITERAL(69, 767, 6), // "param7"
QT_MOC_LITERAL(70, 774, 9), // "component"
QT_MOC_LITERAL(71, 784, 17), // "executeCommandAck"
QT_MOC_LITERAL(72, 802, 3), // "num"
QT_MOC_LITERAL(73, 806, 7), // "success"
QT_MOC_LITERAL(74, 814, 15), // "setBatterySpecs"
QT_MOC_LITERAL(75, 830, 5), // "specs"
QT_MOC_LITERAL(76, 836, 15), // "getBatterySpecs"
QT_MOC_LITERAL(77, 852, 6), // "launch"
QT_MOC_LITERAL(78, 859, 4), // "home"
QT_MOC_LITERAL(79, 864, 4), // "land"
QT_MOC_LITERAL(80, 869, 6), // "pairRX"
QT_MOC_LITERAL(81, 876, 6), // "rxType"
QT_MOC_LITERAL(82, 883, 9), // "rxSubType"
QT_MOC_LITERAL(83, 893, 4), // "halt"
QT_MOC_LITERAL(84, 898, 2), // "go"
QT_MOC_LITERAL(85, 901, 19), // "enableHilFlightGear"
QT_MOC_LITERAL(86, 921, 6), // "enable"
QT_MOC_LITERAL(87, 928, 7), // "options"
QT_MOC_LITERAL(88, 936, 9), // "sensorHil"
QT_MOC_LITERAL(89, 946, 13), // "configuration"
QT_MOC_LITERAL(90, 960, 15), // "enableHilJSBSim"
QT_MOC_LITERAL(91, 976, 15), // "enableHilXPlane"
QT_MOC_LITERAL(92, 992, 12), // "sendHilState"
QT_MOC_LITERAL(93, 1005, 7), // "time_us"
QT_MOC_LITERAL(94, 1013, 4), // "roll"
QT_MOC_LITERAL(95, 1018, 5), // "pitch"
QT_MOC_LITERAL(96, 1024, 3), // "yaw"
QT_MOC_LITERAL(97, 1028, 16), // "rollRotationRate"
QT_MOC_LITERAL(98, 1045, 17), // "pitchRotationRate"
QT_MOC_LITERAL(99, 1063, 15), // "yawRotationRate"
QT_MOC_LITERAL(100, 1079, 3), // "lat"
QT_MOC_LITERAL(101, 1083, 3), // "lon"
QT_MOC_LITERAL(102, 1087, 3), // "alt"
QT_MOC_LITERAL(103, 1091, 2), // "vx"
QT_MOC_LITERAL(104, 1094, 2), // "vy"
QT_MOC_LITERAL(105, 1097, 2), // "vz"
QT_MOC_LITERAL(106, 1100, 12), // "ind_airspeed"
QT_MOC_LITERAL(107, 1113, 13), // "true_airspeed"
QT_MOC_LITERAL(108, 1127, 4), // "xacc"
QT_MOC_LITERAL(109, 1132, 4), // "yacc"
QT_MOC_LITERAL(110, 1137, 4), // "zacc"
QT_MOC_LITERAL(111, 1142, 18), // "sendHilGroundTruth"
QT_MOC_LITERAL(112, 1161, 14), // "sendHilSensors"
QT_MOC_LITERAL(113, 1176, 9), // "rollspeed"
QT_MOC_LITERAL(114, 1186, 10), // "pitchspeed"
QT_MOC_LITERAL(115, 1197, 8), // "yawspeed"
QT_MOC_LITERAL(116, 1206, 4), // "xmag"
QT_MOC_LITERAL(117, 1211, 4), // "ymag"
QT_MOC_LITERAL(118, 1216, 4), // "zmag"
QT_MOC_LITERAL(119, 1221, 12), // "abs_pressure"
QT_MOC_LITERAL(120, 1234, 13), // "diff_pressure"
QT_MOC_LITERAL(121, 1248, 12), // "pressure_alt"
QT_MOC_LITERAL(122, 1261, 11), // "temperature"
QT_MOC_LITERAL(123, 1273, 14), // "fields_changed"
QT_MOC_LITERAL(124, 1288, 18), // "sendHilOpticalFlow"
QT_MOC_LITERAL(125, 1307, 6), // "flow_x"
QT_MOC_LITERAL(126, 1314, 6), // "flow_y"
QT_MOC_LITERAL(127, 1321, 13), // "flow_comp_m_x"
QT_MOC_LITERAL(128, 1335, 13), // "flow_comp_m_y"
QT_MOC_LITERAL(129, 1349, 7), // "quality"
QT_MOC_LITERAL(130, 1357, 15), // "ground_distance"
QT_MOC_LITERAL(131, 1373, 10), // "sendHilGps"
QT_MOC_LITERAL(132, 1384, 8), // "fix_type"
QT_MOC_LITERAL(133, 1393, 3), // "eph"
QT_MOC_LITERAL(134, 1397, 3), // "epv"
QT_MOC_LITERAL(135, 1401, 3), // "vel"
QT_MOC_LITERAL(136, 1405, 2), // "vn"
QT_MOC_LITERAL(137, 1408, 2), // "ve"
QT_MOC_LITERAL(138, 1411, 2), // "vd"
QT_MOC_LITERAL(139, 1414, 3), // "cog"
QT_MOC_LITERAL(140, 1418, 10), // "satellites"
QT_MOC_LITERAL(141, 1429, 8), // "startHil"
QT_MOC_LITERAL(142, 1438, 7), // "stopHil"
QT_MOC_LITERAL(143, 1446, 13), // "emergencySTOP"
QT_MOC_LITERAL(144, 1460, 13), // "emergencyKILL"
QT_MOC_LITERAL(145, 1474, 8), // "shutdown"
QT_MOC_LITERAL(146, 1483, 17), // "setTargetPosition"
QT_MOC_LITERAL(147, 1501, 1), // "x"
QT_MOC_LITERAL(148, 1503, 1), // "y"
QT_MOC_LITERAL(149, 1505, 1), // "z"
QT_MOC_LITERAL(150, 1507, 17), // "startLowBattAlarm"
QT_MOC_LITERAL(151, 1525, 16), // "stopLowBattAlarm"
QT_MOC_LITERAL(152, 1542, 9), // "armSystem"
QT_MOC_LITERAL(153, 1552, 12), // "disarmSystem"
QT_MOC_LITERAL(154, 1565, 16), // "toggleArmedState"
QT_MOC_LITERAL(155, 1582, 12), // "goAutonomous"
QT_MOC_LITERAL(156, 1595, 8), // "goManual"
QT_MOC_LITERAL(157, 1604, 14), // "toggleAutonomy"
QT_MOC_LITERAL(158, 1619, 26), // "setExternalControlSetpoint"
QT_MOC_LITERAL(159, 1646, 6), // "thrust"
QT_MOC_LITERAL(160, 1653, 4), // "xHat"
QT_MOC_LITERAL(161, 1658, 4), // "yHat"
QT_MOC_LITERAL(162, 1663, 7), // "buttons"
QT_MOC_LITERAL(163, 1671, 28), // "setManual6DOFControlCommands"
QT_MOC_LITERAL(164, 1700, 7), // "addLink"
QT_MOC_LITERAL(165, 1708, 14), // "LinkInterface*"
QT_MOC_LITERAL(166, 1723, 4), // "link"
QT_MOC_LITERAL(167, 1728, 14), // "receiveMessage"
QT_MOC_LITERAL(168, 1743, 17), // "mavlink_message_t"
QT_MOC_LITERAL(169, 1761, 7), // "message"
QT_MOC_LITERAL(170, 1769, 11), // "sendMessage"
QT_MOC_LITERAL(171, 1781, 11), // "setSelected"
QT_MOC_LITERAL(172, 1793, 7), // "setMode"
QT_MOC_LITERAL(173, 1801, 7), // "uint8_t"
QT_MOC_LITERAL(174, 1809, 11), // "newBaseMode"
QT_MOC_LITERAL(175, 1821, 8), // "uint32_t"
QT_MOC_LITERAL(176, 1830, 13), // "newCustomMode"
QT_MOC_LITERAL(177, 1844, 10), // "setModeArm"
QT_MOC_LITERAL(178, 1855, 25), // "enableAllDataTransmission"
QT_MOC_LITERAL(179, 1881, 4), // "rate"
QT_MOC_LITERAL(180, 1886, 31), // "enableRawSensorDataTransmission"
QT_MOC_LITERAL(181, 1918, 38), // "enableExtendedSystemStatusTra..."
QT_MOC_LITERAL(182, 1957, 31), // "enableRCChannelDataTransmission"
QT_MOC_LITERAL(183, 1989, 35), // "enableRawControllerDataTransm..."
QT_MOC_LITERAL(184, 2025, 26), // "enablePositionTransmission"
QT_MOC_LITERAL(185, 2052, 24), // "enableExtra1Transmission"
QT_MOC_LITERAL(186, 2077, 24), // "enableExtra2Transmission"
QT_MOC_LITERAL(187, 2102, 24), // "enableExtra3Transmission"
QT_MOC_LITERAL(188, 2127, 11), // "updateState"
QT_MOC_LITERAL(189, 2139, 34), // "setLocalOriginAtCurrentGPSPos..."
QT_MOC_LITERAL(190, 2174, 15), // "setHomePosition"
QT_MOC_LITERAL(191, 2190, 24), // "setLocalPositionSetpoint"
QT_MOC_LITERAL(192, 2215, 22), // "setLocalPositionOffset"
QT_MOC_LITERAL(193, 2238, 16), // "startCalibration"
QT_MOC_LITERAL(194, 2255, 20), // "StartCalibrationType"
QT_MOC_LITERAL(195, 2276, 7), // "calType"
QT_MOC_LITERAL(196, 2284, 15), // "stopCalibration"
QT_MOC_LITERAL(197, 2300, 18), // "startDataRecording"
QT_MOC_LITERAL(198, 2319, 17), // "stopDataRecording"
QT_MOC_LITERAL(199, 2337, 14), // "deleteSettings"
QT_MOC_LITERAL(200, 2352, 13), // "triggerAction"
QT_MOC_LITERAL(201, 2366, 6), // "action"
QT_MOC_LITERAL(202, 2373, 16), // "sendMapRCToParam"
QT_MOC_LITERAL(203, 2390, 8), // "param_id"
QT_MOC_LITERAL(204, 2399, 5), // "scale"
QT_MOC_LITERAL(205, 2405, 6), // "value0"
QT_MOC_LITERAL(206, 2412, 22), // "param_rc_channel_index"
QT_MOC_LITERAL(207, 2435, 8), // "valueMin"
QT_MOC_LITERAL(208, 2444, 8), // "valueMax"
QT_MOC_LITERAL(209, 2453, 21), // "unsetRCToParameterMap"
QT_MOC_LITERAL(210, 2475, 13), // "writeSettings"
QT_MOC_LITERAL(211, 2489, 12), // "readSettings"
QT_MOC_LITERAL(212, 2502, 17), // "_linkDisconnected"
QT_MOC_LITERAL(213, 2520, 6), // "localX"
QT_MOC_LITERAL(214, 2527, 6), // "localY"
QT_MOC_LITERAL(215, 2534, 6), // "localZ"
QT_MOC_LITERAL(216, 2541, 8), // "latitude"
QT_MOC_LITERAL(217, 2550, 9), // "longitude"
QT_MOC_LITERAL(218, 2560, 14), // "satelliteCount"
QT_MOC_LITERAL(219, 2575, 20), // "isLocalPositionKnown"
QT_MOC_LITERAL(220, 2596, 21), // "isGlobalPositionKnown"
QT_MOC_LITERAL(221, 2618, 14), // "distToWaypoint"
QT_MOC_LITERAL(222, 2633, 8), // "airSpeed"
QT_MOC_LITERAL(223, 2642, 11), // "groundSpeed"
QT_MOC_LITERAL(224, 2654, 17), // "bearingToWaypoint"
QT_MOC_LITERAL(225, 2672, 12), // "altitudeAMSL"
QT_MOC_LITERAL(226, 2685, 14), // "altitudeAMSLFT"
QT_MOC_LITERAL(227, 2700, 13), // "altitudeWGS84"
QT_MOC_LITERAL(228, 2714, 16) // "altitudeRelative"

    },
    "UAS\0actuatorChanged\0\0UASInterface*\0"
    "uas\0actuatorName\0min\0max\0value\0"
    "motorChanged\0motorName\0loadChanged\0"
    "load\0imageStarted\0timestamp\0imageReady\0"
    "hilControlsChanged\0time\0rollAilerons\0"
    "pitchElevator\0yawRudder\0throttle\0"
    "systemMode\0navMode\0hilActuatorsChanged\0"
    "act1\0act2\0act3\0act4\0act5\0act6\0act7\0"
    "act8\0localXChanged\0val\0name\0localYChanged\0"
    "localZChanged\0longitudeChanged\0"
    "latitudeChanged\0altitudeAMSLChanged\0"
    "altitudeAMSLFTChanged\0altitudeWGS84Changed\0"
    "altitudeRelativeChanged\0rollChanged\0"
    "pitchChanged\0yawChanged\0satelliteCountChanged\0"
    "distToWaypointChanged\0groundSpeedChanged\0"
    "airSpeedChanged\0bearingToWaypointChanged\0"
    "setAutopilotType\0apType\0setSystemType\0"
    "systemType\0setAirframe\0airframe\0"
    "setUASName\0executeCommand\0MAV_CMD\0"
    "command\0confirmation\0param1\0param2\0"
    "param3\0param4\0param5\0param6\0param7\0"
    "component\0executeCommandAck\0num\0success\0"
    "setBatterySpecs\0specs\0getBatterySpecs\0"
    "launch\0home\0land\0pairRX\0rxType\0rxSubType\0"
    "halt\0go\0enableHilFlightGear\0enable\0"
    "options\0sensorHil\0configuration\0"
    "enableHilJSBSim\0enableHilXPlane\0"
    "sendHilState\0time_us\0roll\0pitch\0yaw\0"
    "rollRotationRate\0pitchRotationRate\0"
    "yawRotationRate\0lat\0lon\0alt\0vx\0vy\0vz\0"
    "ind_airspeed\0true_airspeed\0xacc\0yacc\0"
    "zacc\0sendHilGroundTruth\0sendHilSensors\0"
    "rollspeed\0pitchspeed\0yawspeed\0xmag\0"
    "ymag\0zmag\0abs_pressure\0diff_pressure\0"
    "pressure_alt\0temperature\0fields_changed\0"
    "sendHilOpticalFlow\0flow_x\0flow_y\0"
    "flow_comp_m_x\0flow_comp_m_y\0quality\0"
    "ground_distance\0sendHilGps\0fix_type\0"
    "eph\0epv\0vel\0vn\0ve\0vd\0cog\0satellites\0"
    "startHil\0stopHil\0emergencySTOP\0"
    "emergencyKILL\0shutdown\0setTargetPosition\0"
    "x\0y\0z\0startLowBattAlarm\0stopLowBattAlarm\0"
    "armSystem\0disarmSystem\0toggleArmedState\0"
    "goAutonomous\0goManual\0toggleAutonomy\0"
    "setExternalControlSetpoint\0thrust\0"
    "xHat\0yHat\0buttons\0setManual6DOFControlCommands\0"
    "addLink\0LinkInterface*\0link\0receiveMessage\0"
    "mavlink_message_t\0message\0sendMessage\0"
    "setSelected\0setMode\0uint8_t\0newBaseMode\0"
    "uint32_t\0newCustomMode\0setModeArm\0"
    "enableAllDataTransmission\0rate\0"
    "enableRawSensorDataTransmission\0"
    "enableExtendedSystemStatusTransmission\0"
    "enableRCChannelDataTransmission\0"
    "enableRawControllerDataTransmission\0"
    "enablePositionTransmission\0"
    "enableExtra1Transmission\0"
    "enableExtra2Transmission\0"
    "enableExtra3Transmission\0updateState\0"
    "setLocalOriginAtCurrentGPSPosition\0"
    "setHomePosition\0setLocalPositionSetpoint\0"
    "setLocalPositionOffset\0startCalibration\0"
    "StartCalibrationType\0calType\0"
    "stopCalibration\0startDataRecording\0"
    "stopDataRecording\0deleteSettings\0"
    "triggerAction\0action\0sendMapRCToParam\0"
    "param_id\0scale\0value0\0param_rc_channel_index\0"
    "valueMin\0valueMax\0unsetRCToParameterMap\0"
    "writeSettings\0readSettings\0_linkDisconnected\0"
    "localX\0localY\0localZ\0latitude\0longitude\0"
    "satelliteCount\0isLocalPositionKnown\0"
    "isGlobalPositionKnown\0distToWaypoint\0"
    "airSpeed\0groundSpeed\0bearingToWaypoint\0"
    "altitudeAMSL\0altitudeAMSLFT\0altitudeWGS84\0"
    "altitudeRelative"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UAS[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      95,   14, // methods
      19, 1022, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      24,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    5,  489,    2, 0x06 /* Public */,
       9,    5,  500,    2, 0x06 /* Public */,
      11,    2,  511,    2, 0x06 /* Public */,
      13,    1,  516,    2, 0x06 /* Public */,
      15,    1,  519,    2, 0x06 /* Public */,
      16,    7,  522,    2, 0x06 /* Public */,
      24,    9,  537,    2, 0x06 /* Public */,
      33,    2,  556,    2, 0x06 /* Public */,
      36,    2,  561,    2, 0x06 /* Public */,
      37,    2,  566,    2, 0x06 /* Public */,
      38,    2,  571,    2, 0x06 /* Public */,
      39,    2,  576,    2, 0x06 /* Public */,
      40,    2,  581,    2, 0x06 /* Public */,
      41,    2,  586,    2, 0x06 /* Public */,
      42,    2,  591,    2, 0x06 /* Public */,
      43,    2,  596,    2, 0x06 /* Public */,
      44,    2,  601,    2, 0x06 /* Public */,
      45,    2,  606,    2, 0x06 /* Public */,
      46,    2,  611,    2, 0x06 /* Public */,
      47,    2,  616,    2, 0x06 /* Public */,
      48,    2,  621,    2, 0x06 /* Public */,
      49,    2,  626,    2, 0x06 /* Public */,
      50,    2,  631,    2, 0x06 /* Public */,
      51,    2,  636,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      52,    1,  641,    2, 0x0a /* Public */,
      54,    1,  644,    2, 0x0a /* Public */,
      56,    1,  647,    2, 0x0a /* Public */,
      58,    1,  650,    2, 0x0a /* Public */,
      59,    1,  653,    2, 0x0a /* Public */,
      59,   10,  656,    2, 0x0a /* Public */,
      71,    2,  677,    2, 0x0a /* Public */,
      74,    1,  682,    2, 0x0a /* Public */,
      76,    0,  685,    2, 0x0a /* Public */,
      77,    0,  686,    2, 0x0a /* Public */,
      78,    0,  687,    2, 0x0a /* Public */,
      79,    0,  688,    2, 0x0a /* Public */,
      80,    2,  689,    2, 0x0a /* Public */,
      83,    0,  694,    2, 0x0a /* Public */,
      84,    0,  695,    2, 0x0a /* Public */,
      85,    4,  696,    2, 0x0a /* Public */,
      90,    2,  705,    2, 0x0a /* Public */,
      91,    1,  710,    2, 0x0a /* Public */,
      92,   18,  713,    2, 0x0a /* Public */,
     111,   18,  750,    2, 0x0a /* Public */,
     112,   15,  787,    2, 0x0a /* Public */,
     124,    7,  818,    2, 0x0a /* Public */,
     131,   13,  833,    2, 0x0a /* Public */,
     141,    0,  860,    2, 0x0a /* Public */,
     142,    0,  861,    2, 0x0a /* Public */,
     143,    0,  862,    2, 0x0a /* Public */,
     144,    0,  863,    2, 0x0a /* Public */,
     145,    0,  864,    2, 0x0a /* Public */,
     146,    4,  865,    2, 0x0a /* Public */,
     150,    0,  874,    2, 0x0a /* Public */,
     151,    0,  875,    2, 0x0a /* Public */,
     152,    0,  876,    2, 0x0a /* Public */,
     153,    0,  877,    2, 0x0a /* Public */,
     154,    0,  878,    2, 0x0a /* Public */,
     155,    0,  879,    2, 0x0a /* Public */,
     156,    0,  880,    2, 0x0a /* Public */,
     157,    0,  881,    2, 0x0a /* Public */,
     158,    8,  882,    2, 0x0a /* Public */,
     163,    6,  899,    2, 0x0a /* Public */,
     164,    1,  912,    2, 0x0a /* Public */,
     167,    2,  915,    2, 0x0a /* Public */,
     170,    2,  920,    2, 0x0a /* Public */,
     170,    1,  925,    2, 0x0a /* Public */,
     171,    0,  928,    2, 0x0a /* Public */,
     172,    2,  929,    2, 0x0a /* Public */,
     177,    2,  934,    2, 0x0a /* Public */,
     178,    1,  939,    2, 0x0a /* Public */,
     180,    1,  942,    2, 0x0a /* Public */,
     181,    1,  945,    2, 0x0a /* Public */,
     182,    1,  948,    2, 0x0a /* Public */,
     183,    1,  951,    2, 0x0a /* Public */,
     184,    1,  954,    2, 0x0a /* Public */,
     185,    1,  957,    2, 0x0a /* Public */,
     186,    1,  960,    2, 0x0a /* Public */,
     187,    1,  963,    2, 0x0a /* Public */,
     188,    0,  966,    2, 0x0a /* Public */,
     189,    0,  967,    2, 0x0a /* Public */,
     190,    3,  968,    2, 0x0a /* Public */,
     191,    4,  975,    2, 0x0a /* Public */,
     192,    4,  984,    2, 0x0a /* Public */,
     193,    1,  993,    2, 0x0a /* Public */,
     196,    0,  996,    2, 0x0a /* Public */,
     197,    0,  997,    2, 0x0a /* Public */,
     198,    0,  998,    2, 0x0a /* Public */,
     199,    0,  999,    2, 0x0a /* Public */,
     200,    1, 1000,    2, 0x0a /* Public */,
     202,    6, 1003,    2, 0x0a /* Public */,
     209,    0, 1016,    2, 0x0a /* Public */,
     210,    0, 1017,    2, 0x09 /* Protected */,
     211,    0, 1018,    2, 0x09 /* Protected */,
     212,    1, 1019,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::Double, QMetaType::Double, QMetaType::Double,    4,    5,    6,    7,    8,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::Double, QMetaType::Double, QMetaType::Double,    4,   10,    6,    7,    8,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Double,    4,   12,
    QMetaType::Void, QMetaType::ULongLong,   14,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::UChar, QMetaType::UChar,   17,   18,   19,   20,   21,   22,   23,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,   17,   25,   26,   27,   28,   29,   30,   31,   32,
    QMetaType::Void, QMetaType::Double, QMetaType::QString,   34,   35,
    QMetaType::Void, QMetaType::Double, QMetaType::QString,   34,   35,
    QMetaType::Void, QMetaType::Double, QMetaType::QString,   34,   35,
    QMetaType::Void, QMetaType::Double, QMetaType::QString,   34,   35,
    QMetaType::Void, QMetaType::Double, QMetaType::QString,   34,   35,
    QMetaType::Void, QMetaType::Double, QMetaType::QString,   34,   35,
    QMetaType::Void, QMetaType::Double, QMetaType::QString,   34,   35,
    QMetaType::Void, QMetaType::Double, QMetaType::QString,   34,   35,
    QMetaType::Void, QMetaType::Double, QMetaType::QString,   34,   35,
    QMetaType::Void, QMetaType::Double, QMetaType::QString,   34,   35,
    QMetaType::Void, QMetaType::Double, QMetaType::QString,   34,   35,
    QMetaType::Void, QMetaType::Double, QMetaType::QString,   34,   35,
    QMetaType::Void, QMetaType::Double, QMetaType::QString,   34,   35,
    QMetaType::Void, QMetaType::Double, QMetaType::QString,   34,   35,
    QMetaType::Void, QMetaType::Double, QMetaType::QString,   34,   35,
    QMetaType::Void, QMetaType::Double, QMetaType::QString,   34,   35,
    QMetaType::Void, QMetaType::Double, QMetaType::QString,   34,   35,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   53,
    QMetaType::Void, QMetaType::Int,   55,
    QMetaType::Void, QMetaType::Int,   57,
    QMetaType::Void, QMetaType::QString,   35,
    QMetaType::Void, 0x80000000 | 60,   61,
    QMetaType::Void, 0x80000000 | 60, QMetaType::Int, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Int,   61,   62,   63,   64,   65,   66,   67,   68,   69,   70,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   72,   73,
    QMetaType::Void, QMetaType::QString,   75,
    QMetaType::QString,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   81,   82,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString, QMetaType::Bool, QMetaType::QObjectStar,   86,   87,   88,   89,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,   86,   87,
    QMetaType::Void, QMetaType::Bool,   86,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,   93,   94,   95,   96,   97,   98,   99,  100,  101,  102,  103,  104,  105,  106,  107,  108,  109,  110,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,   93,   94,   95,   96,   97,   98,   99,  100,  101,  102,  103,  104,  105,  106,  107,  108,  109,  110,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::UInt,   93,  108,  109,  110,  113,  114,  115,  116,  117,  118,  119,  120,  121,  122,  123,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::Short, QMetaType::Short, QMetaType::Float, QMetaType::Float, QMetaType::UChar, QMetaType::Float,   93,  125,  126,  127,  128,  129,  130,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Int, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Int,   93,  100,  101,  102,  132,  133,  134,  135,  136,  137,  138,  139,  140,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,  147,  148,  149,   96,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::SChar, QMetaType::SChar, QMetaType::UShort, QMetaType::UChar,   94,   95,   96,  159,  160,  161,  162,    2,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,  147,  148,  149,   94,   95,   96,
    QMetaType::Void, 0x80000000 | 165,  166,
    QMetaType::Void, 0x80000000 | 165, 0x80000000 | 168,  166,  169,
    QMetaType::Void, 0x80000000 | 165, 0x80000000 | 168,  166,  169,
    QMetaType::Void, 0x80000000 | 168,  169,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 173, 0x80000000 | 175,  174,  176,
    QMetaType::Void, 0x80000000 | 173, 0x80000000 | 175,  174,  176,
    QMetaType::Void, QMetaType::Int,  179,
    QMetaType::Void, QMetaType::Int,  179,
    QMetaType::Void, QMetaType::Int,  179,
    QMetaType::Void, QMetaType::Int,  179,
    QMetaType::Void, QMetaType::Int,  179,
    QMetaType::Void, QMetaType::Int,  179,
    QMetaType::Void, QMetaType::Int,  179,
    QMetaType::Void, QMetaType::Int,  179,
    QMetaType::Void, QMetaType::Int,  179,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double,  100,  101,  102,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,  147,  148,  149,   96,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,  147,  148,  149,   96,
    QMetaType::Void, 0x80000000 | 194,  195,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,  201,
    QMetaType::Void, QMetaType::QString, QMetaType::Float, QMetaType::Float, QMetaType::UChar, QMetaType::Float, QMetaType::Float,  203,  204,  205,  206,  207,  208,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 165,  166,

 // properties: name, type, flags
     213, QMetaType::Double, 0x00495103,
     214, QMetaType::Double, 0x00495103,
     215, QMetaType::Double, 0x00495103,
     216, QMetaType::Double, 0x00495103,
     217, QMetaType::Double, 0x00495103,
     218, QMetaType::Double, 0x00495103,
     219, QMetaType::Bool, 0x00095001,
     220, QMetaType::Bool, 0x00095001,
      94, QMetaType::Double, 0x00495103,
      95, QMetaType::Double, 0x00495103,
      96, QMetaType::Double, 0x00495103,
     221, QMetaType::Double, 0x00495103,
     222, QMetaType::Double, 0x00495003,
     223, QMetaType::Double, 0x00495103,
     224, QMetaType::Double, 0x00495103,
     225, QMetaType::Double, 0x00495103,
     226, QMetaType::Double, 0x00495001,
     227, QMetaType::Double, 0x00495103,
     228, QMetaType::Double, 0x00495103,

 // properties: notify_signal_id
       7,
       8,
       9,
      11,
      10,
      19,
       0,
       0,
      16,
      17,
      18,
      20,
      22,
      21,
      23,
      12,
      13,
      14,
      15,

       0        // eod
};

void UAS::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UAS *_t = static_cast<UAS *>(_o);
        switch (_id) {
        case 0: _t->actuatorChanged((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5]))); break;
        case 1: _t->motorChanged((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5]))); break;
        case 2: _t->loadChanged((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 3: _t->imageStarted((*reinterpret_cast< quint64(*)>(_a[1]))); break;
        case 4: _t->imageReady((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 5: _t->hilControlsChanged((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< quint8(*)>(_a[6])),(*reinterpret_cast< quint8(*)>(_a[7]))); break;
        case 6: _t->hilActuatorsChanged((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7])),(*reinterpret_cast< float(*)>(_a[8])),(*reinterpret_cast< float(*)>(_a[9]))); break;
        case 7: _t->localXChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 8: _t->localYChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 9: _t->localZChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 10: _t->longitudeChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 11: _t->latitudeChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 12: _t->altitudeAMSLChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 13: _t->altitudeAMSLFTChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 14: _t->altitudeWGS84Changed((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 15: _t->altitudeRelativeChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 16: _t->rollChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 17: _t->pitchChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 18: _t->yawChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 19: _t->satelliteCountChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 20: _t->distToWaypointChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 21: _t->groundSpeedChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 22: _t->airSpeedChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 23: _t->bearingToWaypointChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 24: _t->setAutopilotType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->setSystemType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: _t->setAirframe((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: _t->setUASName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 28: _t->executeCommand((*reinterpret_cast< MAV_CMD(*)>(_a[1]))); break;
        case 29: _t->executeCommand((*reinterpret_cast< MAV_CMD(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7])),(*reinterpret_cast< float(*)>(_a[8])),(*reinterpret_cast< float(*)>(_a[9])),(*reinterpret_cast< int(*)>(_a[10]))); break;
        case 30: _t->executeCommandAck((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 31: _t->setBatterySpecs((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 32: { QString _r = _t->getBatterySpecs();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 33: _t->launch(); break;
        case 34: _t->home(); break;
        case 35: _t->land(); break;
        case 36: _t->pairRX((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 37: _t->halt(); break;
        case 38: _t->go(); break;
        case 39: _t->enableHilFlightGear((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< QObject*(*)>(_a[4]))); break;
        case 40: _t->enableHilJSBSim((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 41: _t->enableHilXPlane((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 42: _t->sendHilState((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7])),(*reinterpret_cast< double(*)>(_a[8])),(*reinterpret_cast< double(*)>(_a[9])),(*reinterpret_cast< double(*)>(_a[10])),(*reinterpret_cast< float(*)>(_a[11])),(*reinterpret_cast< float(*)>(_a[12])),(*reinterpret_cast< float(*)>(_a[13])),(*reinterpret_cast< float(*)>(_a[14])),(*reinterpret_cast< float(*)>(_a[15])),(*reinterpret_cast< float(*)>(_a[16])),(*reinterpret_cast< float(*)>(_a[17])),(*reinterpret_cast< float(*)>(_a[18]))); break;
        case 43: _t->sendHilGroundTruth((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7])),(*reinterpret_cast< double(*)>(_a[8])),(*reinterpret_cast< double(*)>(_a[9])),(*reinterpret_cast< double(*)>(_a[10])),(*reinterpret_cast< float(*)>(_a[11])),(*reinterpret_cast< float(*)>(_a[12])),(*reinterpret_cast< float(*)>(_a[13])),(*reinterpret_cast< float(*)>(_a[14])),(*reinterpret_cast< float(*)>(_a[15])),(*reinterpret_cast< float(*)>(_a[16])),(*reinterpret_cast< float(*)>(_a[17])),(*reinterpret_cast< float(*)>(_a[18]))); break;
        case 44: _t->sendHilSensors((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7])),(*reinterpret_cast< float(*)>(_a[8])),(*reinterpret_cast< float(*)>(_a[9])),(*reinterpret_cast< float(*)>(_a[10])),(*reinterpret_cast< float(*)>(_a[11])),(*reinterpret_cast< float(*)>(_a[12])),(*reinterpret_cast< float(*)>(_a[13])),(*reinterpret_cast< float(*)>(_a[14])),(*reinterpret_cast< quint32(*)>(_a[15]))); break;
        case 45: _t->sendHilOpticalFlow((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< qint16(*)>(_a[2])),(*reinterpret_cast< qint16(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< quint8(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7]))); break;
        case 46: _t->sendHilGps((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7])),(*reinterpret_cast< float(*)>(_a[8])),(*reinterpret_cast< float(*)>(_a[9])),(*reinterpret_cast< float(*)>(_a[10])),(*reinterpret_cast< float(*)>(_a[11])),(*reinterpret_cast< float(*)>(_a[12])),(*reinterpret_cast< int(*)>(_a[13]))); break;
        case 47: _t->startHil(); break;
        case 48: _t->stopHil(); break;
        case 49: _t->emergencySTOP(); break;
        case 50: { bool _r = _t->emergencyKILL();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 51: _t->shutdown(); break;
        case 52: _t->setTargetPosition((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4]))); break;
        case 53: _t->startLowBattAlarm(); break;
        case 54: _t->stopLowBattAlarm(); break;
        case 55: _t->armSystem(); break;
        case 56: _t->disarmSystem(); break;
        case 57: _t->toggleArmedState(); break;
        case 58: _t->goAutonomous(); break;
        case 59: _t->goManual(); break;
        case 60: _t->toggleAutonomy(); break;
        case 61: _t->setExternalControlSetpoint((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< qint8(*)>(_a[5])),(*reinterpret_cast< qint8(*)>(_a[6])),(*reinterpret_cast< quint16(*)>(_a[7])),(*reinterpret_cast< quint8(*)>(_a[8]))); break;
        case 62: _t->setManual6DOFControlCommands((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6]))); break;
        case 63: _t->addLink((*reinterpret_cast< LinkInterface*(*)>(_a[1]))); break;
        case 64: _t->receiveMessage((*reinterpret_cast< LinkInterface*(*)>(_a[1])),(*reinterpret_cast< mavlink_message_t(*)>(_a[2]))); break;
        case 65: _t->sendMessage((*reinterpret_cast< LinkInterface*(*)>(_a[1])),(*reinterpret_cast< mavlink_message_t(*)>(_a[2]))); break;
        case 66: _t->sendMessage((*reinterpret_cast< mavlink_message_t(*)>(_a[1]))); break;
        case 67: _t->setSelected(); break;
        case 68: _t->setMode((*reinterpret_cast< uint8_t(*)>(_a[1])),(*reinterpret_cast< uint32_t(*)>(_a[2]))); break;
        case 69: _t->setModeArm((*reinterpret_cast< uint8_t(*)>(_a[1])),(*reinterpret_cast< uint32_t(*)>(_a[2]))); break;
        case 70: _t->enableAllDataTransmission((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 71: _t->enableRawSensorDataTransmission((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 72: _t->enableExtendedSystemStatusTransmission((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 73: _t->enableRCChannelDataTransmission((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 74: _t->enableRawControllerDataTransmission((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 75: _t->enablePositionTransmission((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 76: _t->enableExtra1Transmission((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 77: _t->enableExtra2Transmission((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 78: _t->enableExtra3Transmission((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 79: _t->updateState(); break;
        case 80: _t->setLocalOriginAtCurrentGPSPosition(); break;
        case 81: _t->setHomePosition((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 82: _t->setLocalPositionSetpoint((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4]))); break;
        case 83: _t->setLocalPositionOffset((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4]))); break;
        case 84: _t->startCalibration((*reinterpret_cast< StartCalibrationType(*)>(_a[1]))); break;
        case 85: _t->stopCalibration(); break;
        case 86: _t->startDataRecording(); break;
        case 87: _t->stopDataRecording(); break;
        case 88: _t->deleteSettings(); break;
        case 89: _t->triggerAction((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 90: _t->sendMapRCToParam((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< quint8(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6]))); break;
        case 91: _t->unsetRCToParameterMap(); break;
        case 92: _t->writeSettings(); break;
        case 93: _t->readSettings(); break;
        case 94: _t->_linkDisconnected((*reinterpret_cast< LinkInterface*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 2:
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
        case 63:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinkInterface* >(); break;
            }
            break;
        case 64:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinkInterface* >(); break;
            }
            break;
        case 65:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinkInterface* >(); break;
            }
            break;
        case 94:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinkInterface* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (UAS::*_t)(UASInterface * , QString , double , double , double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UAS::actuatorChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (UAS::*_t)(UASInterface * , QString , double , double , double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UAS::motorChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (UAS::*_t)(UASInterface * , double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UAS::loadChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (UAS::*_t)(quint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UAS::imageStarted)) {
                *result = 3;
            }
        }
        {
            typedef void (UAS::*_t)(UASInterface * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UAS::imageReady)) {
                *result = 4;
            }
        }
        {
            typedef void (UAS::*_t)(quint64 , float , float , float , float , quint8 , quint8 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UAS::hilControlsChanged)) {
                *result = 5;
            }
        }
        {
            typedef void (UAS::*_t)(quint64 , float , float , float , float , float , float , float , float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UAS::hilActuatorsChanged)) {
                *result = 6;
            }
        }
        {
            typedef void (UAS::*_t)(double , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UAS::localXChanged)) {
                *result = 7;
            }
        }
        {
            typedef void (UAS::*_t)(double , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UAS::localYChanged)) {
                *result = 8;
            }
        }
        {
            typedef void (UAS::*_t)(double , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UAS::localZChanged)) {
                *result = 9;
            }
        }
        {
            typedef void (UAS::*_t)(double , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UAS::longitudeChanged)) {
                *result = 10;
            }
        }
        {
            typedef void (UAS::*_t)(double , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UAS::latitudeChanged)) {
                *result = 11;
            }
        }
        {
            typedef void (UAS::*_t)(double , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UAS::altitudeAMSLChanged)) {
                *result = 12;
            }
        }
        {
            typedef void (UAS::*_t)(double , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UAS::altitudeAMSLFTChanged)) {
                *result = 13;
            }
        }
        {
            typedef void (UAS::*_t)(double , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UAS::altitudeWGS84Changed)) {
                *result = 14;
            }
        }
        {
            typedef void (UAS::*_t)(double , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UAS::altitudeRelativeChanged)) {
                *result = 15;
            }
        }
        {
            typedef void (UAS::*_t)(double , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UAS::rollChanged)) {
                *result = 16;
            }
        }
        {
            typedef void (UAS::*_t)(double , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UAS::pitchChanged)) {
                *result = 17;
            }
        }
        {
            typedef void (UAS::*_t)(double , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UAS::yawChanged)) {
                *result = 18;
            }
        }
        {
            typedef void (UAS::*_t)(double , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UAS::satelliteCountChanged)) {
                *result = 19;
            }
        }
        {
            typedef void (UAS::*_t)(double , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UAS::distToWaypointChanged)) {
                *result = 20;
            }
        }
        {
            typedef void (UAS::*_t)(double , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UAS::groundSpeedChanged)) {
                *result = 21;
            }
        }
        {
            typedef void (UAS::*_t)(double , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UAS::airSpeedChanged)) {
                *result = 22;
            }
        }
        {
            typedef void (UAS::*_t)(double , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UAS::bearingToWaypointChanged)) {
                *result = 23;
            }
        }
    }
}

const QMetaObject UAS::staticMetaObject = {
    { &UASInterface::staticMetaObject, qt_meta_stringdata_UAS.data,
      qt_meta_data_UAS,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *UAS::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UAS::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_UAS.stringdata))
        return static_cast<void*>(const_cast< UAS*>(this));
    return UASInterface::qt_metacast(_clname);
}

int UAS::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UASInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 95)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 95;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 95)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 95;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = getLocalX(); break;
        case 1: *reinterpret_cast< double*>(_v) = getLocalY(); break;
        case 2: *reinterpret_cast< double*>(_v) = getLocalZ(); break;
        case 3: *reinterpret_cast< double*>(_v) = getLatitude(); break;
        case 4: *reinterpret_cast< double*>(_v) = getLongitude(); break;
        case 5: *reinterpret_cast< double*>(_v) = getSatelliteCount(); break;
        case 6: *reinterpret_cast< bool*>(_v) = localPositionKnown(); break;
        case 7: *reinterpret_cast< bool*>(_v) = globalPositionKnown(); break;
        case 8: *reinterpret_cast< double*>(_v) = getRoll(); break;
        case 9: *reinterpret_cast< double*>(_v) = getPitch(); break;
        case 10: *reinterpret_cast< double*>(_v) = getYaw(); break;
        case 11: *reinterpret_cast< double*>(_v) = getDistToWaypoint(); break;
        case 12: *reinterpret_cast< double*>(_v) = getGroundSpeed(); break;
        case 13: *reinterpret_cast< double*>(_v) = getGroundSpeed(); break;
        case 14: *reinterpret_cast< double*>(_v) = getBearingToWaypoint(); break;
        case 15: *reinterpret_cast< double*>(_v) = getAltitudeAMSL(); break;
        case 16: *reinterpret_cast< double*>(_v) = getAltitudeAMSLFT(); break;
        case 17: *reinterpret_cast< double*>(_v) = getAltitudeWGS84(); break;
        case 18: *reinterpret_cast< double*>(_v) = getAltitudeRelative(); break;
        default: break;
        }
        _id -= 19;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setLocalX(*reinterpret_cast< double*>(_v)); break;
        case 1: setLocalY(*reinterpret_cast< double*>(_v)); break;
        case 2: setLocalZ(*reinterpret_cast< double*>(_v)); break;
        case 3: setLatitude(*reinterpret_cast< double*>(_v)); break;
        case 4: setLongitude(*reinterpret_cast< double*>(_v)); break;
        case 5: setSatelliteCount(*reinterpret_cast< double*>(_v)); break;
        case 8: setRoll(*reinterpret_cast< double*>(_v)); break;
        case 9: setPitch(*reinterpret_cast< double*>(_v)); break;
        case 10: setYaw(*reinterpret_cast< double*>(_v)); break;
        case 11: setDistToWaypoint(*reinterpret_cast< double*>(_v)); break;
        case 12: setGroundSpeed(*reinterpret_cast< double*>(_v)); break;
        case 13: setGroundSpeed(*reinterpret_cast< double*>(_v)); break;
        case 14: setBearingToWaypoint(*reinterpret_cast< double*>(_v)); break;
        case 15: setAltitudeAMSL(*reinterpret_cast< double*>(_v)); break;
        case 17: setAltitudeWGS84(*reinterpret_cast< double*>(_v)); break;
        case 18: setAltitudeRelative(*reinterpret_cast< double*>(_v)); break;
        default: break;
        }
        _id -= 19;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 19;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 19;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 19;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 19;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 19;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 19;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void UAS::actuatorChanged(UASInterface * _t1, QString _t2, double _t3, double _t4, double _t5)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UAS::motorChanged(UASInterface * _t1, QString _t2, double _t3, double _t4, double _t5)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void UAS::loadChanged(UASInterface * _t1, double _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void UAS::imageStarted(quint64 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void UAS::imageReady(UASInterface * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void UAS::hilControlsChanged(quint64 _t1, float _t2, float _t3, float _t4, float _t5, quint8 _t6, quint8 _t7)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void UAS::hilActuatorsChanged(quint64 _t1, float _t2, float _t3, float _t4, float _t5, float _t6, float _t7, float _t8, float _t9)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)), const_cast<void*>(reinterpret_cast<const void*>(&_t9)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void UAS::localXChanged(double _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void UAS::localYChanged(double _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void UAS::localZChanged(double _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void UAS::longitudeChanged(double _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void UAS::latitudeChanged(double _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void UAS::altitudeAMSLChanged(double _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void UAS::altitudeAMSLFTChanged(double _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void UAS::altitudeWGS84Changed(double _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void UAS::altitudeRelativeChanged(double _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void UAS::rollChanged(double _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void UAS::pitchChanged(double _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void UAS::yawChanged(double _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void UAS::satelliteCountChanged(double _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void UAS::distToWaypointChanged(double _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void UAS::groundSpeedChanged(double _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void UAS::airSpeedChanged(double _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void UAS::bearingToWaypointChanged(double _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}
QT_END_MOC_NAMESPACE
