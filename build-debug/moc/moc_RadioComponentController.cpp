/****************************************************************************
** Meta object code from reading C++ file 'RadioComponentController.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/AutoPilotPlugins/PX4/RadioComponentController.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RadioComponentController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_RadioComponentController_t {
    QByteArrayData data[59];
    char stringdata[1016];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RadioComponentController_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RadioComponentController_t qt_meta_stringdata_RadioComponentController = {
    {
QT_MOC_LITERAL(0, 0, 24), // "RadioComponentController"
QT_MOC_LITERAL(1, 25, 19), // "channelCountChanged"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 12), // "channelCount"
QT_MOC_LITERAL(4, 59, 21), // "channelRCValueChanged"
QT_MOC_LITERAL(5, 81, 7), // "channel"
QT_MOC_LITERAL(6, 89, 7), // "rcValue"
QT_MOC_LITERAL(7, 97, 24), // "rollChannelMappedChanged"
QT_MOC_LITERAL(8, 122, 6), // "mapped"
QT_MOC_LITERAL(9, 129, 25), // "pitchChannelMappedChanged"
QT_MOC_LITERAL(10, 155, 23), // "yawChannelMappedChanged"
QT_MOC_LITERAL(11, 179, 28), // "throttleChannelMappedChanged"
QT_MOC_LITERAL(12, 208, 25), // "rollChannelRCValueChanged"
QT_MOC_LITERAL(13, 234, 26), // "pitchChannelRCValueChanged"
QT_MOC_LITERAL(14, 261, 24), // "yawChannelRCValueChanged"
QT_MOC_LITERAL(15, 286, 29), // "throttleChannelRCValueChanged"
QT_MOC_LITERAL(16, 316, 26), // "rollChannelReversedChanged"
QT_MOC_LITERAL(17, 343, 8), // "reversed"
QT_MOC_LITERAL(18, 352, 27), // "pitchChannelReversedChanged"
QT_MOC_LITERAL(19, 380, 25), // "yawChannelReversedChanged"
QT_MOC_LITERAL(20, 406, 30), // "throttleChannelReversedChanged"
QT_MOC_LITERAL(21, 437, 16), // "imageHelpChanged"
QT_MOC_LITERAL(22, 454, 6), // "source"
QT_MOC_LITERAL(23, 461, 22), // "transmitterModeChanged"
QT_MOC_LITERAL(24, 484, 4), // "mode"
QT_MOC_LITERAL(25, 489, 29), // "nextButtonMessageBoxDisplayed"
QT_MOC_LITERAL(26, 519, 31), // "_remoteControlChannelRawChanged"
QT_MOC_LITERAL(27, 551, 4), // "chan"
QT_MOC_LITERAL(28, 556, 3), // "val"
QT_MOC_LITERAL(29, 560, 16), // "spektrumBindMode"
QT_MOC_LITERAL(30, 577, 19), // "cancelButtonClicked"
QT_MOC_LITERAL(31, 597, 17), // "skipButtonClicked"
QT_MOC_LITERAL(32, 615, 17), // "nextButtonClicked"
QT_MOC_LITERAL(33, 633, 5), // "start"
QT_MOC_LITERAL(34, 639, 9), // "copyTrims"
QT_MOC_LITERAL(35, 649, 15), // "minChannelCount"
QT_MOC_LITERAL(36, 665, 10), // "statusText"
QT_MOC_LITERAL(37, 676, 11), // "QQuickItem*"
QT_MOC_LITERAL(38, 688, 12), // "cancelButton"
QT_MOC_LITERAL(39, 701, 10), // "nextButton"
QT_MOC_LITERAL(40, 712, 10), // "skipButton"
QT_MOC_LITERAL(41, 723, 17), // "rollChannelMapped"
QT_MOC_LITERAL(42, 741, 18), // "pitchChannelMapped"
QT_MOC_LITERAL(43, 760, 16), // "yawChannelMapped"
QT_MOC_LITERAL(44, 777, 21), // "throttleChannelMapped"
QT_MOC_LITERAL(45, 799, 18), // "rollChannelRCValue"
QT_MOC_LITERAL(46, 818, 19), // "pitchChannelRCValue"
QT_MOC_LITERAL(47, 838, 17), // "yawChannelRCValue"
QT_MOC_LITERAL(48, 856, 22), // "throttleChannelRCValue"
QT_MOC_LITERAL(49, 879, 19), // "rollChannelReversed"
QT_MOC_LITERAL(50, 899, 20), // "pitchChannelReversed"
QT_MOC_LITERAL(51, 920, 18), // "yawChannelReversed"
QT_MOC_LITERAL(52, 939, 23), // "throttleChannelReversed"
QT_MOC_LITERAL(53, 963, 15), // "transmitterMode"
QT_MOC_LITERAL(54, 979, 9), // "imageHelp"
QT_MOC_LITERAL(55, 989, 9), // "BindModes"
QT_MOC_LITERAL(56, 999, 4), // "DSM2"
QT_MOC_LITERAL(57, 1004, 5), // "DSMX7"
QT_MOC_LITERAL(58, 1010, 5) // "DSMX8"

    },
    "RadioComponentController\0channelCountChanged\0"
    "\0channelCount\0channelRCValueChanged\0"
    "channel\0rcValue\0rollChannelMappedChanged\0"
    "mapped\0pitchChannelMappedChanged\0"
    "yawChannelMappedChanged\0"
    "throttleChannelMappedChanged\0"
    "rollChannelRCValueChanged\0"
    "pitchChannelRCValueChanged\0"
    "yawChannelRCValueChanged\0"
    "throttleChannelRCValueChanged\0"
    "rollChannelReversedChanged\0reversed\0"
    "pitchChannelReversedChanged\0"
    "yawChannelReversedChanged\0"
    "throttleChannelReversedChanged\0"
    "imageHelpChanged\0source\0transmitterModeChanged\0"
    "mode\0nextButtonMessageBoxDisplayed\0"
    "_remoteControlChannelRawChanged\0chan\0"
    "val\0spektrumBindMode\0cancelButtonClicked\0"
    "skipButtonClicked\0nextButtonClicked\0"
    "start\0copyTrims\0minChannelCount\0"
    "statusText\0QQuickItem*\0cancelButton\0"
    "nextButton\0skipButton\0rollChannelMapped\0"
    "pitchChannelMapped\0yawChannelMapped\0"
    "throttleChannelMapped\0rollChannelRCValue\0"
    "pitchChannelRCValue\0yawChannelRCValue\0"
    "throttleChannelRCValue\0rollChannelReversed\0"
    "pitchChannelReversed\0yawChannelReversed\0"
    "throttleChannelReversed\0transmitterMode\0"
    "imageHelp\0BindModes\0DSM2\0DSMX7\0DSMX8"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RadioComponentController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
      20,  198, // properties
       1,  278, // enums/sets
       0,    0, // constructors
       0,       // flags
      17,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  134,    2, 0x06 /* Public */,
       4,    2,  137,    2, 0x06 /* Public */,
       7,    1,  142,    2, 0x06 /* Public */,
       9,    1,  145,    2, 0x06 /* Public */,
      10,    1,  148,    2, 0x06 /* Public */,
      11,    1,  151,    2, 0x06 /* Public */,
      12,    1,  154,    2, 0x06 /* Public */,
      13,    1,  157,    2, 0x06 /* Public */,
      14,    1,  160,    2, 0x06 /* Public */,
      15,    1,  163,    2, 0x06 /* Public */,
      16,    1,  166,    2, 0x06 /* Public */,
      18,    1,  169,    2, 0x06 /* Public */,
      19,    1,  172,    2, 0x06 /* Public */,
      20,    1,  175,    2, 0x06 /* Public */,
      21,    1,  178,    2, 0x06 /* Public */,
      23,    1,  181,    2, 0x06 /* Public */,
      25,    0,  184,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      26,    2,  185,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      29,    1,  190,    2, 0x02 /* Public */,
      30,    0,  193,    2, 0x02 /* Public */,
      31,    0,  194,    2, 0x02 /* Public */,
      32,    0,  195,    2, 0x02 /* Public */,
      33,    0,  196,    2, 0x02 /* Public */,
      34,    0,  197,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::QString,   22,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Float,   27,   28,

 // methods: parameters
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      35, QMetaType::Int, 0x00095401,
       3, QMetaType::Int, 0x00495001,
      36, 0x80000000 | 37, 0x0009500b,
      38, 0x80000000 | 37, 0x0009500b,
      39, 0x80000000 | 37, 0x0009500b,
      40, 0x80000000 | 37, 0x0009500b,
      41, QMetaType::Bool, 0x00495001,
      42, QMetaType::Bool, 0x00495001,
      43, QMetaType::Bool, 0x00495001,
      44, QMetaType::Bool, 0x00495001,
      45, QMetaType::Int, 0x00495001,
      46, QMetaType::Int, 0x00495001,
      47, QMetaType::Int, 0x00495001,
      48, QMetaType::Int, 0x00495001,
      49, QMetaType::Int, 0x00495001,
      50, QMetaType::Int, 0x00495001,
      51, QMetaType::Int, 0x00495001,
      52, QMetaType::Int, 0x00495001,
      53, QMetaType::Int, 0x00495103,
      54, QMetaType::QString, 0x00495003,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       0,
       2,
       3,
       4,
       5,
       6,
       7,
       8,
       9,
      10,
      11,
      12,
      13,
      15,
      14,

 // enums: name, flags, count, data
      55, 0x0,    3,  282,

 // enum data: key, value
      56, uint(RadioComponentController::DSM2),
      57, uint(RadioComponentController::DSMX7),
      58, uint(RadioComponentController::DSMX8),

       0        // eod
};

void RadioComponentController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RadioComponentController *_t = static_cast<RadioComponentController *>(_o);
        switch (_id) {
        case 0: _t->channelCountChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->channelRCValueChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->rollChannelMappedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->pitchChannelMappedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->yawChannelMappedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->throttleChannelMappedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->rollChannelRCValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->pitchChannelRCValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->yawChannelRCValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->throttleChannelRCValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->rollChannelReversedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->pitchChannelReversedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->yawChannelReversedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->throttleChannelReversedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->imageHelpChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 15: _t->transmitterModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->nextButtonMessageBoxDisplayed(); break;
        case 17: _t->_remoteControlChannelRawChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 18: _t->spektrumBindMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->cancelButtonClicked(); break;
        case 20: _t->skipButtonClicked(); break;
        case 21: _t->nextButtonClicked(); break;
        case 22: _t->start(); break;
        case 23: _t->copyTrims(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (RadioComponentController::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RadioComponentController::channelCountChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (RadioComponentController::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RadioComponentController::channelRCValueChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (RadioComponentController::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RadioComponentController::rollChannelMappedChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (RadioComponentController::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RadioComponentController::pitchChannelMappedChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (RadioComponentController::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RadioComponentController::yawChannelMappedChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (RadioComponentController::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RadioComponentController::throttleChannelMappedChanged)) {
                *result = 5;
            }
        }
        {
            typedef void (RadioComponentController::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RadioComponentController::rollChannelRCValueChanged)) {
                *result = 6;
            }
        }
        {
            typedef void (RadioComponentController::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RadioComponentController::pitchChannelRCValueChanged)) {
                *result = 7;
            }
        }
        {
            typedef void (RadioComponentController::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RadioComponentController::yawChannelRCValueChanged)) {
                *result = 8;
            }
        }
        {
            typedef void (RadioComponentController::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RadioComponentController::throttleChannelRCValueChanged)) {
                *result = 9;
            }
        }
        {
            typedef void (RadioComponentController::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RadioComponentController::rollChannelReversedChanged)) {
                *result = 10;
            }
        }
        {
            typedef void (RadioComponentController::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RadioComponentController::pitchChannelReversedChanged)) {
                *result = 11;
            }
        }
        {
            typedef void (RadioComponentController::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RadioComponentController::yawChannelReversedChanged)) {
                *result = 12;
            }
        }
        {
            typedef void (RadioComponentController::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RadioComponentController::throttleChannelReversedChanged)) {
                *result = 13;
            }
        }
        {
            typedef void (RadioComponentController::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RadioComponentController::imageHelpChanged)) {
                *result = 14;
            }
        }
        {
            typedef void (RadioComponentController::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RadioComponentController::transmitterModeChanged)) {
                *result = 15;
            }
        }
        {
            typedef void (RadioComponentController::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RadioComponentController::nextButtonMessageBoxDisplayed)) {
                *result = 16;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
        case 4:
        case 3:
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
        }
    }

}

const QMetaObject RadioComponentController::staticMetaObject = {
    { &FactPanelController::staticMetaObject, qt_meta_stringdata_RadioComponentController.data,
      qt_meta_data_RadioComponentController,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *RadioComponentController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RadioComponentController::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_RadioComponentController.stringdata))
        return static_cast<void*>(const_cast< RadioComponentController*>(this));
    return FactPanelController::qt_metacast(_clname);
}

int RadioComponentController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FactPanelController::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 24)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 24;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _chanMinimum; break;
        case 1: *reinterpret_cast< int*>(_v) = channelCount(); break;
        case 2: *reinterpret_cast< QQuickItem**>(_v) = _statusText; break;
        case 3: *reinterpret_cast< QQuickItem**>(_v) = _cancelButton; break;
        case 4: *reinterpret_cast< QQuickItem**>(_v) = _nextButton; break;
        case 5: *reinterpret_cast< QQuickItem**>(_v) = _skipButton; break;
        case 6: *reinterpret_cast< bool*>(_v) = rollChannelMapped(); break;
        case 7: *reinterpret_cast< bool*>(_v) = pitchChannelMapped(); break;
        case 8: *reinterpret_cast< bool*>(_v) = yawChannelMapped(); break;
        case 9: *reinterpret_cast< bool*>(_v) = throttleChannelMapped(); break;
        case 10: *reinterpret_cast< int*>(_v) = rollChannelRCValue(); break;
        case 11: *reinterpret_cast< int*>(_v) = pitchChannelRCValue(); break;
        case 12: *reinterpret_cast< int*>(_v) = yawChannelRCValue(); break;
        case 13: *reinterpret_cast< int*>(_v) = throttleChannelRCValue(); break;
        case 14: *reinterpret_cast< int*>(_v) = rollChannelReversed(); break;
        case 15: *reinterpret_cast< int*>(_v) = pitchChannelReversed(); break;
        case 16: *reinterpret_cast< int*>(_v) = yawChannelReversed(); break;
        case 17: *reinterpret_cast< int*>(_v) = throttleChannelReversed(); break;
        case 18: *reinterpret_cast< int*>(_v) = transmitterMode(); break;
        case 19: *reinterpret_cast< QString*>(_v) = _imageHelp; break;
        default: break;
        }
        _id -= 20;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 2:
            if (_statusText != *reinterpret_cast< QQuickItem**>(_v)) {
                _statusText = *reinterpret_cast< QQuickItem**>(_v);
            }
            break;
        case 3:
            if (_cancelButton != *reinterpret_cast< QQuickItem**>(_v)) {
                _cancelButton = *reinterpret_cast< QQuickItem**>(_v);
            }
            break;
        case 4:
            if (_nextButton != *reinterpret_cast< QQuickItem**>(_v)) {
                _nextButton = *reinterpret_cast< QQuickItem**>(_v);
            }
            break;
        case 5:
            if (_skipButton != *reinterpret_cast< QQuickItem**>(_v)) {
                _skipButton = *reinterpret_cast< QQuickItem**>(_v);
            }
            break;
        case 18: setTransmitterMode(*reinterpret_cast< int*>(_v)); break;
        case 19:
            if (_imageHelp != *reinterpret_cast< QString*>(_v)) {
                _imageHelp = *reinterpret_cast< QString*>(_v);
                Q_EMIT imageHelpChanged(_imageHelp);
            }
            break;
        default: break;
        }
        _id -= 20;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 20;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 20;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 20;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 20;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 20;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 20;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void RadioComponentController::channelCountChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RadioComponentController::channelRCValueChanged(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void RadioComponentController::rollChannelMappedChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void RadioComponentController::pitchChannelMappedChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void RadioComponentController::yawChannelMappedChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void RadioComponentController::throttleChannelMappedChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void RadioComponentController::rollChannelRCValueChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void RadioComponentController::pitchChannelRCValueChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void RadioComponentController::yawChannelRCValueChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void RadioComponentController::throttleChannelRCValueChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void RadioComponentController::rollChannelReversedChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void RadioComponentController::pitchChannelReversedChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void RadioComponentController::yawChannelReversedChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void RadioComponentController::throttleChannelReversedChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void RadioComponentController::imageHelpChanged(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void RadioComponentController::transmitterModeChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void RadioComponentController::nextButtonMessageBoxDisplayed()
{
    QMetaObject::activate(this, &staticMetaObject, 16, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
