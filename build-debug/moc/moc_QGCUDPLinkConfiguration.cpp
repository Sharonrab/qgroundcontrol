/****************************************************************************
** Meta object code from reading C++ file 'QGCUDPLinkConfiguration.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/QGCUDPLinkConfiguration.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCUDPLinkConfiguration.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QGCUDPLinkConfiguration_t {
    QByteArrayData data[10];
    char stringdata[170];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCUDPLinkConfiguration_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCUDPLinkConfiguration_t qt_meta_stringdata_QGCUDPLinkConfiguration = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QGCUDPLinkConfiguration"
QT_MOC_LITERAL(1, 24, 18), // "on_addHost_clicked"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 21), // "on_removeHost_clicked"
QT_MOC_LITERAL(4, 66, 19), // "on_editHost_clicked"
QT_MOC_LITERAL(5, 86, 19), // "on_listView_clicked"
QT_MOC_LITERAL(6, 106, 5), // "index"
QT_MOC_LITERAL(7, 112, 25), // "on_listView_doubleClicked"
QT_MOC_LITERAL(8, 138, 26), // "on_portNumber_valueChanged"
QT_MOC_LITERAL(9, 165, 4) // "arg1"

    },
    "QGCUDPLinkConfiguration\0on_addHost_clicked\0"
    "\0on_removeHost_clicked\0on_editHost_clicked\0"
    "on_listView_clicked\0index\0"
    "on_listView_doubleClicked\0"
    "on_portNumber_valueChanged\0arg1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCUDPLinkConfiguration[] = {

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
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    1,   47,    2, 0x08 /* Private */,
       7,    1,   50,    2, 0x08 /* Private */,
       8,    1,   53,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    6,
    QMetaType::Void, QMetaType::QModelIndex,    6,
    QMetaType::Void, QMetaType::Int,    9,

       0        // eod
};

void QGCUDPLinkConfiguration::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGCUDPLinkConfiguration *_t = static_cast<QGCUDPLinkConfiguration *>(_o);
        switch (_id) {
        case 0: _t->on_addHost_clicked(); break;
        case 1: _t->on_removeHost_clicked(); break;
        case 2: _t->on_editHost_clicked(); break;
        case 3: _t->on_listView_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->on_listView_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 5: _t->on_portNumber_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QGCUDPLinkConfiguration::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QGCUDPLinkConfiguration.data,
      qt_meta_data_QGCUDPLinkConfiguration,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QGCUDPLinkConfiguration::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCUDPLinkConfiguration::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QGCUDPLinkConfiguration.stringdata))
        return static_cast<void*>(const_cast< QGCUDPLinkConfiguration*>(this));
    return QWidget::qt_metacast(_clname);
}

int QGCUDPLinkConfiguration::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
