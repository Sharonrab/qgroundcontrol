/****************************************************************************
** Meta object code from reading C++ file 'Mouse6dofInput.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/input/Mouse6dofInput.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Mouse6dofInput.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Mouse6dofInput_t {
    QByteArrayData data[21];
    char stringdata[236];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mouse6dofInput_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mouse6dofInput_t qt_meta_stringdata_Mouse6dofInput = {
    {
QT_MOC_LITERAL(0, 0, 14), // "Mouse6dofInput"
QT_MOC_LITERAL(1, 15, 16), // "mouse6dofChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 1), // "x"
QT_MOC_LITERAL(4, 35, 1), // "y"
QT_MOC_LITERAL(5, 37, 1), // "z"
QT_MOC_LITERAL(6, 39, 1), // "a"
QT_MOC_LITERAL(7, 41, 1), // "b"
QT_MOC_LITERAL(8, 43, 1), // "c"
QT_MOC_LITERAL(9, 45, 29), // "mouseTranslationActiveChanged"
QT_MOC_LITERAL(10, 75, 17), // "translationEnable"
QT_MOC_LITERAL(11, 93, 26), // "mouseRotationActiveChanged"
QT_MOC_LITERAL(12, 120, 14), // "rotationEnable"
QT_MOC_LITERAL(13, 135, 12), // "setActiveUAS"
QT_MOC_LITERAL(14, 148, 13), // "UASInterface*"
QT_MOC_LITERAL(15, 162, 3), // "uas"
QT_MOC_LITERAL(16, 166, 13), // "motion3DMouse"
QT_MOC_LITERAL(17, 180, 19), // "std::vector<float>&"
QT_MOC_LITERAL(18, 200, 10), // "motionData"
QT_MOC_LITERAL(19, 211, 17), // "button3DMouseDown"
QT_MOC_LITERAL(20, 229, 6) // "button"

    },
    "Mouse6dofInput\0mouse6dofChanged\0\0x\0y\0"
    "z\0a\0b\0c\0mouseTranslationActiveChanged\0"
    "translationEnable\0mouseRotationActiveChanged\0"
    "rotationEnable\0setActiveUAS\0UASInterface*\0"
    "uas\0motion3DMouse\0std::vector<float>&\0"
    "motionData\0button3DMouseDown\0button"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mouse6dofInput[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    6,   44,    2, 0x06 /* Public */,
       9,    1,   57,    2, 0x06 /* Public */,
      11,    1,   60,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    1,   63,    2, 0x0a /* Public */,
      16,    1,   66,    2, 0x0a /* Public */,
      19,    1,   69,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    3,    4,    5,    6,    7,    8,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   12,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, QMetaType::Int,   20,

       0        // eod
};

void Mouse6dofInput::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Mouse6dofInput *_t = static_cast<Mouse6dofInput *>(_o);
        switch (_id) {
        case 0: _t->mouse6dofChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6]))); break;
        case 1: _t->mouseTranslationActiveChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->mouseRotationActiveChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setActiveUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 4: _t->motion3DMouse((*reinterpret_cast< std::vector<float>(*)>(_a[1]))); break;
        case 5: _t->button3DMouseDown((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
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
            typedef void (Mouse6dofInput::*_t)(double , double , double , double , double , double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Mouse6dofInput::mouse6dofChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (Mouse6dofInput::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Mouse6dofInput::mouseTranslationActiveChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (Mouse6dofInput::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Mouse6dofInput::mouseRotationActiveChanged)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject Mouse6dofInput::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_Mouse6dofInput.data,
      qt_meta_data_Mouse6dofInput,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Mouse6dofInput::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mouse6dofInput::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Mouse6dofInput.stringdata))
        return static_cast<void*>(const_cast< Mouse6dofInput*>(this));
    return QThread::qt_metacast(_clname);
}

int Mouse6dofInput::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Mouse6dofInput::mouse6dofChanged(double _t1, double _t2, double _t3, double _t4, double _t5, double _t6)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Mouse6dofInput::mouseTranslationActiveChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Mouse6dofInput::mouseRotationActiveChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
