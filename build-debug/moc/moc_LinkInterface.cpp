/****************************************************************************
** Meta object code from reading C++ file 'LinkInterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/comm/LinkInterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LinkInterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LinkInterface_t {
    QByteArrayData data[21];
    char stringdata[205];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LinkInterface_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LinkInterface_t qt_meta_stringdata_LinkInterface = {
    {
QT_MOC_LITERAL(0, 0, 13), // "LinkInterface"
QT_MOC_LITERAL(1, 14, 13), // "bytesReceived"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 14), // "LinkInterface*"
QT_MOC_LITERAL(4, 44, 4), // "link"
QT_MOC_LITERAL(5, 49, 4), // "data"
QT_MOC_LITERAL(6, 54, 9), // "connected"
QT_MOC_LITERAL(7, 64, 12), // "disconnected"
QT_MOC_LITERAL(8, 77, 11), // "nameChanged"
QT_MOC_LITERAL(9, 89, 4), // "name"
QT_MOC_LITERAL(10, 94, 18), // "communicationError"
QT_MOC_LITERAL(11, 113, 5), // "title"
QT_MOC_LITERAL(12, 119, 5), // "error"
QT_MOC_LITERAL(13, 125, 19), // "communicationUpdate"
QT_MOC_LITERAL(14, 145, 8), // "linkname"
QT_MOC_LITERAL(15, 154, 4), // "text"
QT_MOC_LITERAL(16, 159, 10), // "writeBytes"
QT_MOC_LITERAL(17, 170, 11), // "const char*"
QT_MOC_LITERAL(18, 182, 5), // "bytes"
QT_MOC_LITERAL(19, 188, 6), // "length"
QT_MOC_LITERAL(20, 195, 9) // "readBytes"

    },
    "LinkInterface\0bytesReceived\0\0"
    "LinkInterface*\0link\0data\0connected\0"
    "disconnected\0nameChanged\0name\0"
    "communicationError\0title\0error\0"
    "communicationUpdate\0linkname\0text\0"
    "writeBytes\0const char*\0bytes\0length\0"
    "readBytes"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LinkInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   54,    2, 0x06 /* Public */,
       6,    0,   59,    2, 0x06 /* Public */,
       7,    0,   60,    2, 0x06 /* Public */,
       8,    1,   61,    2, 0x06 /* Public */,
      10,    2,   64,    2, 0x06 /* Public */,
      13,    2,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    2,   74,    2, 0x0a /* Public */,
      20,    0,   79,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QByteArray,    4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   11,   12,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   14,   15,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 17, QMetaType::LongLong,   18,   19,
    QMetaType::Void,

       0        // eod
};

void LinkInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LinkInterface *_t = static_cast<LinkInterface *>(_o);
        switch (_id) {
        case 0: _t->bytesReceived((*reinterpret_cast< LinkInterface*(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 1: _t->connected(); break;
        case 2: _t->disconnected(); break;
        case 3: _t->nameChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->communicationError((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->communicationUpdate((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->writeBytes((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 7: _t->readBytes(); break;
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
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (LinkInterface::*_t)(LinkInterface * , QByteArray );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LinkInterface::bytesReceived)) {
                *result = 0;
            }
        }
        {
            typedef void (LinkInterface::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LinkInterface::connected)) {
                *result = 1;
            }
        }
        {
            typedef void (LinkInterface::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LinkInterface::disconnected)) {
                *result = 2;
            }
        }
        {
            typedef void (LinkInterface::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LinkInterface::nameChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (LinkInterface::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LinkInterface::communicationError)) {
                *result = 4;
            }
        }
        {
            typedef void (LinkInterface::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LinkInterface::communicationUpdate)) {
                *result = 5;
            }
        }
    }
}

const QMetaObject LinkInterface::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_LinkInterface.data,
      qt_meta_data_LinkInterface,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LinkInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LinkInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LinkInterface.stringdata))
        return static_cast<void*>(const_cast< LinkInterface*>(this));
    return QThread::qt_metacast(_clname);
}

int LinkInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void LinkInterface::bytesReceived(LinkInterface * _t1, QByteArray _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LinkInterface::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void LinkInterface::disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void LinkInterface::nameChanged(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void LinkInterface::communicationError(const QString & _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void LinkInterface::communicationUpdate(const QString & _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
