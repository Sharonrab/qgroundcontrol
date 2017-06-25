/****************************************************************************
** Meta object code from reading C++ file 'UASManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/uas/UASManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UASManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_UASManager_t {
    QByteArrayData data[32];
    char stringdata[334];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UASManager_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UASManager_t qt_meta_stringdata_UASManager = {
    {
QT_MOC_LITERAL(0, 0, 10), // "UASManager"
QT_MOC_LITERAL(1, 11, 6), // "addUAS"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 13), // "UASInterface*"
QT_MOC_LITERAL(4, 33, 3), // "UAS"
QT_MOC_LITERAL(5, 37, 9), // "removeUAS"
QT_MOC_LITERAL(6, 47, 3), // "uas"
QT_MOC_LITERAL(7, 51, 12), // "setActiveUAS"
QT_MOC_LITERAL(8, 64, 15), // "launchActiveUAS"
QT_MOC_LITERAL(9, 80, 13), // "haltActiveUAS"
QT_MOC_LITERAL(10, 94, 17), // "continueActiveUAS"
QT_MOC_LITERAL(11, 112, 15), // "returnActiveUAS"
QT_MOC_LITERAL(12, 128, 13), // "stopActiveUAS"
QT_MOC_LITERAL(13, 142, 13), // "killActiveUAS"
QT_MOC_LITERAL(14, 156, 17), // "shutdownActiveUAS"
QT_MOC_LITERAL(15, 174, 15), // "setHomePosition"
QT_MOC_LITERAL(16, 190, 3), // "lat"
QT_MOC_LITERAL(17, 194, 3), // "lon"
QT_MOC_LITERAL(18, 198, 3), // "alt"
QT_MOC_LITERAL(19, 202, 24), // "setHomePositionAndNotify"
QT_MOC_LITERAL(20, 227, 24), // "setLocalNEDSafetyBorders"
QT_MOC_LITERAL(21, 252, 2), // "x1"
QT_MOC_LITERAL(22, 255, 2), // "y1"
QT_MOC_LITERAL(23, 258, 2), // "z1"
QT_MOC_LITERAL(24, 261, 2), // "x2"
QT_MOC_LITERAL(25, 264, 2), // "y2"
QT_MOC_LITERAL(26, 267, 2), // "z2"
QT_MOC_LITERAL(27, 270, 22), // "uavChangedHomePosition"
QT_MOC_LITERAL(28, 293, 3), // "uav"
QT_MOC_LITERAL(29, 297, 12), // "loadSettings"
QT_MOC_LITERAL(30, 310, 13), // "storeSettings"
QT_MOC_LITERAL(31, 324, 9) // "_shutdown"

    },
    "UASManager\0addUAS\0\0UASInterface*\0UAS\0"
    "removeUAS\0uas\0setActiveUAS\0launchActiveUAS\0"
    "haltActiveUAS\0continueActiveUAS\0"
    "returnActiveUAS\0stopActiveUAS\0"
    "killActiveUAS\0shutdownActiveUAS\0"
    "setHomePosition\0lat\0lon\0alt\0"
    "setHomePositionAndNotify\0"
    "setLocalNEDSafetyBorders\0x1\0y1\0z1\0x2\0"
    "y2\0z2\0uavChangedHomePosition\0uav\0"
    "loadSettings\0storeSettings\0_shutdown"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UASManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x0a /* Public */,
       5,    1,  102,    2, 0x0a /* Public */,
       7,    1,  105,    2, 0x0a /* Public */,
       8,    0,  108,    2, 0x0a /* Public */,
       9,    0,  109,    2, 0x0a /* Public */,
      10,    0,  110,    2, 0x0a /* Public */,
      11,    0,  111,    2, 0x0a /* Public */,
      12,    0,  112,    2, 0x0a /* Public */,
      13,    0,  113,    2, 0x0a /* Public */,
      14,    0,  114,    2, 0x0a /* Public */,
      15,    3,  115,    2, 0x0a /* Public */,
      19,    3,  122,    2, 0x0a /* Public */,
      20,    6,  129,    2, 0x0a /* Public */,
      27,    4,  142,    2, 0x0a /* Public */,
      29,    0,  151,    2, 0x0a /* Public */,
      30,    0,  152,    2, 0x0a /* Public */,
      31,    0,  153,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    6,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::Double, QMetaType::Double, QMetaType::Double,   16,   17,   18,
    QMetaType::Bool, QMetaType::Double, QMetaType::Double, QMetaType::Double,   16,   17,   18,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,   21,   22,   23,   24,   25,   26,
    QMetaType::Void, QMetaType::Int, QMetaType::Double, QMetaType::Double, QMetaType::Double,   28,   16,   17,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void UASManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UASManager *_t = static_cast<UASManager *>(_o);
        switch (_id) {
        case 0: _t->addUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 1: _t->removeUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 2: _t->setActiveUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 3: { bool _r = _t->launchActiveUAS();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->haltActiveUAS();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->continueActiveUAS();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->returnActiveUAS();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->stopActiveUAS();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->killActiveUAS();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->shutdownActiveUAS();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->setHomePosition((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->setHomePositionAndNotify((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: _t->setLocalNEDSafetyBorders((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6]))); break;
        case 13: _t->uavChangedHomePosition((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 14: _t->loadSettings(); break;
        case 15: _t->storeSettings(); break;
        case 16: _t->_shutdown(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        }
    }
}

const QMetaObject UASManager::staticMetaObject = {
    { &UASManagerInterface::staticMetaObject, qt_meta_stringdata_UASManager.data,
      qt_meta_data_UASManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *UASManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UASManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_UASManager.stringdata))
        return static_cast<void*>(const_cast< UASManager*>(this));
    return UASManagerInterface::qt_metacast(_clname);
}

int UASManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UASManagerInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
