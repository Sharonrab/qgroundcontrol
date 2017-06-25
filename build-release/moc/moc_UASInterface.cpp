/****************************************************************************
** Meta object code from reading C++ file 'UASInterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/uas/UASInterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UASInterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_UASInterface_t {
    QByteArrayData data[293];
    char stringdata[3619];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UASInterface_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UASInterface_t qt_meta_stringdata_UASInterface = {
    {
QT_MOC_LITERAL(0, 0, 12), // "UASInterface"
QT_MOC_LITERAL(1, 13, 13), // "statusChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 9), // "stateFlag"
QT_MOC_LITERAL(4, 38, 16), // "componentCreated"
QT_MOC_LITERAL(5, 55, 3), // "uas"
QT_MOC_LITERAL(6, 59, 9), // "component"
QT_MOC_LITERAL(7, 69, 4), // "name"
QT_MOC_LITERAL(8, 74, 13), // "UASInterface*"
QT_MOC_LITERAL(9, 88, 6), // "status"
QT_MOC_LITERAL(10, 95, 11), // "description"
QT_MOC_LITERAL(11, 107, 8), // "poiFound"
QT_MOC_LITERAL(12, 116, 4), // "type"
QT_MOC_LITERAL(13, 121, 10), // "colorIndex"
QT_MOC_LITERAL(14, 132, 7), // "message"
QT_MOC_LITERAL(15, 140, 1), // "x"
QT_MOC_LITERAL(16, 142, 1), // "y"
QT_MOC_LITERAL(17, 144, 1), // "z"
QT_MOC_LITERAL(18, 146, 18), // "poiConnectionFound"
QT_MOC_LITERAL(19, 165, 2), // "x1"
QT_MOC_LITERAL(20, 168, 2), // "y1"
QT_MOC_LITERAL(21, 171, 2), // "z1"
QT_MOC_LITERAL(22, 174, 2), // "x2"
QT_MOC_LITERAL(23, 177, 2), // "y2"
QT_MOC_LITERAL(24, 180, 2), // "z2"
QT_MOC_LITERAL(25, 183, 24), // "misconfigurationDetected"
QT_MOC_LITERAL(26, 208, 19), // "textMessageReceived"
QT_MOC_LITERAL(27, 228, 5), // "uasid"
QT_MOC_LITERAL(28, 234, 11), // "componentid"
QT_MOC_LITERAL(29, 246, 8), // "severity"
QT_MOC_LITERAL(30, 255, 4), // "text"
QT_MOC_LITERAL(31, 260, 14), // "navModeChanged"
QT_MOC_LITERAL(32, 275, 4), // "mode"
QT_MOC_LITERAL(33, 280, 5), // "armed"
QT_MOC_LITERAL(34, 286, 8), // "disarmed"
QT_MOC_LITERAL(35, 295, 13), // "armingChanged"
QT_MOC_LITERAL(36, 309, 15), // "errCountChanged"
QT_MOC_LITERAL(37, 325, 6), // "device"
QT_MOC_LITERAL(38, 332, 5), // "count"
QT_MOC_LITERAL(39, 338, 15), // "dropRateChanged"
QT_MOC_LITERAL(40, 354, 8), // "systemId"
QT_MOC_LITERAL(41, 363, 11), // "receiveDrop"
QT_MOC_LITERAL(42, 375, 11), // "modeChanged"
QT_MOC_LITERAL(43, 387, 5), // "sysId"
QT_MOC_LITERAL(44, 393, 11), // "commandSent"
QT_MOC_LITERAL(45, 405, 7), // "command"
QT_MOC_LITERAL(46, 413, 10), // "connecting"
QT_MOC_LITERAL(47, 424, 9), // "connected"
QT_MOC_LITERAL(48, 434, 12), // "disconnected"
QT_MOC_LITERAL(49, 447, 9), // "activated"
QT_MOC_LITERAL(50, 457, 11), // "deactivated"
QT_MOC_LITERAL(51, 469, 13), // "manualControl"
QT_MOC_LITERAL(52, 483, 12), // "valueChanged"
QT_MOC_LITERAL(53, 496, 4), // "unit"
QT_MOC_LITERAL(54, 501, 5), // "value"
QT_MOC_LITERAL(55, 507, 5), // "msecs"
QT_MOC_LITERAL(56, 513, 14), // "voltageChanged"
QT_MOC_LITERAL(57, 528, 5), // "uasId"
QT_MOC_LITERAL(58, 534, 7), // "voltage"
QT_MOC_LITERAL(59, 542, 15), // "waypointUpdated"
QT_MOC_LITERAL(60, 558, 2), // "id"
QT_MOC_LITERAL(61, 561, 3), // "yaw"
QT_MOC_LITERAL(62, 565, 12), // "autocontinue"
QT_MOC_LITERAL(63, 578, 6), // "active"
QT_MOC_LITERAL(64, 585, 16), // "waypointSelected"
QT_MOC_LITERAL(65, 602, 15), // "waypointReached"
QT_MOC_LITERAL(66, 618, 15), // "autoModeChanged"
QT_MOC_LITERAL(67, 634, 8), // "autoMode"
QT_MOC_LITERAL(68, 643, 15), // "parameterUpdate"
QT_MOC_LITERAL(69, 659, 13), // "parameterName"
QT_MOC_LITERAL(70, 673, 14), // "parameterCount"
QT_MOC_LITERAL(71, 688, 11), // "parameterId"
QT_MOC_LITERAL(72, 700, 14), // "batteryChanged"
QT_MOC_LITERAL(73, 715, 7), // "current"
QT_MOC_LITERAL(74, 723, 7), // "percent"
QT_MOC_LITERAL(75, 731, 7), // "seconds"
QT_MOC_LITERAL(76, 739, 22), // "batteryConsumedChanged"
QT_MOC_LITERAL(77, 762, 16), // "current_consumed"
QT_MOC_LITERAL(78, 779, 15), // "actuatorChanged"
QT_MOC_LITERAL(79, 795, 5), // "actId"
QT_MOC_LITERAL(80, 801, 13), // "thrustChanged"
QT_MOC_LITERAL(81, 815, 6), // "thrust"
QT_MOC_LITERAL(82, 822, 9), // "heartbeat"
QT_MOC_LITERAL(83, 832, 15), // "attitudeChanged"
QT_MOC_LITERAL(84, 848, 4), // "roll"
QT_MOC_LITERAL(85, 853, 5), // "pitch"
QT_MOC_LITERAL(86, 859, 4), // "usec"
QT_MOC_LITERAL(87, 864, 28), // "attitudeRotationRatesChanged"
QT_MOC_LITERAL(88, 893, 8), // "rollrate"
QT_MOC_LITERAL(89, 902, 9), // "pitchrate"
QT_MOC_LITERAL(90, 912, 7), // "yawrate"
QT_MOC_LITERAL(91, 920, 29), // "attitudeThrustSetPointChanged"
QT_MOC_LITERAL(92, 950, 11), // "rollDesired"
QT_MOC_LITERAL(93, 962, 12), // "pitchDesired"
QT_MOC_LITERAL(94, 975, 10), // "yawDesired"
QT_MOC_LITERAL(95, 986, 13), // "thrustDesired"
QT_MOC_LITERAL(96, 1000, 24), // "positionSetPointsChanged"
QT_MOC_LITERAL(97, 1025, 8), // "xDesired"
QT_MOC_LITERAL(98, 1034, 8), // "yDesired"
QT_MOC_LITERAL(99, 1043, 8), // "zDesired"
QT_MOC_LITERAL(100, 1052, 28), // "userPositionSetPointsChanged"
QT_MOC_LITERAL(101, 1081, 20), // "localPositionChanged"
QT_MOC_LITERAL(102, 1102, 21), // "globalPositionChanged"
QT_MOC_LITERAL(103, 1124, 3), // "lat"
QT_MOC_LITERAL(104, 1128, 3), // "lon"
QT_MOC_LITERAL(105, 1132, 7), // "altAMSL"
QT_MOC_LITERAL(106, 1140, 8), // "altWGS84"
QT_MOC_LITERAL(107, 1149, 15), // "altitudeChanged"
QT_MOC_LITERAL(108, 1165, 12), // "altitudeAMSL"
QT_MOC_LITERAL(109, 1178, 13), // "altitudeWGS84"
QT_MOC_LITERAL(110, 1192, 16), // "altitudeRelative"
QT_MOC_LITERAL(111, 1209, 9), // "climbRate"
QT_MOC_LITERAL(112, 1219, 25), // "gpsSatelliteStatusChanged"
QT_MOC_LITERAL(113, 1245, 5), // "satid"
QT_MOC_LITERAL(114, 1251, 7), // "azimuth"
QT_MOC_LITERAL(115, 1259, 9), // "direction"
QT_MOC_LITERAL(116, 1269, 3), // "snr"
QT_MOC_LITERAL(117, 1273, 4), // "used"
QT_MOC_LITERAL(118, 1278, 12), // "speedChanged"
QT_MOC_LITERAL(119, 1291, 11), // "groundSpeed"
QT_MOC_LITERAL(120, 1303, 8), // "airSpeed"
QT_MOC_LITERAL(121, 1312, 19), // "velocityChanged_NED"
QT_MOC_LITERAL(122, 1332, 2), // "vx"
QT_MOC_LITERAL(123, 1335, 2), // "vy"
QT_MOC_LITERAL(124, 1338, 2), // "vz"
QT_MOC_LITERAL(125, 1341, 33), // "navigationControllerErrorsCha..."
QT_MOC_LITERAL(126, 1375, 13), // "altitudeError"
QT_MOC_LITERAL(127, 1389, 10), // "speedError"
QT_MOC_LITERAL(128, 1400, 11), // "xtrackError"
QT_MOC_LITERAL(129, 1412, 31), // "NavigationControllerDataChanged"
QT_MOC_LITERAL(130, 1444, 7), // "navRoll"
QT_MOC_LITERAL(131, 1452, 8), // "navPitch"
QT_MOC_LITERAL(132, 1461, 10), // "navBearing"
QT_MOC_LITERAL(133, 1472, 13), // "targetBearing"
QT_MOC_LITERAL(134, 1486, 10), // "targetDist"
QT_MOC_LITERAL(135, 1497, 12), // "imageStarted"
QT_MOC_LITERAL(136, 1510, 5), // "imgid"
QT_MOC_LITERAL(137, 1516, 5), // "width"
QT_MOC_LITERAL(138, 1522, 6), // "height"
QT_MOC_LITERAL(139, 1529, 5), // "depth"
QT_MOC_LITERAL(140, 1535, 8), // "channels"
QT_MOC_LITERAL(141, 1544, 17), // "imageDataReceived"
QT_MOC_LITERAL(142, 1562, 20), // "const unsigned char*"
QT_MOC_LITERAL(143, 1583, 9), // "imageData"
QT_MOC_LITERAL(144, 1593, 6), // "length"
QT_MOC_LITERAL(145, 1600, 10), // "startIndex"
QT_MOC_LITERAL(146, 1611, 13), // "systemTypeSet"
QT_MOC_LITERAL(147, 1625, 22), // "attitudeControlEnabled"
QT_MOC_LITERAL(148, 1648, 7), // "enabled"
QT_MOC_LITERAL(149, 1656, 24), // "positionXYControlEnabled"
QT_MOC_LITERAL(150, 1681, 23), // "positionZControlEnabled"
QT_MOC_LITERAL(151, 1705, 25), // "positionYawControlEnabled"
QT_MOC_LITERAL(152, 1731, 24), // "opticalFlowStatusChanged"
QT_MOC_LITERAL(153, 1756, 9), // "supported"
QT_MOC_LITERAL(154, 1766, 2), // "ok"
QT_MOC_LITERAL(155, 1769, 31), // "visionLocalizationStatusChanged"
QT_MOC_LITERAL(156, 1801, 27), // "distanceSensorStatusChanged"
QT_MOC_LITERAL(157, 1829, 17), // "gyroStatusChanged"
QT_MOC_LITERAL(158, 1847, 18), // "accelStatusChanged"
QT_MOC_LITERAL(159, 1866, 22), // "magSensorStatusChanged"
QT_MOC_LITERAL(160, 1889, 17), // "baroStatusChanged"
QT_MOC_LITERAL(161, 1907, 21), // "airspeedStatusChanged"
QT_MOC_LITERAL(162, 1929, 21), // "actuatorStatusChanged"
QT_MOC_LITERAL(163, 1951, 18), // "laserStatusChanged"
QT_MOC_LITERAL(164, 1970, 30), // "groundTruthSensorStatusChanged"
QT_MOC_LITERAL(165, 2001, 30), // "remoteControlChannelRawChanged"
QT_MOC_LITERAL(166, 2032, 9), // "channelId"
QT_MOC_LITERAL(167, 2042, 3), // "raw"
QT_MOC_LITERAL(168, 2046, 33), // "remoteControlChannelScaledCha..."
QT_MOC_LITERAL(169, 2080, 10), // "normalized"
QT_MOC_LITERAL(170, 2091, 24), // "remoteControlRSSIChanged"
QT_MOC_LITERAL(171, 2116, 7), // "uint8_t"
QT_MOC_LITERAL(172, 2124, 4), // "rssi"
QT_MOC_LITERAL(173, 2129, 19), // "localizationChanged"
QT_MOC_LITERAL(174, 2149, 3), // "fix"
QT_MOC_LITERAL(175, 2153, 22), // "gpsLocalizationChanged"
QT_MOC_LITERAL(176, 2176, 25), // "visionLocalizationChanged"
QT_MOC_LITERAL(177, 2202, 31), // "irUltraSoundLocalizationChanged"
QT_MOC_LITERAL(178, 2234, 16), // "heartbeatTimeout"
QT_MOC_LITERAL(179, 2251, 7), // "timeout"
QT_MOC_LITERAL(180, 2259, 2), // "ms"
QT_MOC_LITERAL(181, 2262, 11), // "nameChanged"
QT_MOC_LITERAL(182, 2274, 7), // "newName"
QT_MOC_LITERAL(183, 2282, 14), // "systemSelected"
QT_MOC_LITERAL(184, 2297, 8), // "selected"
QT_MOC_LITERAL(185, 2306, 18), // "systemSpecsChanged"
QT_MOC_LITERAL(186, 2325, 14), // "objectDetected"
QT_MOC_LITERAL(187, 2340, 4), // "time"
QT_MOC_LITERAL(188, 2345, 7), // "quality"
QT_MOC_LITERAL(189, 2353, 7), // "bearing"
QT_MOC_LITERAL(190, 2361, 8), // "distance"
QT_MOC_LITERAL(191, 2370, 19), // "homePositionChanged"
QT_MOC_LITERAL(192, 2390, 3), // "alt"
QT_MOC_LITERAL(193, 2394, 21), // "unknownPacketReceived"
QT_MOC_LITERAL(194, 2416, 9), // "messageid"
QT_MOC_LITERAL(195, 2426, 10), // "setUASName"
QT_MOC_LITERAL(196, 2437, 14), // "executeCommand"
QT_MOC_LITERAL(197, 2452, 7), // "MAV_CMD"
QT_MOC_LITERAL(198, 2460, 12), // "confirmation"
QT_MOC_LITERAL(199, 2473, 6), // "param1"
QT_MOC_LITERAL(200, 2480, 6), // "param2"
QT_MOC_LITERAL(201, 2487, 6), // "param3"
QT_MOC_LITERAL(202, 2494, 6), // "param4"
QT_MOC_LITERAL(203, 2501, 6), // "param5"
QT_MOC_LITERAL(204, 2508, 6), // "param6"
QT_MOC_LITERAL(205, 2515, 6), // "param7"
QT_MOC_LITERAL(206, 2522, 17), // "executeCommandAck"
QT_MOC_LITERAL(207, 2540, 3), // "num"
QT_MOC_LITERAL(208, 2544, 7), // "success"
QT_MOC_LITERAL(209, 2552, 11), // "setAirframe"
QT_MOC_LITERAL(210, 2564, 8), // "airframe"
QT_MOC_LITERAL(211, 2573, 6), // "launch"
QT_MOC_LITERAL(212, 2580, 4), // "home"
QT_MOC_LITERAL(213, 2585, 4), // "land"
QT_MOC_LITERAL(214, 2590, 6), // "pairRX"
QT_MOC_LITERAL(215, 2597, 6), // "rxType"
QT_MOC_LITERAL(216, 2604, 9), // "rxSubType"
QT_MOC_LITERAL(217, 2614, 4), // "halt"
QT_MOC_LITERAL(218, 2619, 2), // "go"
QT_MOC_LITERAL(219, 2622, 7), // "setMode"
QT_MOC_LITERAL(220, 2630, 11), // "newBaseMode"
QT_MOC_LITERAL(221, 2642, 8), // "uint32_t"
QT_MOC_LITERAL(222, 2651, 13), // "newCustomMode"
QT_MOC_LITERAL(223, 2665, 13), // "emergencySTOP"
QT_MOC_LITERAL(224, 2679, 13), // "emergencyKILL"
QT_MOC_LITERAL(225, 2693, 8), // "shutdown"
QT_MOC_LITERAL(226, 2702, 17), // "setTargetPosition"
QT_MOC_LITERAL(227, 2720, 34), // "setLocalOriginAtCurrentGPSPos..."
QT_MOC_LITERAL(228, 2755, 15), // "setHomePosition"
QT_MOC_LITERAL(229, 2771, 7), // "addLink"
QT_MOC_LITERAL(230, 2779, 14), // "LinkInterface*"
QT_MOC_LITERAL(231, 2794, 4), // "link"
QT_MOC_LITERAL(232, 2799, 11), // "setSelected"
QT_MOC_LITERAL(233, 2811, 25), // "enableAllDataTransmission"
QT_MOC_LITERAL(234, 2837, 4), // "rate"
QT_MOC_LITERAL(235, 2842, 31), // "enableRawSensorDataTransmission"
QT_MOC_LITERAL(236, 2874, 38), // "enableExtendedSystemStatusTra..."
QT_MOC_LITERAL(237, 2913, 31), // "enableRCChannelDataTransmission"
QT_MOC_LITERAL(238, 2945, 35), // "enableRawControllerDataTransm..."
QT_MOC_LITERAL(239, 2981, 26), // "enablePositionTransmission"
QT_MOC_LITERAL(240, 3008, 24), // "enableExtra1Transmission"
QT_MOC_LITERAL(241, 3033, 24), // "enableExtra2Transmission"
QT_MOC_LITERAL(242, 3058, 24), // "enableExtra3Transmission"
QT_MOC_LITERAL(243, 3083, 24), // "setLocalPositionSetpoint"
QT_MOC_LITERAL(244, 3108, 22), // "setLocalPositionOffset"
QT_MOC_LITERAL(245, 3131, 12), // "isRotaryWing"
QT_MOC_LITERAL(246, 3144, 11), // "isFixedWing"
QT_MOC_LITERAL(247, 3156, 15), // "setBatterySpecs"
QT_MOC_LITERAL(248, 3172, 5), // "specs"
QT_MOC_LITERAL(249, 3178, 15), // "getBatterySpecs"
QT_MOC_LITERAL(250, 3194, 12), // "sendHilState"
QT_MOC_LITERAL(251, 3207, 7), // "time_us"
QT_MOC_LITERAL(252, 3215, 9), // "rollspeed"
QT_MOC_LITERAL(253, 3225, 10), // "pitchspeed"
QT_MOC_LITERAL(254, 3236, 8), // "yawspeed"
QT_MOC_LITERAL(255, 3245, 12), // "ind_airspeed"
QT_MOC_LITERAL(256, 3258, 13), // "true_airspeed"
QT_MOC_LITERAL(257, 3272, 4), // "xacc"
QT_MOC_LITERAL(258, 3277, 4), // "yacc"
QT_MOC_LITERAL(259, 3282, 4), // "zacc"
QT_MOC_LITERAL(260, 3287, 14), // "sendHilSensors"
QT_MOC_LITERAL(261, 3302, 4), // "xmag"
QT_MOC_LITERAL(262, 3307, 4), // "ymag"
QT_MOC_LITERAL(263, 3312, 4), // "zmag"
QT_MOC_LITERAL(264, 3317, 12), // "abs_pressure"
QT_MOC_LITERAL(265, 3330, 13), // "diff_pressure"
QT_MOC_LITERAL(266, 3344, 12), // "pressure_alt"
QT_MOC_LITERAL(267, 3357, 11), // "temperature"
QT_MOC_LITERAL(268, 3369, 14), // "fields_changed"
QT_MOC_LITERAL(269, 3384, 10), // "sendHilGps"
QT_MOC_LITERAL(270, 3395, 8), // "fix_type"
QT_MOC_LITERAL(271, 3404, 3), // "eph"
QT_MOC_LITERAL(272, 3408, 3), // "epv"
QT_MOC_LITERAL(273, 3412, 3), // "vel"
QT_MOC_LITERAL(274, 3416, 2), // "vn"
QT_MOC_LITERAL(275, 3419, 2), // "ve"
QT_MOC_LITERAL(276, 3422, 2), // "vd"
QT_MOC_LITERAL(277, 3425, 3), // "cog"
QT_MOC_LITERAL(278, 3429, 10), // "satellites"
QT_MOC_LITERAL(279, 3440, 18), // "sendHilOpticalFlow"
QT_MOC_LITERAL(280, 3459, 6), // "flow_x"
QT_MOC_LITERAL(281, 3466, 6), // "flow_y"
QT_MOC_LITERAL(282, 3473, 13), // "flow_comp_m_x"
QT_MOC_LITERAL(283, 3487, 13), // "flow_comp_m_y"
QT_MOC_LITERAL(284, 3501, 15), // "ground_distance"
QT_MOC_LITERAL(285, 3517, 16), // "sendMapRCToParam"
QT_MOC_LITERAL(286, 3534, 8), // "param_id"
QT_MOC_LITERAL(287, 3543, 5), // "scale"
QT_MOC_LITERAL(288, 3549, 6), // "value0"
QT_MOC_LITERAL(289, 3556, 22), // "param_rc_channel_index"
QT_MOC_LITERAL(290, 3579, 8), // "valueMin"
QT_MOC_LITERAL(291, 3588, 8), // "valueMax"
QT_MOC_LITERAL(292, 3597, 21) // "unsetRCToParameterMap"

    },
    "UASInterface\0statusChanged\0\0stateFlag\0"
    "componentCreated\0uas\0component\0name\0"
    "UASInterface*\0status\0description\0"
    "poiFound\0type\0colorIndex\0message\0x\0y\0"
    "z\0poiConnectionFound\0x1\0y1\0z1\0x2\0y2\0"
    "z2\0misconfigurationDetected\0"
    "textMessageReceived\0uasid\0componentid\0"
    "severity\0text\0navModeChanged\0mode\0"
    "armed\0disarmed\0armingChanged\0"
    "errCountChanged\0device\0count\0"
    "dropRateChanged\0systemId\0receiveDrop\0"
    "modeChanged\0sysId\0commandSent\0command\0"
    "connecting\0connected\0disconnected\0"
    "activated\0deactivated\0manualControl\0"
    "valueChanged\0unit\0value\0msecs\0"
    "voltageChanged\0uasId\0voltage\0"
    "waypointUpdated\0id\0yaw\0autocontinue\0"
    "active\0waypointSelected\0waypointReached\0"
    "autoModeChanged\0autoMode\0parameterUpdate\0"
    "parameterName\0parameterCount\0parameterId\0"
    "batteryChanged\0current\0percent\0seconds\0"
    "batteryConsumedChanged\0current_consumed\0"
    "actuatorChanged\0actId\0thrustChanged\0"
    "thrust\0heartbeat\0attitudeChanged\0roll\0"
    "pitch\0usec\0attitudeRotationRatesChanged\0"
    "rollrate\0pitchrate\0yawrate\0"
    "attitudeThrustSetPointChanged\0rollDesired\0"
    "pitchDesired\0yawDesired\0thrustDesired\0"
    "positionSetPointsChanged\0xDesired\0"
    "yDesired\0zDesired\0userPositionSetPointsChanged\0"
    "localPositionChanged\0globalPositionChanged\0"
    "lat\0lon\0altAMSL\0altWGS84\0altitudeChanged\0"
    "altitudeAMSL\0altitudeWGS84\0altitudeRelative\0"
    "climbRate\0gpsSatelliteStatusChanged\0"
    "satid\0azimuth\0direction\0snr\0used\0"
    "speedChanged\0groundSpeed\0airSpeed\0"
    "velocityChanged_NED\0vx\0vy\0vz\0"
    "navigationControllerErrorsChanged\0"
    "altitudeError\0speedError\0xtrackError\0"
    "NavigationControllerDataChanged\0navRoll\0"
    "navPitch\0navBearing\0targetBearing\0"
    "targetDist\0imageStarted\0imgid\0width\0"
    "height\0depth\0channels\0imageDataReceived\0"
    "const unsigned char*\0imageData\0length\0"
    "startIndex\0systemTypeSet\0"
    "attitudeControlEnabled\0enabled\0"
    "positionXYControlEnabled\0"
    "positionZControlEnabled\0"
    "positionYawControlEnabled\0"
    "opticalFlowStatusChanged\0supported\0"
    "ok\0visionLocalizationStatusChanged\0"
    "distanceSensorStatusChanged\0"
    "gyroStatusChanged\0accelStatusChanged\0"
    "magSensorStatusChanged\0baroStatusChanged\0"
    "airspeedStatusChanged\0actuatorStatusChanged\0"
    "laserStatusChanged\0groundTruthSensorStatusChanged\0"
    "remoteControlChannelRawChanged\0channelId\0"
    "raw\0remoteControlChannelScaledChanged\0"
    "normalized\0remoteControlRSSIChanged\0"
    "uint8_t\0rssi\0localizationChanged\0fix\0"
    "gpsLocalizationChanged\0visionLocalizationChanged\0"
    "irUltraSoundLocalizationChanged\0"
    "heartbeatTimeout\0timeout\0ms\0nameChanged\0"
    "newName\0systemSelected\0selected\0"
    "systemSpecsChanged\0objectDetected\0"
    "time\0quality\0bearing\0distance\0"
    "homePositionChanged\0alt\0unknownPacketReceived\0"
    "messageid\0setUASName\0executeCommand\0"
    "MAV_CMD\0confirmation\0param1\0param2\0"
    "param3\0param4\0param5\0param6\0param7\0"
    "executeCommandAck\0num\0success\0setAirframe\0"
    "airframe\0launch\0home\0land\0pairRX\0"
    "rxType\0rxSubType\0halt\0go\0setMode\0"
    "newBaseMode\0uint32_t\0newCustomMode\0"
    "emergencySTOP\0emergencyKILL\0shutdown\0"
    "setTargetPosition\0setLocalOriginAtCurrentGPSPosition\0"
    "setHomePosition\0addLink\0LinkInterface*\0"
    "link\0setSelected\0enableAllDataTransmission\0"
    "rate\0enableRawSensorDataTransmission\0"
    "enableExtendedSystemStatusTransmission\0"
    "enableRCChannelDataTransmission\0"
    "enableRawControllerDataTransmission\0"
    "enablePositionTransmission\0"
    "enableExtra1Transmission\0"
    "enableExtra2Transmission\0"
    "enableExtra3Transmission\0"
    "setLocalPositionSetpoint\0"
    "setLocalPositionOffset\0isRotaryWing\0"
    "isFixedWing\0setBatterySpecs\0specs\0"
    "getBatterySpecs\0sendHilState\0time_us\0"
    "rollspeed\0pitchspeed\0yawspeed\0"
    "ind_airspeed\0true_airspeed\0xacc\0yacc\0"
    "zacc\0sendHilSensors\0xmag\0ymag\0zmag\0"
    "abs_pressure\0diff_pressure\0pressure_alt\0"
    "temperature\0fields_changed\0sendHilGps\0"
    "fix_type\0eph\0epv\0vel\0vn\0ve\0vd\0cog\0"
    "satellites\0sendHilOpticalFlow\0flow_x\0"
    "flow_y\0flow_comp_m_x\0flow_comp_m_y\0"
    "ground_distance\0sendMapRCToParam\0"
    "param_id\0scale\0value0\0param_rc_channel_index\0"
    "valueMin\0valueMax\0unsetRCToParameterMap"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UASInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
     122,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      81,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  624,    2, 0x06 /* Public */,
       4,    3,  627,    2, 0x06 /* Public */,
       1,    3,  634,    2, 0x06 /* Public */,
      11,    7,  641,    2, 0x06 /* Public */,
      18,   10,  656,    2, 0x06 /* Public */,
      25,    1,  677,    2, 0x06 /* Public */,
      26,    4,  680,    2, 0x06 /* Public */,
      31,    3,  689,    2, 0x06 /* Public */,
      33,    0,  696,    2, 0x06 /* Public */,
      34,    0,  697,    2, 0x06 /* Public */,
      35,    1,  698,    2, 0x06 /* Public */,
      36,    4,  701,    2, 0x06 /* Public */,
      39,    2,  710,    2, 0x06 /* Public */,
      42,    3,  715,    2, 0x06 /* Public */,
      44,    1,  722,    2, 0x06 /* Public */,
      46,    0,  725,    2, 0x06 /* Public */,
      47,    0,  726,    2, 0x06 /* Public */,
      48,    0,  727,    2, 0x06 /* Public */,
      49,    0,  728,    2, 0x06 /* Public */,
      50,    0,  729,    2, 0x06 /* Public */,
      51,    0,  730,    2, 0x06 /* Public */,
      52,    5,  731,    2, 0x06 /* Public */,
      56,    2,  742,    2, 0x06 /* Public */,
      59,    8,  747,    2, 0x06 /* Public */,
      64,    2,  764,    2, 0x06 /* Public */,
      65,    2,  769,    2, 0x06 /* Public */,
      66,    1,  774,    2, 0x06 /* Public */,
      68,    7,  777,    2, 0x06 /* Public */,
      72,    5,  792,    2, 0x06 /* Public */,
      76,    2,  803,    2, 0x06 /* Public */,
       1,    2,  808,    2, 0x06 /* Public */,
      78,    3,  813,    2, 0x06 /* Public */,
      80,    2,  820,    2, 0x06 /* Public */,
      82,    1,  825,    2, 0x06 /* Public */,
      83,    5,  828,    2, 0x06 /* Public */,
      83,    6,  839,    2, 0x06 /* Public */,
      87,    5,  852,    2, 0x06 /* Public */,
      91,    6,  863,    2, 0x06 /* Public */,
      96,    6,  876,    2, 0x06 /* Public */,
     100,    5,  889,    2, 0x06 /* Public */,
     101,    5,  900,    2, 0x06 /* Public */,
     101,    6,  911,    2, 0x06 /* Public */,
     102,    6,  924,    2, 0x06 /* Public */,
     107,    6,  937,    2, 0x06 /* Public */,
     112,    6,  950,    2, 0x06 /* Public */,
     118,    4,  963,    2, 0x06 /* Public */,
     121,    5,  972,    2, 0x06 /* Public */,
     125,    4,  983,    2, 0x06 /* Public */,
     129,    6,  992,    2, 0x06 /* Public */,
     135,    5, 1005,    2, 0x06 /* Public */,
     141,    4, 1016,    2, 0x06 /* Public */,
     146,    2, 1025,    2, 0x06 /* Public */,
     147,    1, 1030,    2, 0x06 /* Public */,
     149,    1, 1033,    2, 0x06 /* Public */,
     150,    1, 1036,    2, 0x06 /* Public */,
     151,    1, 1039,    2, 0x06 /* Public */,
     152,    3, 1042,    2, 0x06 /* Public */,
     155,    3, 1049,    2, 0x06 /* Public */,
     156,    3, 1056,    2, 0x06 /* Public */,
     157,    3, 1063,    2, 0x06 /* Public */,
     158,    3, 1070,    2, 0x06 /* Public */,
     159,    3, 1077,    2, 0x06 /* Public */,
     160,    3, 1084,    2, 0x06 /* Public */,
     161,    3, 1091,    2, 0x06 /* Public */,
     162,    3, 1098,    2, 0x06 /* Public */,
     163,    3, 1105,    2, 0x06 /* Public */,
     164,    3, 1112,    2, 0x06 /* Public */,
     165,    2, 1119,    2, 0x06 /* Public */,
     168,    2, 1124,    2, 0x06 /* Public */,
     170,    1, 1129,    2, 0x06 /* Public */,
     173,    2, 1132,    2, 0x06 /* Public */,
     175,    2, 1137,    2, 0x06 /* Public */,
     176,    2, 1142,    2, 0x06 /* Public */,
     177,    2, 1147,    2, 0x06 /* Public */,
     178,    2, 1152,    2, 0x06 /* Public */,
     181,    1, 1157,    2, 0x06 /* Public */,
     183,    1, 1160,    2, 0x06 /* Public */,
     185,    1, 1163,    2, 0x06 /* Public */,
     186,    7, 1166,    2, 0x06 /* Public */,
     191,    4, 1181,    2, 0x06 /* Public */,
     193,    3, 1190,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
     195,    1, 1197,    2, 0x0a /* Public */,
     196,    1, 1200,    2, 0x0a /* Public */,
     196,   10, 1203,    2, 0x0a /* Public */,
     206,    2, 1224,    2, 0x0a /* Public */,
     209,    1, 1229,    2, 0x0a /* Public */,
     211,    0, 1232,    2, 0x0a /* Public */,
     212,    0, 1233,    2, 0x0a /* Public */,
     213,    0, 1234,    2, 0x0a /* Public */,
     214,    2, 1235,    2, 0x0a /* Public */,
     217,    0, 1240,    2, 0x0a /* Public */,
     218,    0, 1241,    2, 0x0a /* Public */,
     219,    2, 1242,    2, 0x0a /* Public */,
     223,    0, 1247,    2, 0x0a /* Public */,
     224,    0, 1248,    2, 0x0a /* Public */,
     225,    0, 1249,    2, 0x0a /* Public */,
     226,    4, 1250,    2, 0x0a /* Public */,
     227,    0, 1259,    2, 0x0a /* Public */,
     228,    3, 1260,    2, 0x0a /* Public */,
     229,    1, 1267,    2, 0x0a /* Public */,
     232,    0, 1270,    2, 0x0a /* Public */,
     233,    1, 1271,    2, 0x0a /* Public */,
     235,    1, 1274,    2, 0x0a /* Public */,
     236,    1, 1277,    2, 0x0a /* Public */,
     237,    1, 1280,    2, 0x0a /* Public */,
     238,    1, 1283,    2, 0x0a /* Public */,
     239,    1, 1286,    2, 0x0a /* Public */,
     240,    1, 1289,    2, 0x0a /* Public */,
     241,    1, 1292,    2, 0x0a /* Public */,
     242,    1, 1295,    2, 0x0a /* Public */,
     243,    4, 1298,    2, 0x0a /* Public */,
     244,    4, 1307,    2, 0x0a /* Public */,
     245,    0, 1316,    2, 0x0a /* Public */,
     246,    0, 1317,    2, 0x0a /* Public */,
     247,    1, 1318,    2, 0x0a /* Public */,
     249,    0, 1321,    2, 0x0a /* Public */,
     250,   18, 1322,    2, 0x0a /* Public */,
     260,   15, 1359,    2, 0x0a /* Public */,
     269,   13, 1390,    2, 0x0a /* Public */,
     279,    7, 1417,    2, 0x0a /* Public */,
     285,    6, 1432,    2, 0x0a /* Public */,
     292,    0, 1445,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString,    5,    6,    7,
    QMetaType::Void, 0x80000000 | 8, QMetaType::QString, QMetaType::QString,    5,    9,   10,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::Float, QMetaType::Float, QMetaType::Float,    5,   12,   13,   14,   15,   16,   17,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,    5,   12,   13,   14,   19,   20,   21,   22,   23,   24,
    QMetaType::Void, 0x80000000 | 8,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::QString,   27,   28,   29,   30,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString,   27,   32,   30,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   33,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::Int,   27,    6,   37,   38,
    QMetaType::Void, QMetaType::Int, QMetaType::Float,   40,   41,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString,   43,    9,   10,
    QMetaType::Void, QMetaType::Int,   45,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::QVariant, QMetaType::ULongLong,   27,    7,   53,   54,   55,
    QMetaType::Void, QMetaType::Int, QMetaType::Double,   57,   58,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Bool, QMetaType::Bool,   57,   60,   15,   16,   17,   61,   62,   63,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   57,   60,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Int,    5,   60,
    QMetaType::Void, QMetaType::Bool,   67,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::QVariant,    5,    6,   69,   70,   71,   12,   54,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Int,    5,   58,   73,   74,   75,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Double,    5,   77,
    QMetaType::Void, 0x80000000 | 8, QMetaType::QString,    5,    9,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Int, QMetaType::Double,    2,   79,   54,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Double,    2,   81,
    QMetaType::Void, 0x80000000 | 8,    5,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::ULongLong,    2,   84,   85,   61,   86,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Int, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::ULongLong,    2,    6,   84,   85,   61,   86,
    QMetaType::Void, QMetaType::Int, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::ULongLong,    5,   88,   89,   90,   86,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::ULongLong,    2,   92,   93,   94,   95,   86,
    QMetaType::Void, QMetaType::Int, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::ULongLong,   27,   97,   98,   99,   94,   86,
    QMetaType::Void, QMetaType::Int, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,   27,   97,   98,   99,   94,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::ULongLong,    2,   15,   16,   17,   86,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Int, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::ULongLong,    2,    6,   15,   16,   17,   86,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::ULongLong,    2,  103,  104,  105,  106,   86,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::ULongLong,    2,  108,  109,  110,  111,   86,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Bool,   27,  113,  114,  115,  116,  117,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Double, QMetaType::Double, QMetaType::ULongLong,    5,  119,  120,   86,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::ULongLong,    2,  122,  123,  124,   86,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Double, QMetaType::Double, QMetaType::Double,    2,  126,  127,  128,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,    5,  130,  131,  132,  133,  134,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,  136,  137,  138,  139,  140,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 142, QMetaType::Int, QMetaType::Int,  136,  143,  144,  145,
    QMetaType::Void, 0x80000000 | 8, QMetaType::UInt,    5,   12,
    QMetaType::Void, QMetaType::Bool,  148,
    QMetaType::Void, QMetaType::Bool,  148,
    QMetaType::Void, QMetaType::Bool,  148,
    QMetaType::Void, QMetaType::Bool,  148,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,  153,  148,  154,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,  153,  148,  154,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,  153,  148,  154,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,  153,  148,  154,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,  153,  148,  154,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,  153,  148,  154,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,  153,  148,  154,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,  153,  148,  154,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,  153,  148,  154,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,  153,  148,  154,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,  153,  148,  154,
    QMetaType::Void, QMetaType::Int, QMetaType::Float,  166,  167,
    QMetaType::Void, QMetaType::Int, QMetaType::Float,  166,  169,
    QMetaType::Void, 0x80000000 | 171,  172,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Int,    5,  174,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Int,    5,  174,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Int,    5,  174,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Int,    5,  174,
    QMetaType::Void, QMetaType::Bool, QMetaType::UInt,  179,  180,
    QMetaType::Void, QMetaType::QString,  182,
    QMetaType::Void, QMetaType::Bool,  184,
    QMetaType::Void, QMetaType::Int,   57,
    QMetaType::Void, QMetaType::UInt, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::Int, QMetaType::Float, QMetaType::Float,  187,   60,   12,    7,  188,  189,  190,
    QMetaType::Void, QMetaType::Int, QMetaType::Double, QMetaType::Double, QMetaType::Double,    5,  103,  104,  192,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    5,    6,  194,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, 0x80000000 | 197,   45,
    QMetaType::Void, 0x80000000 | 197, QMetaType::Int, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Int,   45,  198,  199,  200,  201,  202,  203,  204,  205,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,  207,  208,
    QMetaType::Void, QMetaType::Int,  210,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,  215,  216,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 171, 0x80000000 | 221,  220,  222,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,   15,   16,   17,   61,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double,  103,  104,  192,
    QMetaType::Void, 0x80000000 | 230,  231,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,  234,
    QMetaType::Void, QMetaType::Int,  234,
    QMetaType::Void, QMetaType::Int,  234,
    QMetaType::Void, QMetaType::Int,  234,
    QMetaType::Void, QMetaType::Int,  234,
    QMetaType::Void, QMetaType::Int,  234,
    QMetaType::Void, QMetaType::Int,  234,
    QMetaType::Void, QMetaType::Int,  234,
    QMetaType::Void, QMetaType::Int,  234,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,   15,   16,   17,   61,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,   15,   16,   17,   61,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::QString,  248,
    QMetaType::QString,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,  251,   84,   85,   61,  252,  253,  254,  103,  104,  192,  122,  123,  124,  255,  256,  257,  258,  259,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::UInt,  251,  257,  258,  259,  252,  253,  254,  261,  262,  263,  264,  265,  266,  267,  268,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Int, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Int,  251,  103,  104,  192,  270,  271,  272,  273,  274,  275,  276,  277,  278,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::Short, QMetaType::Short, QMetaType::Float, QMetaType::Float, QMetaType::UChar, QMetaType::Float,  251,  280,  281,  282,  283,  188,  284,
    QMetaType::Void, QMetaType::QString, QMetaType::Float, QMetaType::Float, QMetaType::UChar, QMetaType::Float, QMetaType::Float,  286,  287,  288,  289,  290,  291,
    QMetaType::Void,

       0        // eod
};

void UASInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UASInterface *_t = static_cast<UASInterface *>(_o);
        switch (_id) {
        case 0: _t->statusChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->componentCreated((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 2: _t->statusChanged((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 3: _t->poiFound((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7]))); break;
        case 4: _t->poiConnectionFound((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7])),(*reinterpret_cast< float(*)>(_a[8])),(*reinterpret_cast< float(*)>(_a[9])),(*reinterpret_cast< float(*)>(_a[10]))); break;
        case 5: _t->misconfigurationDetected((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 6: _t->textMessageReceived((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 7: _t->navModeChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 8: _t->armed(); break;
        case 9: _t->disarmed(); break;
        case 10: _t->armingChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->errCountChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 12: _t->dropRateChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 13: _t->modeChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 14: _t->commandSent((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->connecting(); break;
        case 16: _t->connected(); break;
        case 17: _t->disconnected(); break;
        case 18: _t->activated(); break;
        case 19: _t->deactivated(); break;
        case 20: _t->manualControl(); break;
        case 21: _t->valueChanged((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const quint64(*)>(_a[5]))); break;
        case 22: _t->voltageChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 23: _t->waypointUpdated((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6])),(*reinterpret_cast< bool(*)>(_a[7])),(*reinterpret_cast< bool(*)>(_a[8]))); break;
        case 24: _t->waypointSelected((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 25: _t->waypointReached((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 26: _t->autoModeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 27: _t->parameterUpdate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< QVariant(*)>(_a[7]))); break;
        case 28: _t->batteryChanged((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 29: _t->batteryConsumedChanged((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 30: _t->statusChanged((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 31: _t->actuatorChanged((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 32: _t->thrustChanged((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 33: _t->heartbeat((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 34: _t->attitudeChanged((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< quint64(*)>(_a[5]))); break;
        case 35: _t->attitudeChanged((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< quint64(*)>(_a[6]))); break;
        case 36: _t->attitudeRotationRatesChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< quint64(*)>(_a[5]))); break;
        case 37: _t->attitudeThrustSetPointChanged((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< quint64(*)>(_a[6]))); break;
        case 38: _t->positionSetPointsChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< quint64(*)>(_a[6]))); break;
        case 39: _t->userPositionSetPointsChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5]))); break;
        case 40: _t->localPositionChanged((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< quint64(*)>(_a[5]))); break;
        case 41: _t->localPositionChanged((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< quint64(*)>(_a[6]))); break;
        case 42: _t->globalPositionChanged((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< quint64(*)>(_a[6]))); break;
        case 43: _t->altitudeChanged((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< quint64(*)>(_a[6]))); break;
        case 44: _t->gpsSatelliteStatusChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6]))); break;
        case 45: _t->speedChanged((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< quint64(*)>(_a[4]))); break;
        case 46: _t->velocityChanged_NED((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< quint64(*)>(_a[5]))); break;
        case 47: _t->navigationControllerErrorsChanged((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 48: _t->NavigationControllerDataChanged((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6]))); break;
        case 49: _t->imageStarted((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 50: _t->imageDataReceived((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const unsigned char*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 51: _t->systemTypeSet((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 52: _t->attitudeControlEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 53: _t->positionXYControlEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 54: _t->positionZControlEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 55: _t->positionYawControlEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 56: _t->opticalFlowStatusChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 57: _t->visionLocalizationStatusChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 58: _t->distanceSensorStatusChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 59: _t->gyroStatusChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 60: _t->accelStatusChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 61: _t->magSensorStatusChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 62: _t->baroStatusChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 63: _t->airspeedStatusChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 64: _t->actuatorStatusChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 65: _t->laserStatusChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 66: _t->groundTruthSensorStatusChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 67: _t->remoteControlChannelRawChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 68: _t->remoteControlChannelScaledChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 69: _t->remoteControlRSSIChanged((*reinterpret_cast< uint8_t(*)>(_a[1]))); break;
        case 70: _t->localizationChanged((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 71: _t->gpsLocalizationChanged((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 72: _t->visionLocalizationChanged((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 73: _t->irUltraSoundLocalizationChanged((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 74: _t->heartbeatTimeout((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 75: _t->nameChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 76: _t->systemSelected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 77: _t->systemSpecsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 78: _t->objectDetected((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7]))); break;
        case 79: _t->homePositionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 80: _t->unknownPacketReceived((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 81: _t->setUASName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 82: _t->executeCommand((*reinterpret_cast< MAV_CMD(*)>(_a[1]))); break;
        case 83: _t->executeCommand((*reinterpret_cast< MAV_CMD(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7])),(*reinterpret_cast< float(*)>(_a[8])),(*reinterpret_cast< float(*)>(_a[9])),(*reinterpret_cast< int(*)>(_a[10]))); break;
        case 84: _t->executeCommandAck((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 85: _t->setAirframe((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 86: _t->launch(); break;
        case 87: _t->home(); break;
        case 88: _t->land(); break;
        case 89: _t->pairRX((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 90: _t->halt(); break;
        case 91: _t->go(); break;
        case 92: _t->setMode((*reinterpret_cast< uint8_t(*)>(_a[1])),(*reinterpret_cast< uint32_t(*)>(_a[2]))); break;
        case 93: _t->emergencySTOP(); break;
        case 94: { bool _r = _t->emergencyKILL();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 95: _t->shutdown(); break;
        case 96: _t->setTargetPosition((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4]))); break;
        case 97: _t->setLocalOriginAtCurrentGPSPosition(); break;
        case 98: _t->setHomePosition((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 99: _t->addLink((*reinterpret_cast< LinkInterface*(*)>(_a[1]))); break;
        case 100: _t->setSelected(); break;
        case 101: _t->enableAllDataTransmission((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 102: _t->enableRawSensorDataTransmission((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 103: _t->enableExtendedSystemStatusTransmission((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 104: _t->enableRCChannelDataTransmission((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 105: _t->enableRawControllerDataTransmission((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 106: _t->enablePositionTransmission((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 107: _t->enableExtra1Transmission((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 108: _t->enableExtra2Transmission((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 109: _t->enableExtra3Transmission((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 110: _t->setLocalPositionSetpoint((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4]))); break;
        case 111: _t->setLocalPositionOffset((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4]))); break;
        case 112: { bool _r = _t->isRotaryWing();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 113: { bool _r = _t->isFixedWing();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 114: _t->setBatterySpecs((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 115: { QString _r = _t->getBatterySpecs();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 116: _t->sendHilState((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7])),(*reinterpret_cast< double(*)>(_a[8])),(*reinterpret_cast< double(*)>(_a[9])),(*reinterpret_cast< double(*)>(_a[10])),(*reinterpret_cast< float(*)>(_a[11])),(*reinterpret_cast< float(*)>(_a[12])),(*reinterpret_cast< float(*)>(_a[13])),(*reinterpret_cast< float(*)>(_a[14])),(*reinterpret_cast< float(*)>(_a[15])),(*reinterpret_cast< float(*)>(_a[16])),(*reinterpret_cast< float(*)>(_a[17])),(*reinterpret_cast< float(*)>(_a[18]))); break;
        case 117: _t->sendHilSensors((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7])),(*reinterpret_cast< float(*)>(_a[8])),(*reinterpret_cast< float(*)>(_a[9])),(*reinterpret_cast< float(*)>(_a[10])),(*reinterpret_cast< float(*)>(_a[11])),(*reinterpret_cast< float(*)>(_a[12])),(*reinterpret_cast< float(*)>(_a[13])),(*reinterpret_cast< float(*)>(_a[14])),(*reinterpret_cast< quint32(*)>(_a[15]))); break;
        case 118: _t->sendHilGps((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7])),(*reinterpret_cast< float(*)>(_a[8])),(*reinterpret_cast< float(*)>(_a[9])),(*reinterpret_cast< float(*)>(_a[10])),(*reinterpret_cast< float(*)>(_a[11])),(*reinterpret_cast< float(*)>(_a[12])),(*reinterpret_cast< int(*)>(_a[13]))); break;
        case 119: _t->sendHilOpticalFlow((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< qint16(*)>(_a[2])),(*reinterpret_cast< qint16(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< quint8(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7]))); break;
        case 120: _t->sendMapRCToParam((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< quint8(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6]))); break;
        case 121: _t->unsetRCToParameterMap(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 3:
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
        case 25:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 28:
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
        case 33:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 34:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 35:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 37:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 40:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 41:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 42:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 43:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 45:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 46:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 47:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 48:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 51:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 70:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 71:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 72:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 73:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 99:
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
            typedef void (UASInterface::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::statusChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (UASInterface::*_t)(int , int , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::componentCreated)) {
                *result = 1;
            }
        }
        {
            typedef void (UASInterface::*_t)(UASInterface * , QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::statusChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (UASInterface::*_t)(UASInterface * , int , int , QString , float , float , float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::poiFound)) {
                *result = 3;
            }
        }
        {
            typedef void (UASInterface::*_t)(UASInterface * , int , int , QString , float , float , float , float , float , float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::poiConnectionFound)) {
                *result = 4;
            }
        }
        {
            typedef void (UASInterface::*_t)(UASInterface * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::misconfigurationDetected)) {
                *result = 5;
            }
        }
        {
            typedef void (UASInterface::*_t)(int , int , int , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::textMessageReceived)) {
                *result = 6;
            }
        }
        {
            typedef void (UASInterface::*_t)(int , int , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::navModeChanged)) {
                *result = 7;
            }
        }
        {
            typedef void (UASInterface::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::armed)) {
                *result = 8;
            }
        }
        {
            typedef void (UASInterface::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::disarmed)) {
                *result = 9;
            }
        }
        {
            typedef void (UASInterface::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::armingChanged)) {
                *result = 10;
            }
        }
        {
            typedef void (UASInterface::*_t)(int , QString , QString , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::errCountChanged)) {
                *result = 11;
            }
        }
        {
            typedef void (UASInterface::*_t)(int , float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::dropRateChanged)) {
                *result = 12;
            }
        }
        {
            typedef void (UASInterface::*_t)(int , QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::modeChanged)) {
                *result = 13;
            }
        }
        {
            typedef void (UASInterface::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::commandSent)) {
                *result = 14;
            }
        }
        {
            typedef void (UASInterface::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::connecting)) {
                *result = 15;
            }
        }
        {
            typedef void (UASInterface::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::connected)) {
                *result = 16;
            }
        }
        {
            typedef void (UASInterface::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::disconnected)) {
                *result = 17;
            }
        }
        {
            typedef void (UASInterface::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::activated)) {
                *result = 18;
            }
        }
        {
            typedef void (UASInterface::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::deactivated)) {
                *result = 19;
            }
        }
        {
            typedef void (UASInterface::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::manualControl)) {
                *result = 20;
            }
        }
        {
            typedef void (UASInterface::*_t)(const int , const QString & , const QString & , const QVariant & , const quint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::valueChanged)) {
                *result = 21;
            }
        }
        {
            typedef void (UASInterface::*_t)(int , double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::voltageChanged)) {
                *result = 22;
            }
        }
        {
            typedef void (UASInterface::*_t)(int , int , double , double , double , double , bool , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::waypointUpdated)) {
                *result = 23;
            }
        }
        {
            typedef void (UASInterface::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::waypointSelected)) {
                *result = 24;
            }
        }
        {
            typedef void (UASInterface::*_t)(UASInterface * , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::waypointReached)) {
                *result = 25;
            }
        }
        {
            typedef void (UASInterface::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::autoModeChanged)) {
                *result = 26;
            }
        }
        {
            typedef void (UASInterface::*_t)(int , int , QString , int , int , int , QVariant );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::parameterUpdate)) {
                *result = 27;
            }
        }
        {
            typedef void (UASInterface::*_t)(UASInterface * , double , double , double , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::batteryChanged)) {
                *result = 28;
            }
        }
        {
            typedef void (UASInterface::*_t)(UASInterface * , double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::batteryConsumedChanged)) {
                *result = 29;
            }
        }
        {
            typedef void (UASInterface::*_t)(UASInterface * , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::statusChanged)) {
                *result = 30;
            }
        }
        {
            typedef void (UASInterface::*_t)(UASInterface * , int , double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::actuatorChanged)) {
                *result = 31;
            }
        }
        {
            typedef void (UASInterface::*_t)(UASInterface * , double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::thrustChanged)) {
                *result = 32;
            }
        }
        {
            typedef void (UASInterface::*_t)(UASInterface * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::heartbeat)) {
                *result = 33;
            }
        }
        {
            typedef void (UASInterface::*_t)(UASInterface * , double , double , double , quint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::attitudeChanged)) {
                *result = 34;
            }
        }
        {
            typedef void (UASInterface::*_t)(UASInterface * , int , double , double , double , quint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::attitudeChanged)) {
                *result = 35;
            }
        }
        {
            typedef void (UASInterface::*_t)(int , double , double , double , quint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::attitudeRotationRatesChanged)) {
                *result = 36;
            }
        }
        {
            typedef void (UASInterface::*_t)(UASInterface * , float , float , float , float , quint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::attitudeThrustSetPointChanged)) {
                *result = 37;
            }
        }
        {
            typedef void (UASInterface::*_t)(int , float , float , float , float , quint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::positionSetPointsChanged)) {
                *result = 38;
            }
        }
        {
            typedef void (UASInterface::*_t)(int , float , float , float , float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::userPositionSetPointsChanged)) {
                *result = 39;
            }
        }
        {
            typedef void (UASInterface::*_t)(UASInterface * , double , double , double , quint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::localPositionChanged)) {
                *result = 40;
            }
        }
        {
            typedef void (UASInterface::*_t)(UASInterface * , int , double , double , double , quint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::localPositionChanged)) {
                *result = 41;
            }
        }
        {
            typedef void (UASInterface::*_t)(UASInterface * , double , double , double , double , quint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::globalPositionChanged)) {
                *result = 42;
            }
        }
        {
            typedef void (UASInterface::*_t)(UASInterface * , double , double , double , double , quint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::altitudeChanged)) {
                *result = 43;
            }
        }
        {
            typedef void (UASInterface::*_t)(int , int , float , float , float , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::gpsSatelliteStatusChanged)) {
                *result = 44;
            }
        }
        {
            typedef void (UASInterface::*_t)(UASInterface * , double , double , quint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::speedChanged)) {
                *result = 45;
            }
        }
        {
            typedef void (UASInterface::*_t)(UASInterface * , double , double , double , quint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::velocityChanged_NED)) {
                *result = 46;
            }
        }
        {
            typedef void (UASInterface::*_t)(UASInterface * , double , double , double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::navigationControllerErrorsChanged)) {
                *result = 47;
            }
        }
        {
            typedef void (UASInterface::*_t)(UASInterface * , float , float , float , float , float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::NavigationControllerDataChanged)) {
                *result = 48;
            }
        }
        {
            typedef void (UASInterface::*_t)(int , int , int , int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::imageStarted)) {
                *result = 49;
            }
        }
        {
            typedef void (UASInterface::*_t)(int , const unsigned char * , int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::imageDataReceived)) {
                *result = 50;
            }
        }
        {
            typedef void (UASInterface::*_t)(UASInterface * , unsigned int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::systemTypeSet)) {
                *result = 51;
            }
        }
        {
            typedef void (UASInterface::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::attitudeControlEnabled)) {
                *result = 52;
            }
        }
        {
            typedef void (UASInterface::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::positionXYControlEnabled)) {
                *result = 53;
            }
        }
        {
            typedef void (UASInterface::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::positionZControlEnabled)) {
                *result = 54;
            }
        }
        {
            typedef void (UASInterface::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::positionYawControlEnabled)) {
                *result = 55;
            }
        }
        {
            typedef void (UASInterface::*_t)(bool , bool , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::opticalFlowStatusChanged)) {
                *result = 56;
            }
        }
        {
            typedef void (UASInterface::*_t)(bool , bool , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::visionLocalizationStatusChanged)) {
                *result = 57;
            }
        }
        {
            typedef void (UASInterface::*_t)(bool , bool , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::distanceSensorStatusChanged)) {
                *result = 58;
            }
        }
        {
            typedef void (UASInterface::*_t)(bool , bool , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::gyroStatusChanged)) {
                *result = 59;
            }
        }
        {
            typedef void (UASInterface::*_t)(bool , bool , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::accelStatusChanged)) {
                *result = 60;
            }
        }
        {
            typedef void (UASInterface::*_t)(bool , bool , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::magSensorStatusChanged)) {
                *result = 61;
            }
        }
        {
            typedef void (UASInterface::*_t)(bool , bool , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::baroStatusChanged)) {
                *result = 62;
            }
        }
        {
            typedef void (UASInterface::*_t)(bool , bool , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::airspeedStatusChanged)) {
                *result = 63;
            }
        }
        {
            typedef void (UASInterface::*_t)(bool , bool , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::actuatorStatusChanged)) {
                *result = 64;
            }
        }
        {
            typedef void (UASInterface::*_t)(bool , bool , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::laserStatusChanged)) {
                *result = 65;
            }
        }
        {
            typedef void (UASInterface::*_t)(bool , bool , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::groundTruthSensorStatusChanged)) {
                *result = 66;
            }
        }
        {
            typedef void (UASInterface::*_t)(int , float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::remoteControlChannelRawChanged)) {
                *result = 67;
            }
        }
        {
            typedef void (UASInterface::*_t)(int , float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::remoteControlChannelScaledChanged)) {
                *result = 68;
            }
        }
        {
            typedef void (UASInterface::*_t)(uint8_t );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::remoteControlRSSIChanged)) {
                *result = 69;
            }
        }
        {
            typedef void (UASInterface::*_t)(UASInterface * , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::localizationChanged)) {
                *result = 70;
            }
        }
        {
            typedef void (UASInterface::*_t)(UASInterface * , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::gpsLocalizationChanged)) {
                *result = 71;
            }
        }
        {
            typedef void (UASInterface::*_t)(UASInterface * , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::visionLocalizationChanged)) {
                *result = 72;
            }
        }
        {
            typedef void (UASInterface::*_t)(UASInterface * , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::irUltraSoundLocalizationChanged)) {
                *result = 73;
            }
        }
        {
            typedef void (UASInterface::*_t)(bool , unsigned int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::heartbeatTimeout)) {
                *result = 74;
            }
        }
        {
            typedef void (UASInterface::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::nameChanged)) {
                *result = 75;
            }
        }
        {
            typedef void (UASInterface::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::systemSelected)) {
                *result = 76;
            }
        }
        {
            typedef void (UASInterface::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::systemSpecsChanged)) {
                *result = 77;
            }
        }
        {
            typedef void (UASInterface::*_t)(unsigned int , int , int , const QString & , int , float , float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::objectDetected)) {
                *result = 78;
            }
        }
        {
            typedef void (UASInterface::*_t)(int , double , double , double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::homePositionChanged)) {
                *result = 79;
            }
        }
        {
            typedef void (UASInterface::*_t)(int , int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASInterface::unknownPacketReceived)) {
                *result = 80;
            }
        }
    }
}

const QMetaObject UASInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UASInterface.data,
      qt_meta_data_UASInterface,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *UASInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UASInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_UASInterface.stringdata))
        return static_cast<void*>(const_cast< UASInterface*>(this));
    return QObject::qt_metacast(_clname);
}

int UASInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 122)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 122;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 122)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 122;
    }
    return _id;
}

// SIGNAL 0
void UASInterface::statusChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UASInterface::componentCreated(int _t1, int _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void UASInterface::statusChanged(UASInterface * _t1, QString _t2, QString _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void UASInterface::poiFound(UASInterface * _t1, int _t2, int _t3, QString _t4, float _t5, float _t6, float _t7)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void UASInterface::poiConnectionFound(UASInterface * _t1, int _t2, int _t3, QString _t4, float _t5, float _t6, float _t7, float _t8, float _t9, float _t10)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)), const_cast<void*>(reinterpret_cast<const void*>(&_t9)), const_cast<void*>(reinterpret_cast<const void*>(&_t10)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void UASInterface::misconfigurationDetected(UASInterface * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void UASInterface::textMessageReceived(int _t1, int _t2, int _t3, QString _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void UASInterface::navModeChanged(int _t1, int _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void UASInterface::armed()
{
    QMetaObject::activate(this, &staticMetaObject, 8, Q_NULLPTR);
}

// SIGNAL 9
void UASInterface::disarmed()
{
    QMetaObject::activate(this, &staticMetaObject, 9, Q_NULLPTR);
}

// SIGNAL 10
void UASInterface::armingChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void UASInterface::errCountChanged(int _t1, QString _t2, QString _t3, int _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void UASInterface::dropRateChanged(int _t1, float _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void UASInterface::modeChanged(int _t1, QString _t2, QString _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void UASInterface::commandSent(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void UASInterface::connecting()
{
    QMetaObject::activate(this, &staticMetaObject, 15, Q_NULLPTR);
}

// SIGNAL 16
void UASInterface::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 16, Q_NULLPTR);
}

// SIGNAL 17
void UASInterface::disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 17, Q_NULLPTR);
}

// SIGNAL 18
void UASInterface::activated()
{
    QMetaObject::activate(this, &staticMetaObject, 18, Q_NULLPTR);
}

// SIGNAL 19
void UASInterface::deactivated()
{
    QMetaObject::activate(this, &staticMetaObject, 19, Q_NULLPTR);
}

// SIGNAL 20
void UASInterface::manualControl()
{
    QMetaObject::activate(this, &staticMetaObject, 20, Q_NULLPTR);
}

// SIGNAL 21
void UASInterface::valueChanged(const int _t1, const QString & _t2, const QString & _t3, const QVariant & _t4, const quint64 _t5)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void UASInterface::voltageChanged(int _t1, double _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void UASInterface::waypointUpdated(int _t1, int _t2, double _t3, double _t4, double _t5, double _t6, bool _t7, bool _t8)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void UASInterface::waypointSelected(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void UASInterface::waypointReached(UASInterface * _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void UASInterface::autoModeChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void UASInterface::parameterUpdate(int _t1, int _t2, QString _t3, int _t4, int _t5, int _t6, QVariant _t7)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void UASInterface::batteryChanged(UASInterface * _t1, double _t2, double _t3, double _t4, int _t5)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void UASInterface::batteryConsumedChanged(UASInterface * _t1, double _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void UASInterface::statusChanged(UASInterface * _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void UASInterface::actuatorChanged(UASInterface * _t1, int _t2, double _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void UASInterface::thrustChanged(UASInterface * _t1, double _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void UASInterface::heartbeat(UASInterface * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void UASInterface::attitudeChanged(UASInterface * _t1, double _t2, double _t3, double _t4, quint64 _t5)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void UASInterface::attitudeChanged(UASInterface * _t1, int _t2, double _t3, double _t4, double _t5, quint64 _t6)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void UASInterface::attitudeRotationRatesChanged(int _t1, double _t2, double _t3, double _t4, quint64 _t5)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
}

// SIGNAL 37
void UASInterface::attitudeThrustSetPointChanged(UASInterface * _t1, float _t2, float _t3, float _t4, float _t5, quint64 _t6)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
}

// SIGNAL 38
void UASInterface::positionSetPointsChanged(int _t1, float _t2, float _t3, float _t4, float _t5, quint64 _t6)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
}

// SIGNAL 39
void UASInterface::userPositionSetPointsChanged(int _t1, float _t2, float _t3, float _t4, float _t5)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
}

// SIGNAL 40
void UASInterface::localPositionChanged(UASInterface * _t1, double _t2, double _t3, double _t4, quint64 _t5)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 40, _a);
}

// SIGNAL 41
void UASInterface::localPositionChanged(UASInterface * _t1, int _t2, double _t3, double _t4, double _t5, quint64 _t6)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 41, _a);
}

// SIGNAL 42
void UASInterface::globalPositionChanged(UASInterface * _t1, double _t2, double _t3, double _t4, double _t5, quint64 _t6)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 42, _a);
}

// SIGNAL 43
void UASInterface::altitudeChanged(UASInterface * _t1, double _t2, double _t3, double _t4, double _t5, quint64 _t6)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 43, _a);
}

// SIGNAL 44
void UASInterface::gpsSatelliteStatusChanged(int _t1, int _t2, float _t3, float _t4, float _t5, bool _t6)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 44, _a);
}

// SIGNAL 45
void UASInterface::speedChanged(UASInterface * _t1, double _t2, double _t3, quint64 _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 45, _a);
}

// SIGNAL 46
void UASInterface::velocityChanged_NED(UASInterface * _t1, double _t2, double _t3, double _t4, quint64 _t5)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 46, _a);
}

// SIGNAL 47
void UASInterface::navigationControllerErrorsChanged(UASInterface * _t1, double _t2, double _t3, double _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 47, _a);
}

// SIGNAL 48
void UASInterface::NavigationControllerDataChanged(UASInterface * _t1, float _t2, float _t3, float _t4, float _t5, float _t6)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 48, _a);
}

// SIGNAL 49
void UASInterface::imageStarted(int _t1, int _t2, int _t3, int _t4, int _t5)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 49, _a);
}

// SIGNAL 50
void UASInterface::imageDataReceived(int _t1, const unsigned char * _t2, int _t3, int _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 50, _a);
}

// SIGNAL 51
void UASInterface::systemTypeSet(UASInterface * _t1, unsigned int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 51, _a);
}

// SIGNAL 52
void UASInterface::attitudeControlEnabled(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 52, _a);
}

// SIGNAL 53
void UASInterface::positionXYControlEnabled(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 53, _a);
}

// SIGNAL 54
void UASInterface::positionZControlEnabled(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 54, _a);
}

// SIGNAL 55
void UASInterface::positionYawControlEnabled(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 55, _a);
}

// SIGNAL 56
void UASInterface::opticalFlowStatusChanged(bool _t1, bool _t2, bool _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 56, _a);
}

// SIGNAL 57
void UASInterface::visionLocalizationStatusChanged(bool _t1, bool _t2, bool _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 57, _a);
}

// SIGNAL 58
void UASInterface::distanceSensorStatusChanged(bool _t1, bool _t2, bool _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 58, _a);
}

// SIGNAL 59
void UASInterface::gyroStatusChanged(bool _t1, bool _t2, bool _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 59, _a);
}

// SIGNAL 60
void UASInterface::accelStatusChanged(bool _t1, bool _t2, bool _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 60, _a);
}

// SIGNAL 61
void UASInterface::magSensorStatusChanged(bool _t1, bool _t2, bool _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 61, _a);
}

// SIGNAL 62
void UASInterface::baroStatusChanged(bool _t1, bool _t2, bool _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 62, _a);
}

// SIGNAL 63
void UASInterface::airspeedStatusChanged(bool _t1, bool _t2, bool _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 63, _a);
}

// SIGNAL 64
void UASInterface::actuatorStatusChanged(bool _t1, bool _t2, bool _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 64, _a);
}

// SIGNAL 65
void UASInterface::laserStatusChanged(bool _t1, bool _t2, bool _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 65, _a);
}

// SIGNAL 66
void UASInterface::groundTruthSensorStatusChanged(bool _t1, bool _t2, bool _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 66, _a);
}

// SIGNAL 67
void UASInterface::remoteControlChannelRawChanged(int _t1, float _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 67, _a);
}

// SIGNAL 68
void UASInterface::remoteControlChannelScaledChanged(int _t1, float _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 68, _a);
}

// SIGNAL 69
void UASInterface::remoteControlRSSIChanged(uint8_t _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 69, _a);
}

// SIGNAL 70
void UASInterface::localizationChanged(UASInterface * _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 70, _a);
}

// SIGNAL 71
void UASInterface::gpsLocalizationChanged(UASInterface * _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 71, _a);
}

// SIGNAL 72
void UASInterface::visionLocalizationChanged(UASInterface * _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 72, _a);
}

// SIGNAL 73
void UASInterface::irUltraSoundLocalizationChanged(UASInterface * _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 73, _a);
}

// SIGNAL 74
void UASInterface::heartbeatTimeout(bool _t1, unsigned int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 74, _a);
}

// SIGNAL 75
void UASInterface::nameChanged(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 75, _a);
}

// SIGNAL 76
void UASInterface::systemSelected(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 76, _a);
}

// SIGNAL 77
void UASInterface::systemSpecsChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 77, _a);
}

// SIGNAL 78
void UASInterface::objectDetected(unsigned int _t1, int _t2, int _t3, const QString & _t4, int _t5, float _t6, float _t7)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)) };
    QMetaObject::activate(this, &staticMetaObject, 78, _a);
}

// SIGNAL 79
void UASInterface::homePositionChanged(int _t1, double _t2, double _t3, double _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 79, _a);
}

// SIGNAL 80
void UASInterface::unknownPacketReceived(int _t1, int _t2, int _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 80, _a);
}
QT_END_MOC_NAMESPACE
