/****************************************************************************
** Meta object code from reading C++ file 'UASMessageView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/uas/UASMessageView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UASMessageView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_UASMessageView_t {
    QByteArrayData data[1];
    char stringdata[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UASMessageView_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UASMessageView_t qt_meta_stringdata_UASMessageView = {
    {
QT_MOC_LITERAL(0, 0, 14) // "UASMessageView"

    },
    "UASMessageView"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UASMessageView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void UASMessageView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject UASMessageView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UASMessageView.data,
      qt_meta_data_UASMessageView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *UASMessageView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UASMessageView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_UASMessageView.stringdata))
        return static_cast<void*>(const_cast< UASMessageView*>(this));
    return QWidget::qt_metacast(_clname);
}

int UASMessageView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_UASMessageViewWidget_t {
    QByteArrayData data[6];
    char stringdata[74];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UASMessageViewWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UASMessageViewWidget_t qt_meta_stringdata_UASMessageViewWidget = {
    {
QT_MOC_LITERAL(0, 0, 20), // "UASMessageViewWidget"
QT_MOC_LITERAL(1, 21, 17), // "handleTextMessage"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 11), // "UASMessage*"
QT_MOC_LITERAL(4, 52, 7), // "message"
QT_MOC_LITERAL(5, 60, 13) // "clearMessages"

    },
    "UASMessageViewWidget\0handleTextMessage\0"
    "\0UASMessage*\0message\0clearMessages"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UASMessageViewWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x0a /* Public */,
       5,    0,   27,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

       0        // eod
};

void UASMessageViewWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UASMessageViewWidget *_t = static_cast<UASMessageViewWidget *>(_o);
        switch (_id) {
        case 0: _t->handleTextMessage((*reinterpret_cast< UASMessage*(*)>(_a[1]))); break;
        case 1: _t->clearMessages(); break;
        default: ;
        }
    }
}

const QMetaObject UASMessageViewWidget::staticMetaObject = {
    { &UASMessageView::staticMetaObject, qt_meta_stringdata_UASMessageViewWidget.data,
      qt_meta_data_UASMessageViewWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *UASMessageViewWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UASMessageViewWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_UASMessageViewWidget.stringdata))
        return static_cast<void*>(const_cast< UASMessageViewWidget*>(this));
    return UASMessageView::qt_metacast(_clname);
}

int UASMessageViewWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UASMessageView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_UASMessageViewRollDown_t {
    QByteArrayData data[6];
    char stringdata[74];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UASMessageViewRollDown_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UASMessageViewRollDown_t qt_meta_stringdata_UASMessageViewRollDown = {
    {
QT_MOC_LITERAL(0, 0, 22), // "UASMessageViewRollDown"
QT_MOC_LITERAL(1, 23, 11), // "closeWindow"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 17), // "handleTextMessage"
QT_MOC_LITERAL(4, 54, 11), // "UASMessage*"
QT_MOC_LITERAL(5, 66, 7) // "message"

    },
    "UASMessageViewRollDown\0closeWindow\0\0"
    "handleTextMessage\0UASMessage*\0message"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UASMessageViewRollDown[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   25,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,

       0        // eod
};

void UASMessageViewRollDown::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UASMessageViewRollDown *_t = static_cast<UASMessageViewRollDown *>(_o);
        switch (_id) {
        case 0: _t->closeWindow(); break;
        case 1: _t->handleTextMessage((*reinterpret_cast< UASMessage*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (UASMessageViewRollDown::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UASMessageViewRollDown::closeWindow)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject UASMessageViewRollDown::staticMetaObject = {
    { &UASMessageView::staticMetaObject, qt_meta_stringdata_UASMessageViewRollDown.data,
      qt_meta_data_UASMessageViewRollDown,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *UASMessageViewRollDown::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UASMessageViewRollDown::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_UASMessageViewRollDown.stringdata))
        return static_cast<void*>(const_cast< UASMessageViewRollDown*>(this));
    return UASMessageView::qt_metacast(_clname);
}

int UASMessageViewRollDown::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UASMessageView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void UASMessageViewRollDown::closeWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
