/****************************************************************************
** Meta object code from reading C++ file 'QGCUASFileViewMulti.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/QGCUASFileViewMulti.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCUASFileViewMulti.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QGCUASFileViewMulti_t {
    QByteArrayData data[7];
    char stringdata[83];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCUASFileViewMulti_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCUASFileViewMulti_t qt_meta_stringdata_QGCUASFileViewMulti = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QGCUASFileViewMulti"
QT_MOC_LITERAL(1, 20, 13), // "systemDeleted"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 3), // "uas"
QT_MOC_LITERAL(4, 39, 13), // "systemCreated"
QT_MOC_LITERAL(5, 53, 13), // "UASInterface*"
QT_MOC_LITERAL(6, 67, 15) // "systemSetActive"

    },
    "QGCUASFileViewMulti\0systemDeleted\0\0"
    "uas\0systemCreated\0UASInterface*\0"
    "systemSetActive"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCUASFileViewMulti[] = {

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
       1,    1,   29,    2, 0x0a /* Public */,
       4,    1,   32,    2, 0x0a /* Public */,
       6,    1,   35,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QObjectStar,    3,
    QMetaType::Void, 0x80000000 | 5,    3,
    QMetaType::Void, 0x80000000 | 5,    3,

       0        // eod
};

void QGCUASFileViewMulti::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGCUASFileViewMulti *_t = static_cast<QGCUASFileViewMulti *>(_o);
        switch (_id) {
        case 0: _t->systemDeleted((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 1: _t->systemCreated((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 2: _t->systemSetActive((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        }
    }
}

const QMetaObject QGCUASFileViewMulti::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QGCUASFileViewMulti.data,
      qt_meta_data_QGCUASFileViewMulti,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QGCUASFileViewMulti::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCUASFileViewMulti::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QGCUASFileViewMulti.stringdata))
        return static_cast<void*>(const_cast< QGCUASFileViewMulti*>(this));
    return QWidget::qt_metacast(_clname);
}

int QGCUASFileViewMulti::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
