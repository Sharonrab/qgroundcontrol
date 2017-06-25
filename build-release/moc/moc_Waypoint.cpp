/****************************************************************************
** Meta object code from reading C++ file 'Waypoint.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Waypoint.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Waypoint.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Waypoint_t {
    QByteArrayData data[12];
    char stringdata[111];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Waypoint_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Waypoint_t qt_meta_stringdata_Waypoint = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Waypoint"
QT_MOC_LITERAL(1, 9, 7), // "changed"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 9), // "Waypoint*"
QT_MOC_LITERAL(4, 28, 2), // "wp"
QT_MOC_LITERAL(5, 31, 15), // "latitudeChanged"
QT_MOC_LITERAL(6, 47, 16), // "longitudeChanged"
QT_MOC_LITERAL(7, 64, 15), // "altitudeChanged"
QT_MOC_LITERAL(8, 80, 9), // "longitude"
QT_MOC_LITERAL(9, 90, 8), // "latitude"
QT_MOC_LITERAL(10, 99, 8), // "altitude"
QT_MOC_LITERAL(11, 108, 2) // "id"

    },
    "Waypoint\0changed\0\0Waypoint*\0wp\0"
    "latitudeChanged\0longitudeChanged\0"
    "altitudeChanged\0longitude\0latitude\0"
    "altitude\0id"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Waypoint[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       4,   40, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       5,    0,   37,    2, 0x06 /* Public */,
       6,    0,   38,    2, 0x06 /* Public */,
       7,    0,   39,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       8, QMetaType::Double, 0x00495001,
       9, QMetaType::Double, 0x00495001,
      10, QMetaType::Double, 0x00495001,
      11, QMetaType::UShort, 0x00095401,

 // properties: notify_signal_id
       2,
       1,
       3,
       0,

       0        // eod
};

void Waypoint::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Waypoint *_t = static_cast<Waypoint *>(_o);
        switch (_id) {
        case 0: _t->changed((*reinterpret_cast< Waypoint*(*)>(_a[1]))); break;
        case 1: _t->latitudeChanged(); break;
        case 2: _t->longitudeChanged(); break;
        case 3: _t->altitudeChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
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
            typedef void (Waypoint::*_t)(Waypoint * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Waypoint::changed)) {
                *result = 0;
            }
        }
        {
            typedef void (Waypoint::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Waypoint::latitudeChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (Waypoint::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Waypoint::longitudeChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (Waypoint::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Waypoint::altitudeChanged)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject Waypoint::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Waypoint.data,
      qt_meta_data_Waypoint,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Waypoint::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Waypoint::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Waypoint.stringdata))
        return static_cast<void*>(const_cast< Waypoint*>(this));
    return QObject::qt_metacast(_clname);
}

int Waypoint::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = longitude(); break;
        case 1: *reinterpret_cast< double*>(_v) = latitude(); break;
        case 2: *reinterpret_cast< double*>(_v) = altitude(); break;
        case 3: *reinterpret_cast< quint16*>(_v) = id(); break;
        default: break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 4;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Waypoint::changed(Waypoint * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Waypoint::latitudeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void Waypoint::longitudeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void Waypoint::altitudeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
