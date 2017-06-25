/****************************************************************************
** Meta object code from reading C++ file 'XbeeConfigurationWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/XbeeConfigurationWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'XbeeConfigurationWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_XbeeConfigurationWindow_t {
    QByteArrayData data[15];
    char stringdata[186];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_XbeeConfigurationWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_XbeeConfigurationWindow_t qt_meta_stringdata_XbeeConfigurationWindow = {
    {
QT_MOC_LITERAL(0, 0, 23), // "XbeeConfigurationWindow"
QT_MOC_LITERAL(1, 24, 15), // "addrHighChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 8), // "addrHigh"
QT_MOC_LITERAL(4, 50, 14), // "addrLowChanged"
QT_MOC_LITERAL(5, 65, 7), // "addrLow"
QT_MOC_LITERAL(6, 73, 22), // "configureCommunication"
QT_MOC_LITERAL(7, 96, 11), // "setPortName"
QT_MOC_LITERAL(8, 108, 4), // "port"
QT_MOC_LITERAL(9, 113, 17), // "setBaudRateString"
QT_MOC_LITERAL(10, 131, 4), // "baud"
QT_MOC_LITERAL(11, 136, 13), // "setupPortList"
QT_MOC_LITERAL(12, 150, 15), // "addrChangedHigh"
QT_MOC_LITERAL(13, 166, 4), // "addr"
QT_MOC_LITERAL(14, 171, 14) // "addrChangedLow"

    },
    "XbeeConfigurationWindow\0addrHighChanged\0"
    "\0addrHigh\0addrLowChanged\0addrLow\0"
    "configureCommunication\0setPortName\0"
    "port\0setBaudRateString\0baud\0setupPortList\0"
    "addrChangedHigh\0addr\0addrChangedLow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_XbeeConfigurationWindow[] = {

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
       6,    0,   60,    2, 0x0a /* Public */,
       7,    1,   61,    2, 0x0a /* Public */,
       9,    1,   64,    2, 0x0a /* Public */,
      11,    0,   67,    2, 0x0a /* Public */,
      12,    1,   68,    2, 0x08 /* Private */,
      14,    1,   71,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,

       0        // eod
};

void XbeeConfigurationWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        XbeeConfigurationWindow *_t = static_cast<XbeeConfigurationWindow *>(_o);
        switch (_id) {
        case 0: _t->addrHighChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 1: _t->addrLowChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 2: _t->configureCommunication(); break;
        case 3: _t->setPortName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->setBaudRateString((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->setupPortList(); break;
        case 6: _t->addrChangedHigh((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->addrChangedLow((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (XbeeConfigurationWindow::*_t)(quint32 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&XbeeConfigurationWindow::addrHighChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (XbeeConfigurationWindow::*_t)(quint32 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&XbeeConfigurationWindow::addrLowChanged)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject XbeeConfigurationWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_XbeeConfigurationWindow.data,
      qt_meta_data_XbeeConfigurationWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *XbeeConfigurationWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XbeeConfigurationWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_XbeeConfigurationWindow.stringdata))
        return static_cast<void*>(const_cast< XbeeConfigurationWindow*>(this));
    return QWidget::qt_metacast(_clname);
}

int XbeeConfigurationWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void XbeeConfigurationWindow::addrHighChanged(quint32 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void XbeeConfigurationWindow::addrLowChanged(quint32 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
