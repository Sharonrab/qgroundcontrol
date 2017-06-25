/****************************************************************************
** Meta object code from reading C++ file 'UDPLink.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/comm/UDPLink.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UDPLink.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_UDPLink_t {
    QByteArrayData data[10];
    char stringdata[78];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UDPLink_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UDPLink_t qt_meta_stringdata_UDPLink = {
    {
QT_MOC_LITERAL(0, 0, 7), // "UDPLink"
QT_MOC_LITERAL(1, 8, 7), // "addHost"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 4), // "host"
QT_MOC_LITERAL(4, 22, 10), // "removeHost"
QT_MOC_LITERAL(5, 33, 9), // "readBytes"
QT_MOC_LITERAL(6, 43, 10), // "writeBytes"
QT_MOC_LITERAL(7, 54, 11), // "const char*"
QT_MOC_LITERAL(8, 66, 4), // "data"
QT_MOC_LITERAL(9, 71, 6) // "length"

    },
    "UDPLink\0addHost\0\0host\0removeHost\0"
    "readBytes\0writeBytes\0const char*\0data\0"
    "length"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UDPLink[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x0a /* Public */,
       4,    1,   37,    2, 0x0a /* Public */,
       5,    0,   40,    2, 0x0a /* Public */,
       6,    2,   41,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7, QMetaType::LongLong,    8,    9,

       0        // eod
};

void UDPLink::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UDPLink *_t = static_cast<UDPLink *>(_o);
        switch (_id) {
        case 0: _t->addHost((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->removeHost((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->readBytes(); break;
        case 3: _t->writeBytes((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject UDPLink::staticMetaObject = {
    { &LinkInterface::staticMetaObject, qt_meta_stringdata_UDPLink.data,
      qt_meta_data_UDPLink,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *UDPLink::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UDPLink::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_UDPLink.stringdata))
        return static_cast<void*>(const_cast< UDPLink*>(this));
    return LinkInterface::qt_metacast(_clname);
}

int UDPLink::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LinkInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
