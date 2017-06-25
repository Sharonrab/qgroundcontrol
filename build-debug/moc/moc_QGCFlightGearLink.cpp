/****************************************************************************
** Meta object code from reading C++ file 'QGCFlightGearLink.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/comm/QGCFlightGearLink.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCFlightGearLink.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QGCFlightGearLink_t {
    QByteArrayData data[48];
    char stringdata[534];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCFlightGearLink_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCFlightGearLink_t qt_meta_stringdata_QGCFlightGearLink = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QGCFlightGearLink"
QT_MOC_LITERAL(1, 18, 29), // "showCriticalMessageFromThread"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 5), // "title"
QT_MOC_LITERAL(4, 55, 7), // "message"
QT_MOC_LITERAL(5, 63, 7), // "setPort"
QT_MOC_LITERAL(6, 71, 4), // "port"
QT_MOC_LITERAL(7, 76, 13), // "setRemoteHost"
QT_MOC_LITERAL(8, 90, 4), // "host"
QT_MOC_LITERAL(9, 95, 14), // "updateControls"
QT_MOC_LITERAL(10, 110, 4), // "time"
QT_MOC_LITERAL(11, 115, 12), // "rollAilerons"
QT_MOC_LITERAL(12, 128, 13), // "pitchElevator"
QT_MOC_LITERAL(13, 142, 9), // "yawRudder"
QT_MOC_LITERAL(14, 152, 8), // "throttle"
QT_MOC_LITERAL(15, 161, 10), // "systemMode"
QT_MOC_LITERAL(16, 172, 7), // "navMode"
QT_MOC_LITERAL(17, 180, 15), // "updateActuators"
QT_MOC_LITERAL(18, 196, 4), // "act1"
QT_MOC_LITERAL(19, 201, 4), // "act2"
QT_MOC_LITERAL(20, 206, 4), // "act3"
QT_MOC_LITERAL(21, 211, 4), // "act4"
QT_MOC_LITERAL(22, 216, 4), // "act5"
QT_MOC_LITERAL(23, 221, 4), // "act6"
QT_MOC_LITERAL(24, 226, 4), // "act7"
QT_MOC_LITERAL(25, 231, 4), // "act8"
QT_MOC_LITERAL(26, 236, 10), // "setVersion"
QT_MOC_LITERAL(27, 247, 7), // "version"
QT_MOC_LITERAL(28, 255, 14), // "selectAirframe"
QT_MOC_LITERAL(29, 270, 8), // "airframe"
QT_MOC_LITERAL(30, 279, 15), // "enableSensorHIL"
QT_MOC_LITERAL(31, 295, 6), // "enable"
QT_MOC_LITERAL(32, 302, 9), // "readBytes"
QT_MOC_LITERAL(33, 312, 10), // "writeBytes"
QT_MOC_LITERAL(34, 323, 11), // "const char*"
QT_MOC_LITERAL(35, 335, 4), // "data"
QT_MOC_LITERAL(36, 340, 6), // "length"
QT_MOC_LITERAL(37, 347, 17), // "connectSimulation"
QT_MOC_LITERAL(38, 365, 20), // "disconnectSimulation"
QT_MOC_LITERAL(39, 386, 19), // "setStartupArguments"
QT_MOC_LITERAL(40, 406, 16), // "startupArguments"
QT_MOC_LITERAL(41, 423, 18), // "setBarometerOffset"
QT_MOC_LITERAL(42, 442, 18), // "barometerOffsetkPa"
QT_MOC_LITERAL(43, 461, 12), // "processError"
QT_MOC_LITERAL(44, 474, 22), // "QProcess::ProcessError"
QT_MOC_LITERAL(45, 497, 3), // "err"
QT_MOC_LITERAL(46, 501, 16), // "_printFgfsOutput"
QT_MOC_LITERAL(47, 518, 15) // "_printFgfsError"

    },
    "QGCFlightGearLink\0showCriticalMessageFromThread\0"
    "\0title\0message\0setPort\0port\0setRemoteHost\0"
    "host\0updateControls\0time\0rollAilerons\0"
    "pitchElevator\0yawRudder\0throttle\0"
    "systemMode\0navMode\0updateActuators\0"
    "act1\0act2\0act3\0act4\0act5\0act6\0act7\0"
    "act8\0setVersion\0version\0selectAirframe\0"
    "airframe\0enableSensorHIL\0enable\0"
    "readBytes\0writeBytes\0const char*\0data\0"
    "length\0connectSimulation\0disconnectSimulation\0"
    "setStartupArguments\0startupArguments\0"
    "setBarometerOffset\0barometerOffsetkPa\0"
    "processError\0QProcess::ProcessError\0"
    "err\0_printFgfsOutput\0_printFgfsError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCFlightGearLink[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   99,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,  104,    2, 0x0a /* Public */,
       7,    1,  107,    2, 0x0a /* Public */,
       9,    7,  110,    2, 0x0a /* Public */,
      17,    9,  125,    2, 0x0a /* Public */,
      26,    1,  144,    2, 0x0a /* Public */,
      28,    1,  147,    2, 0x0a /* Public */,
      30,    1,  150,    2, 0x0a /* Public */,
      32,    0,  153,    2, 0x0a /* Public */,
      33,    2,  154,    2, 0x0a /* Public */,
      37,    0,  159,    2, 0x0a /* Public */,
      38,    0,  160,    2, 0x0a /* Public */,
      39,    1,  161,    2, 0x0a /* Public */,
      41,    1,  164,    2, 0x0a /* Public */,
      43,    1,  167,    2, 0x0a /* Public */,
      46,    0,  170,    2, 0x08 /* Private */,
      47,    0,  171,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::UChar, QMetaType::UChar,   10,   11,   12,   13,   14,   15,   16,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,   10,   18,   19,   20,   21,   22,   23,   24,   25,
    QMetaType::Void, QMetaType::QString,   27,
    QMetaType::Void, QMetaType::QString,   29,
    QMetaType::Void, QMetaType::Bool,   31,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 34, QMetaType::LongLong,   35,   36,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::QString,   40,
    QMetaType::Void, QMetaType::Float,   42,
    QMetaType::Void, 0x80000000 | 44,   45,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QGCFlightGearLink::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGCFlightGearLink *_t = static_cast<QGCFlightGearLink *>(_o);
        switch (_id) {
        case 0: _t->showCriticalMessageFromThread((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->setPort((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setRemoteHost((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->updateControls((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< quint8(*)>(_a[6])),(*reinterpret_cast< quint8(*)>(_a[7]))); break;
        case 4: _t->updateActuators((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7])),(*reinterpret_cast< float(*)>(_a[8])),(*reinterpret_cast< float(*)>(_a[9]))); break;
        case 5: _t->setVersion((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->selectAirframe((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->enableSensorHIL((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->readBytes(); break;
        case 9: _t->writeBytes((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 10: { bool _r = _t->connectSimulation();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->disconnectSimulation();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: _t->setStartupArguments((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->setBarometerOffset((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 14: _t->processError((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        case 15: _t->_printFgfsOutput(); break;
        case 16: _t->_printFgfsError(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QGCFlightGearLink::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGCFlightGearLink::showCriticalMessageFromThread)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject QGCFlightGearLink::staticMetaObject = {
    { &QGCHilLink::staticMetaObject, qt_meta_stringdata_QGCFlightGearLink.data,
      qt_meta_data_QGCFlightGearLink,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QGCFlightGearLink::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCFlightGearLink::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QGCFlightGearLink.stringdata))
        return static_cast<void*>(const_cast< QGCFlightGearLink*>(this));
    return QGCHilLink::qt_metacast(_clname);
}

int QGCFlightGearLink::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCHilLink::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void QGCFlightGearLink::showCriticalMessageFromThread(const QString & _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
