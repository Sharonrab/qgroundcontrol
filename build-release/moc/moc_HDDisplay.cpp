/****************************************************************************
** Meta object code from reading C++ file 'HDDisplay.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/HDDisplay.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'HDDisplay.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_HDDisplay_t {
    QByteArrayData data[27];
    char stringdata[266];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HDDisplay_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HDDisplay_t qt_meta_stringdata_HDDisplay = {
    {
QT_MOC_LITERAL(0, 0, 9), // "HDDisplay"
QT_MOC_LITERAL(1, 10, 11), // "updateValue"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 5), // "uasId"
QT_MOC_LITERAL(4, 29, 4), // "name"
QT_MOC_LITERAL(5, 34, 4), // "unit"
QT_MOC_LITERAL(6, 39, 5), // "value"
QT_MOC_LITERAL(7, 45, 4), // "msec"
QT_MOC_LITERAL(8, 50, 12), // "setActiveUAS"
QT_MOC_LITERAL(9, 63, 13), // "UASInterface*"
QT_MOC_LITERAL(10, 77, 3), // "uas"
QT_MOC_LITERAL(11, 81, 9), // "addSource"
QT_MOC_LITERAL(12, 91, 3), // "obj"
QT_MOC_LITERAL(13, 95, 12), // "removeSource"
QT_MOC_LITERAL(14, 108, 18), // "removeItemByAction"
QT_MOC_LITERAL(15, 127, 8), // "addGauge"
QT_MOC_LITERAL(16, 136, 5), // "gauge"
QT_MOC_LITERAL(17, 142, 8), // "setTitle"
QT_MOC_LITERAL(18, 151, 10), // "setColumns"
QT_MOC_LITERAL(19, 162, 4), // "cols"
QT_MOC_LITERAL(20, 167, 9), // "saveState"
QT_MOC_LITERAL(21, 177, 12), // "restoreState"
QT_MOC_LITERAL(22, 190, 17), // "enableGLRendering"
QT_MOC_LITERAL(23, 208, 6), // "enable"
QT_MOC_LITERAL(24, 215, 13), // "renderOverlay"
QT_MOC_LITERAL(25, 229, 13), // "triggerUpdate"
QT_MOC_LITERAL(26, 243, 22) // "adjustGaugeAspectRatio"

    },
    "HDDisplay\0updateValue\0\0uasId\0name\0"
    "unit\0value\0msec\0setActiveUAS\0UASInterface*\0"
    "uas\0addSource\0obj\0removeSource\0"
    "removeItemByAction\0addGauge\0gauge\0"
    "setTitle\0setColumns\0cols\0saveState\0"
    "restoreState\0enableGLRendering\0enable\0"
    "renderOverlay\0triggerUpdate\0"
    "adjustGaugeAspectRatio"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HDDisplay[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    5,   94,    2, 0x0a /* Public */,
       8,    1,  105,    2, 0x0a /* Public */,
      11,    1,  108,    2, 0x0a /* Public */,
      13,    1,  111,    2, 0x0a /* Public */,
      14,    0,  114,    2, 0x0a /* Public */,
      15,    0,  115,    2, 0x0a /* Public */,
      15,    1,  116,    2, 0x0a /* Public */,
      17,    0,  119,    2, 0x0a /* Public */,
      18,    0,  120,    2, 0x0a /* Public */,
      18,    1,  121,    2, 0x0a /* Public */,
      20,    0,  124,    2, 0x0a /* Public */,
      21,    0,  125,    2, 0x0a /* Public */,
      22,    1,  126,    2, 0x09 /* Protected */,
      24,    0,  129,    2, 0x09 /* Protected */,
      25,    0,  130,    2, 0x09 /* Protected */,
      26,    0,  131,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::QVariant, QMetaType::ULongLong,    3,    4,    5,    6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::QObjectStar,   12,
    QMetaType::Void, QMetaType::QObjectStar,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void HDDisplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HDDisplay *_t = static_cast<HDDisplay *>(_o);
        switch (_id) {
        case 0: _t->updateValue((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const quint64(*)>(_a[5]))); break;
        case 1: _t->setActiveUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 2: _t->addSource((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 3: _t->removeSource((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 4: _t->removeItemByAction(); break;
        case 5: _t->addGauge(); break;
        case 6: _t->addGauge((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->setTitle(); break;
        case 8: _t->setColumns(); break;
        case 9: _t->setColumns((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->saveState(); break;
        case 11: _t->restoreState(); break;
        case 12: _t->enableGLRendering((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->renderOverlay(); break;
        case 14: _t->triggerUpdate(); break;
        case 15: _t->adjustGaugeAspectRatio(); break;
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
        }
    }
}

const QMetaObject HDDisplay::staticMetaObject = {
    { &QGraphicsView::staticMetaObject, qt_meta_stringdata_HDDisplay.data,
      qt_meta_data_HDDisplay,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *HDDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HDDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_HDDisplay.stringdata))
        return static_cast<void*>(const_cast< HDDisplay*>(this));
    return QGraphicsView::qt_metacast(_clname);
}

int HDDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
