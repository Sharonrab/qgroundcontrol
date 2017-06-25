/****************************************************************************
** Meta object code from reading C++ file 'UASView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/uas/UASView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UASView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_UASView_t {
    QByteArrayData data[62];
    char stringdata[612];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UASView_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UASView_t qt_meta_stringdata_UASView = {
    {
QT_MOC_LITERAL(0, 0, 7), // "UASView"
QT_MOC_LITERAL(1, 8, 10), // "updateName"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 4), // "name"
QT_MOC_LITERAL(4, 25, 16), // "receiveHeartbeat"
QT_MOC_LITERAL(5, 42, 13), // "UASInterface*"
QT_MOC_LITERAL(6, 56, 3), // "uas"
QT_MOC_LITERAL(7, 60, 12), // "updateThrust"
QT_MOC_LITERAL(8, 73, 6), // "thrust"
QT_MOC_LITERAL(9, 80, 13), // "updateBattery"
QT_MOC_LITERAL(10, 94, 7), // "voltage"
QT_MOC_LITERAL(11, 102, 7), // "current"
QT_MOC_LITERAL(12, 110, 7), // "percent"
QT_MOC_LITERAL(13, 118, 7), // "seconds"
QT_MOC_LITERAL(14, 126, 19), // "updateLocalPosition"
QT_MOC_LITERAL(15, 146, 1), // "x"
QT_MOC_LITERAL(16, 148, 1), // "y"
QT_MOC_LITERAL(17, 150, 1), // "z"
QT_MOC_LITERAL(18, 152, 4), // "usec"
QT_MOC_LITERAL(19, 157, 20), // "updateGlobalPosition"
QT_MOC_LITERAL(20, 178, 3), // "lon"
QT_MOC_LITERAL(21, 182, 3), // "lat"
QT_MOC_LITERAL(22, 186, 7), // "altAMSL"
QT_MOC_LITERAL(23, 194, 8), // "altWGS84"
QT_MOC_LITERAL(24, 203, 11), // "updateSpeed"
QT_MOC_LITERAL(25, 215, 11), // "updateState"
QT_MOC_LITERAL(26, 227, 8), // "uasState"
QT_MOC_LITERAL(27, 236, 16), // "stateDescription"
QT_MOC_LITERAL(28, 253, 10), // "updateMode"
QT_MOC_LITERAL(29, 264, 5), // "sysId"
QT_MOC_LITERAL(30, 270, 6), // "status"
QT_MOC_LITERAL(31, 277, 11), // "description"
QT_MOC_LITERAL(32, 289, 10), // "updateLoad"
QT_MOC_LITERAL(33, 300, 4), // "load"
QT_MOC_LITERAL(34, 305, 18), // "triggerUASDeletion"
QT_MOC_LITERAL(35, 324, 7), // "refresh"
QT_MOC_LITERAL(36, 332, 11), // "setWaypoint"
QT_MOC_LITERAL(37, 344, 5), // "uasId"
QT_MOC_LITERAL(38, 350, 2), // "id"
QT_MOC_LITERAL(39, 353, 3), // "yaw"
QT_MOC_LITERAL(40, 357, 12), // "autocontinue"
QT_MOC_LITERAL(41, 370, 22), // "currentWaypointUpdated"
QT_MOC_LITERAL(42, 393, 8), // "waypoint"
QT_MOC_LITERAL(43, 402, 14), // "selectWaypoint"
QT_MOC_LITERAL(44, 417, 13), // "setSystemType"
QT_MOC_LITERAL(45, 431, 10), // "systemType"
QT_MOC_LITERAL(46, 442, 14), // "setUASasActive"
QT_MOC_LITERAL(47, 457, 15), // "updateActiveUAS"
QT_MOC_LITERAL(48, 473, 6), // "active"
QT_MOC_LITERAL(49, 480, 16), // "heartbeatTimeout"
QT_MOC_LITERAL(50, 497, 7), // "timeout"
QT_MOC_LITERAL(51, 505, 2), // "ms"
QT_MOC_LITERAL(52, 508, 6), // "rename"
QT_MOC_LITERAL(53, 515, 14), // "selectAirframe"
QT_MOC_LITERAL(54, 530, 15), // "setBatterySpecs"
QT_MOC_LITERAL(55, 546, 14), // "showStatusText"
QT_MOC_LITERAL(56, 561, 5), // "uasid"
QT_MOC_LITERAL(57, 567, 11), // "componentid"
QT_MOC_LITERAL(58, 579, 8), // "severity"
QT_MOC_LITERAL(59, 588, 4), // "text"
QT_MOC_LITERAL(60, 593, 13), // "updateNavMode"
QT_MOC_LITERAL(61, 607, 4) // "mode"

    },
    "UASView\0updateName\0\0name\0receiveHeartbeat\0"
    "UASInterface*\0uas\0updateThrust\0thrust\0"
    "updateBattery\0voltage\0current\0percent\0"
    "seconds\0updateLocalPosition\0x\0y\0z\0"
    "usec\0updateGlobalPosition\0lon\0lat\0"
    "altAMSL\0altWGS84\0updateSpeed\0updateState\0"
    "uasState\0stateDescription\0updateMode\0"
    "sysId\0status\0description\0updateLoad\0"
    "load\0triggerUASDeletion\0refresh\0"
    "setWaypoint\0uasId\0id\0yaw\0autocontinue\0"
    "currentWaypointUpdated\0waypoint\0"
    "selectWaypoint\0setSystemType\0systemType\0"
    "setUASasActive\0updateActiveUAS\0active\0"
    "heartbeatTimeout\0timeout\0ms\0rename\0"
    "selectAirframe\0setBatterySpecs\0"
    "showStatusText\0uasid\0componentid\0"
    "severity\0text\0updateNavMode\0mode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UASView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  134,    2, 0x0a /* Public */,
       4,    1,  137,    2, 0x0a /* Public */,
       7,    2,  140,    2, 0x0a /* Public */,
       9,    5,  145,    2, 0x0a /* Public */,
      14,    5,  156,    2, 0x0a /* Public */,
      19,    6,  167,    2, 0x0a /* Public */,
      24,    5,  180,    2, 0x0a /* Public */,
      25,    3,  191,    2, 0x0a /* Public */,
      28,    3,  198,    2, 0x0a /* Public */,
      32,    2,  205,    2, 0x0a /* Public */,
      34,    0,  210,    2, 0x0a /* Public */,
      35,    0,  211,    2, 0x0a /* Public */,
      36,    8,  212,    2, 0x0a /* Public */,
      41,    1,  229,    2, 0x0a /* Public */,
      43,    2,  232,    2, 0x0a /* Public */,
      44,    2,  237,    2, 0x0a /* Public */,
      46,    1,  242,    2, 0x0a /* Public */,
      47,    2,  245,    2, 0x0a /* Public */,
      49,    2,  250,    2, 0x0a /* Public */,
      52,    0,  255,    2, 0x0a /* Public */,
      53,    0,  256,    2, 0x0a /* Public */,
      54,    0,  257,    2, 0x0a /* Public */,
      55,    4,  258,    2, 0x0a /* Public */,
      60,    3,  267,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Double,    6,    8,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Int,    6,   10,   11,   12,   13,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::ULongLong,    2,   15,   16,   17,   18,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::ULongLong,    2,   20,   21,   22,   23,   18,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::ULongLong,    2,   15,   16,   17,   18,
    QMetaType::Void, 0x80000000 | 5, QMetaType::QString, QMetaType::QString,    2,   26,   27,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString,   29,   30,   31,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Double,    6,   33,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Bool, QMetaType::Bool,   37,   38,   15,   16,   17,   39,   40,   11,
    QMetaType::Void, QMetaType::UShort,   42,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   37,   38,
    QMetaType::Void, 0x80000000 | 5, QMetaType::UInt,    6,   45,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Bool,    6,   48,
    QMetaType::Void, QMetaType::Bool, QMetaType::UInt,   50,   51,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::QString,   56,   57,   58,   59,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString,   56,   61,   59,

       0        // eod
};

void UASView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UASView *_t = static_cast<UASView *>(_o);
        switch (_id) {
        case 0: _t->updateName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->receiveHeartbeat((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 2: _t->updateThrust((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 3: _t->updateBattery((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 4: _t->updateLocalPosition((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< quint64(*)>(_a[5]))); break;
        case 5: _t->updateGlobalPosition((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< quint64(*)>(_a[6]))); break;
        case 6: _t->updateSpeed((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< quint64(*)>(_a[5]))); break;
        case 7: _t->updateState((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 8: _t->updateMode((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 9: _t->updateLoad((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 10: _t->triggerUASDeletion(); break;
        case 11: _t->refresh(); break;
        case 12: _t->setWaypoint((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6])),(*reinterpret_cast< bool(*)>(_a[7])),(*reinterpret_cast< bool(*)>(_a[8]))); break;
        case 13: _t->currentWaypointUpdated((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 14: _t->selectWaypoint((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 15: _t->setSystemType((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 16: _t->setUASasActive((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->updateActiveUAS((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 18: _t->heartbeatTimeout((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 19: _t->rename(); break;
        case 20: _t->selectAirframe(); break;
        case 21: _t->setBatterySpecs(); break;
        case 22: _t->showStatusText((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 23: _t->updateNavMode((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
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
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 7:
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
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        }
    }
}

const QMetaObject UASView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UASView.data,
      qt_meta_data_UASView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *UASView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UASView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_UASView.stringdata))
        return static_cast<void*>(const_cast< UASView*>(this));
    return QWidget::qt_metacast(_clname);
}

int UASView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
