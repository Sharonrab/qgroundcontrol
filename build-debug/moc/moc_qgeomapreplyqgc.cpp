/****************************************************************************
** Meta object code from reading C++ file 'qgeomapreplyqgc.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/QtLocationPlugin/qgeomapreplyqgc.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgeomapreplyqgc.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QGeoMapReplyQGC_t {
    QByteArrayData data[7];
    char stringdata[105];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGeoMapReplyQGC_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGeoMapReplyQGC_t qt_meta_stringdata_QGeoMapReplyQGC = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QGeoMapReplyQGC"
QT_MOC_LITERAL(1, 16, 14), // "replyDestroyed"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 20), // "networkReplyFinished"
QT_MOC_LITERAL(4, 53, 17), // "networkReplyError"
QT_MOC_LITERAL(5, 71, 27), // "QNetworkReply::NetworkError"
QT_MOC_LITERAL(6, 99, 5) // "error"

    },
    "QGeoMapReplyQGC\0replyDestroyed\0\0"
    "networkReplyFinished\0networkReplyError\0"
    "QNetworkReply::NetworkError\0error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGeoMapReplyQGC[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    0,   30,    2, 0x08 /* Private */,
       4,    1,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,

       0        // eod
};

void QGeoMapReplyQGC::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGeoMapReplyQGC *_t = static_cast<QGeoMapReplyQGC *>(_o);
        switch (_id) {
        case 0: _t->replyDestroyed(); break;
        case 1: _t->networkReplyFinished(); break;
        case 2: _t->networkReplyError((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        }
    }
}

const QMetaObject QGeoMapReplyQGC::staticMetaObject = {
    { &QGeoTiledMapReply::staticMetaObject, qt_meta_stringdata_QGeoMapReplyQGC.data,
      qt_meta_data_QGeoMapReplyQGC,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QGeoMapReplyQGC::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGeoMapReplyQGC::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QGeoMapReplyQGC.stringdata))
        return static_cast<void*>(const_cast< QGeoMapReplyQGC*>(this));
    return QGeoTiledMapReply::qt_metacast(_clname);
}

int QGeoMapReplyQGC::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGeoTiledMapReply::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
