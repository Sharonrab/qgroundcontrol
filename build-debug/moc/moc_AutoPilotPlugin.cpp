/****************************************************************************
** Meta object code from reading C++ file 'AutoPilotPlugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/AutoPilotPlugins/AutoPilotPlugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AutoPilotPlugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AutoPilotPlugin_t {
    QByteArrayData data[23];
    char stringdata[334];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AutoPilotPlugin_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AutoPilotPlugin_t qt_meta_stringdata_AutoPilotPlugin = {
    {
QT_MOC_LITERAL(0, 0, 15), // "AutoPilotPlugin"
QT_MOC_LITERAL(1, 16, 18), // "pluginReadyChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 11), // "pluginReady"
QT_MOC_LITERAL(4, 48, 20), // "setupCompleteChanged"
QT_MOC_LITERAL(5, 69, 13), // "setupComplete"
QT_MOC_LITERAL(6, 83, 21), // "parameterListProgress"
QT_MOC_LITERAL(7, 105, 5), // "value"
QT_MOC_LITERAL(8, 111, 12), // "armedChanged"
QT_MOC_LITERAL(9, 124, 5), // "armed"
QT_MOC_LITERAL(10, 130, 16), // "_uasDisconnected"
QT_MOC_LITERAL(11, 147, 19), // "_pluginReadyChanged"
QT_MOC_LITERAL(12, 167, 20), // "refreshAllParameters"
QT_MOC_LITERAL(13, 188, 16), // "refreshParameter"
QT_MOC_LITERAL(14, 205, 11), // "componentId"
QT_MOC_LITERAL(15, 217, 4), // "name"
QT_MOC_LITERAL(16, 222, 23), // "refreshParametersPrefix"
QT_MOC_LITERAL(17, 246, 10), // "namePrefix"
QT_MOC_LITERAL(18, 257, 15), // "parameterExists"
QT_MOC_LITERAL(19, 273, 10), // "factExists"
QT_MOC_LITERAL(20, 284, 22), // "FactSystem::Provider_t"
QT_MOC_LITERAL(21, 307, 8), // "provider"
QT_MOC_LITERAL(22, 316, 17) // "vehicleComponents"

    },
    "AutoPilotPlugin\0pluginReadyChanged\0\0"
    "pluginReady\0setupCompleteChanged\0"
    "setupComplete\0parameterListProgress\0"
    "value\0armedChanged\0armed\0_uasDisconnected\0"
    "_pluginReadyChanged\0refreshAllParameters\0"
    "refreshParameter\0componentId\0name\0"
    "refreshParametersPrefix\0namePrefix\0"
    "parameterExists\0factExists\0"
    "FactSystem::Provider_t\0provider\0"
    "vehicleComponents"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AutoPilotPlugin[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       4,  108, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       4,    1,   72,    2, 0x06 /* Public */,
       6,    1,   75,    2, 0x06 /* Public */,
       8,    1,   78,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   81,    2, 0x08 /* Private */,
      11,    1,   82,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      12,    0,   85,    2, 0x02 /* Public */,
      13,    2,   86,    2, 0x02 /* Public */,
      16,    2,   91,    2, 0x02 /* Public */,
      18,    2,   96,    2, 0x02 /* Public */,
      19,    3,  101,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Float,    7,
    QMetaType::Void, QMetaType::Bool,    9,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    3,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   14,   15,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   14,   17,
    QMetaType::Bool, QMetaType::Int, QMetaType::QString,   14,   15,
    QMetaType::Bool, 0x80000000 | 20, QMetaType::Int, QMetaType::QString,   21,   14,   15,

 // properties: name, type, flags
       3, QMetaType::Bool, 0x00495001,
      22, QMetaType::QVariantList, 0x00095401,
       5, QMetaType::Bool, 0x00495001,
       9, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       1,
       3,

       0        // eod
};

void AutoPilotPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AutoPilotPlugin *_t = static_cast<AutoPilotPlugin *>(_o);
        switch (_id) {
        case 0: _t->pluginReadyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setupCompleteChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->parameterListProgress((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 3: _t->armedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->_uasDisconnected(); break;
        case 5: _t->_pluginReadyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->refreshAllParameters(); break;
        case 7: _t->refreshParameter((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 8: _t->refreshParametersPrefix((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 9: { bool _r = _t->parameterExists((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->factExists((*reinterpret_cast< FactSystem::Provider_t(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AutoPilotPlugin::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AutoPilotPlugin::pluginReadyChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (AutoPilotPlugin::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AutoPilotPlugin::setupCompleteChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (AutoPilotPlugin::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AutoPilotPlugin::parameterListProgress)) {
                *result = 2;
            }
        }
        {
            typedef void (AutoPilotPlugin::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AutoPilotPlugin::armedChanged)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject AutoPilotPlugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AutoPilotPlugin.data,
      qt_meta_data_AutoPilotPlugin,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AutoPilotPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AutoPilotPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AutoPilotPlugin.stringdata))
        return static_cast<void*>(const_cast< AutoPilotPlugin*>(this));
    return QObject::qt_metacast(_clname);
}

int AutoPilotPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = pluginReady(); break;
        case 1: *reinterpret_cast< QVariantList*>(_v) = vehicleComponents(); break;
        case 2: *reinterpret_cast< bool*>(_v) = setupComplete(); break;
        case 3: *reinterpret_cast< bool*>(_v) = armed(); break;
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
void AutoPilotPlugin::pluginReadyChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AutoPilotPlugin::setupCompleteChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AutoPilotPlugin::parameterListProgress(float _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AutoPilotPlugin::armedChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
