/****************************************************************************
** Meta object code from reading C++ file 'SerialLink.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/comm/SerialLink.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SerialLink.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SerialLink_t {
    QByteArrayData data[15];
    char stringdata[177];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SerialLink_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SerialLink_t qt_meta_stringdata_SerialLink = {
    {
QT_MOC_LITERAL(0, 0, 10), // "SerialLink"
QT_MOC_LITERAL(1, 11, 10), // "updateLink"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 14), // "LinkInterface*"
QT_MOC_LITERAL(4, 38, 16), // "aboutToCloseFlag"
QT_MOC_LITERAL(5, 55, 9), // "readBytes"
QT_MOC_LITERAL(6, 65, 10), // "writeBytes"
QT_MOC_LITERAL(7, 76, 11), // "const char*"
QT_MOC_LITERAL(8, 88, 4), // "data"
QT_MOC_LITERAL(9, 93, 6), // "length"
QT_MOC_LITERAL(10, 100, 9), // "linkError"
QT_MOC_LITERAL(11, 110, 28), // "QSerialPort::SerialPortError"
QT_MOC_LITERAL(12, 139, 5), // "error"
QT_MOC_LITERAL(13, 145, 20), // "_rerouteDisconnected"
QT_MOC_LITERAL(14, 166, 10) // "_readBytes"

    },
    "SerialLink\0updateLink\0\0LinkInterface*\0"
    "aboutToCloseFlag\0readBytes\0writeBytes\0"
    "const char*\0data\0length\0linkError\0"
    "QSerialPort::SerialPortError\0error\0"
    "_rerouteDisconnected\0_readBytes"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SerialLink[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       4,    0,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   53,    2, 0x0a /* Public */,
       6,    2,   54,    2, 0x0a /* Public */,
      10,    1,   59,    2, 0x0a /* Public */,
      13,    0,   62,    2, 0x08 /* Private */,
      14,    0,   63,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7, QMetaType::LongLong,    8,    9,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SerialLink::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SerialLink *_t = static_cast<SerialLink *>(_o);
        switch (_id) {
        case 0: _t->updateLink((*reinterpret_cast< LinkInterface*(*)>(_a[1]))); break;
        case 1: _t->aboutToCloseFlag(); break;
        case 2: _t->readBytes(); break;
        case 3: _t->writeBytes((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 4: _t->linkError((*reinterpret_cast< QSerialPort::SerialPortError(*)>(_a[1]))); break;
        case 5: _t->_rerouteDisconnected(); break;
        case 6: _t->_readBytes(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinkInterface* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSerialPort::SerialPortError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SerialLink::*_t)(LinkInterface * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SerialLink::updateLink)) {
                *result = 0;
            }
        }
        {
            typedef void (SerialLink::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SerialLink::aboutToCloseFlag)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject SerialLink::staticMetaObject = {
    { &LinkInterface::staticMetaObject, qt_meta_stringdata_SerialLink.data,
      qt_meta_data_SerialLink,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SerialLink::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SerialLink::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SerialLink.stringdata))
        return static_cast<void*>(const_cast< SerialLink*>(this));
    return LinkInterface::qt_metacast(_clname);
}

int SerialLink::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LinkInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void SerialLink::updateLink(LinkInterface * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SerialLink::aboutToCloseFlag()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
