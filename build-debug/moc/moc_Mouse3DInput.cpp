/****************************************************************************
** Meta object code from reading C++ file 'Mouse3DInput.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../libs/thirdParty/3DMouse/win/Mouse3DInput.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Mouse3DInput.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Mouse3DInput_t {
    QByteArrayData data[8];
    char stringdata[99];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mouse3DInput_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mouse3DInput_t qt_meta_stringdata_Mouse3DInput = {
    {
QT_MOC_LITERAL(0, 0, 12), // "Mouse3DInput"
QT_MOC_LITERAL(1, 13, 6), // "Move3d"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 19), // "std::vector<float>&"
QT_MOC_LITERAL(4, 41, 10), // "motionData"
QT_MOC_LITERAL(5, 52, 16), // "On3dmouseKeyDown"
QT_MOC_LITERAL(6, 69, 14), // "virtualKeyCode"
QT_MOC_LITERAL(7, 84, 14) // "On3dmouseKeyUp"

    },
    "Mouse3DInput\0Move3d\0\0std::vector<float>&\0"
    "motionData\0On3dmouseKeyDown\0virtualKeyCode\0"
    "On3dmouseKeyUp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mouse3DInput[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       5,    1,   32,    2, 0x06 /* Public */,
       7,    1,   35,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,

       0        // eod
};

void Mouse3DInput::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Mouse3DInput *_t = static_cast<Mouse3DInput *>(_o);
        switch (_id) {
        case 0: _t->Move3d((*reinterpret_cast< std::vector<float>(*)>(_a[1]))); break;
        case 1: _t->On3dmouseKeyDown((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->On3dmouseKeyUp((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Mouse3DInput::*_t)(std::vector<float> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Mouse3DInput::Move3d)) {
                *result = 0;
            }
        }
        {
            typedef void (Mouse3DInput::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Mouse3DInput::On3dmouseKeyDown)) {
                *result = 1;
            }
        }
        {
            typedef void (Mouse3DInput::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Mouse3DInput::On3dmouseKeyUp)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject Mouse3DInput::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Mouse3DInput.data,
      qt_meta_data_Mouse3DInput,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Mouse3DInput::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mouse3DInput::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Mouse3DInput.stringdata))
        return static_cast<void*>(const_cast< Mouse3DInput*>(this));
    if (!strcmp(_clname, "QAbstractNativeEventFilter"))
        return static_cast< QAbstractNativeEventFilter*>(const_cast< Mouse3DInput*>(this));
    return QObject::qt_metacast(_clname);
}

int Mouse3DInput::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}

// SIGNAL 0
void Mouse3DInput::Move3d(std::vector<float> & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Mouse3DInput::On3dmouseKeyDown(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Mouse3DInput::On3dmouseKeyUp(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
