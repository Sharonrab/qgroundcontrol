/****************************************************************************
** Meta object code from reading C++ file 'JoystickWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/JoystickWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'JoystickWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_JoystickWidget_t {
    QByteArrayData data[16];
    char stringdata[180];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_JoystickWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_JoystickWidget_t qt_meta_stringdata_JoystickWidget = {
    {
QT_MOC_LITERAL(0, 0, 14), // "JoystickWidget"
QT_MOC_LITERAL(1, 15, 19), // "createUIForJoystick"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 15), // "updateAxisValue"
QT_MOC_LITERAL(4, 52, 4), // "axis"
QT_MOC_LITERAL(5, 57, 5), // "value"
QT_MOC_LITERAL(6, 63, 6), // "setHat"
QT_MOC_LITERAL(7, 70, 1), // "x"
QT_MOC_LITERAL(8, 72, 1), // "y"
QT_MOC_LITERAL(9, 74, 21), // "joystickButtonPressed"
QT_MOC_LITERAL(10, 96, 3), // "key"
QT_MOC_LITERAL(11, 100, 22), // "joystickButtonReleased"
QT_MOC_LITERAL(12, 123, 22), // "cycleCalibrationButton"
QT_MOC_LITERAL(13, 146, 12), // "styleChanged"
QT_MOC_LITERAL(14, 159, 11), // "styleIsDark"
QT_MOC_LITERAL(15, 171, 8) // "updateUI"

    },
    "JoystickWidget\0createUIForJoystick\0\0"
    "updateAxisValue\0axis\0value\0setHat\0x\0"
    "y\0joystickButtonPressed\0key\0"
    "joystickButtonReleased\0cycleCalibrationButton\0"
    "styleChanged\0styleIsDark\0updateUI"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_JoystickWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x0a /* Public */,
       3,    2,   55,    2, 0x0a /* Public */,
       6,    2,   60,    2, 0x0a /* Public */,
       9,    1,   65,    2, 0x0a /* Public */,
      11,    1,   68,    2, 0x0a /* Public */,
      12,    0,   71,    2, 0x0a /* Public */,
      13,    1,   72,    2, 0x0a /* Public */,
      15,    0,   75,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Float,    4,    5,
    QMetaType::Void, QMetaType::SChar, QMetaType::SChar,    7,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void,

       0        // eod
};

void JoystickWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        JoystickWidget *_t = static_cast<JoystickWidget *>(_o);
        switch (_id) {
        case 0: _t->createUIForJoystick(); break;
        case 1: _t->updateAxisValue((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 2: _t->setHat((*reinterpret_cast< qint8(*)>(_a[1])),(*reinterpret_cast< qint8(*)>(_a[2]))); break;
        case 3: _t->joystickButtonPressed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->joystickButtonReleased((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->cycleCalibrationButton(); break;
        case 6: _t->styleChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->updateUI(); break;
        default: ;
        }
    }
}

const QMetaObject JoystickWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_JoystickWidget.data,
      qt_meta_data_JoystickWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *JoystickWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JoystickWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_JoystickWidget.stringdata))
        return static_cast<void*>(const_cast< JoystickWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int JoystickWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
