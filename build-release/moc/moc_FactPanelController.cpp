/****************************************************************************
** Meta object code from reading C++ file 'FactPanelController.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/FactSystem/FactControls/FactPanelController.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FactPanelController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FactPanelController_t {
    QByteArrayData data[10];
    char stringdata[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FactPanelController_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FactPanelController_t qt_meta_stringdata_FactPanelController = {
    {
QT_MOC_LITERAL(0, 0, 19), // "FactPanelController"
QT_MOC_LITERAL(1, 20, 25), // "_checkForMissingFactPanel"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 16), // "getParameterFact"
QT_MOC_LITERAL(4, 64, 5), // "Fact*"
QT_MOC_LITERAL(5, 70, 11), // "componentId"
QT_MOC_LITERAL(6, 82, 4), // "name"
QT_MOC_LITERAL(7, 87, 15), // "parameterExists"
QT_MOC_LITERAL(8, 103, 9), // "factPanel"
QT_MOC_LITERAL(9, 113, 11) // "QQuickItem*"

    },
    "FactPanelController\0_checkForMissingFactPanel\0"
    "\0getParameterFact\0Fact*\0componentId\0"
    "name\0parameterExists\0factPanel\0"
    "QQuickItem*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FactPanelController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       1,   40, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
       3,    2,   30,    2, 0x02 /* Public */,
       7,    2,   35,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 4, QMetaType::Int, QMetaType::QString,    5,    6,
    QMetaType::Bool, QMetaType::Int, QMetaType::QString,    5,    6,

 // properties: name, type, flags
       8, 0x80000000 | 9, 0x0009510b,

       0        // eod
};

void FactPanelController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FactPanelController *_t = static_cast<FactPanelController *>(_o);
        switch (_id) {
        case 0: _t->_checkForMissingFactPanel(); break;
        case 1: { Fact* _r = _t->getParameterFact((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< Fact**>(_a[0]) = _r; }  break;
        case 2: { bool _r = _t->parameterExists((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
        }
    }

}

const QMetaObject FactPanelController::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_FactPanelController.data,
      qt_meta_data_FactPanelController,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FactPanelController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FactPanelController::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FactPanelController.stringdata))
        return static_cast<void*>(const_cast< FactPanelController*>(this));
    return QObject::qt_metacast(_clname);
}

int FactPanelController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
        case 0: *reinterpret_cast< QQuickItem**>(_v) = factPanel(); break;
        default: break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setFactPanel(*reinterpret_cast< QQuickItem**>(_v)); break;
        default: break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
