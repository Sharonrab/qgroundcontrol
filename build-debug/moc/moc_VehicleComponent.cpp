/****************************************************************************
** Meta object code from reading C++ file 'VehicleComponent.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/VehicleSetup/VehicleComponent.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VehicleComponent.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_VehicleComponent_t {
    QByteArrayData data[12];
    char stringdata[166];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VehicleComponent_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VehicleComponent_t qt_meta_stringdata_VehicleComponent = {
    {
QT_MOC_LITERAL(0, 0, 16), // "VehicleComponent"
QT_MOC_LITERAL(1, 17, 20), // "setupCompleteChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 13), // "setupComplete"
QT_MOC_LITERAL(4, 53, 4), // "name"
QT_MOC_LITERAL(5, 58, 11), // "description"
QT_MOC_LITERAL(6, 70, 13), // "requiresSetup"
QT_MOC_LITERAL(7, 84, 21), // "setupStateDescription"
QT_MOC_LITERAL(8, 106, 12), // "iconResource"
QT_MOC_LITERAL(9, 119, 11), // "setupSource"
QT_MOC_LITERAL(10, 131, 16), // "summaryQmlSource"
QT_MOC_LITERAL(11, 148, 17) // "prerequisiteSetup"

    },
    "VehicleComponent\0setupCompleteChanged\0"
    "\0setupComplete\0name\0description\0"
    "requiresSetup\0setupStateDescription\0"
    "iconResource\0setupSource\0summaryQmlSource\0"
    "prerequisiteSetup"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VehicleComponent[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       9,   22, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // properties: name, type, flags
       4, QMetaType::QString, 0x00095401,
       5, QMetaType::QString, 0x00095401,
       6, QMetaType::Bool, 0x00095401,
       3, QMetaType::Bool, 0x00485001,
       7, QMetaType::QString, 0x00085001,
       8, QMetaType::QString, 0x00095401,
       9, QMetaType::QUrl, 0x00095401,
      10, QMetaType::QUrl, 0x00095401,
      11, QMetaType::QString, 0x00095001,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

void VehicleComponent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VehicleComponent *_t = static_cast<VehicleComponent *>(_o);
        switch (_id) {
        case 0: _t->setupCompleteChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (VehicleComponent::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VehicleComponent::setupCompleteChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject VehicleComponent::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_VehicleComponent.data,
      qt_meta_data_VehicleComponent,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *VehicleComponent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VehicleComponent::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_VehicleComponent.stringdata))
        return static_cast<void*>(const_cast< VehicleComponent*>(this));
    return QObject::qt_metacast(_clname);
}

int VehicleComponent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = name(); break;
        case 1: *reinterpret_cast< QString*>(_v) = description(); break;
        case 2: *reinterpret_cast< bool*>(_v) = requiresSetup(); break;
        case 3: *reinterpret_cast< bool*>(_v) = setupComplete(); break;
        case 4: *reinterpret_cast< QString*>(_v) = setupStateDescription(); break;
        case 5: *reinterpret_cast< QString*>(_v) = iconResource(); break;
        case 6: *reinterpret_cast< QUrl*>(_v) = setupSource(); break;
        case 7: *reinterpret_cast< QUrl*>(_v) = summaryQmlSource(); break;
        case 8: *reinterpret_cast< QString*>(_v) = prerequisiteSetup(); break;
        default: break;
        }
        _id -= 9;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 9;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 9;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void VehicleComponent::setupCompleteChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
