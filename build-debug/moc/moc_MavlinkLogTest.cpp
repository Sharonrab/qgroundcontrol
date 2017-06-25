/****************************************************************************
** Meta object code from reading C++ file 'MavlinkLogTest.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/qgcunittest/MavlinkLogTest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MavlinkLogTest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MavlinkLogTest_t {
    QByteArrayData data[10];
    char stringdata[181];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MavlinkLogTest_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MavlinkLogTest_t qt_meta_stringdata_MavlinkLogTest = {
    {
QT_MOC_LITERAL(0, 0, 14), // "MavlinkLogTest"
QT_MOC_LITERAL(1, 15, 20), // "checkForLostLogFiles"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 4), // "init"
QT_MOC_LITERAL(4, 42, 7), // "cleanup"
QT_MOC_LITERAL(5, 50, 28), // "_bootLogDetectionCancel_test"
QT_MOC_LITERAL(6, 79, 26), // "_bootLogDetectionSave_test"
QT_MOC_LITERAL(7, 106, 32), // "_bootLogDetectionZeroLength_test"
QT_MOC_LITERAL(8, 139, 16), // "_connectLog_test"
QT_MOC_LITERAL(9, 156, 24) // "_deleteTempLogFiles_test"

    },
    "MavlinkLogTest\0checkForLostLogFiles\0"
    "\0init\0cleanup\0_bootLogDetectionCancel_test\0"
    "_bootLogDetectionSave_test\0"
    "_bootLogDetectionZeroLength_test\0"
    "_connectLog_test\0_deleteTempLogFiles_test"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MavlinkLogTest[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MavlinkLogTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MavlinkLogTest *_t = static_cast<MavlinkLogTest *>(_o);
        switch (_id) {
        case 0: _t->checkForLostLogFiles(); break;
        case 1: _t->init(); break;
        case 2: _t->cleanup(); break;
        case 3: _t->_bootLogDetectionCancel_test(); break;
        case 4: _t->_bootLogDetectionSave_test(); break;
        case 5: _t->_bootLogDetectionZeroLength_test(); break;
        case 6: _t->_connectLog_test(); break;
        case 7: _t->_deleteTempLogFiles_test(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MavlinkLogTest::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MavlinkLogTest::checkForLostLogFiles)) {
                *result = 0;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject MavlinkLogTest::staticMetaObject = {
    { &UnitTest::staticMetaObject, qt_meta_stringdata_MavlinkLogTest.data,
      qt_meta_data_MavlinkLogTest,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MavlinkLogTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MavlinkLogTest::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MavlinkLogTest.stringdata))
        return static_cast<void*>(const_cast< MavlinkLogTest*>(this));
    return UnitTest::qt_metacast(_clname);
}

int MavlinkLogTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void MavlinkLogTest::checkForLostLogFiles()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
