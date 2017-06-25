/****************************************************************************
** Meta object code from reading C++ file 'Fact.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/FactSystem/Fact.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Fact.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Fact_t {
    QByteArrayData data[23];
    char stringdata[276];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Fact_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Fact_t qt_meta_stringdata_Fact = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Fact"
QT_MOC_LITERAL(1, 5, 12), // "valueChanged"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 5), // "value"
QT_MOC_LITERAL(4, 25, 22), // "_containerValueChanged"
QT_MOC_LITERAL(5, 48, 8), // "validate"
QT_MOC_LITERAL(6, 57, 11), // "convertOnly"
QT_MOC_LITERAL(7, 69, 11), // "componentId"
QT_MOC_LITERAL(8, 81, 4), // "name"
QT_MOC_LITERAL(9, 86, 11), // "valueString"
QT_MOC_LITERAL(10, 98, 5), // "units"
QT_MOC_LITERAL(11, 104, 12), // "defaultValue"
QT_MOC_LITERAL(12, 117, 21), // "defaultValueAvailable"
QT_MOC_LITERAL(13, 139, 18), // "valueEqualsDefault"
QT_MOC_LITERAL(14, 158, 4), // "type"
QT_MOC_LITERAL(15, 163, 25), // "FactMetaData::ValueType_t"
QT_MOC_LITERAL(16, 189, 16), // "shortDescription"
QT_MOC_LITERAL(17, 206, 15), // "longDescription"
QT_MOC_LITERAL(18, 222, 3), // "min"
QT_MOC_LITERAL(19, 226, 19), // "minIsDefaultForType"
QT_MOC_LITERAL(20, 246, 3), // "max"
QT_MOC_LITERAL(21, 250, 19), // "maxIsDefaultForType"
QT_MOC_LITERAL(22, 270, 5) // "group"

    },
    "Fact\0valueChanged\0\0value\0"
    "_containerValueChanged\0validate\0"
    "convertOnly\0componentId\0name\0valueString\0"
    "units\0defaultValue\0defaultValueAvailable\0"
    "valueEqualsDefault\0type\0"
    "FactMetaData::ValueType_t\0shortDescription\0"
    "longDescription\0min\0minIsDefaultForType\0"
    "max\0maxIsDefaultForType\0group"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Fact[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
      16,   40, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    1,   32,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       5,    2,   35,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QVariant,    3,
    QMetaType::Void, QMetaType::QVariant,    3,

 // methods: parameters
    QMetaType::QString, QMetaType::QString, QMetaType::Bool,    3,    6,

 // properties: name, type, flags
       7, QMetaType::Int, 0x00095401,
       8, QMetaType::QString, 0x00095401,
       3, QMetaType::QVariant, 0x00595103,
       9, QMetaType::QVariant, 0x00495001,
      10, QMetaType::QString, 0x00095401,
      11, QMetaType::QVariant, 0x00095401,
      12, QMetaType::Bool, 0x00095401,
      13, QMetaType::Bool, 0x00495001,
      14, 0x80000000 | 15, 0x00095409,
      16, QMetaType::QString, 0x00095401,
      17, QMetaType::QString, 0x00095401,
      18, QMetaType::QVariant, 0x00095401,
      19, QMetaType::Bool, 0x00095401,
      20, QMetaType::QVariant, 0x00095401,
      21, QMetaType::Bool, 0x00095401,
      22, QMetaType::QString, 0x00095401,

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
       0,
       0,

       0        // eod
};

void Fact::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Fact *_t = static_cast<Fact *>(_o);
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 1: _t->_containerValueChanged((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 2: { QString _r = _t->validate((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Fact::*_t)(QVariant );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Fact::valueChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (Fact::*_t)(const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Fact::_containerValueChanged)) {
                *result = 1;
            }
        }
    }
}

static const QMetaObject * const qt_meta_extradata_Fact[] = {
        &FactMetaData::staticMetaObject,
    Q_NULLPTR
};

const QMetaObject Fact::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Fact.data,
      qt_meta_data_Fact,  qt_static_metacall, qt_meta_extradata_Fact, Q_NULLPTR}
};


const QMetaObject *Fact::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Fact::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Fact.stringdata))
        return static_cast<void*>(const_cast< Fact*>(this));
    return QObject::qt_metacast(_clname);
}

int Fact::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        case 0: *reinterpret_cast< int*>(_v) = componentId(); break;
        case 1: *reinterpret_cast< QString*>(_v) = name(); break;
        case 2: *reinterpret_cast< QVariant*>(_v) = value(); break;
        case 3: *reinterpret_cast< QVariant*>(_v) = valueString(); break;
        case 4: *reinterpret_cast< QString*>(_v) = units(); break;
        case 5: *reinterpret_cast< QVariant*>(_v) = defaultValue(); break;
        case 6: *reinterpret_cast< bool*>(_v) = defaultValueAvailable(); break;
        case 7: *reinterpret_cast< bool*>(_v) = valueEqualsDefault(); break;
        case 8: *reinterpret_cast< FactMetaData::ValueType_t*>(_v) = type(); break;
        case 9: *reinterpret_cast< QString*>(_v) = shortDescription(); break;
        case 10: *reinterpret_cast< QString*>(_v) = longDescription(); break;
        case 11: *reinterpret_cast< QVariant*>(_v) = min(); break;
        case 12: *reinterpret_cast< bool*>(_v) = minIsDefaultForType(); break;
        case 13: *reinterpret_cast< QVariant*>(_v) = max(); break;
        case 14: *reinterpret_cast< bool*>(_v) = maxIsDefaultForType(); break;
        case 15: *reinterpret_cast< QString*>(_v) = group(); break;
        default: break;
        }
        _id -= 16;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 2: setValue(*reinterpret_cast< QVariant*>(_v)); break;
        default: break;
        }
        _id -= 16;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 16;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Fact::valueChanged(QVariant _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Fact::_containerValueChanged(const QVariant & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
