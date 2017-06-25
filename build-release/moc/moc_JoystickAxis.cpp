/****************************************************************************
** Meta object code from reading C++ file 'JoystickAxis.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/JoystickAxis.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'JoystickAxis.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_JoystickAxis_t {
    QByteArrayData data[19];
    char stringdata[253];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_JoystickAxis_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_JoystickAxis_t qt_meta_stringdata_JoystickAxis = {
    {
QT_MOC_LITERAL(0, 0, 12), // "JoystickAxis"
QT_MOC_LITERAL(1, 13, 14), // "mappingChanged"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 2), // "id"
QT_MOC_LITERAL(4, 32, 37), // "JoystickInput::JOYSTICK_INPUT..."
QT_MOC_LITERAL(5, 70, 10), // "newMapping"
QT_MOC_LITERAL(6, 81, 16), // "inversionChanged"
QT_MOC_LITERAL(7, 98, 9), // "inversion"
QT_MOC_LITERAL(8, 108, 12), // "rangeChanged"
QT_MOC_LITERAL(9, 121, 7), // "limited"
QT_MOC_LITERAL(10, 129, 8), // "setValue"
QT_MOC_LITERAL(11, 138, 5), // "value"
QT_MOC_LITERAL(12, 144, 12), // "setActiveUAS"
QT_MOC_LITERAL(13, 157, 13), // "UASInterface*"
QT_MOC_LITERAL(14, 171, 3), // "uas"
QT_MOC_LITERAL(15, 175, 22), // "mappingComboBoxChanged"
QT_MOC_LITERAL(16, 198, 24), // "inversionCheckBoxChanged"
QT_MOC_LITERAL(17, 223, 8), // "inverted"
QT_MOC_LITERAL(18, 232, 20) // "rangeCheckBoxChanged"

    },
    "JoystickAxis\0mappingChanged\0\0id\0"
    "JoystickInput::JOYSTICK_INPUT_MAPPING\0"
    "newMapping\0inversionChanged\0inversion\0"
    "rangeChanged\0limited\0setValue\0value\0"
    "setActiveUAS\0UASInterface*\0uas\0"
    "mappingComboBoxChanged\0inversionCheckBoxChanged\0"
    "inverted\0rangeCheckBoxChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_JoystickAxis[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   54,    2, 0x06 /* Public */,
       6,    2,   59,    2, 0x06 /* Public */,
       8,    2,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   69,    2, 0x0a /* Public */,
      12,    1,   72,    2, 0x0a /* Public */,
      15,    1,   75,    2, 0x08 /* Private */,
      16,    1,   78,    2, 0x08 /* Private */,
      18,    1,   81,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    3,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    3,    9,

 // slots: parameters
    QMetaType::Void, QMetaType::Float,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::Bool,   17,

       0        // eod
};

void JoystickAxis::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        JoystickAxis *_t = static_cast<JoystickAxis *>(_o);
        switch (_id) {
        case 0: _t->mappingChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< JoystickInput::JOYSTICK_INPUT_MAPPING(*)>(_a[2]))); break;
        case 1: _t->inversionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->rangeChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->setValue((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->setActiveUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 5: _t->mappingComboBoxChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->inversionCheckBoxChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->rangeCheckBoxChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
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
            typedef void (JoystickAxis::*_t)(int , JoystickInput::JOYSTICK_INPUT_MAPPING );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&JoystickAxis::mappingChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (JoystickAxis::*_t)(int , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&JoystickAxis::inversionChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (JoystickAxis::*_t)(int , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&JoystickAxis::rangeChanged)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject JoystickAxis::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_JoystickAxis.data,
      qt_meta_data_JoystickAxis,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *JoystickAxis::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JoystickAxis::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_JoystickAxis.stringdata))
        return static_cast<void*>(const_cast< JoystickAxis*>(this));
    return QWidget::qt_metacast(_clname);
}

int JoystickAxis::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void JoystickAxis::mappingChanged(int _t1, JoystickInput::JOYSTICK_INPUT_MAPPING _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void JoystickAxis::inversionChanged(int _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void JoystickAxis::rangeChanged(int _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
