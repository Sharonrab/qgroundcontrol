/****************************************************************************
** Meta object code from reading C++ file 'XbeeLinkInterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/comm/XbeeLinkInterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'XbeeLinkInterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_XbeeLinkInterface_t {
    QByteArrayData data[13];
    char stringdata[144];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_XbeeLinkInterface_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_XbeeLinkInterface_t qt_meta_stringdata_XbeeLinkInterface = {
    {
QT_MOC_LITERAL(0, 0, 17), // "XbeeLinkInterface"
QT_MOC_LITERAL(1, 18, 15), // "tryConnectBegin"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 6), // "toTrue"
QT_MOC_LITERAL(4, 42, 13), // "tryConnectEnd"
QT_MOC_LITERAL(5, 56, 11), // "setPortName"
QT_MOC_LITERAL(6, 68, 8), // "portName"
QT_MOC_LITERAL(7, 77, 11), // "setBaudRate"
QT_MOC_LITERAL(8, 89, 4), // "rate"
QT_MOC_LITERAL(9, 94, 20), // "setRemoteAddressHigh"
QT_MOC_LITERAL(10, 115, 4), // "high"
QT_MOC_LITERAL(11, 120, 19), // "setRemoteAddressLow"
QT_MOC_LITERAL(12, 140, 3) // "low"

    },
    "XbeeLinkInterface\0tryConnectBegin\0\0"
    "toTrue\0tryConnectEnd\0setPortName\0"
    "portName\0setBaudRate\0rate\0"
    "setRemoteAddressHigh\0high\0setRemoteAddressLow\0"
    "low"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_XbeeLinkInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   50,    2, 0x0a /* Public */,
       7,    1,   53,    2, 0x0a /* Public */,
       9,    1,   56,    2, 0x0a /* Public */,
      11,    1,   59,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Bool, QMetaType::QString,    6,
    QMetaType::Bool, QMetaType::Int,    8,
    QMetaType::Bool, QMetaType::UInt,   10,
    QMetaType::Bool, QMetaType::UInt,   12,

       0        // eod
};

void XbeeLinkInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        XbeeLinkInterface *_t = static_cast<XbeeLinkInterface *>(_o);
        switch (_id) {
        case 0: _t->tryConnectBegin((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->tryConnectEnd((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: { bool _r = _t->setPortName((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->setBaudRate((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->setRemoteAddressHigh((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->setRemoteAddressLow((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (XbeeLinkInterface::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&XbeeLinkInterface::tryConnectBegin)) {
                *result = 0;
            }
        }
        {
            typedef void (XbeeLinkInterface::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&XbeeLinkInterface::tryConnectEnd)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject XbeeLinkInterface::staticMetaObject = {
    { &LinkInterface::staticMetaObject, qt_meta_stringdata_XbeeLinkInterface.data,
      qt_meta_data_XbeeLinkInterface,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *XbeeLinkInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XbeeLinkInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_XbeeLinkInterface.stringdata))
        return static_cast<void*>(const_cast< XbeeLinkInterface*>(this));
    return LinkInterface::qt_metacast(_clname);
}

int XbeeLinkInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void XbeeLinkInterface::tryConnectBegin(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void XbeeLinkInterface::tryConnectEnd(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
