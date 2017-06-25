/****************************************************************************
** Meta object code from reading C++ file 'UASControlWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/uas/UASControlWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UASControlWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_UASControlWidget_t {
    QByteArrayData data[18];
    char stringdata[198];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UASControlWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UASControlWidget_t qt_meta_stringdata_UASControlWidget = {
    {
QT_MOC_LITERAL(0, 0, 16), // "UASControlWidget"
QT_MOC_LITERAL(1, 17, 11), // "changedMode"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 15), // "updateModesList"
QT_MOC_LITERAL(4, 46, 6), // "setUAS"
QT_MOC_LITERAL(5, 53, 13), // "UASInterface*"
QT_MOC_LITERAL(6, 67, 5), // "uasID"
QT_MOC_LITERAL(7, 73, 18), // "cycleContextButton"
QT_MOC_LITERAL(8, 92, 7), // "setMode"
QT_MOC_LITERAL(9, 100, 4), // "mode"
QT_MOC_LITERAL(10, 105, 12), // "transmitMode"
QT_MOC_LITERAL(11, 118, 10), // "updateMode"
QT_MOC_LITERAL(12, 129, 11), // "description"
QT_MOC_LITERAL(13, 141, 11), // "updateState"
QT_MOC_LITERAL(14, 153, 5), // "state"
QT_MOC_LITERAL(15, 159, 13), // "updateArmText"
QT_MOC_LITERAL(16, 173, 18), // "setBackgroundColor"
QT_MOC_LITERAL(17, 192, 5) // "color"

    },
    "UASControlWidget\0changedMode\0\0"
    "updateModesList\0setUAS\0UASInterface*\0"
    "uasID\0cycleContextButton\0setMode\0mode\0"
    "transmitMode\0updateMode\0description\0"
    "updateState\0state\0updateArmText\0"
    "setBackgroundColor\0color"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UASControlWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   67,    2, 0x0a /* Public */,
       4,    1,   68,    2, 0x0a /* Public */,
       7,    0,   71,    2, 0x0a /* Public */,
       8,    1,   72,    2, 0x0a /* Public */,
      10,    0,   75,    2, 0x0a /* Public */,
      11,    3,   76,    2, 0x0a /* Public */,
      13,    1,   83,    2, 0x0a /* Public */,
      15,    0,   86,    2, 0x0a /* Public */,
      16,    1,   87,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString,    6,    9,   12,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QColor,   17,

       0        // eod
};

void UASControlWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UASControlWidget *_t = static_cast<UASControlWidget *>(_o);
        switch (_id) {
        case 0: _t->changedMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->updateModesList(); break;
        case 2: _t->setUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 3: _t->cycleContextButton(); break;
        case 4: _t->setMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->transmitMode(); break;
        case 6: _t->updateMode((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 7: _t->updateState((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->updateArmText(); break;
        case 9: _t->setBackgroundColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (UASControlWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASControlWidget::changedMode)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject UASControlWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UASControlWidget.data,
      qt_meta_data_UASControlWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *UASControlWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UASControlWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_UASControlWidget.stringdata))
        return static_cast<void*>(const_cast< UASControlWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int UASControlWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void UASControlWidget::changedMode(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
