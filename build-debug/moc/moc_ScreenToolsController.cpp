/****************************************************************************
** Meta object code from reading C++ file 'ScreenToolsController.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/QmlControls/ScreenToolsController.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ScreenToolsController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ScreenToolsController_t {
    QByteArrayData data[13];
    char stringdata[190];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScreenToolsController_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScreenToolsController_t qt_meta_stringdata_ScreenToolsController = {
    {
QT_MOC_LITERAL(0, 0, 21), // "ScreenToolsController"
QT_MOC_LITERAL(1, 22, 16), // "repaintRequested"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 13), // "_updateCanvas"
QT_MOC_LITERAL(4, 54, 6), // "mouseX"
QT_MOC_LITERAL(5, 61, 6), // "mouseY"
QT_MOC_LITERAL(6, 68, 9), // "isAndroid"
QT_MOC_LITERAL(7, 78, 5), // "isiOS"
QT_MOC_LITERAL(8, 84, 8), // "isMobile"
QT_MOC_LITERAL(9, 93, 23), // "smallFontPixelSizeRatio"
QT_MOC_LITERAL(10, 117, 24), // "mediumFontPixelSizeRatio"
QT_MOC_LITERAL(11, 142, 23), // "largeFontPixelSizeRatio"
QT_MOC_LITERAL(12, 166, 23) // "qmlDefaultFontPixelSize"

    },
    "ScreenToolsController\0repaintRequested\0"
    "\0_updateCanvas\0mouseX\0mouseY\0isAndroid\0"
    "isiOS\0isMobile\0smallFontPixelSizeRatio\0"
    "mediumFontPixelSizeRatio\0"
    "largeFontPixelSizeRatio\0qmlDefaultFontPixelSize"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScreenToolsController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       7,   38, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   35,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
       4,    0,   36,    2, 0x02 /* Public */,
       5,    0,   37,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Int,
    QMetaType::Int,

 // properties: name, type, flags
       6, QMetaType::Bool, 0x00095401,
       7, QMetaType::Bool, 0x00095401,
       8, QMetaType::Bool, 0x00095401,
       9, QMetaType::Double, 0x00095401,
      10, QMetaType::Double, 0x00095401,
      11, QMetaType::Double, 0x00095401,
      12, QMetaType::Double, 0x00095003,

       0        // eod
};

void ScreenToolsController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ScreenToolsController *_t = static_cast<ScreenToolsController *>(_o);
        switch (_id) {
        case 0: _t->repaintRequested(); break;
        case 1: _t->_updateCanvas(); break;
        case 2: { int _r = _t->mouseX();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 3: { int _r = _t->mouseY();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ScreenToolsController::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ScreenToolsController::repaintRequested)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject ScreenToolsController::staticMetaObject = {
    { &QQuickItem::staticMetaObject, qt_meta_stringdata_ScreenToolsController.data,
      qt_meta_data_ScreenToolsController,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ScreenToolsController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScreenToolsController::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ScreenToolsController.stringdata))
        return static_cast<void*>(const_cast< ScreenToolsController*>(this));
    return QQuickItem::qt_metacast(_clname);
}

int ScreenToolsController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = isAndroid(); break;
        case 1: *reinterpret_cast< bool*>(_v) = isiOS(); break;
        case 2: *reinterpret_cast< bool*>(_v) = isMobile(); break;
        case 3: *reinterpret_cast< double*>(_v) = _smallFontPixelSizeRatio; break;
        case 4: *reinterpret_cast< double*>(_v) = _mediumFontPixelSizeRatio; break;
        case 5: *reinterpret_cast< double*>(_v) = _largeFontPixelSizeRatio; break;
        case 6: *reinterpret_cast< double*>(_v) = _qmlDefaultFontPixelSize; break;
        default: break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 6:
            if (_qmlDefaultFontPixelSize != *reinterpret_cast< double*>(_v)) {
                _qmlDefaultFontPixelSize = *reinterpret_cast< double*>(_v);
            }
            break;
        default: break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ScreenToolsController::repaintRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
