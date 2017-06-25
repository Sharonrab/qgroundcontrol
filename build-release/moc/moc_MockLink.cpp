/****************************************************************************
** Meta object code from reading C++ file 'MockLink.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/comm/MockLink.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MockLink.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MockLink_t {
    QByteArrayData data[11];
    char stringdata[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MockLink_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MockLink_t qt_meta_stringdata_MockLink = {
    {
QT_MOC_LITERAL(0, 0, 8), // "MockLink"
QT_MOC_LITERAL(1, 9, 14), // "_incomingBytes"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 5), // "bytes"
QT_MOC_LITERAL(4, 31, 10), // "writeBytes"
QT_MOC_LITERAL(5, 42, 11), // "const char*"
QT_MOC_LITERAL(6, 54, 6), // "cBytes"
QT_MOC_LITERAL(7, 61, 9), // "readBytes"
QT_MOC_LITERAL(8, 71, 12), // "_run1HzTasks"
QT_MOC_LITERAL(9, 84, 13), // "_run10HzTasks"
QT_MOC_LITERAL(10, 98, 13) // "_run50HzTasks"

    },
    "MockLink\0_incomingBytes\0\0bytes\0"
    "writeBytes\0const char*\0cBytes\0readBytes\0"
    "_run1HzTasks\0_run10HzTasks\0_run50HzTasks"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MockLink[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    2,   47,    2, 0x0a /* Public */,
       7,    0,   52,    2, 0x09 /* Protected */,
       8,    0,   53,    2, 0x08 /* Private */,
       9,    0,   54,    2, 0x08 /* Private */,
      10,    0,   55,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5, QMetaType::LongLong,    3,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MockLink::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MockLink *_t = static_cast<MockLink *>(_o);
        switch (_id) {
        case 0: _t->_incomingBytes((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 1: _t->writeBytes((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 2: _t->readBytes(); break;
        case 3: _t->_run1HzTasks(); break;
        case 4: _t->_run10HzTasks(); break;
        case 5: _t->_run50HzTasks(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MockLink::*_t)(const QByteArray );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MockLink::_incomingBytes)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject MockLink::staticMetaObject = {
    { &LinkInterface::staticMetaObject, qt_meta_stringdata_MockLink.data,
      qt_meta_data_MockLink,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MockLink::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MockLink::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MockLink.stringdata))
        return static_cast<void*>(const_cast< MockLink*>(this));
    return LinkInterface::qt_metacast(_clname);
}

int MockLink::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LinkInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void MockLink::_incomingBytes(const QByteArray _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
