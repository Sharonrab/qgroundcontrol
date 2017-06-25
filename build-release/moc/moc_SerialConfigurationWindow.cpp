/****************************************************************************
** Meta object code from reading C++ file 'SerialConfigurationWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/SerialConfigurationWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SerialConfigurationWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SerialConfigurationWindow_t {
    QByteArrayData data[15];
    char stringdata[171];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SerialConfigurationWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SerialConfigurationWindow_t qt_meta_stringdata_SerialConfigurationWindow = {
    {
QT_MOC_LITERAL(0, 0, 25), // "SerialConfigurationWindow"
QT_MOC_LITERAL(1, 26, 17), // "enableFlowControl"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 4), // "flow"
QT_MOC_LITERAL(4, 50, 13), // "setParityNone"
QT_MOC_LITERAL(5, 64, 6), // "accept"
QT_MOC_LITERAL(6, 71, 12), // "setParityOdd"
QT_MOC_LITERAL(7, 84, 13), // "setParityEven"
QT_MOC_LITERAL(8, 98, 11), // "setPortName"
QT_MOC_LITERAL(9, 110, 5), // "index"
QT_MOC_LITERAL(10, 116, 11), // "setBaudRate"
QT_MOC_LITERAL(11, 128, 11), // "setDataBits"
QT_MOC_LITERAL(12, 140, 4), // "bits"
QT_MOC_LITERAL(13, 145, 11), // "setStopBits"
QT_MOC_LITERAL(14, 157, 13) // "setupPortList"

    },
    "SerialConfigurationWindow\0enableFlowControl\0"
    "\0flow\0setParityNone\0accept\0setParityOdd\0"
    "setParityEven\0setPortName\0index\0"
    "setBaudRate\0setDataBits\0bits\0setStopBits\0"
    "setupPortList"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SerialConfigurationWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x0a /* Public */,
       4,    1,   62,    2, 0x0a /* Public */,
       6,    1,   65,    2, 0x0a /* Public */,
       7,    1,   68,    2, 0x0a /* Public */,
       8,    1,   71,    2, 0x0a /* Public */,
      10,    1,   74,    2, 0x0a /* Public */,
      11,    1,   77,    2, 0x0a /* Public */,
      13,    1,   80,    2, 0x0a /* Public */,
      14,    0,   83,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Bool,

       0        // eod
};

void SerialConfigurationWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SerialConfigurationWindow *_t = static_cast<SerialConfigurationWindow *>(_o);
        switch (_id) {
        case 0: _t->enableFlowControl((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setParityNone((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setParityOdd((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setParityEven((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->setPortName((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setBaudRate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setDataBits((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setStopBits((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: { bool _r = _t->setupPortList();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject SerialConfigurationWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SerialConfigurationWindow.data,
      qt_meta_data_SerialConfigurationWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SerialConfigurationWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SerialConfigurationWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SerialConfigurationWindow.stringdata))
        return static_cast<void*>(const_cast< SerialConfigurationWindow*>(this));
    return QWidget::qt_metacast(_clname);
}

int SerialConfigurationWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
