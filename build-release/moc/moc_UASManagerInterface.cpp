/****************************************************************************
** Meta object code from reading C++ file 'UASManagerInterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/uas/UASManagerInterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UASManagerInterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_UASManagerInterface_t {
    QByteArrayData data[41];
    char stringdata[469];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UASManagerInterface_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UASManagerInterface_t qt_meta_stringdata_UASManagerInterface = {
    {
QT_MOC_LITERAL(0, 0, 19), // "UASManagerInterface"
QT_MOC_LITERAL(1, 20, 10), // "UASCreated"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 13), // "UASInterface*"
QT_MOC_LITERAL(4, 46, 3), // "UAS"
QT_MOC_LITERAL(5, 50, 10), // "UASDeleted"
QT_MOC_LITERAL(6, 61, 8), // "systemId"
QT_MOC_LITERAL(7, 70, 12), // "activeUASSet"
QT_MOC_LITERAL(8, 83, 21), // "activeUASSetListIndex"
QT_MOC_LITERAL(9, 105, 9), // "listIndex"
QT_MOC_LITERAL(10, 115, 22), // "activeUASStatusChanged"
QT_MOC_LITERAL(11, 138, 6), // "active"
QT_MOC_LITERAL(12, 145, 19), // "homePositionChanged"
QT_MOC_LITERAL(13, 165, 3), // "lat"
QT_MOC_LITERAL(14, 169, 3), // "lon"
QT_MOC_LITERAL(15, 173, 3), // "alt"
QT_MOC_LITERAL(16, 177, 6), // "addUAS"
QT_MOC_LITERAL(17, 184, 9), // "removeUAS"
QT_MOC_LITERAL(18, 194, 3), // "uas"
QT_MOC_LITERAL(19, 198, 12), // "setActiveUAS"
QT_MOC_LITERAL(20, 211, 15), // "launchActiveUAS"
QT_MOC_LITERAL(21, 227, 13), // "haltActiveUAS"
QT_MOC_LITERAL(22, 241, 17), // "continueActiveUAS"
QT_MOC_LITERAL(23, 259, 15), // "returnActiveUAS"
QT_MOC_LITERAL(24, 275, 13), // "stopActiveUAS"
QT_MOC_LITERAL(25, 289, 13), // "killActiveUAS"
QT_MOC_LITERAL(26, 303, 17), // "shutdownActiveUAS"
QT_MOC_LITERAL(27, 321, 15), // "setHomePosition"
QT_MOC_LITERAL(28, 337, 24), // "setHomePositionAndNotify"
QT_MOC_LITERAL(29, 362, 24), // "setLocalNEDSafetyBorders"
QT_MOC_LITERAL(30, 387, 2), // "x1"
QT_MOC_LITERAL(31, 390, 2), // "y1"
QT_MOC_LITERAL(32, 393, 2), // "z1"
QT_MOC_LITERAL(33, 396, 2), // "x2"
QT_MOC_LITERAL(34, 399, 2), // "y2"
QT_MOC_LITERAL(35, 402, 2), // "z2"
QT_MOC_LITERAL(36, 405, 22), // "uavChangedHomePosition"
QT_MOC_LITERAL(37, 428, 3), // "uav"
QT_MOC_LITERAL(38, 432, 12), // "loadSettings"
QT_MOC_LITERAL(39, 445, 13), // "storeSettings"
QT_MOC_LITERAL(40, 459, 9) // "_shutdown"

    },
    "UASManagerInterface\0UASCreated\0\0"
    "UASInterface*\0UAS\0UASDeleted\0systemId\0"
    "activeUASSet\0activeUASSetListIndex\0"
    "listIndex\0activeUASStatusChanged\0"
    "active\0homePositionChanged\0lat\0lon\0"
    "alt\0addUAS\0removeUAS\0uas\0setActiveUAS\0"
    "launchActiveUAS\0haltActiveUAS\0"
    "continueActiveUAS\0returnActiveUAS\0"
    "stopActiveUAS\0killActiveUAS\0"
    "shutdownActiveUAS\0setHomePosition\0"
    "setHomePositionAndNotify\0"
    "setLocalNEDSafetyBorders\0x1\0y1\0z1\0x2\0"
    "y2\0z2\0uavChangedHomePosition\0uav\0"
    "loadSettings\0storeSettings\0_shutdown"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UASManagerInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  139,    2, 0x06 /* Public */,
       5,    1,  142,    2, 0x06 /* Public */,
       5,    1,  145,    2, 0x06 /* Public */,
       7,    1,  148,    2, 0x06 /* Public */,
       8,    1,  151,    2, 0x06 /* Public */,
      10,    2,  154,    2, 0x06 /* Public */,
      10,    2,  159,    2, 0x06 /* Public */,
      12,    3,  164,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    1,  171,    2, 0x0a /* Public */,
      17,    1,  174,    2, 0x0a /* Public */,
      19,    1,  177,    2, 0x0a /* Public */,
      20,    0,  180,    2, 0x0a /* Public */,
      21,    0,  181,    2, 0x0a /* Public */,
      22,    0,  182,    2, 0x0a /* Public */,
      23,    0,  183,    2, 0x0a /* Public */,
      24,    0,  184,    2, 0x0a /* Public */,
      25,    0,  185,    2, 0x0a /* Public */,
      26,    0,  186,    2, 0x0a /* Public */,
      27,    3,  187,    2, 0x0a /* Public */,
      28,    3,  194,    2, 0x0a /* Public */,
      29,    6,  201,    2, 0x0a /* Public */,
      36,    4,  214,    2, 0x0a /* Public */,
      38,    0,  223,    2, 0x0a /* Public */,
      39,    0,  224,    2, 0x0a /* Public */,
      40,    0,  225,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,   11,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    6,   11,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double,   13,   14,   15,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,   18,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::Double, QMetaType::Double, QMetaType::Double,   13,   14,   15,
    QMetaType::Bool, QMetaType::Double, QMetaType::Double, QMetaType::Double,   13,   14,   15,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,   30,   31,   32,   33,   34,   35,
    QMetaType::Void, QMetaType::Int, QMetaType::Double, QMetaType::Double, QMetaType::Double,   37,   13,   14,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void UASManagerInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UASManagerInterface *_t = static_cast<UASManagerInterface *>(_o);
        switch (_id) {
        case 0: _t->UASCreated((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 1: _t->UASDeleted((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 2: _t->UASDeleted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->activeUASSet((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 4: _t->activeUASSetListIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->activeUASStatusChanged((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 6: _t->activeUASStatusChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 7: _t->homePositionChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 8: _t->addUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 9: _t->removeUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 10: _t->setActiveUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 11: { bool _r = _t->launchActiveUAS();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->haltActiveUAS();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->continueActiveUAS();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->returnActiveUAS();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->stopActiveUAS();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: { bool _r = _t->killActiveUAS();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { bool _r = _t->shutdownActiveUAS();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: { bool _r = _t->setHomePosition((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: { bool _r = _t->setHomePositionAndNotify((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: _t->setLocalNEDSafetyBorders((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6]))); break;
        case 21: _t->uavChangedHomePosition((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 22: _t->loadSettings(); break;
        case 23: _t->storeSettings(); break;
        case 24: _t->_shutdown(); break;
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
        case 3:
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
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (UASManagerInterface::*_t)(UASInterface * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASManagerInterface::UASCreated)) {
                *result = 0;
            }
        }
        {
            typedef void (UASManagerInterface::*_t)(UASInterface * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASManagerInterface::UASDeleted)) {
                *result = 1;
            }
        }
        {
            typedef void (UASManagerInterface::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASManagerInterface::UASDeleted)) {
                *result = 2;
            }
        }
        {
            typedef void (UASManagerInterface::*_t)(UASInterface * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASManagerInterface::activeUASSet)) {
                *result = 3;
            }
        }
        {
            typedef void (UASManagerInterface::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASManagerInterface::activeUASSetListIndex)) {
                *result = 4;
            }
        }
        {
            typedef void (UASManagerInterface::*_t)(UASInterface * , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASManagerInterface::activeUASStatusChanged)) {
                *result = 5;
            }
        }
        {
            typedef void (UASManagerInterface::*_t)(int , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASManagerInterface::activeUASStatusChanged)) {
                *result = 6;
            }
        }
        {
            typedef void (UASManagerInterface::*_t)(double , double , double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASManagerInterface::homePositionChanged)) {
                *result = 7;
            }
        }
    }
}

const QMetaObject UASManagerInterface::staticMetaObject = {
    { &QGCSingleton::staticMetaObject, qt_meta_stringdata_UASManagerInterface.data,
      qt_meta_data_UASManagerInterface,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *UASManagerInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UASManagerInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_UASManagerInterface.stringdata))
        return static_cast<void*>(const_cast< UASManagerInterface*>(this));
    return QGCSingleton::qt_metacast(_clname);
}

int UASManagerInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCSingleton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
    return _id;
}

// SIGNAL 0
void UASManagerInterface::UASCreated(UASInterface * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UASManagerInterface::UASDeleted(UASInterface * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void UASManagerInterface::UASDeleted(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void UASManagerInterface::activeUASSet(UASInterface * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void UASManagerInterface::activeUASSetListIndex(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void UASManagerInterface::activeUASStatusChanged(UASInterface * _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void UASManagerInterface::activeUASStatusChanged(int _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void UASManagerInterface::homePositionChanged(double _t1, double _t2, double _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_END_MOC_NAMESPACE
