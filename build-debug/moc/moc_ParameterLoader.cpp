/****************************************************************************
** Meta object code from reading C++ file 'ParameterLoader.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/FactSystem/ParameterLoader.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ParameterLoader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ParameterLoader_t {
    QByteArrayData data[16];
    char stringdata[231];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ParameterLoader_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ParameterLoader_t qt_meta_stringdata_ParameterLoader = {
    {
QT_MOC_LITERAL(0, 0, 15), // "ParameterLoader"
QT_MOC_LITERAL(1, 16, 15), // "parametersReady"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 21), // "parameterListProgress"
QT_MOC_LITERAL(4, 55, 5), // "value"
QT_MOC_LITERAL(5, 61, 24), // "restartWaitingParamTimer"
QT_MOC_LITERAL(6, 86, 16), // "_parameterUpdate"
QT_MOC_LITERAL(7, 103, 5), // "uasId"
QT_MOC_LITERAL(8, 109, 11), // "componentId"
QT_MOC_LITERAL(9, 121, 13), // "parameterName"
QT_MOC_LITERAL(10, 135, 14), // "parameterCount"
QT_MOC_LITERAL(11, 150, 11), // "parameterId"
QT_MOC_LITERAL(12, 162, 7), // "mavType"
QT_MOC_LITERAL(13, 170, 13), // "_valueUpdated"
QT_MOC_LITERAL(14, 184, 25), // "_restartWaitingParamTimer"
QT_MOC_LITERAL(15, 210, 20) // "_waitingParamTimeout"

    },
    "ParameterLoader\0parametersReady\0\0"
    "parameterListProgress\0value\0"
    "restartWaitingParamTimer\0_parameterUpdate\0"
    "uasId\0componentId\0parameterName\0"
    "parameterCount\0parameterId\0mavType\0"
    "_valueUpdated\0_restartWaitingParamTimer\0"
    "_waitingParamTimeout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ParameterLoader[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    1,   50,    2, 0x06 /* Public */,
       5,    0,   53,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    7,   54,    2, 0x08 /* Private */,
      13,    1,   69,    2, 0x08 /* Private */,
      14,    0,   72,    2, 0x08 /* Private */,
      15,    0,   73,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::QVariant,    7,    8,    9,   10,   11,   12,    4,
    QMetaType::Void, QMetaType::QVariant,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ParameterLoader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ParameterLoader *_t = static_cast<ParameterLoader *>(_o);
        switch (_id) {
        case 0: _t->parametersReady(); break;
        case 1: _t->parameterListProgress((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->restartWaitingParamTimer(); break;
        case 3: _t->_parameterUpdate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< QVariant(*)>(_a[7]))); break;
        case 4: _t->_valueUpdated((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 5: _t->_restartWaitingParamTimer(); break;
        case 6: _t->_waitingParamTimeout(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ParameterLoader::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ParameterLoader::parametersReady)) {
                *result = 0;
            }
        }
        {
            typedef void (ParameterLoader::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ParameterLoader::parameterListProgress)) {
                *result = 1;
            }
        }
        {
            typedef void (ParameterLoader::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ParameterLoader::restartWaitingParamTimer)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject ParameterLoader::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ParameterLoader.data,
      qt_meta_data_ParameterLoader,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ParameterLoader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ParameterLoader::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ParameterLoader.stringdata))
        return static_cast<void*>(const_cast< ParameterLoader*>(this));
    return QObject::qt_metacast(_clname);
}

int ParameterLoader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void ParameterLoader::parametersReady()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void ParameterLoader::parameterListProgress(float _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ParameterLoader::restartWaitingParamTimer()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
