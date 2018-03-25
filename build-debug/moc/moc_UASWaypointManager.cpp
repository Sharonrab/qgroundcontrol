/****************************************************************************
** Meta object code from reading C++ file 'UASWaypointManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/uas/UASWaypointManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UASWaypointManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_UASWaypointManager_t {
    QByteArrayData data[49];
    char stringdata[697];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UASWaypointManager_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UASWaypointManager_t qt_meta_stringdata_UASWaypointManager = {
    {
QT_MOC_LITERAL(0, 0, 18), // "UASWaypointManager"
QT_MOC_LITERAL(1, 19, 27), // "waypointEditableListChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 5), // "uasid"
QT_MOC_LITERAL(4, 54, 23), // "waypointEditableChanged"
QT_MOC_LITERAL(5, 78, 9), // "Waypoint*"
QT_MOC_LITERAL(6, 88, 2), // "wp"
QT_MOC_LITERAL(7, 91, 27), // "waypointViewOnlyListChanged"
QT_MOC_LITERAL(8, 119, 23), // "waypointViewOnlyChanged"
QT_MOC_LITERAL(9, 143, 22), // "currentWaypointChanged"
QT_MOC_LITERAL(10, 166, 18), // "updateStatusString"
QT_MOC_LITERAL(11, 185, 23), // "waypointDistanceChanged"
QT_MOC_LITERAL(12, 209, 8), // "distance"
QT_MOC_LITERAL(13, 218, 10), // "loadWPFile"
QT_MOC_LITERAL(14, 229, 19), // "readGlobalWPFromUAS"
QT_MOC_LITERAL(15, 249, 5), // "value"
QT_MOC_LITERAL(16, 255, 19), // "_startProtocolTimer"
QT_MOC_LITERAL(17, 275, 18), // "_stopProtocolTimer"
QT_MOC_LITERAL(18, 294, 7), // "timeout"
QT_MOC_LITERAL(19, 302, 19), // "addWaypointEditable"
QT_MOC_LITERAL(20, 322, 18), // "enforceFirstActive"
QT_MOC_LITERAL(21, 341, 19), // "addWaypointViewOnly"
QT_MOC_LITERAL(22, 361, 14), // "createWaypoint"
QT_MOC_LITERAL(23, 376, 8), // "createCP"
QT_MOC_LITERAL(24, 385, 14), // "removeWaypoint"
QT_MOC_LITERAL(25, 400, 3), // "seq"
QT_MOC_LITERAL(26, 404, 12), // "moveWaypoint"
QT_MOC_LITERAL(27, 417, 7), // "cur_seq"
QT_MOC_LITERAL(28, 425, 7), // "new_seq"
QT_MOC_LITERAL(29, 433, 13), // "saveWaypoints"
QT_MOC_LITERAL(30, 447, 8), // "saveFile"
QT_MOC_LITERAL(31, 456, 13), // "loadWaypoints"
QT_MOC_LITERAL(32, 470, 8), // "loadFile"
QT_MOC_LITERAL(33, 479, 22), // "notifyOfChangeEditable"
QT_MOC_LITERAL(34, 502, 22), // "notifyOfChangeViewOnly"
QT_MOC_LITERAL(35, 525, 26), // "handleLocalPositionChanged"
QT_MOC_LITERAL(36, 552, 13), // "UASInterface*"
QT_MOC_LITERAL(37, 566, 3), // "mav"
QT_MOC_LITERAL(38, 570, 1), // "x"
QT_MOC_LITERAL(39, 572, 1), // "y"
QT_MOC_LITERAL(40, 574, 1), // "z"
QT_MOC_LITERAL(41, 576, 4), // "time"
QT_MOC_LITERAL(42, 581, 27), // "handleGlobalPositionChanged"
QT_MOC_LITERAL(43, 609, 3), // "lat"
QT_MOC_LITERAL(44, 613, 3), // "lon"
QT_MOC_LITERAL(45, 617, 7), // "altAMSL"
QT_MOC_LITERAL(46, 625, 8), // "altWGS84"
QT_MOC_LITERAL(47, 634, 31), // "_startProtocolTimerOnThisThread"
QT_MOC_LITERAL(48, 666, 30) // "_stopProtocolTimerOnThisThread"

    },
    "UASWaypointManager\0waypointEditableListChanged\0"
    "\0uasid\0waypointEditableChanged\0Waypoint*\0"
    "wp\0waypointViewOnlyListChanged\0"
    "waypointViewOnlyChanged\0currentWaypointChanged\0"
    "updateStatusString\0waypointDistanceChanged\0"
    "distance\0loadWPFile\0readGlobalWPFromUAS\0"
    "value\0_startProtocolTimer\0_stopProtocolTimer\0"
    "timeout\0addWaypointEditable\0"
    "enforceFirstActive\0addWaypointViewOnly\0"
    "createWaypoint\0createCP\0removeWaypoint\0"
    "seq\0moveWaypoint\0cur_seq\0new_seq\0"
    "saveWaypoints\0saveFile\0loadWaypoints\0"
    "loadFile\0notifyOfChangeEditable\0"
    "notifyOfChangeViewOnly\0"
    "handleLocalPositionChanged\0UASInterface*\0"
    "mav\0x\0y\0z\0time\0handleGlobalPositionChanged\0"
    "lat\0lon\0altAMSL\0altWGS84\0"
    "_startProtocolTimerOnThisThread\0"
    "_stopProtocolTimerOnThisThread"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UASWaypointManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      31,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      13,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  169,    2, 0x06 /* Public */,
       1,    1,  170,    2, 0x06 /* Public */,
       4,    2,  173,    2, 0x06 /* Public */,
       7,    0,  178,    2, 0x06 /* Public */,
       7,    1,  179,    2, 0x06 /* Public */,
       8,    2,  182,    2, 0x06 /* Public */,
       9,    1,  187,    2, 0x06 /* Public */,
      10,    1,  190,    2, 0x06 /* Public */,
      11,    1,  193,    2, 0x06 /* Public */,
      13,    0,  196,    2, 0x06 /* Public */,
      14,    1,  197,    2, 0x06 /* Public */,
      16,    0,  200,    2, 0x06 /* Public */,
      17,    0,  201,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      18,    0,  202,    2, 0x0a /* Public */,
      19,    2,  203,    2, 0x0a /* Public */,
      19,    1,  208,    2, 0x2a /* Public | MethodCloned */,
      21,    1,  211,    2, 0x0a /* Public */,
      22,    1,  214,    2, 0x0a /* Public */,
      22,    0,  217,    2, 0x2a /* Public | MethodCloned */,
      23,    1,  218,    2, 0x0a /* Public */,
      23,    0,  221,    2, 0x2a /* Public | MethodCloned */,
      24,    1,  222,    2, 0x0a /* Public */,
      26,    2,  225,    2, 0x0a /* Public */,
      29,    1,  230,    2, 0x0a /* Public */,
      31,    1,  233,    2, 0x0a /* Public */,
      33,    1,  236,    2, 0x0a /* Public */,
      34,    1,  239,    2, 0x0a /* Public */,
      35,    5,  242,    2, 0x0a /* Public */,
      42,    6,  253,    2, 0x0a /* Public */,
      47,    0,  266,    2, 0x08 /* Private */,
      48,    0,  267,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 5,    3,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 5,    3,    6,
    QMetaType::Void, QMetaType::UShort,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Double,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Bool,    6,   20,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    0x80000000 | 5, QMetaType::Bool,   20,
    0x80000000 | 5,
    0x80000000 | 5, QMetaType::Bool,   20,
    0x80000000 | 5,
    QMetaType::Int, QMetaType::UShort,   25,
    QMetaType::Void, QMetaType::UShort, QMetaType::UShort,   27,   28,
    QMetaType::Void, QMetaType::QString,   30,
    QMetaType::Void, QMetaType::QString,   32,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 36, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::ULongLong,   37,   38,   39,   40,   41,
    QMetaType::Void, 0x80000000 | 36, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::ULongLong,   37,   43,   44,   45,   46,   41,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void UASWaypointManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UASWaypointManager *_t = static_cast<UASWaypointManager *>(_o);
        switch (_id) {
        case 0: _t->waypointEditableListChanged(); break;
        case 1: _t->waypointEditableListChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->waypointEditableChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Waypoint*(*)>(_a[2]))); break;
        case 3: _t->waypointViewOnlyListChanged(); break;
        case 4: _t->waypointViewOnlyListChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->waypointViewOnlyChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Waypoint*(*)>(_a[2]))); break;
        case 6: _t->currentWaypointChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 7: _t->updateStatusString((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->waypointDistanceChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: _t->loadWPFile(); break;
        case 10: _t->readGlobalWPFromUAS((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->_startProtocolTimer(); break;
        case 12: _t->_stopProtocolTimer(); break;
        case 13: _t->timeout(); break;
        case 14: _t->addWaypointEditable((*reinterpret_cast< Waypoint*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 15: _t->addWaypointEditable((*reinterpret_cast< Waypoint*(*)>(_a[1]))); break;
        case 16: _t->addWaypointViewOnly((*reinterpret_cast< Waypoint*(*)>(_a[1]))); break;
        case 17: { Waypoint* _r = _t->createWaypoint((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Waypoint**>(_a[0]) = _r; }  break;
        case 18: { Waypoint* _r = _t->createWaypoint();
            if (_a[0]) *reinterpret_cast< Waypoint**>(_a[0]) = _r; }  break;
        case 19: { Waypoint* _r = _t->createCP((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Waypoint**>(_a[0]) = _r; }  break;
        case 20: { Waypoint* _r = _t->createCP();
            if (_a[0]) *reinterpret_cast< Waypoint**>(_a[0]) = _r; }  break;
        case 21: { int _r = _t->removeWaypoint((*reinterpret_cast< quint16(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 22: _t->moveWaypoint((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 23: _t->saveWaypoints((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 24: _t->loadWaypoints((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 25: _t->notifyOfChangeEditable((*reinterpret_cast< Waypoint*(*)>(_a[1]))); break;
        case 26: _t->notifyOfChangeViewOnly((*reinterpret_cast< Waypoint*(*)>(_a[1]))); break;
        case 27: _t->handleLocalPositionChanged((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< quint64(*)>(_a[5]))); break;
        case 28: _t->handleGlobalPositionChanged((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< quint64(*)>(_a[6]))); break;
        case 29: _t->_startProtocolTimerOnThisThread(); break;
        case 30: _t->_stopProtocolTimerOnThisThread(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Waypoint* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Waypoint* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Waypoint* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Waypoint* >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Waypoint* >(); break;
            }
            break;
        case 25:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Waypoint* >(); break;
            }
            break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Waypoint* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (UASWaypointManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASWaypointManager::waypointEditableListChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (UASWaypointManager::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASWaypointManager::waypointEditableListChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (UASWaypointManager::*_t)(int , Waypoint * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASWaypointManager::waypointEditableChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (UASWaypointManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASWaypointManager::waypointViewOnlyListChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (UASWaypointManager::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASWaypointManager::waypointViewOnlyListChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (UASWaypointManager::*_t)(int , Waypoint * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASWaypointManager::waypointViewOnlyChanged)) {
                *result = 5;
            }
        }
        {
            typedef void (UASWaypointManager::*_t)(quint16 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASWaypointManager::currentWaypointChanged)) {
                *result = 6;
            }
        }
        {
            typedef void (UASWaypointManager::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASWaypointManager::updateStatusString)) {
                *result = 7;
            }
        }
        {
            typedef void (UASWaypointManager::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASWaypointManager::waypointDistanceChanged)) {
                *result = 8;
            }
        }
        {
            typedef void (UASWaypointManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASWaypointManager::loadWPFile)) {
                *result = 9;
            }
        }
        {
            typedef void (UASWaypointManager::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASWaypointManager::readGlobalWPFromUAS)) {
                *result = 10;
            }
        }
        {
            typedef void (UASWaypointManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASWaypointManager::_startProtocolTimer)) {
                *result = 11;
            }
        }
        {
            typedef void (UASWaypointManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASWaypointManager::_stopProtocolTimer)) {
                *result = 12;
            }
        }
    }
}

const QMetaObject UASWaypointManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UASWaypointManager.data,
      qt_meta_data_UASWaypointManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *UASWaypointManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UASWaypointManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_UASWaypointManager.stringdata))
        return static_cast<void*>(const_cast< UASWaypointManager*>(this));
    return QObject::qt_metacast(_clname);
}

int UASWaypointManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 31)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 31;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 31)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 31;
    }
    return _id;
}

// SIGNAL 0
void UASWaypointManager::waypointEditableListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void UASWaypointManager::waypointEditableListChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void UASWaypointManager::waypointEditableChanged(int _t1, Waypoint * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void UASWaypointManager::waypointViewOnlyListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void UASWaypointManager::waypointViewOnlyListChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void UASWaypointManager::waypointViewOnlyChanged(int _t1, Waypoint * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void UASWaypointManager::currentWaypointChanged(quint16 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void UASWaypointManager::updateStatusString(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void UASWaypointManager::waypointDistanceChanged(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void UASWaypointManager::loadWPFile()
{
    QMetaObject::activate(this, &staticMetaObject, 9, Q_NULLPTR);
}

// SIGNAL 10
void UASWaypointManager::readGlobalWPFromUAS(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void UASWaypointManager::_startProtocolTimer()
{
    QMetaObject::activate(this, &staticMetaObject, 11, Q_NULLPTR);
}

// SIGNAL 12
void UASWaypointManager::_stopProtocolTimer()
{
    QMetaObject::activate(this, &staticMetaObject, 12, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
