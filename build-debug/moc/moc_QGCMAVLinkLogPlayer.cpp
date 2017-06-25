/****************************************************************************
** Meta object code from reading C++ file 'QGCMAVLinkLogPlayer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/QGCMAVLinkLogPlayer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCMAVLinkLogPlayer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QGCMAVLinkLogPlayer_t {
    QByteArrayData data[19];
    char stringdata[220];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCMAVLinkLogPlayer_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCMAVLinkLogPlayer_t qt_meta_stringdata_QGCMAVLinkLogPlayer = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QGCMAVLinkLogPlayer"
QT_MOC_LITERAL(1, 20, 10), // "bytesReady"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 14), // "LinkInterface*"
QT_MOC_LITERAL(4, 47, 4), // "link"
QT_MOC_LITERAL(5, 52, 5), // "bytes"
QT_MOC_LITERAL(6, 58, 17), // "logFileEndReached"
QT_MOC_LITERAL(7, 76, 15), // "playPauseToggle"
QT_MOC_LITERAL(8, 92, 4), // "play"
QT_MOC_LITERAL(9, 97, 5), // "pause"
QT_MOC_LITERAL(10, 103, 5), // "reset"
QT_MOC_LITERAL(11, 109, 11), // "loadLogFile"
QT_MOC_LITERAL(12, 121, 4), // "file"
QT_MOC_LITERAL(13, 126, 15), // "jumpToSliderVal"
QT_MOC_LITERAL(14, 142, 11), // "slidervalue"
QT_MOC_LITERAL(15, 154, 7), // "logLoop"
QT_MOC_LITERAL(16, 162, 24), // "setAccelerationFactorInt"
QT_MOC_LITERAL(17, 187, 6), // "factor"
QT_MOC_LITERAL(18, 194, 25) // "_selectLogFileForPlayback"

    },
    "QGCMAVLinkLogPlayer\0bytesReady\0\0"
    "LinkInterface*\0link\0bytes\0logFileEndReached\0"
    "playPauseToggle\0play\0pause\0reset\0"
    "loadLogFile\0file\0jumpToSliderVal\0"
    "slidervalue\0logLoop\0setAccelerationFactorInt\0"
    "factor\0_selectLogFileForPlayback"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCMAVLinkLogPlayer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   69,    2, 0x06 /* Public */,
       6,    0,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   75,    2, 0x0a /* Public */,
       8,    0,   76,    2, 0x0a /* Public */,
       9,    0,   77,    2, 0x0a /* Public */,
      10,    0,   78,    2, 0x0a /* Public */,
      11,    1,   79,    2, 0x0a /* Public */,
      13,    1,   82,    2, 0x0a /* Public */,
      15,    0,   85,    2, 0x0a /* Public */,
      16,    1,   86,    2, 0x0a /* Public */,
      18,    0,   89,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QByteArray,    4,    5,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void,

       0        // eod
};

void QGCMAVLinkLogPlayer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGCMAVLinkLogPlayer *_t = static_cast<QGCMAVLinkLogPlayer *>(_o);
        switch (_id) {
        case 0: _t->bytesReady((*reinterpret_cast< LinkInterface*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 1: _t->logFileEndReached(); break;
        case 2: _t->playPauseToggle(); break;
        case 3: _t->play(); break;
        case 4: _t->pause(); break;
        case 5: _t->reset(); break;
        case 6: { bool _r = _t->loadLogFile((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: _t->jumpToSliderVal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->logLoop(); break;
        case 9: _t->setAccelerationFactorInt((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->_selectLogFileForPlayback(); break;
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
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QGCMAVLinkLogPlayer::*_t)(LinkInterface * , const QByteArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGCMAVLinkLogPlayer::bytesReady)) {
                *result = 0;
            }
        }
        {
            typedef void (QGCMAVLinkLogPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGCMAVLinkLogPlayer::logFileEndReached)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject QGCMAVLinkLogPlayer::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QGCMAVLinkLogPlayer.data,
      qt_meta_data_QGCMAVLinkLogPlayer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QGCMAVLinkLogPlayer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCMAVLinkLogPlayer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QGCMAVLinkLogPlayer.stringdata))
        return static_cast<void*>(const_cast< QGCMAVLinkLogPlayer*>(this));
    return QWidget::qt_metacast(_clname);
}

int QGCMAVLinkLogPlayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void QGCMAVLinkLogPlayer::bytesReady(LinkInterface * _t1, const QByteArray & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QGCMAVLinkLogPlayer::logFileEndReached()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
