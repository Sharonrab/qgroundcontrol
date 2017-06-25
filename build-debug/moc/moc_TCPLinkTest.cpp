/****************************************************************************
** Meta object code from reading C++ file 'TCPLinkTest.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/qgcunittest/TCPLinkTest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TCPLinkTest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TCPLinkUnitTest_t {
    QByteArrayData data[11];
    char stringdata[153];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TCPLinkUnitTest_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TCPLinkUnitTest_t qt_meta_stringdata_TCPLinkUnitTest = {
    {
QT_MOC_LITERAL(0, 0, 15), // "TCPLinkUnitTest"
QT_MOC_LITERAL(1, 16, 19), // "waitForBytesWritten"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 5), // "msecs"
QT_MOC_LITERAL(4, 43, 16), // "waitForReadyRead"
QT_MOC_LITERAL(5, 60, 4), // "init"
QT_MOC_LITERAL(6, 65, 7), // "cleanup"
QT_MOC_LITERAL(7, 73, 16), // "_properties_test"
QT_MOC_LITERAL(8, 90, 23), // "_nameChangedSignal_test"
QT_MOC_LITERAL(9, 114, 17), // "_connectFail_test"
QT_MOC_LITERAL(10, 132, 20) // "_connectSucceed_test"

    },
    "TCPLinkUnitTest\0waitForBytesWritten\0"
    "\0msecs\0waitForReadyRead\0init\0cleanup\0"
    "_properties_test\0_nameChangedSignal_test\0"
    "_connectFail_test\0_connectSucceed_test"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TCPLinkUnitTest[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    1,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   60,    2, 0x08 /* Private */,
       6,    0,   61,    2, 0x08 /* Private */,
       7,    0,   62,    2, 0x08 /* Private */,
       8,    0,   63,    2, 0x08 /* Private */,
       9,    0,   64,    2, 0x08 /* Private */,
      10,    0,   65,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TCPLinkUnitTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TCPLinkUnitTest *_t = static_cast<TCPLinkUnitTest *>(_o);
        switch (_id) {
        case 0: _t->waitForBytesWritten((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->waitForReadyRead((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->init(); break;
        case 3: _t->cleanup(); break;
        case 4: _t->_properties_test(); break;
        case 5: _t->_nameChangedSignal_test(); break;
        case 6: _t->_connectFail_test(); break;
        case 7: _t->_connectSucceed_test(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TCPLinkUnitTest::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TCPLinkUnitTest::waitForBytesWritten)) {
                *result = 0;
            }
        }
        {
            typedef void (TCPLinkUnitTest::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TCPLinkUnitTest::waitForReadyRead)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject TCPLinkUnitTest::staticMetaObject = {
    { &UnitTest::staticMetaObject, qt_meta_stringdata_TCPLinkUnitTest.data,
      qt_meta_data_TCPLinkUnitTest,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TCPLinkUnitTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TCPLinkUnitTest::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TCPLinkUnitTest.stringdata))
        return static_cast<void*>(const_cast< TCPLinkUnitTest*>(this));
    return UnitTest::qt_metacast(_clname);
}

int TCPLinkUnitTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UnitTest::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void TCPLinkUnitTest::waitForBytesWritten(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TCPLinkUnitTest::waitForReadyRead(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
