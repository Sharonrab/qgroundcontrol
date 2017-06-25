/****************************************************************************
** Meta object code from reading C++ file 'Linecharts.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/linechart/Linecharts.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Linecharts.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Linecharts_t {
    QByteArrayData data[11];
    char stringdata[104];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Linecharts_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Linecharts_t qt_meta_stringdata_Linecharts = {
    {
QT_MOC_LITERAL(0, 0, 10), // "Linecharts"
QT_MOC_LITERAL(1, 11, 14), // "logfileWritten"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 8), // "fileName"
QT_MOC_LITERAL(4, 36, 17), // "visibilityChanged"
QT_MOC_LITERAL(5, 54, 7), // "visible"
QT_MOC_LITERAL(6, 62, 9), // "addSystem"
QT_MOC_LITERAL(7, 72, 13), // "UASInterface*"
QT_MOC_LITERAL(8, 86, 3), // "uas"
QT_MOC_LITERAL(9, 90, 9), // "addSource"
QT_MOC_LITERAL(10, 100, 3) // "obj"

    },
    "Linecharts\0logfileWritten\0\0fileName\0"
    "visibilityChanged\0visible\0addSystem\0"
    "UASInterface*\0uas\0addSource\0obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Linecharts[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   40,    2, 0x0a /* Public */,
       9,    1,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Bool,    5,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::QObjectStar,   10,

       0        // eod
};

void Linecharts::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Linecharts *_t = static_cast<Linecharts *>(_o);
        switch (_id) {
        case 0: _t->logfileWritten((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->visibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->addSystem((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 3: _t->addSource((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
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
            typedef void (Linecharts::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Linecharts::logfileWritten)) {
                *result = 0;
            }
        }
        {
            typedef void (Linecharts::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Linecharts::visibilityChanged)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject Linecharts::staticMetaObject = {
    { &QStackedWidget::staticMetaObject, qt_meta_stringdata_Linecharts.data,
      qt_meta_data_Linecharts,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Linecharts::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Linecharts::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Linecharts.stringdata))
        return static_cast<void*>(const_cast< Linecharts*>(this));
    return QStackedWidget::qt_metacast(_clname);
}

int Linecharts::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStackedWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Linecharts::logfileWritten(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Linecharts::visibilityChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
