/****************************************************************************
** Meta object code from reading C++ file 'LinkManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/comm/LinkManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LinkManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LinkManager_t {
    QByteArrayData data[11];
    char stringdata[142];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LinkManager_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LinkManager_t qt_meta_stringdata_LinkManager = {
    {
QT_MOC_LITERAL(0, 0, 11), // "LinkManager"
QT_MOC_LITERAL(1, 12, 7), // "newLink"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 14), // "LinkInterface*"
QT_MOC_LITERAL(4, 36, 4), // "link"
QT_MOC_LITERAL(5, 41, 11), // "linkDeleted"
QT_MOC_LITERAL(6, 53, 13), // "linkConnected"
QT_MOC_LITERAL(7, 67, 16), // "linkDisconnected"
QT_MOC_LITERAL(8, 84, 24), // "linkConfigurationChanged"
QT_MOC_LITERAL(9, 109, 14), // "_linkConnected"
QT_MOC_LITERAL(10, 124, 17) // "_linkDisconnected"

    },
    "LinkManager\0newLink\0\0LinkInterface*\0"
    "link\0linkDeleted\0linkConnected\0"
    "linkDisconnected\0linkConfigurationChanged\0"
    "_linkConnected\0_linkDisconnected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LinkManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       5,    1,   52,    2, 0x06 /* Public */,
       6,    1,   55,    2, 0x06 /* Public */,
       7,    1,   58,    2, 0x06 /* Public */,
       8,    0,   61,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   62,    2, 0x08 /* Private */,
      10,    0,   63,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LinkManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LinkManager *_t = static_cast<LinkManager *>(_o);
        switch (_id) {
        case 0: _t->newLink((*reinterpret_cast< LinkInterface*(*)>(_a[1]))); break;
        case 1: _t->linkDeleted((*reinterpret_cast< LinkInterface*(*)>(_a[1]))); break;
        case 2: _t->linkConnected((*reinterpret_cast< LinkInterface*(*)>(_a[1]))); break;
        case 3: _t->linkDisconnected((*reinterpret_cast< LinkInterface*(*)>(_a[1]))); break;
        case 4: _t->linkConfigurationChanged(); break;
        case 5: _t->_linkConnected(); break;
        case 6: _t->_linkDisconnected(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinkInterface* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinkInterface* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinkInterface* >(); break;
            }
            break;
        case 3:
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
            typedef void (LinkManager::*_t)(LinkInterface * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LinkManager::newLink)) {
                *result = 0;
            }
        }
        {
            typedef void (LinkManager::*_t)(LinkInterface * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LinkManager::linkDeleted)) {
                *result = 1;
            }
        }
        {
            typedef void (LinkManager::*_t)(LinkInterface * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LinkManager::linkConnected)) {
                *result = 2;
            }
        }
        {
            typedef void (LinkManager::*_t)(LinkInterface * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LinkManager::linkDisconnected)) {
                *result = 3;
            }
        }
        {
            typedef void (LinkManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LinkManager::linkConfigurationChanged)) {
                *result = 4;
            }
        }
    }
}

const QMetaObject LinkManager::staticMetaObject = {
    { &QGCSingleton::staticMetaObject, qt_meta_stringdata_LinkManager.data,
      qt_meta_data_LinkManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LinkManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LinkManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LinkManager.stringdata))
        return static_cast<void*>(const_cast< LinkManager*>(this));
    return QGCSingleton::qt_metacast(_clname);
}

int LinkManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCSingleton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void LinkManager::newLink(LinkInterface * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LinkManager::linkDeleted(LinkInterface * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void LinkManager::linkConnected(LinkInterface * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void LinkManager::linkDisconnected(LinkInterface * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void LinkManager::linkConfigurationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
