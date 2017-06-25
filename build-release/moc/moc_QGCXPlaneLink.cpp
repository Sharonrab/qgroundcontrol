/****************************************************************************
** Meta object code from reading C++ file 'QGCXPlaneLink.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/comm/QGCXPlaneLink.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCXPlaneLink.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QGCXPlaneLink_t {
    QByteArrayData data[48];
    char stringdata[461];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCXPlaneLink_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCXPlaneLink_t qt_meta_stringdata_QGCXPlaneLink = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QGCXPlaneLink"
QT_MOC_LITERAL(1, 14, 7), // "setPort"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 4), // "port"
QT_MOC_LITERAL(4, 28, 13), // "setRemoteHost"
QT_MOC_LITERAL(5, 42, 4), // "host"
QT_MOC_LITERAL(6, 47, 14), // "updateControls"
QT_MOC_LITERAL(7, 62, 4), // "time"
QT_MOC_LITERAL(8, 67, 12), // "rollAilerons"
QT_MOC_LITERAL(9, 80, 13), // "pitchElevator"
QT_MOC_LITERAL(10, 94, 9), // "yawRudder"
QT_MOC_LITERAL(11, 104, 8), // "throttle"
QT_MOC_LITERAL(12, 113, 10), // "systemMode"
QT_MOC_LITERAL(13, 124, 7), // "navMode"
QT_MOC_LITERAL(14, 132, 15), // "updateActuators"
QT_MOC_LITERAL(15, 148, 4), // "act1"
QT_MOC_LITERAL(16, 153, 4), // "act2"
QT_MOC_LITERAL(17, 158, 4), // "act3"
QT_MOC_LITERAL(18, 163, 4), // "act4"
QT_MOC_LITERAL(19, 168, 4), // "act5"
QT_MOC_LITERAL(20, 173, 4), // "act6"
QT_MOC_LITERAL(21, 178, 4), // "act7"
QT_MOC_LITERAL(22, 183, 4), // "act8"
QT_MOC_LITERAL(23, 188, 10), // "setVersion"
QT_MOC_LITERAL(24, 199, 7), // "version"
QT_MOC_LITERAL(25, 207, 15), // "enableSensorHIL"
QT_MOC_LITERAL(26, 223, 6), // "enable"
QT_MOC_LITERAL(27, 230, 12), // "processError"
QT_MOC_LITERAL(28, 243, 22), // "QProcess::ProcessError"
QT_MOC_LITERAL(29, 266, 3), // "err"
QT_MOC_LITERAL(30, 270, 9), // "readBytes"
QT_MOC_LITERAL(31, 280, 10), // "writeBytes"
QT_MOC_LITERAL(32, 291, 11), // "const char*"
QT_MOC_LITERAL(33, 303, 4), // "data"
QT_MOC_LITERAL(34, 308, 6), // "length"
QT_MOC_LITERAL(35, 315, 17), // "connectSimulation"
QT_MOC_LITERAL(36, 333, 20), // "disconnectSimulation"
QT_MOC_LITERAL(37, 354, 14), // "selectAirframe"
QT_MOC_LITERAL(38, 369, 8), // "airframe"
QT_MOC_LITERAL(39, 378, 19), // "setPositionAttitude"
QT_MOC_LITERAL(40, 398, 3), // "lat"
QT_MOC_LITERAL(41, 402, 3), // "lon"
QT_MOC_LITERAL(42, 406, 3), // "alt"
QT_MOC_LITERAL(43, 410, 4), // "roll"
QT_MOC_LITERAL(44, 415, 5), // "pitch"
QT_MOC_LITERAL(45, 421, 3), // "yaw"
QT_MOC_LITERAL(46, 425, 17), // "setRandomPosition"
QT_MOC_LITERAL(47, 443, 17) // "setRandomAttitude"

    },
    "QGCXPlaneLink\0setPort\0\0port\0setRemoteHost\0"
    "host\0updateControls\0time\0rollAilerons\0"
    "pitchElevator\0yawRudder\0throttle\0"
    "systemMode\0navMode\0updateActuators\0"
    "act1\0act2\0act3\0act4\0act5\0act6\0act7\0"
    "act8\0setVersion\0version\0enableSensorHIL\0"
    "enable\0processError\0QProcess::ProcessError\0"
    "err\0readBytes\0writeBytes\0const char*\0"
    "data\0length\0connectSimulation\0"
    "disconnectSimulation\0selectAirframe\0"
    "airframe\0setPositionAttitude\0lat\0lon\0"
    "alt\0roll\0pitch\0yaw\0setRandomPosition\0"
    "setRandomAttitude"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCXPlaneLink[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x0a /* Public */,
       4,    1,   97,    2, 0x0a /* Public */,
       6,    7,  100,    2, 0x0a /* Public */,
      14,    9,  115,    2, 0x0a /* Public */,
      23,    1,  134,    2, 0x0a /* Public */,
      23,    1,  137,    2, 0x0a /* Public */,
      25,    1,  140,    2, 0x0a /* Public */,
      27,    1,  143,    2, 0x0a /* Public */,
      30,    0,  146,    2, 0x0a /* Public */,
      31,    2,  147,    2, 0x0a /* Public */,
      35,    0,  152,    2, 0x0a /* Public */,
      36,    0,  153,    2, 0x0a /* Public */,
      37,    1,  154,    2, 0x0a /* Public */,
      39,    6,  157,    2, 0x0a /* Public */,
      46,    0,  170,    2, 0x0a /* Public */,
      47,    0,  171,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::UChar, QMetaType::UChar,    7,    8,    9,   10,   11,   12,   13,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,    7,   15,   16,   17,   18,   19,   20,   21,   22,
    QMetaType::Void, QMetaType::QString,   24,
    QMetaType::Void, QMetaType::UInt,   24,
    QMetaType::Void, QMetaType::Bool,   26,
    QMetaType::Void, 0x80000000 | 28,   29,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 32, QMetaType::LongLong,   33,   34,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::QString,   38,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,   40,   41,   42,   43,   44,   45,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QGCXPlaneLink::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGCXPlaneLink *_t = static_cast<QGCXPlaneLink *>(_o);
        switch (_id) {
        case 0: _t->setPort((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setRemoteHost((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->updateControls((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< quint8(*)>(_a[6])),(*reinterpret_cast< quint8(*)>(_a[7]))); break;
        case 3: _t->updateActuators((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7])),(*reinterpret_cast< float(*)>(_a[8])),(*reinterpret_cast< float(*)>(_a[9]))); break;
        case 4: _t->setVersion((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->setVersion((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 6: _t->enableSensorHIL((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->processError((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        case 8: _t->readBytes(); break;
        case 9: _t->writeBytes((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 10: { bool _r = _t->connectSimulation();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->disconnectSimulation();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: _t->selectAirframe((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->setPositionAttitude((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6]))); break;
        case 14: _t->setRandomPosition(); break;
        case 15: _t->setRandomAttitude(); break;
        default: ;
        }
    }
}

const QMetaObject QGCXPlaneLink::staticMetaObject = {
    { &QGCHilLink::staticMetaObject, qt_meta_stringdata_QGCXPlaneLink.data,
      qt_meta_data_QGCXPlaneLink,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QGCXPlaneLink::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCXPlaneLink::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QGCXPlaneLink.stringdata))
        return static_cast<void*>(const_cast< QGCXPlaneLink*>(this));
    return QGCHilLink::qt_metacast(_clname);
}

int QGCXPlaneLink::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCHilLink::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
