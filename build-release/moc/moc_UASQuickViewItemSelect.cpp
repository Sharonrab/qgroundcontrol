/****************************************************************************
** Meta object code from reading C++ file 'UASQuickViewItemSelect.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/uas/UASQuickViewItemSelect.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UASQuickViewItemSelect.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_UASQuickViewItemSelect_t {
    QByteArrayData data[7];
    char stringdata[81];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UASQuickViewItemSelect_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UASQuickViewItemSelect_t qt_meta_stringdata_UASQuickViewItemSelect = {
    {
QT_MOC_LITERAL(0, 0, 22), // "UASQuickViewItemSelect"
QT_MOC_LITERAL(1, 23, 12), // "valueEnabled"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 5), // "value"
QT_MOC_LITERAL(4, 43, 13), // "valueDisabled"
QT_MOC_LITERAL(5, 57, 15), // "checkBoxClicked"
QT_MOC_LITERAL(6, 73, 7) // "checked"

    },
    "UASQuickViewItemSelect\0valueEnabled\0"
    "\0value\0valueDisabled\0checkBoxClicked\0"
    "checked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UASQuickViewItemSelect[] = {

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
       1,    1,   29,    2, 0x06 /* Public */,
       4,    1,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   35,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    6,

       0        // eod
};

void UASQuickViewItemSelect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UASQuickViewItemSelect *_t = static_cast<UASQuickViewItemSelect *>(_o);
        switch (_id) {
        case 0: _t->valueEnabled((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->valueDisabled((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->checkBoxClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (UASQuickViewItemSelect::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASQuickViewItemSelect::valueEnabled)) {
                *result = 0;
            }
        }
        {
            typedef void (UASQuickViewItemSelect::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASQuickViewItemSelect::valueDisabled)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject UASQuickViewItemSelect::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UASQuickViewItemSelect.data,
      qt_meta_data_UASQuickViewItemSelect,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *UASQuickViewItemSelect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UASQuickViewItemSelect::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_UASQuickViewItemSelect.stringdata))
        return static_cast<void*>(const_cast< UASQuickViewItemSelect*>(this));
    return QWidget::qt_metacast(_clname);
}

int UASQuickViewItemSelect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void UASQuickViewItemSelect::valueEnabled(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UASQuickViewItemSelect::valueDisabled(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
