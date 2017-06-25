/****************************************************************************
** Meta object code from reading C++ file 'AirframeComponentController.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/AutoPilotPlugins/PX4/AirframeComponentController.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AirframeComponentController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AirframeComponentController_t {
    QByteArrayData data[13];
    char stringdata[220];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AirframeComponentController_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AirframeComponentController_t qt_meta_stringdata_AirframeComponentController = {
    {
QT_MOC_LITERAL(0, 0, 27), // "AirframeComponentController"
QT_MOC_LITERAL(1, 28, 18), // "autostartIdChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 14), // "newAutostartId"
QT_MOC_LITERAL(4, 63, 28), // "showCustomConfigPanelChanged"
QT_MOC_LITERAL(5, 92, 4), // "show"
QT_MOC_LITERAL(6, 97, 15), // "changeAutostart"
QT_MOC_LITERAL(7, 113, 21), // "showCustomConfigPanel"
QT_MOC_LITERAL(8, 135, 13), // "airframeTypes"
QT_MOC_LITERAL(9, 149, 19), // "currentAirframeType"
QT_MOC_LITERAL(10, 169, 18), // "currentVehicleName"
QT_MOC_LITERAL(11, 188, 19), // "currentVehicleIndex"
QT_MOC_LITERAL(12, 208, 11) // "autostartId"

    },
    "AirframeComponentController\0"
    "autostartIdChanged\0\0newAutostartId\0"
    "showCustomConfigPanelChanged\0show\0"
    "changeAutostart\0showCustomConfigPanel\0"
    "airframeTypes\0currentAirframeType\0"
    "currentVehicleName\0currentVehicleIndex\0"
    "autostartId"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AirframeComponentController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       6,   36, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    1,   32,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       6,    0,   35,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool,    5,

 // methods: parameters
    QMetaType::Void,

 // properties: name, type, flags
       7, QMetaType::Bool, 0x00495003,
       8, QMetaType::QVariantList, 0x00095401,
       9, QMetaType::QString, 0x00095401,
      10, QMetaType::QString, 0x00095401,
      11, QMetaType::Int, 0x00095401,
      12, QMetaType::Int, 0x00495003,

 // properties: notify_signal_id
       1,
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

void AirframeComponentController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AirframeComponentController *_t = static_cast<AirframeComponentController *>(_o);
        switch (_id) {
        case 0: _t->autostartIdChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->showCustomConfigPanelChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->changeAutostart(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AirframeComponentController::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AirframeComponentController::autostartIdChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (AirframeComponentController::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AirframeComponentController::showCustomConfigPanelChanged)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject AirframeComponentController::staticMetaObject = {
    { &FactPanelController::staticMetaObject, qt_meta_stringdata_AirframeComponentController.data,
      qt_meta_data_AirframeComponentController,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AirframeComponentController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AirframeComponentController::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AirframeComponentController.stringdata))
        return static_cast<void*>(const_cast< AirframeComponentController*>(this));
    return FactPanelController::qt_metacast(_clname);
}

int AirframeComponentController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FactPanelController::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _showCustomConfigPanel; break;
        case 1: *reinterpret_cast< QVariantList*>(_v) = _airframeTypes; break;
        case 2: *reinterpret_cast< QString*>(_v) = _currentAirframeType; break;
        case 3: *reinterpret_cast< QString*>(_v) = _currentVehicleName; break;
        case 4: *reinterpret_cast< int*>(_v) = _currentVehicleIndex; break;
        case 5: *reinterpret_cast< int*>(_v) = _autostartId; break;
        default: break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_showCustomConfigPanel != *reinterpret_cast< bool*>(_v)) {
                _showCustomConfigPanel = *reinterpret_cast< bool*>(_v);
                Q_EMIT showCustomConfigPanelChanged(_showCustomConfigPanel);
            }
            break;
        case 5:
            if (_autostartId != *reinterpret_cast< int*>(_v)) {
                _autostartId = *reinterpret_cast< int*>(_v);
                Q_EMIT autostartIdChanged(_autostartId);
            }
            break;
        default: break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void AirframeComponentController::autostartIdChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AirframeComponentController::showCustomConfigPanelChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_Airframe_t {
    QByteArrayData data[3];
    char stringdata[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Airframe_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Airframe_t qt_meta_stringdata_Airframe = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Airframe"
QT_MOC_LITERAL(1, 9, 4), // "text"
QT_MOC_LITERAL(2, 14, 11) // "autostartId"

    },
    "Airframe\0text\0autostartId"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Airframe[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00095401,
       2, QMetaType::Int, 0x00095401,

       0        // eod
};

void Airframe::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject Airframe::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Airframe.data,
      qt_meta_data_Airframe,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Airframe::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Airframe::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Airframe.stringdata))
        return static_cast<void*>(const_cast< Airframe*>(this));
    return QObject::qt_metacast(_clname);
}

int Airframe::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _name; break;
        case 1: *reinterpret_cast< int*>(_v) = _autostartId; break;
        default: break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_AirframeType_t {
    QByteArrayData data[4];
    char stringdata[42];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AirframeType_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AirframeType_t qt_meta_stringdata_AirframeType = {
    {
QT_MOC_LITERAL(0, 0, 12), // "AirframeType"
QT_MOC_LITERAL(1, 13, 4), // "name"
QT_MOC_LITERAL(2, 18, 13), // "imageResource"
QT_MOC_LITERAL(3, 32, 9) // "airframes"

    },
    "AirframeType\0name\0imageResource\0"
    "airframes"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AirframeType[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       3,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00095401,
       2, QMetaType::QString, 0x00095401,
       3, QMetaType::QVariantList, 0x00095401,

       0        // eod
};

void AirframeType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject AirframeType::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AirframeType.data,
      qt_meta_data_AirframeType,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AirframeType::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AirframeType::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AirframeType.stringdata))
        return static_cast<void*>(const_cast< AirframeType*>(this));
    return QObject::qt_metacast(_clname);
}

int AirframeType::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _name; break;
        case 1: *reinterpret_cast< QString*>(_v) = _imageResource; break;
        case 2: *reinterpret_cast< QVariantList*>(_v) = _airframes; break;
        default: break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
