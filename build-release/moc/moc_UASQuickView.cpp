/****************************************************************************
** Meta object code from reading C++ file 'UASQuickView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/uas/UASQuickView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UASQuickView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_UASQuickView_t {
    QByteArrayData data[19];
    char stringdata[201];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UASQuickView_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UASQuickView_t qt_meta_stringdata_UASQuickView = {
    {
QT_MOC_LITERAL(0, 0, 12), // "UASQuickView"
QT_MOC_LITERAL(1, 13, 12), // "valueChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 5), // "uasid"
QT_MOC_LITERAL(4, 33, 4), // "name"
QT_MOC_LITERAL(5, 38, 4), // "unit"
QT_MOC_LITERAL(6, 43, 5), // "value"
QT_MOC_LITERAL(7, 49, 5), // "msecs"
QT_MOC_LITERAL(8, 55, 15), // "actionTriggered"
QT_MOC_LITERAL(9, 71, 7), // "checked"
QT_MOC_LITERAL(10, 79, 15), // "updateTimerTick"
QT_MOC_LITERAL(11, 95, 6), // "addUAS"
QT_MOC_LITERAL(12, 102, 13), // "UASInterface*"
QT_MOC_LITERAL(13, 116, 3), // "uas"
QT_MOC_LITERAL(14, 120, 12), // "setActiveUAS"
QT_MOC_LITERAL(15, 133, 18), // "selectDialogClosed"
QT_MOC_LITERAL(16, 152, 12), // "valueEnabled"
QT_MOC_LITERAL(17, 165, 13), // "valueDisabled"
QT_MOC_LITERAL(18, 179, 21) // "columnActionTriggered"

    },
    "UASQuickView\0valueChanged\0\0uasid\0name\0"
    "unit\0value\0msecs\0actionTriggered\0"
    "checked\0updateTimerTick\0addUAS\0"
    "UASInterface*\0uas\0setActiveUAS\0"
    "selectDialogClosed\0valueEnabled\0"
    "valueDisabled\0columnActionTriggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UASQuickView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    5,   64,    2, 0x0a /* Public */,
       8,    1,   75,    2, 0x0a /* Public */,
       8,    0,   78,    2, 0x0a /* Public */,
      10,    0,   79,    2, 0x0a /* Public */,
      11,    1,   80,    2, 0x0a /* Public */,
      14,    1,   83,    2, 0x0a /* Public */,
      15,    0,   86,    2, 0x0a /* Public */,
      16,    1,   87,    2, 0x0a /* Public */,
      17,    1,   90,    2, 0x0a /* Public */,
      18,    0,   93,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::QVariant, QMetaType::ULongLong,    3,    4,    5,    6,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,

       0        // eod
};

void UASQuickView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UASQuickView *_t = static_cast<UASQuickView *>(_o);
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const quint64(*)>(_a[5]))); break;
        case 1: _t->actionTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->actionTriggered(); break;
        case 3: _t->updateTimerTick(); break;
        case 4: _t->addUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 5: _t->setActiveUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 6: _t->selectDialogClosed(); break;
        case 7: _t->valueEnabled((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->valueDisabled((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->columnActionTriggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        }
    }
}

const QMetaObject UASQuickView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UASQuickView.data,
      qt_meta_data_UASQuickView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *UASQuickView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UASQuickView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_UASQuickView.stringdata))
        return static_cast<void*>(const_cast< UASQuickView*>(this));
    return QWidget::qt_metacast(_clname);
}

int UASQuickView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
