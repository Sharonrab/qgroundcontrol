/****************************************************************************
** Meta object code from reading C++ file 'QGCPalette.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/QGCPalette.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCPalette.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QGCPalette_t {
    QByteArrayData data[20];
    char stringdata[224];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCPalette_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCPalette_t qt_meta_stringdata_QGCPalette = {
    {
QT_MOC_LITERAL(0, 0, 10), // "QGCPalette"
QT_MOC_LITERAL(1, 11, 14), // "paletteChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 11), // "globalTheme"
QT_MOC_LITERAL(4, 39, 5), // "Theme"
QT_MOC_LITERAL(5, 45, 17), // "colorGroupEnabled"
QT_MOC_LITERAL(6, 63, 6), // "window"
QT_MOC_LITERAL(7, 70, 11), // "windowShade"
QT_MOC_LITERAL(8, 82, 15), // "windowShadeDark"
QT_MOC_LITERAL(9, 98, 4), // "text"
QT_MOC_LITERAL(10, 103, 6), // "button"
QT_MOC_LITERAL(11, 110, 10), // "buttonText"
QT_MOC_LITERAL(12, 121, 15), // "buttonHighlight"
QT_MOC_LITERAL(13, 137, 19), // "buttonHighlightText"
QT_MOC_LITERAL(14, 157, 13), // "primaryButton"
QT_MOC_LITERAL(15, 171, 17), // "primaryButtonText"
QT_MOC_LITERAL(16, 189, 9), // "textField"
QT_MOC_LITERAL(17, 199, 13), // "textFieldText"
QT_MOC_LITERAL(18, 213, 5), // "Light"
QT_MOC_LITERAL(19, 219, 4) // "Dark"

    },
    "QGCPalette\0paletteChanged\0\0globalTheme\0"
    "Theme\0colorGroupEnabled\0window\0"
    "windowShade\0windowShadeDark\0text\0"
    "button\0buttonText\0buttonHighlight\0"
    "buttonHighlightText\0primaryButton\0"
    "primaryButtonText\0textField\0textFieldText\0"
    "Light\0Dark"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCPalette[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
      14,   20, // properties
       1,   76, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, 0x80000000 | 4, 0x0049510b,
       5, QMetaType::Bool, 0x00495103,
       6, QMetaType::QColor, 0x00495001,
       7, QMetaType::QColor, 0x00495001,
       8, QMetaType::QColor, 0x00495001,
       9, QMetaType::QColor, 0x00495001,
      10, QMetaType::QColor, 0x00495001,
      11, QMetaType::QColor, 0x00495001,
      12, QMetaType::QColor, 0x00495001,
      13, QMetaType::QColor, 0x00495001,
      14, QMetaType::QColor, 0x00495001,
      15, QMetaType::QColor, 0x00495001,
      16, QMetaType::QColor, 0x00495001,
      17, QMetaType::QColor, 0x00495001,

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
       0,
       0,
       0,
       0,
       0,

 // enums: name, flags, count, data
       4, 0x0,    2,   80,

 // enum data: key, value
      18, uint(QGCPalette::Light),
      19, uint(QGCPalette::Dark),

       0        // eod
};

void QGCPalette::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGCPalette *_t = static_cast<QGCPalette *>(_o);
        switch (_id) {
        case 0: _t->paletteChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QGCPalette::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGCPalette::paletteChanged)) {
                *result = 0;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QGCPalette::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QGCPalette.data,
      qt_meta_data_QGCPalette,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QGCPalette::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCPalette::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QGCPalette.stringdata))
        return static_cast<void*>(const_cast< QGCPalette*>(this));
    return QObject::qt_metacast(_clname);
}

int QGCPalette::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        case 0: *reinterpret_cast< Theme*>(_v) = globalTheme(); break;
        case 1: *reinterpret_cast< bool*>(_v) = colorGroupEnabled(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = window(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = windowShade(); break;
        case 4: *reinterpret_cast< QColor*>(_v) = windowShadeDark(); break;
        case 5: *reinterpret_cast< QColor*>(_v) = text(); break;
        case 6: *reinterpret_cast< QColor*>(_v) = button(); break;
        case 7: *reinterpret_cast< QColor*>(_v) = buttonText(); break;
        case 8: *reinterpret_cast< QColor*>(_v) = buttonHighlight(); break;
        case 9: *reinterpret_cast< QColor*>(_v) = buttonHighlightText(); break;
        case 10: *reinterpret_cast< QColor*>(_v) = primaryButton(); break;
        case 11: *reinterpret_cast< QColor*>(_v) = primaryButtonText(); break;
        case 12: *reinterpret_cast< QColor*>(_v) = textField(); break;
        case 13: *reinterpret_cast< QColor*>(_v) = textFieldText(); break;
        default: break;
        }
        _id -= 14;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setGlobalTheme(*reinterpret_cast< Theme*>(_v)); break;
        case 1: setColorGroupEnabled(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
        _id -= 14;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 14;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QGCPalette::paletteChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
