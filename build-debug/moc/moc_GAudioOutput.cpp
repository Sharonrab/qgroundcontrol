/****************************************************************************
** Meta object code from reading C++ file 'GAudioOutput.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/GAudioOutput.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GAudioOutput.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GAudioOutput_t {
    QByteArrayData data[11];
    char stringdata[82];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GAudioOutput_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GAudioOutput_t qt_meta_stringdata_GAudioOutput = {
    {
QT_MOC_LITERAL(0, 0, 12), // "GAudioOutput"
QT_MOC_LITERAL(1, 13, 12), // "mutedChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 11), // "textToSpeak"
QT_MOC_LITERAL(4, 39, 4), // "text"
QT_MOC_LITERAL(5, 44, 8), // "severity"
QT_MOC_LITERAL(6, 53, 8), // "beepOnce"
QT_MOC_LITERAL(7, 62, 3), // "say"
QT_MOC_LITERAL(8, 66, 5), // "alert"
QT_MOC_LITERAL(9, 72, 4), // "beep"
QT_MOC_LITERAL(10, 77, 4) // "mute"

    },
    "GAudioOutput\0mutedChanged\0\0textToSpeak\0"
    "text\0severity\0beepOnce\0say\0alert\0beep\0"
    "mute"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GAudioOutput[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       3,    2,   62,    2, 0x06 /* Public */,
       3,    1,   67,    2, 0x26 /* Public | MethodCloned */,
       6,    0,   70,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    2,   71,    2, 0x0a /* Public */,
       7,    1,   76,    2, 0x2a /* Public | MethodCloned */,
       8,    1,   79,    2, 0x0a /* Public */,
       9,    0,   82,    2, 0x0a /* Public */,
      10,    1,   83,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Bool, QMetaType::QString, QMetaType::Int,    4,    5,
    QMetaType::Bool, QMetaType::QString,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Bool, QMetaType::QString, QMetaType::Int,    4,    5,
    QMetaType::Bool, QMetaType::QString,    4,
    QMetaType::Bool, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   10,

       0        // eod
};

void GAudioOutput::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GAudioOutput *_t = static_cast<GAudioOutput *>(_o);
        switch (_id) {
        case 0: _t->mutedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: { bool _r = _t->textToSpeak((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { bool _r = _t->textToSpeak((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: _t->beepOnce(); break;
        case 4: { bool _r = _t->say((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->say((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->alert((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: _t->beep(); break;
        case 8: _t->mute((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GAudioOutput::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GAudioOutput::mutedChanged)) {
                *result = 0;
            }
        }
        {
            typedef bool (GAudioOutput::*_t)(QString , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GAudioOutput::textToSpeak)) {
                *result = 1;
            }
        }
        {
            typedef void (GAudioOutput::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GAudioOutput::beepOnce)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject GAudioOutput::staticMetaObject = {
    { &QGCSingleton::staticMetaObject, qt_meta_stringdata_GAudioOutput.data,
      qt_meta_data_GAudioOutput,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GAudioOutput::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GAudioOutput::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GAudioOutput.stringdata))
        return static_cast<void*>(const_cast< GAudioOutput*>(this));
    return QGCSingleton::qt_metacast(_clname);
}

int GAudioOutput::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCSingleton::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void GAudioOutput::mutedChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
bool GAudioOutput::textToSpeak(QString _t1, int _t2)
{
    bool _t0 = bool();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
    return _t0;
}

// SIGNAL 3
void GAudioOutput::beepOnce()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
