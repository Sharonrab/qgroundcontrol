/****************************************************************************
** Meta object code from reading C++ file 'MessageBoxTest.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/qgcunittest/MessageBoxTest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MessageBoxTest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MessageBoxTest_t {
    QByteArrayData data[7];
    char stringdata[136];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MessageBoxTest_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MessageBoxTest_t qt_meta_stringdata_MessageBoxTest = {
    {
QT_MOC_LITERAL(0, 0, 14), // "MessageBoxTest"
QT_MOC_LITERAL(1, 15, 24), // "_messageBoxExpected_test"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 26), // "_messageBoxUnexpected_test"
QT_MOC_LITERAL(4, 68, 24), // "_previousMessageBox_test"
QT_MOC_LITERAL(5, 93, 18), // "_noMessageBox_test"
QT_MOC_LITERAL(6, 112, 23) // "_badResponseButton_test"

    },
    "MessageBoxTest\0_messageBoxExpected_test\0"
    "\0_messageBoxUnexpected_test\0"
    "_previousMessageBox_test\0_noMessageBox_test\0"
    "_badResponseButton_test"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MessageBoxTest[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MessageBoxTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MessageBoxTest *_t = static_cast<MessageBoxTest *>(_o);
        switch (_id) {
        case 0: _t->_messageBoxExpected_test(); break;
        case 1: _t->_messageBoxUnexpected_test(); break;
        case 2: _t->_previousMessageBox_test(); break;
        case 3: _t->_noMessageBox_test(); break;
        case 4: _t->_badResponseButton_test(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject MessageBoxTest::staticMetaObject = {
    { &UnitTest::staticMetaObject, qt_meta_stringdata_MessageBoxTest.data,
      qt_meta_data_MessageBoxTest,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MessageBoxTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MessageBoxTest::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MessageBoxTest.stringdata))
        return static_cast<void*>(const_cast< MessageBoxTest*>(this));
    return UnitTest::qt_metacast(_clname);
}

int MessageBoxTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UnitTest::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
