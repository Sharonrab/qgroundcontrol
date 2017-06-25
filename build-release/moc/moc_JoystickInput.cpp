/****************************************************************************
** Meta object code from reading C++ file 'JoystickInput.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/input/JoystickInput.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'JoystickInput.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_JoystickInput_t {
    QByteArrayData data[49];
    char stringdata[543];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_JoystickInput_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_JoystickInput_t qt_meta_stringdata_JoystickInput = {
    {
QT_MOC_LITERAL(0, 0, 13), // "JoystickInput"
QT_MOC_LITERAL(1, 14, 15), // "joystickChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 4), // "roll"
QT_MOC_LITERAL(4, 36, 5), // "pitch"
QT_MOC_LITERAL(5, 42, 3), // "yaw"
QT_MOC_LITERAL(6, 46, 8), // "throttle"
QT_MOC_LITERAL(7, 55, 4), // "xHat"
QT_MOC_LITERAL(8, 60, 4), // "yHat"
QT_MOC_LITERAL(9, 65, 7), // "buttons"
QT_MOC_LITERAL(10, 73, 4), // "mode"
QT_MOC_LITERAL(11, 78, 16), // "axisValueChanged"
QT_MOC_LITERAL(12, 95, 4), // "axis"
QT_MOC_LITERAL(13, 100, 5), // "value"
QT_MOC_LITERAL(14, 106, 13), // "buttonPressed"
QT_MOC_LITERAL(15, 120, 3), // "key"
QT_MOC_LITERAL(16, 124, 14), // "buttonReleased"
QT_MOC_LITERAL(17, 139, 15), // "actionTriggered"
QT_MOC_LITERAL(18, 155, 6), // "action"
QT_MOC_LITERAL(19, 162, 19), // "hatDirectionChanged"
QT_MOC_LITERAL(20, 182, 1), // "x"
QT_MOC_LITERAL(21, 184, 1), // "y"
QT_MOC_LITERAL(22, 186, 12), // "activeUASSet"
QT_MOC_LITERAL(23, 199, 13), // "UASInterface*"
QT_MOC_LITERAL(24, 213, 23), // "joystickSettingsChanged"
QT_MOC_LITERAL(25, 237, 19), // "newJoystickSelected"
QT_MOC_LITERAL(26, 257, 10), // "setEnabled"
QT_MOC_LITERAL(27, 268, 6), // "enable"
QT_MOC_LITERAL(28, 275, 12), // "setActiveUAS"
QT_MOC_LITERAL(29, 288, 3), // "uas"
QT_MOC_LITERAL(30, 292, 17), // "setActiveJoystick"
QT_MOC_LITERAL(31, 310, 2), // "id"
QT_MOC_LITERAL(32, 313, 14), // "setCalibrating"
QT_MOC_LITERAL(33, 328, 6), // "active"
QT_MOC_LITERAL(34, 335, 14), // "setAxisMapping"
QT_MOC_LITERAL(35, 350, 37), // "JoystickInput::JOYSTICK_INPUT..."
QT_MOC_LITERAL(36, 388, 10), // "newMapping"
QT_MOC_LITERAL(37, 399, 16), // "setAxisInversion"
QT_MOC_LITERAL(38, 416, 8), // "inverted"
QT_MOC_LITERAL(39, 425, 17), // "setAxisRangeLimit"
QT_MOC_LITERAL(40, 443, 10), // "limitRange"
QT_MOC_LITERAL(41, 454, 20), // "setAxisRangeLimitMin"
QT_MOC_LITERAL(42, 475, 3), // "min"
QT_MOC_LITERAL(43, 479, 20), // "setAxisRangeLimitMax"
QT_MOC_LITERAL(44, 500, 3), // "max"
QT_MOC_LITERAL(45, 504, 15), // "setButtonAction"
QT_MOC_LITERAL(46, 520, 6), // "button"
QT_MOC_LITERAL(47, 527, 7), // "setMode"
QT_MOC_LITERAL(48, 535, 7) // "newMode"

    },
    "JoystickInput\0joystickChanged\0\0roll\0"
    "pitch\0yaw\0throttle\0xHat\0yHat\0buttons\0"
    "mode\0axisValueChanged\0axis\0value\0"
    "buttonPressed\0key\0buttonReleased\0"
    "actionTriggered\0action\0hatDirectionChanged\0"
    "x\0y\0activeUASSet\0UASInterface*\0"
    "joystickSettingsChanged\0newJoystickSelected\0"
    "setEnabled\0enable\0setActiveUAS\0uas\0"
    "setActiveJoystick\0id\0setCalibrating\0"
    "active\0setAxisMapping\0"
    "JoystickInput::JOYSTICK_INPUT_MAPPING\0"
    "newMapping\0setAxisInversion\0inverted\0"
    "setAxisRangeLimit\0limitRange\0"
    "setAxisRangeLimitMin\0min\0setAxisRangeLimitMax\0"
    "max\0setButtonAction\0button\0setMode\0"
    "newMode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_JoystickInput[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    8,  114,    2, 0x06 /* Public */,
      11,    2,  131,    2, 0x06 /* Public */,
      14,    1,  136,    2, 0x06 /* Public */,
      16,    1,  139,    2, 0x06 /* Public */,
      17,    1,  142,    2, 0x06 /* Public */,
      19,    2,  145,    2, 0x06 /* Public */,
      22,    1,  150,    2, 0x06 /* Public */,
      24,    0,  153,    2, 0x06 /* Public */,
      25,    0,  154,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      26,    1,  155,    2, 0x0a /* Public */,
      28,    1,  158,    2, 0x0a /* Public */,
      30,    1,  161,    2, 0x0a /* Public */,
      32,    1,  164,    2, 0x0a /* Public */,
      34,    2,  167,    2, 0x0a /* Public */,
      37,    2,  172,    2, 0x0a /* Public */,
      39,    2,  177,    2, 0x0a /* Public */,
      41,    2,  182,    2, 0x0a /* Public */,
      43,    2,  187,    2, 0x0a /* Public */,
      45,    2,  192,    2, 0x0a /* Public */,
      47,    1,  197,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::SChar, QMetaType::SChar, QMetaType::UShort, QMetaType::UChar,    3,    4,    5,    6,    7,    8,    9,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::Float,   12,   13,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void, QMetaType::SChar, QMetaType::SChar,   20,   21,
    QMetaType::Void, 0x80000000 | 23,    2,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,   27,
    QMetaType::Void, 0x80000000 | 23,   29,
    QMetaType::Void, QMetaType::Int,   31,
    QMetaType::Void, QMetaType::Bool,   33,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 35,   12,   36,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   12,   38,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   12,   40,
    QMetaType::Void, QMetaType::Int, QMetaType::Float,   12,   42,
    QMetaType::Void, QMetaType::Int, QMetaType::Float,   12,   44,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   46,   18,
    QMetaType::Void, QMetaType::Int,   48,

       0        // eod
};

void JoystickInput::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        JoystickInput *_t = static_cast<JoystickInput *>(_o);
        switch (_id) {
        case 0: _t->joystickChanged((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< qint8(*)>(_a[5])),(*reinterpret_cast< qint8(*)>(_a[6])),(*reinterpret_cast< quint16(*)>(_a[7])),(*reinterpret_cast< quint8(*)>(_a[8]))); break;
        case 1: _t->axisValueChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 2: _t->buttonPressed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->buttonReleased((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->actionTriggered((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->hatDirectionChanged((*reinterpret_cast< qint8(*)>(_a[1])),(*reinterpret_cast< qint8(*)>(_a[2]))); break;
        case 6: _t->activeUASSet((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 7: _t->joystickSettingsChanged(); break;
        case 8: _t->newJoystickSelected(); break;
        case 9: _t->setEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->setActiveUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 11: _t->setActiveJoystick((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->setCalibrating((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->setAxisMapping((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< JoystickInput::JOYSTICK_INPUT_MAPPING(*)>(_a[2]))); break;
        case 14: _t->setAxisInversion((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 15: _t->setAxisRangeLimit((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 16: _t->setAxisRangeLimitMin((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 17: _t->setAxisRangeLimitMax((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 18: _t->setButtonAction((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 19: _t->setMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 10:
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
            typedef void (JoystickInput::*_t)(float , float , float , float , qint8 , qint8 , quint16 , quint8 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&JoystickInput::joystickChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (JoystickInput::*_t)(int , float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&JoystickInput::axisValueChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (JoystickInput::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&JoystickInput::buttonPressed)) {
                *result = 2;
            }
        }
        {
            typedef void (JoystickInput::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&JoystickInput::buttonReleased)) {
                *result = 3;
            }
        }
        {
            typedef void (JoystickInput::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&JoystickInput::actionTriggered)) {
                *result = 4;
            }
        }
        {
            typedef void (JoystickInput::*_t)(qint8 , qint8 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&JoystickInput::hatDirectionChanged)) {
                *result = 5;
            }
        }
        {
            typedef void (JoystickInput::*_t)(UASInterface * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&JoystickInput::activeUASSet)) {
                *result = 6;
            }
        }
        {
            typedef void (JoystickInput::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&JoystickInput::joystickSettingsChanged)) {
                *result = 7;
            }
        }
        {
            typedef void (JoystickInput::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&JoystickInput::newJoystickSelected)) {
                *result = 8;
            }
        }
    }
}

const QMetaObject JoystickInput::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_JoystickInput.data,
      qt_meta_data_JoystickInput,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *JoystickInput::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JoystickInput::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_JoystickInput.stringdata))
        return static_cast<void*>(const_cast< JoystickInput*>(this));
    return QThread::qt_metacast(_clname);
}

int JoystickInput::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void JoystickInput::joystickChanged(float _t1, float _t2, float _t3, float _t4, qint8 _t5, qint8 _t6, quint16 _t7, quint8 _t8)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void JoystickInput::axisValueChanged(int _t1, float _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void JoystickInput::buttonPressed(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void JoystickInput::buttonReleased(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void JoystickInput::actionTriggered(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void JoystickInput::hatDirectionChanged(qint8 _t1, qint8 _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void JoystickInput::activeUASSet(UASInterface * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void JoystickInput::joystickSettingsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}

// SIGNAL 8
void JoystickInput::newJoystickSelected()
{
    QMetaObject::activate(this, &staticMetaObject, 8, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
