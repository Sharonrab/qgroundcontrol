/****************************************************************************
** Meta object code from reading C++ file 'QGCHilLink.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/comm/QGCHilLink.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCHilLink.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QGCHilLink_t {
    QByteArrayData data[99];
    char stringdata[965];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCHilLink_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCHilLink_t qt_meta_stringdata_QGCHilLink = {
    {
QT_MOC_LITERAL(0, 0, 10), // "QGCHilLink"
QT_MOC_LITERAL(1, 11, 19), // "simulationConnected"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 22), // "simulationDisconnected"
QT_MOC_LITERAL(4, 55, 9), // "connected"
QT_MOC_LITERAL(5, 65, 15), // "hilStateChanged"
QT_MOC_LITERAL(6, 81, 7), // "time_us"
QT_MOC_LITERAL(7, 89, 4), // "roll"
QT_MOC_LITERAL(8, 94, 5), // "pitch"
QT_MOC_LITERAL(9, 100, 3), // "yaw"
QT_MOC_LITERAL(10, 104, 9), // "rollspeed"
QT_MOC_LITERAL(11, 114, 10), // "pitchspeed"
QT_MOC_LITERAL(12, 125, 8), // "yawspeed"
QT_MOC_LITERAL(13, 134, 3), // "lat"
QT_MOC_LITERAL(14, 138, 3), // "lon"
QT_MOC_LITERAL(15, 142, 3), // "alt"
QT_MOC_LITERAL(16, 146, 2), // "vx"
QT_MOC_LITERAL(17, 149, 2), // "vy"
QT_MOC_LITERAL(18, 152, 2), // "vz"
QT_MOC_LITERAL(19, 155, 12), // "ind_airspeed"
QT_MOC_LITERAL(20, 168, 13), // "true_airspeed"
QT_MOC_LITERAL(21, 182, 4), // "xacc"
QT_MOC_LITERAL(22, 187, 4), // "yacc"
QT_MOC_LITERAL(23, 192, 4), // "zacc"
QT_MOC_LITERAL(24, 197, 21), // "hilGroundTruthChanged"
QT_MOC_LITERAL(25, 219, 19), // "sensorHilGpsChanged"
QT_MOC_LITERAL(26, 239, 8), // "fix_type"
QT_MOC_LITERAL(27, 248, 3), // "eph"
QT_MOC_LITERAL(28, 252, 3), // "epv"
QT_MOC_LITERAL(29, 256, 3), // "vel"
QT_MOC_LITERAL(30, 260, 2), // "vn"
QT_MOC_LITERAL(31, 263, 2), // "ve"
QT_MOC_LITERAL(32, 266, 2), // "vd"
QT_MOC_LITERAL(33, 269, 3), // "cog"
QT_MOC_LITERAL(34, 273, 10), // "satellites"
QT_MOC_LITERAL(35, 284, 22), // "sensorHilRawImuChanged"
QT_MOC_LITERAL(36, 307, 5), // "xgyro"
QT_MOC_LITERAL(37, 313, 5), // "ygyro"
QT_MOC_LITERAL(38, 319, 5), // "zgyro"
QT_MOC_LITERAL(39, 325, 4), // "xmag"
QT_MOC_LITERAL(40, 330, 4), // "ymag"
QT_MOC_LITERAL(41, 335, 4), // "zmag"
QT_MOC_LITERAL(42, 340, 12), // "abs_pressure"
QT_MOC_LITERAL(43, 353, 13), // "diff_pressure"
QT_MOC_LITERAL(44, 367, 12), // "pressure_alt"
QT_MOC_LITERAL(45, 380, 11), // "temperature"
QT_MOC_LITERAL(46, 392, 14), // "fields_updated"
QT_MOC_LITERAL(47, 407, 27), // "sensorHilOpticalFlowChanged"
QT_MOC_LITERAL(48, 435, 6), // "flow_x"
QT_MOC_LITERAL(49, 442, 6), // "flow_y"
QT_MOC_LITERAL(50, 449, 13), // "flow_comp_m_x"
QT_MOC_LITERAL(51, 463, 13), // "flow_comp_m_y"
QT_MOC_LITERAL(52, 477, 7), // "quality"
QT_MOC_LITERAL(53, 485, 15), // "ground_distance"
QT_MOC_LITERAL(54, 501, 13), // "remoteChanged"
QT_MOC_LITERAL(55, 515, 8), // "hostPort"
QT_MOC_LITERAL(56, 524, 13), // "statusMessage"
QT_MOC_LITERAL(57, 538, 7), // "message"
QT_MOC_LITERAL(58, 546, 15), // "airframeChanged"
QT_MOC_LITERAL(59, 562, 8), // "airframe"
QT_MOC_LITERAL(60, 571, 14), // "versionChanged"
QT_MOC_LITERAL(61, 586, 7), // "version"
QT_MOC_LITERAL(62, 594, 16), // "sensorHilChanged"
QT_MOC_LITERAL(63, 611, 7), // "enabled"
QT_MOC_LITERAL(64, 619, 7), // "setPort"
QT_MOC_LITERAL(65, 627, 4), // "port"
QT_MOC_LITERAL(66, 632, 13), // "setRemoteHost"
QT_MOC_LITERAL(67, 646, 4), // "host"
QT_MOC_LITERAL(68, 651, 14), // "updateControls"
QT_MOC_LITERAL(69, 666, 4), // "time"
QT_MOC_LITERAL(70, 671, 12), // "rollAilerons"
QT_MOC_LITERAL(71, 684, 13), // "pitchElevator"
QT_MOC_LITERAL(72, 698, 9), // "yawRudder"
QT_MOC_LITERAL(73, 708, 8), // "throttle"
QT_MOC_LITERAL(74, 717, 10), // "systemMode"
QT_MOC_LITERAL(75, 728, 7), // "navMode"
QT_MOC_LITERAL(76, 736, 15), // "updateActuators"
QT_MOC_LITERAL(77, 752, 4), // "act1"
QT_MOC_LITERAL(78, 757, 4), // "act2"
QT_MOC_LITERAL(79, 762, 4), // "act3"
QT_MOC_LITERAL(80, 767, 4), // "act4"
QT_MOC_LITERAL(81, 772, 4), // "act5"
QT_MOC_LITERAL(82, 777, 4), // "act6"
QT_MOC_LITERAL(83, 782, 4), // "act7"
QT_MOC_LITERAL(84, 787, 4), // "act8"
QT_MOC_LITERAL(85, 792, 12), // "processError"
QT_MOC_LITERAL(86, 805, 22), // "QProcess::ProcessError"
QT_MOC_LITERAL(87, 828, 3), // "err"
QT_MOC_LITERAL(88, 832, 10), // "setVersion"
QT_MOC_LITERAL(89, 843, 15), // "enableSensorHIL"
QT_MOC_LITERAL(90, 859, 6), // "enable"
QT_MOC_LITERAL(91, 866, 14), // "selectAirframe"
QT_MOC_LITERAL(92, 881, 9), // "readBytes"
QT_MOC_LITERAL(93, 891, 10), // "writeBytes"
QT_MOC_LITERAL(94, 902, 11), // "const char*"
QT_MOC_LITERAL(95, 914, 4), // "data"
QT_MOC_LITERAL(96, 919, 6), // "length"
QT_MOC_LITERAL(97, 926, 17), // "connectSimulation"
QT_MOC_LITERAL(98, 944, 20) // "disconnectSimulation"

    },
    "QGCHilLink\0simulationConnected\0\0"
    "simulationDisconnected\0connected\0"
    "hilStateChanged\0time_us\0roll\0pitch\0"
    "yaw\0rollspeed\0pitchspeed\0yawspeed\0lat\0"
    "lon\0alt\0vx\0vy\0vz\0ind_airspeed\0"
    "true_airspeed\0xacc\0yacc\0zacc\0"
    "hilGroundTruthChanged\0sensorHilGpsChanged\0"
    "fix_type\0eph\0epv\0vel\0vn\0ve\0vd\0cog\0"
    "satellites\0sensorHilRawImuChanged\0"
    "xgyro\0ygyro\0zgyro\0xmag\0ymag\0zmag\0"
    "abs_pressure\0diff_pressure\0pressure_alt\0"
    "temperature\0fields_updated\0"
    "sensorHilOpticalFlowChanged\0flow_x\0"
    "flow_y\0flow_comp_m_x\0flow_comp_m_y\0"
    "quality\0ground_distance\0remoteChanged\0"
    "hostPort\0statusMessage\0message\0"
    "airframeChanged\0airframe\0versionChanged\0"
    "version\0sensorHilChanged\0enabled\0"
    "setPort\0port\0setRemoteHost\0host\0"
    "updateControls\0time\0rollAilerons\0"
    "pitchElevator\0yawRudder\0throttle\0"
    "systemMode\0navMode\0updateActuators\0"
    "act1\0act2\0act3\0act4\0act5\0act6\0act7\0"
    "act8\0processError\0QProcess::ProcessError\0"
    "err\0setVersion\0enableSensorHIL\0enable\0"
    "selectAirframe\0readBytes\0writeBytes\0"
    "const char*\0data\0length\0connectSimulation\0"
    "disconnectSimulation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCHilLink[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      14,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  144,    2, 0x06 /* Public */,
       3,    0,  145,    2, 0x06 /* Public */,
       1,    1,  146,    2, 0x06 /* Public */,
       5,   18,  149,    2, 0x06 /* Public */,
      24,   18,  186,    2, 0x06 /* Public */,
      25,   13,  223,    2, 0x06 /* Public */,
      35,   15,  250,    2, 0x06 /* Public */,
      47,    7,  281,    2, 0x06 /* Public */,
      54,    1,  296,    2, 0x06 /* Public */,
      56,    1,  299,    2, 0x06 /* Public */,
      58,    1,  302,    2, 0x06 /* Public */,
      60,    1,  305,    2, 0x06 /* Public */,
      60,    1,  308,    2, 0x06 /* Public */,
      62,    1,  311,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      64,    1,  314,    2, 0x0a /* Public */,
      66,    1,  317,    2, 0x0a /* Public */,
      68,    7,  320,    2, 0x0a /* Public */,
      76,    9,  335,    2, 0x0a /* Public */,
      85,    1,  354,    2, 0x0a /* Public */,
      88,    1,  357,    2, 0x0a /* Public */,
      89,    1,  360,    2, 0x0a /* Public */,
      91,    1,  363,    2, 0x0a /* Public */,
      92,    0,  366,    2, 0x0a /* Public */,
      93,    2,  367,    2, 0x0a /* Public */,
      97,    0,  372,    2, 0x0a /* Public */,
      98,    0,  373,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,    6,    7,    8,    9,   10,   11,   12,   13,   14,   15,   16,   17,   18,   19,   20,   21,   22,   23,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,    6,    7,    8,    9,   10,   11,   12,   13,   14,   15,   16,   17,   18,   19,   20,   21,   22,   23,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Int, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Int,    6,   13,   14,   15,   26,   27,   28,   29,   30,   31,   32,   33,   34,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::UInt,    6,   21,   22,   23,   36,   37,   38,   39,   40,   41,   42,   43,   44,   45,   46,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::Short, QMetaType::Short, QMetaType::Float, QMetaType::Float, QMetaType::UChar, QMetaType::Float,    6,   48,   49,   50,   51,   52,   53,
    QMetaType::Void, QMetaType::QString,   55,
    QMetaType::Void, QMetaType::QString,   57,
    QMetaType::Void, QMetaType::QString,   59,
    QMetaType::Void, QMetaType::QString,   61,
    QMetaType::Void, QMetaType::Int,   61,
    QMetaType::Void, QMetaType::Bool,   63,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   65,
    QMetaType::Void, QMetaType::QString,   67,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::UChar, QMetaType::UChar,   69,   70,   71,   72,   73,   74,   75,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,   69,   77,   78,   79,   80,   81,   82,   83,   84,
    QMetaType::Void, 0x80000000 | 86,   87,
    QMetaType::Void, QMetaType::QString,   61,
    QMetaType::Void, QMetaType::Bool,   90,
    QMetaType::Void, QMetaType::QString,   59,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 94, QMetaType::LongLong,   95,   96,
    QMetaType::Bool,
    QMetaType::Bool,

       0        // eod
};

void QGCHilLink::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGCHilLink *_t = static_cast<QGCHilLink *>(_o);
        switch (_id) {
        case 0: _t->simulationConnected(); break;
        case 1: _t->simulationDisconnected(); break;
        case 2: _t->simulationConnected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->hilStateChanged((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7])),(*reinterpret_cast< double(*)>(_a[8])),(*reinterpret_cast< double(*)>(_a[9])),(*reinterpret_cast< double(*)>(_a[10])),(*reinterpret_cast< float(*)>(_a[11])),(*reinterpret_cast< float(*)>(_a[12])),(*reinterpret_cast< float(*)>(_a[13])),(*reinterpret_cast< float(*)>(_a[14])),(*reinterpret_cast< float(*)>(_a[15])),(*reinterpret_cast< float(*)>(_a[16])),(*reinterpret_cast< float(*)>(_a[17])),(*reinterpret_cast< float(*)>(_a[18]))); break;
        case 4: _t->hilGroundTruthChanged((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7])),(*reinterpret_cast< double(*)>(_a[8])),(*reinterpret_cast< double(*)>(_a[9])),(*reinterpret_cast< double(*)>(_a[10])),(*reinterpret_cast< float(*)>(_a[11])),(*reinterpret_cast< float(*)>(_a[12])),(*reinterpret_cast< float(*)>(_a[13])),(*reinterpret_cast< float(*)>(_a[14])),(*reinterpret_cast< float(*)>(_a[15])),(*reinterpret_cast< float(*)>(_a[16])),(*reinterpret_cast< float(*)>(_a[17])),(*reinterpret_cast< float(*)>(_a[18]))); break;
        case 5: _t->sensorHilGpsChanged((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7])),(*reinterpret_cast< float(*)>(_a[8])),(*reinterpret_cast< float(*)>(_a[9])),(*reinterpret_cast< float(*)>(_a[10])),(*reinterpret_cast< float(*)>(_a[11])),(*reinterpret_cast< float(*)>(_a[12])),(*reinterpret_cast< int(*)>(_a[13]))); break;
        case 6: _t->sensorHilRawImuChanged((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7])),(*reinterpret_cast< float(*)>(_a[8])),(*reinterpret_cast< float(*)>(_a[9])),(*reinterpret_cast< float(*)>(_a[10])),(*reinterpret_cast< float(*)>(_a[11])),(*reinterpret_cast< float(*)>(_a[12])),(*reinterpret_cast< float(*)>(_a[13])),(*reinterpret_cast< float(*)>(_a[14])),(*reinterpret_cast< quint32(*)>(_a[15]))); break;
        case 7: _t->sensorHilOpticalFlowChanged((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< qint16(*)>(_a[2])),(*reinterpret_cast< qint16(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< quint8(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7]))); break;
        case 8: _t->remoteChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->statusMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->airframeChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->versionChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->versionChanged((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 13: _t->sensorHilChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->setPort((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->setRemoteHost((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: _t->updateControls((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< quint8(*)>(_a[6])),(*reinterpret_cast< quint8(*)>(_a[7]))); break;
        case 17: _t->updateActuators((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7])),(*reinterpret_cast< float(*)>(_a[8])),(*reinterpret_cast< float(*)>(_a[9]))); break;
        case 18: _t->processError((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        case 19: _t->setVersion((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 20: _t->enableSensorHIL((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->selectAirframe((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 22: _t->readBytes(); break;
        case 23: _t->writeBytes((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 24: { bool _r = _t->connectSimulation();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 25: { bool _r = _t->disconnectSimulation();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QGCHilLink::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGCHilLink::simulationConnected)) {
                *result = 0;
            }
        }
        {
            typedef void (QGCHilLink::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGCHilLink::simulationDisconnected)) {
                *result = 1;
            }
        }
        {
            typedef void (QGCHilLink::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGCHilLink::simulationConnected)) {
                *result = 2;
            }
        }
        {
            typedef void (QGCHilLink::*_t)(quint64 , float , float , float , float , float , float , double , double , double , float , float , float , float , float , float , float , float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGCHilLink::hilStateChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (QGCHilLink::*_t)(quint64 , float , float , float , float , float , float , double , double , double , float , float , float , float , float , float , float , float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGCHilLink::hilGroundTruthChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (QGCHilLink::*_t)(quint64 , double , double , double , int , float , float , float , float , float , float , float , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGCHilLink::sensorHilGpsChanged)) {
                *result = 5;
            }
        }
        {
            typedef void (QGCHilLink::*_t)(quint64 , float , float , float , float , float , float , float , float , float , float , float , float , float , quint32 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGCHilLink::sensorHilRawImuChanged)) {
                *result = 6;
            }
        }
        {
            typedef void (QGCHilLink::*_t)(quint64 , qint16 , qint16 , float , float , quint8 , float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGCHilLink::sensorHilOpticalFlowChanged)) {
                *result = 7;
            }
        }
        {
            typedef void (QGCHilLink::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGCHilLink::remoteChanged)) {
                *result = 8;
            }
        }
        {
            typedef void (QGCHilLink::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGCHilLink::statusMessage)) {
                *result = 9;
            }
        }
        {
            typedef void (QGCHilLink::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGCHilLink::airframeChanged)) {
                *result = 10;
            }
        }
        {
            typedef void (QGCHilLink::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGCHilLink::versionChanged)) {
                *result = 11;
            }
        }
        {
            typedef void (QGCHilLink::*_t)(const int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGCHilLink::versionChanged)) {
                *result = 12;
            }
        }
        {
            typedef void (QGCHilLink::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGCHilLink::sensorHilChanged)) {
                *result = 13;
            }
        }
    }
}

const QMetaObject QGCHilLink::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_QGCHilLink.data,
      qt_meta_data_QGCHilLink,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QGCHilLink::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCHilLink::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QGCHilLink.stringdata))
        return static_cast<void*>(const_cast< QGCHilLink*>(this));
    return QThread::qt_metacast(_clname);
}

int QGCHilLink::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 26;
    }
    return _id;
}

// SIGNAL 0
void QGCHilLink::simulationConnected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QGCHilLink::simulationDisconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void QGCHilLink::simulationConnected(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QGCHilLink::hilStateChanged(quint64 _t1, float _t2, float _t3, float _t4, float _t5, float _t6, float _t7, double _t8, double _t9, double _t10, float _t11, float _t12, float _t13, float _t14, float _t15, float _t16, float _t17, float _t18)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)), const_cast<void*>(reinterpret_cast<const void*>(&_t9)), const_cast<void*>(reinterpret_cast<const void*>(&_t10)), const_cast<void*>(reinterpret_cast<const void*>(&_t11)), const_cast<void*>(reinterpret_cast<const void*>(&_t12)), const_cast<void*>(reinterpret_cast<const void*>(&_t13)), const_cast<void*>(reinterpret_cast<const void*>(&_t14)), const_cast<void*>(reinterpret_cast<const void*>(&_t15)), const_cast<void*>(reinterpret_cast<const void*>(&_t16)), const_cast<void*>(reinterpret_cast<const void*>(&_t17)), const_cast<void*>(reinterpret_cast<const void*>(&_t18)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QGCHilLink::hilGroundTruthChanged(quint64 _t1, float _t2, float _t3, float _t4, float _t5, float _t6, float _t7, double _t8, double _t9, double _t10, float _t11, float _t12, float _t13, float _t14, float _t15, float _t16, float _t17, float _t18)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)), const_cast<void*>(reinterpret_cast<const void*>(&_t9)), const_cast<void*>(reinterpret_cast<const void*>(&_t10)), const_cast<void*>(reinterpret_cast<const void*>(&_t11)), const_cast<void*>(reinterpret_cast<const void*>(&_t12)), const_cast<void*>(reinterpret_cast<const void*>(&_t13)), const_cast<void*>(reinterpret_cast<const void*>(&_t14)), const_cast<void*>(reinterpret_cast<const void*>(&_t15)), const_cast<void*>(reinterpret_cast<const void*>(&_t16)), const_cast<void*>(reinterpret_cast<const void*>(&_t17)), const_cast<void*>(reinterpret_cast<const void*>(&_t18)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QGCHilLink::sensorHilGpsChanged(quint64 _t1, double _t2, double _t3, double _t4, int _t5, float _t6, float _t7, float _t8, float _t9, float _t10, float _t11, float _t12, int _t13)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)), const_cast<void*>(reinterpret_cast<const void*>(&_t9)), const_cast<void*>(reinterpret_cast<const void*>(&_t10)), const_cast<void*>(reinterpret_cast<const void*>(&_t11)), const_cast<void*>(reinterpret_cast<const void*>(&_t12)), const_cast<void*>(reinterpret_cast<const void*>(&_t13)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QGCHilLink::sensorHilRawImuChanged(quint64 _t1, float _t2, float _t3, float _t4, float _t5, float _t6, float _t7, float _t8, float _t9, float _t10, float _t11, float _t12, float _t13, float _t14, quint32 _t15)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)), const_cast<void*>(reinterpret_cast<const void*>(&_t9)), const_cast<void*>(reinterpret_cast<const void*>(&_t10)), const_cast<void*>(reinterpret_cast<const void*>(&_t11)), const_cast<void*>(reinterpret_cast<const void*>(&_t12)), const_cast<void*>(reinterpret_cast<const void*>(&_t13)), const_cast<void*>(reinterpret_cast<const void*>(&_t14)), const_cast<void*>(reinterpret_cast<const void*>(&_t15)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QGCHilLink::sensorHilOpticalFlowChanged(quint64 _t1, qint16 _t2, qint16 _t3, float _t4, float _t5, quint8 _t6, float _t7)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QGCHilLink::remoteChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QGCHilLink::statusMessage(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QGCHilLink::airframeChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void QGCHilLink::versionChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void QGCHilLink::versionChanged(const int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void QGCHilLink::sensorHilChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}
QT_END_MOC_NAMESPACE
