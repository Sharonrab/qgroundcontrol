/****************************************************************************
** Meta object code from reading C++ file 'LinkManagerTest.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/qgcunittest/LinkManagerTest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LinkManagerTest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LinkManagerTest_t {
    QByteArrayData data[8];
    char stringdata[90];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LinkManagerTest_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LinkManagerTest_t qt_meta_stringdata_LinkManagerTest = {
    {
QT_MOC_LITERAL(0, 0, 15), // "LinkManagerTest"
QT_MOC_LITERAL(1, 16, 4), // "init"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 7), // "cleanup"
QT_MOC_LITERAL(4, 30, 9), // "_add_test"
QT_MOC_LITERAL(5, 40, 12), // "_delete_test"
QT_MOC_LITERAL(6, 53, 16), // "_addSignals_test"
QT_MOC_LITERAL(7, 70, 19) // "_deleteSignals_test"

    },
    "LinkManagerTest\0init\0\0cleanup\0_add_test\0"
    "_delete_test\0_addSignals_test\0"
    "_deleteSignals_test"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LinkManagerTest[] = {

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
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LinkManagerTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LinkManagerTest *_t = static_cast<LinkManagerTest *>(_o);
        switch (_id) {
        case 0: _t->init(); break;
        case 1: _t->cleanup(); break;
        case 2: _t->_add_test(); break;
        case 3: _t->_delete_test(); break;
        case 4: _t->_addSignals_test(); break;
        case 5: _t->_deleteSignals_test(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject LinkManagerTest::staticMetaObject = {
    { &UnitTest::staticMetaObject, qt_meta_stringdata_LinkManagerTest.data,
      qt_meta_data_LinkManagerTest,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LinkManagerTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LinkManagerTest::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LinkManagerTest.stringdata))
        return static_cast<void*>(const_cast< LinkManagerTest*>(this));
    return UnitTest::qt_metacast(_clname);
}

int LinkManagerTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UnitTest::qt_metacall(_c, _id, _a);
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
