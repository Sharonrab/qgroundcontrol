/****************************************************************************
** Meta object code from reading C++ file 'SetupView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/VehicleSetup/SetupView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SetupView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SetupView_t {
    QByteArrayData data[11];
    char stringdata[132];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SetupView_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SetupView_t qt_meta_stringdata_SetupView = {
    {
QT_MOC_LITERAL(0, 0, 9), // "SetupView"
QT_MOC_LITERAL(1, 10, 16), // "autopilotChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 16), // "AutoPilotPlugin*"
QT_MOC_LITERAL(4, 45, 9), // "autopilot"
QT_MOC_LITERAL(5, 55, 13), // "_setActiveUAS"
QT_MOC_LITERAL(6, 69, 13), // "UASInterface*"
QT_MOC_LITERAL(7, 83, 3), // "uas"
QT_MOC_LITERAL(8, 87, 19), // "_pluginReadyChanged"
QT_MOC_LITERAL(9, 107, 11), // "pluginReady"
QT_MOC_LITERAL(10, 119, 12) // "showFirmware"

    },
    "SetupView\0autopilotChanged\0\0"
    "AutoPilotPlugin*\0autopilot\0_setActiveUAS\0"
    "UASInterface*\0uas\0_pluginReadyChanged\0"
    "pluginReady\0showFirmware"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SetupView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       2,   38, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   32,    2, 0x08 /* Private */,
       8,    1,   35,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::Bool,    9,

 // properties: name, type, flags
       4, 0x80000000 | 3, 0x00495009,
      10, QMetaType::Bool, 0x00095401,

 // properties: notify_signal_id
       0,
       0,

       0        // eod
};

void SetupView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SetupView *_t = static_cast<SetupView *>(_o);
        switch (_id) {
        case 0: _t->autopilotChanged((*reinterpret_cast< AutoPilotPlugin*(*)>(_a[1]))); break;
        case 1: _t->_setActiveUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 2: _t->_pluginReadyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AutoPilotPlugin* >(); break;
            }
            break;
        case 1:
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
            typedef void (SetupView::*_t)(AutoPilotPlugin * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SetupView::autopilotChanged)) {
                *result = 0;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AutoPilotPlugin* >(); break;
        }
    }

}

const QMetaObject SetupView::staticMetaObject = {
    { &QGCQmlWidgetHolder::staticMetaObject, qt_meta_stringdata_SetupView.data,
      qt_meta_data_SetupView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SetupView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SetupView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SetupView.stringdata))
        return static_cast<void*>(const_cast< SetupView*>(this));
    return QGCQmlWidgetHolder::qt_metacast(_clname);
}

int SetupView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCQmlWidgetHolder::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< AutoPilotPlugin**>(_v) = autopilot(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _showFirmware; break;
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void SetupView::autopilotChanged(AutoPilotPlugin * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
