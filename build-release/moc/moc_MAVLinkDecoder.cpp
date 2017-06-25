/****************************************************************************
** Meta object code from reading C++ file 'MAVLinkDecoder.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/MAVLinkDecoder.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MAVLinkDecoder.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MAVLinkDecoder_t {
    QByteArrayData data[18];
    char stringdata[169];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MAVLinkDecoder_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MAVLinkDecoder_t qt_meta_stringdata_MAVLinkDecoder = {
    {
QT_MOC_LITERAL(0, 0, 14), // "MAVLinkDecoder"
QT_MOC_LITERAL(1, 15, 19), // "textMessageReceived"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 5), // "uasid"
QT_MOC_LITERAL(4, 42, 11), // "componentid"
QT_MOC_LITERAL(5, 54, 8), // "severity"
QT_MOC_LITERAL(6, 63, 4), // "text"
QT_MOC_LITERAL(7, 68, 12), // "valueChanged"
QT_MOC_LITERAL(8, 81, 5), // "uasId"
QT_MOC_LITERAL(9, 87, 4), // "name"
QT_MOC_LITERAL(10, 92, 4), // "unit"
QT_MOC_LITERAL(11, 97, 5), // "value"
QT_MOC_LITERAL(12, 103, 4), // "msec"
QT_MOC_LITERAL(13, 108, 14), // "receiveMessage"
QT_MOC_LITERAL(14, 123, 14), // "LinkInterface*"
QT_MOC_LITERAL(15, 138, 4), // "link"
QT_MOC_LITERAL(16, 143, 17), // "mavlink_message_t"
QT_MOC_LITERAL(17, 161, 7) // "message"

    },
    "MAVLinkDecoder\0textMessageReceived\0\0"
    "uasid\0componentid\0severity\0text\0"
    "valueChanged\0uasId\0name\0unit\0value\0"
    "msec\0receiveMessage\0LinkInterface*\0"
    "link\0mavlink_message_t\0message"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MAVLinkDecoder[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   29,    2, 0x06 /* Public */,
       7,    5,   38,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    2,   49,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::QString,    3,    4,    5,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::QVariant, QMetaType::ULongLong,    8,    9,   10,   11,   12,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 14, 0x80000000 | 16,   15,   17,

       0        // eod
};

void MAVLinkDecoder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MAVLinkDecoder *_t = static_cast<MAVLinkDecoder *>(_o);
        switch (_id) {
        case 0: _t->textMessageReceived((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 1: _t->valueChanged((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const quint64(*)>(_a[5]))); break;
        case 2: _t->receiveMessage((*reinterpret_cast< LinkInterface*(*)>(_a[1])),(*reinterpret_cast< mavlink_message_t(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
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
            typedef void (MAVLinkDecoder::*_t)(int , int , int , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MAVLinkDecoder::textMessageReceived)) {
                *result = 0;
            }
        }
        {
            typedef void (MAVLinkDecoder::*_t)(const int , const QString & , const QString & , const QVariant & , const quint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MAVLinkDecoder::valueChanged)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject MAVLinkDecoder::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_MAVLinkDecoder.data,
      qt_meta_data_MAVLinkDecoder,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MAVLinkDecoder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MAVLinkDecoder::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MAVLinkDecoder.stringdata))
        return static_cast<void*>(const_cast< MAVLinkDecoder*>(this));
    return QThread::qt_metacast(_clname);
}

int MAVLinkDecoder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void MAVLinkDecoder::textMessageReceived(int _t1, int _t2, int _t3, const QString & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MAVLinkDecoder::valueChanged(const int _t1, const QString & _t2, const QString & _t3, const QVariant & _t4, const quint64 _t5)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
