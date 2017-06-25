/****************************************************************************
** Meta object code from reading C++ file 'ViewWidgetController.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ViewWidgets/ViewWidgetController.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ViewWidgetController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ViewWidgetController_t {
    QByteArrayData data[11];
    char stringdata[151];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ViewWidgetController_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ViewWidgetController_t qt_meta_stringdata_ViewWidgetController = {
    {
QT_MOC_LITERAL(0, 0, 20), // "ViewWidgetController"
QT_MOC_LITERAL(1, 21, 15), // "pluginConnected"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 9), // "autopilot"
QT_MOC_LITERAL(4, 48, 18), // "pluginDisconnected"
QT_MOC_LITERAL(5, 67, 17), // "_activeUasChanged"
QT_MOC_LITERAL(6, 85, 13), // "UASInterface*"
QT_MOC_LITERAL(7, 99, 3), // "UAS"
QT_MOC_LITERAL(8, 103, 19), // "_pluginReadyChanged"
QT_MOC_LITERAL(9, 123, 11), // "pluginReady"
QT_MOC_LITERAL(10, 135, 15) // "checkForVehicle"

    },
    "ViewWidgetController\0pluginConnected\0"
    "\0autopilot\0pluginDisconnected\0"
    "_activeUasChanged\0UASInterface*\0UAS\0"
    "_pluginReadyChanged\0pluginReady\0"
    "checkForVehicle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ViewWidgetController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    0,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   43,    2, 0x08 /* Private */,
       8,    1,   46,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      10,    0,   49,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QVariant,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::Bool,    9,

 // methods: parameters
    QMetaType::Void,

       0        // eod
};

void ViewWidgetController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ViewWidgetController *_t = static_cast<ViewWidgetController *>(_o);
        switch (_id) {
        case 0: _t->pluginConnected((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 1: _t->pluginDisconnected(); break;
        case 2: _t->_activeUasChanged((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 3: _t->_pluginReadyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->checkForVehicle(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
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
            typedef void (ViewWidgetController::*_t)(QVariant );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ViewWidgetController::pluginConnected)) {
                *result = 0;
            }
        }
        {
            typedef void (ViewWidgetController::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ViewWidgetController::pluginDisconnected)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject ViewWidgetController::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ViewWidgetController.data,
      qt_meta_data_ViewWidgetController,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ViewWidgetController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ViewWidgetController::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ViewWidgetController.stringdata))
        return static_cast<void*>(const_cast< ViewWidgetController*>(this));
    return QObject::qt_metacast(_clname);
}

int ViewWidgetController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void ViewWidgetController::pluginConnected(QVariant _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ViewWidgetController::pluginDisconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
