/****************************************************************************
** Meta object code from reading C++ file 'XbeeLink.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/comm/XbeeLink.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'XbeeLink.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_XbeeLink_t {
    QByteArrayData data[15];
    char stringdata[144];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_XbeeLink_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_XbeeLink_t qt_meta_stringdata_XbeeLink = {
    {
QT_MOC_LITERAL(0, 0, 8), // "XbeeLink"
QT_MOC_LITERAL(1, 9, 11), // "setPortName"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 8), // "portName"
QT_MOC_LITERAL(4, 31, 11), // "setBaudRate"
QT_MOC_LITERAL(5, 43, 4), // "rate"
QT_MOC_LITERAL(6, 48, 20), // "setRemoteAddressHigh"
QT_MOC_LITERAL(7, 69, 4), // "high"
QT_MOC_LITERAL(8, 74, 19), // "setRemoteAddressLow"
QT_MOC_LITERAL(9, 94, 3), // "low"
QT_MOC_LITERAL(10, 98, 10), // "writeBytes"
QT_MOC_LITERAL(11, 109, 11), // "const char*"
QT_MOC_LITERAL(12, 121, 5), // "bytes"
QT_MOC_LITERAL(13, 127, 6), // "length"
QT_MOC_LITERAL(14, 134, 9) // "readBytes"

    },
    "XbeeLink\0setPortName\0\0portName\0"
    "setBaudRate\0rate\0setRemoteAddressHigh\0"
    "high\0setRemoteAddressLow\0low\0writeBytes\0"
    "const char*\0bytes\0length\0readBytes"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_XbeeLink[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x0a /* Public */,
       4,    1,   47,    2, 0x0a /* Public */,
       6,    1,   50,    2, 0x0a /* Public */,
       8,    1,   53,    2, 0x0a /* Public */,
      10,    2,   56,    2, 0x0a /* Public */,
      14,    0,   61,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Bool, QMetaType::QString,    3,
    QMetaType::Bool, QMetaType::Int,    5,
    QMetaType::Bool, QMetaType::UInt,    7,
    QMetaType::Bool, QMetaType::UInt,    9,
    QMetaType::Void, 0x80000000 | 11, QMetaType::LongLong,   12,   13,
    QMetaType::Void,

       0        // eod
};

void XbeeLink::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        XbeeLink *_t = static_cast<XbeeLink *>(_o);
        switch (_id) {
        case 0: { bool _r = _t->setPortName((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: { bool _r = _t->setBaudRate((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { bool _r = _t->setRemoteAddressHigh((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->setRemoteAddressLow((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: _t->writeBytes((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 5: _t->readBytes(); break;
        default: ;
        }
    }
}

const QMetaObject XbeeLink::staticMetaObject = {
    { &XbeeLinkInterface::staticMetaObject, qt_meta_stringdata_XbeeLink.data,
      qt_meta_data_XbeeLink,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *XbeeLink::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XbeeLink::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_XbeeLink.stringdata))
        return static_cast<void*>(const_cast< XbeeLink*>(this));
    return XbeeLinkInterface::qt_metacast(_clname);
}

int XbeeLink::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XbeeLinkInterface::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
