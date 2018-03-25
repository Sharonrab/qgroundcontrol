/****************************************************************************
** Meta object code from reading C++ file 'MAVLinkProtocol.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/comm/MAVLinkProtocol.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MAVLinkProtocol.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MAVLinkProtocol_t {
    QByteArrayData data[66];
    char stringdata[933];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MAVLinkProtocol_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MAVLinkProtocol_t qt_meta_stringdata_MAVLinkProtocol = {
    {
QT_MOC_LITERAL(0, 0, 15), // "MAVLinkProtocol"
QT_MOC_LITERAL(1, 16, 15), // "messageReceived"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 14), // "LinkInterface*"
QT_MOC_LITERAL(4, 48, 4), // "link"
QT_MOC_LITERAL(5, 53, 17), // "mavlink_message_t"
QT_MOC_LITERAL(6, 71, 7), // "message"
QT_MOC_LITERAL(7, 79, 16), // "heartbeatChanged"
QT_MOC_LITERAL(8, 96, 10), // "heartbeats"
QT_MOC_LITERAL(9, 107, 19), // "multiplexingChanged"
QT_MOC_LITERAL(10, 127, 7), // "enabled"
QT_MOC_LITERAL(11, 135, 14), // "authKeyChanged"
QT_MOC_LITERAL(12, 150, 3), // "key"
QT_MOC_LITERAL(13, 154, 11), // "authChanged"
QT_MOC_LITERAL(14, 166, 19), // "versionCheckChanged"
QT_MOC_LITERAL(15, 186, 21), // "protocolStatusMessage"
QT_MOC_LITERAL(16, 208, 5), // "title"
QT_MOC_LITERAL(17, 214, 15), // "systemIdChanged"
QT_MOC_LITERAL(18, 230, 8), // "systemId"
QT_MOC_LITERAL(19, 239, 17), // "paramGuardChanged"
QT_MOC_LITERAL(20, 257, 33), // "paramRetransmissionTimeoutCha..."
QT_MOC_LITERAL(21, 291, 2), // "ms"
QT_MOC_LITERAL(22, 294, 26), // "paramRewriteTimeoutChanged"
QT_MOC_LITERAL(23, 321, 18), // "actionGuardChanged"
QT_MOC_LITERAL(24, 340, 34), // "actionRetransmissionTimeoutCh..."
QT_MOC_LITERAL(25, 375, 18), // "receiveLossChanged"
QT_MOC_LITERAL(26, 394, 5), // "uasId"
QT_MOC_LITERAL(27, 400, 4), // "loss"
QT_MOC_LITERAL(28, 405, 18), // "radioStatusChanged"
QT_MOC_LITERAL(29, 424, 8), // "rxerrors"
QT_MOC_LITERAL(30, 433, 5), // "fixed"
QT_MOC_LITERAL(31, 439, 4), // "rssi"
QT_MOC_LITERAL(32, 444, 7), // "remrssi"
QT_MOC_LITERAL(33, 452, 5), // "txbuf"
QT_MOC_LITERAL(34, 458, 5), // "noise"
QT_MOC_LITERAL(35, 464, 8), // "remnoise"
QT_MOC_LITERAL(36, 473, 21), // "saveTempFlightDataLog"
QT_MOC_LITERAL(37, 495, 11), // "tempLogfile"
QT_MOC_LITERAL(38, 507, 12), // "receiveBytes"
QT_MOC_LITERAL(39, 520, 1), // "b"
QT_MOC_LITERAL(40, 522, 13), // "linkConnected"
QT_MOC_LITERAL(41, 536, 16), // "linkDisconnected"
QT_MOC_LITERAL(42, 553, 11), // "sendMessage"
QT_MOC_LITERAL(43, 565, 25), // "sendMessage_MAT_Interface"
QT_MOC_LITERAL(44, 591, 8), // "systemid"
QT_MOC_LITERAL(45, 600, 11), // "componentid"
QT_MOC_LITERAL(46, 612, 16), // "setHeartbeatRate"
QT_MOC_LITERAL(47, 629, 4), // "rate"
QT_MOC_LITERAL(48, 634, 11), // "setSystemId"
QT_MOC_LITERAL(49, 646, 2), // "id"
QT_MOC_LITERAL(50, 649, 16), // "enableHeartbeats"
QT_MOC_LITERAL(51, 666, 18), // "enableMultiplexing"
QT_MOC_LITERAL(52, 685, 16), // "enableParamGuard"
QT_MOC_LITERAL(53, 702, 17), // "enableActionGuard"
QT_MOC_LITERAL(54, 720, 29), // "setParamRetransmissionTimeout"
QT_MOC_LITERAL(55, 750, 22), // "setParamRewriteTimeout"
QT_MOC_LITERAL(56, 773, 30), // "setActionRetransmissionTimeout"
QT_MOC_LITERAL(57, 804, 18), // "enableVersionCheck"
QT_MOC_LITERAL(58, 823, 10), // "enableAuth"
QT_MOC_LITERAL(59, 834, 6), // "enable"
QT_MOC_LITERAL(60, 841, 10), // "setAuthKey"
QT_MOC_LITERAL(61, 852, 13), // "sendHeartbeat"
QT_MOC_LITERAL(62, 866, 12), // "loadSettings"
QT_MOC_LITERAL(63, 879, 13), // "storeSettings"
QT_MOC_LITERAL(64, 893, 18), // "deleteTempLogFiles"
QT_MOC_LITERAL(65, 912, 20) // "checkForLostLogFiles"

    },
    "MAVLinkProtocol\0messageReceived\0\0"
    "LinkInterface*\0link\0mavlink_message_t\0"
    "message\0heartbeatChanged\0heartbeats\0"
    "multiplexingChanged\0enabled\0authKeyChanged\0"
    "key\0authChanged\0versionCheckChanged\0"
    "protocolStatusMessage\0title\0systemIdChanged\0"
    "systemId\0paramGuardChanged\0"
    "paramRetransmissionTimeoutChanged\0ms\0"
    "paramRewriteTimeoutChanged\0"
    "actionGuardChanged\0"
    "actionRetransmissionTimeoutChanged\0"
    "receiveLossChanged\0uasId\0loss\0"
    "radioStatusChanged\0rxerrors\0fixed\0"
    "rssi\0remrssi\0txbuf\0noise\0remnoise\0"
    "saveTempFlightDataLog\0tempLogfile\0"
    "receiveBytes\0b\0linkConnected\0"
    "linkDisconnected\0sendMessage\0"
    "sendMessage_MAT_Interface\0systemid\0"
    "componentid\0setHeartbeatRate\0rate\0"
    "setSystemId\0id\0enableHeartbeats\0"
    "enableMultiplexing\0enableParamGuard\0"
    "enableActionGuard\0setParamRetransmissionTimeout\0"
    "setParamRewriteTimeout\0"
    "setActionRetransmissionTimeout\0"
    "enableVersionCheck\0enableAuth\0enable\0"
    "setAuthKey\0sendHeartbeat\0loadSettings\0"
    "storeSettings\0deleteTempLogFiles\0"
    "checkForLostLogFiles"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MAVLinkProtocol[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      40,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      16,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  214,    2, 0x06 /* Public */,
       7,    1,  219,    2, 0x06 /* Public */,
       9,    1,  222,    2, 0x06 /* Public */,
      11,    1,  225,    2, 0x06 /* Public */,
      13,    1,  228,    2, 0x06 /* Public */,
      14,    1,  231,    2, 0x06 /* Public */,
      15,    2,  234,    2, 0x06 /* Public */,
      17,    1,  239,    2, 0x06 /* Public */,
      19,    1,  242,    2, 0x06 /* Public */,
      20,    1,  245,    2, 0x06 /* Public */,
      22,    1,  248,    2, 0x06 /* Public */,
      23,    1,  251,    2, 0x06 /* Public */,
      24,    1,  254,    2, 0x06 /* Public */,
      25,    2,  257,    2, 0x06 /* Public */,
      28,    8,  262,    2, 0x06 /* Public */,
      36,    1,  279,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      38,    2,  282,    2, 0x0a /* Public */,
      40,    0,  287,    2, 0x0a /* Public */,
      41,    0,  288,    2, 0x0a /* Public */,
      42,    1,  289,    2, 0x0a /* Public */,
      43,    3,  292,    2, 0x0a /* Public */,
      42,    2,  299,    2, 0x0a /* Public */,
      42,    4,  304,    2, 0x0a /* Public */,
      46,    1,  313,    2, 0x0a /* Public */,
      48,    1,  316,    2, 0x0a /* Public */,
      50,    1,  319,    2, 0x0a /* Public */,
      51,    1,  322,    2, 0x0a /* Public */,
      52,    1,  325,    2, 0x0a /* Public */,
      53,    1,  328,    2, 0x0a /* Public */,
      54,    1,  331,    2, 0x0a /* Public */,
      55,    1,  334,    2, 0x0a /* Public */,
      56,    1,  337,    2, 0x0a /* Public */,
      57,    1,  340,    2, 0x0a /* Public */,
      58,    1,  343,    2, 0x0a /* Public */,
      60,    1,  346,    2, 0x0a /* Public */,
      61,    0,  349,    2, 0x0a /* Public */,
      62,    0,  350,    2, 0x0a /* Public */,
      63,    0,  351,    2, 0x0a /* Public */,
      64,    0,  352,    2, 0x0a /* Public */,
      65,    0,  353,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   16,    6,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void, QMetaType::Int, QMetaType::Float,   26,   27,
    QMetaType::Void, 0x80000000 | 3, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt,    4,   29,   30,   31,   32,   33,   34,   35,
    QMetaType::Void, QMetaType::QString,   37,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QByteArray,    4,   39,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5, QMetaType::UChar, QMetaType::UChar,    6,   44,   45,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, QMetaType::UChar, QMetaType::UChar,    4,    6,   44,   45,
    QMetaType::Void, QMetaType::Int,   47,
    QMetaType::Void, QMetaType::Int,   49,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   59,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MAVLinkProtocol::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MAVLinkProtocol *_t = static_cast<MAVLinkProtocol *>(_o);
        switch (_id) {
        case 0: _t->messageReceived((*reinterpret_cast< LinkInterface*(*)>(_a[1])),(*reinterpret_cast< mavlink_message_t(*)>(_a[2]))); break;
        case 1: _t->heartbeatChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->multiplexingChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->authKeyChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->authChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->versionCheckChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->protocolStatusMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 7: _t->systemIdChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->paramGuardChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->paramRetransmissionTimeoutChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->paramRewriteTimeoutChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->actionGuardChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->actionRetransmissionTimeoutChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->receiveLossChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 14: _t->radioStatusChanged((*reinterpret_cast< LinkInterface*(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< uint(*)>(_a[4])),(*reinterpret_cast< uint(*)>(_a[5])),(*reinterpret_cast< uint(*)>(_a[6])),(*reinterpret_cast< uint(*)>(_a[7])),(*reinterpret_cast< uint(*)>(_a[8]))); break;
        case 15: _t->saveTempFlightDataLog((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 16: _t->receiveBytes((*reinterpret_cast< LinkInterface*(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 17: _t->linkConnected(); break;
        case 18: _t->linkDisconnected(); break;
        case 19: _t->sendMessage((*reinterpret_cast< mavlink_message_t(*)>(_a[1]))); break;
        case 20: _t->sendMessage_MAT_Interface((*reinterpret_cast< mavlink_message_t(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint8(*)>(_a[3]))); break;
        case 21: _t->sendMessage((*reinterpret_cast< LinkInterface*(*)>(_a[1])),(*reinterpret_cast< mavlink_message_t(*)>(_a[2]))); break;
        case 22: _t->sendMessage((*reinterpret_cast< LinkInterface*(*)>(_a[1])),(*reinterpret_cast< mavlink_message_t(*)>(_a[2])),(*reinterpret_cast< quint8(*)>(_a[3])),(*reinterpret_cast< quint8(*)>(_a[4]))); break;
        case 23: _t->setHeartbeatRate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: _t->setSystemId((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->enableHeartbeats((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 26: _t->enableMultiplexing((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 27: _t->enableParamGuard((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 28: _t->enableActionGuard((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 29: _t->setParamRetransmissionTimeout((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 30: _t->setParamRewriteTimeout((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 31: _t->setActionRetransmissionTimeout((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 32: _t->enableVersionCheck((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 33: _t->enableAuth((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 34: _t->setAuthKey((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 35: _t->sendHeartbeat(); break;
        case 36: _t->loadSettings(); break;
        case 37: _t->storeSettings(); break;
        case 38: _t->deleteTempLogFiles(); break;
        case 39: _t->checkForLostLogFiles(); break;
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
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinkInterface* >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinkInterface* >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinkInterface* >(); break;
            }
            break;
        case 22:
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
            typedef void (MAVLinkProtocol::*_t)(LinkInterface * , mavlink_message_t );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MAVLinkProtocol::messageReceived)) {
                *result = 0;
            }
        }
        {
            typedef void (MAVLinkProtocol::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MAVLinkProtocol::heartbeatChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (MAVLinkProtocol::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MAVLinkProtocol::multiplexingChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (MAVLinkProtocol::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MAVLinkProtocol::authKeyChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (MAVLinkProtocol::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MAVLinkProtocol::authChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (MAVLinkProtocol::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MAVLinkProtocol::versionCheckChanged)) {
                *result = 5;
            }
        }
        {
            typedef void (MAVLinkProtocol::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MAVLinkProtocol::protocolStatusMessage)) {
                *result = 6;
            }
        }
        {
            typedef void (MAVLinkProtocol::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MAVLinkProtocol::systemIdChanged)) {
                *result = 7;
            }
        }
        {
            typedef void (MAVLinkProtocol::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MAVLinkProtocol::paramGuardChanged)) {
                *result = 8;
            }
        }
        {
            typedef void (MAVLinkProtocol::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MAVLinkProtocol::paramRetransmissionTimeoutChanged)) {
                *result = 9;
            }
        }
        {
            typedef void (MAVLinkProtocol::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MAVLinkProtocol::paramRewriteTimeoutChanged)) {
                *result = 10;
            }
        }
        {
            typedef void (MAVLinkProtocol::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MAVLinkProtocol::actionGuardChanged)) {
                *result = 11;
            }
        }
        {
            typedef void (MAVLinkProtocol::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MAVLinkProtocol::actionRetransmissionTimeoutChanged)) {
                *result = 12;
            }
        }
        {
            typedef void (MAVLinkProtocol::*_t)(int , float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MAVLinkProtocol::receiveLossChanged)) {
                *result = 13;
            }
        }
        {
            typedef void (MAVLinkProtocol::*_t)(LinkInterface * , unsigned  , unsigned  , unsigned  , unsigned  , unsigned  , unsigned  , unsigned  );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MAVLinkProtocol::radioStatusChanged)) {
                *result = 14;
            }
        }
        {
            typedef void (MAVLinkProtocol::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MAVLinkProtocol::saveTempFlightDataLog)) {
                *result = 15;
            }
        }
    }
}

const QMetaObject MAVLinkProtocol::staticMetaObject = {
    { &QGCSingleton::staticMetaObject, qt_meta_stringdata_MAVLinkProtocol.data,
      qt_meta_data_MAVLinkProtocol,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MAVLinkProtocol::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MAVLinkProtocol::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MAVLinkProtocol.stringdata))
        return static_cast<void*>(const_cast< MAVLinkProtocol*>(this));
    return QGCSingleton::qt_metacast(_clname);
}

int MAVLinkProtocol::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCSingleton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 40)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 40;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 40)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 40;
    }
    return _id;
}

// SIGNAL 0
void MAVLinkProtocol::messageReceived(LinkInterface * _t1, mavlink_message_t _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MAVLinkProtocol::heartbeatChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MAVLinkProtocol::multiplexingChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MAVLinkProtocol::authKeyChanged(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MAVLinkProtocol::authChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MAVLinkProtocol::versionCheckChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MAVLinkProtocol::protocolStatusMessage(const QString & _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MAVLinkProtocol::systemIdChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void MAVLinkProtocol::paramGuardChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void MAVLinkProtocol::paramRetransmissionTimeoutChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void MAVLinkProtocol::paramRewriteTimeoutChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void MAVLinkProtocol::actionGuardChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void MAVLinkProtocol::actionRetransmissionTimeoutChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void MAVLinkProtocol::receiveLossChanged(int _t1, float _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void MAVLinkProtocol::radioStatusChanged(LinkInterface * _t1, unsigned  _t2, unsigned  _t3, unsigned  _t4, unsigned  _t5, unsigned  _t6, unsigned  _t7, unsigned  _t8)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void MAVLinkProtocol::saveTempFlightDataLog(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}
QT_END_MOC_NAMESPACE
