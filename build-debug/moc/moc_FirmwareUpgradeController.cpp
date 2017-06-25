/****************************************************************************
** Meta object code from reading C++ file 'FirmwareUpgradeController.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/VehicleSetup/FirmwareUpgradeController.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FirmwareUpgradeController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FirmwareUpgradeController_t {
    QByteArrayData data[66];
    char stringdata[967];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FirmwareUpgradeController_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FirmwareUpgradeController_t qt_meta_stringdata_FirmwareUpgradeController = {
    {
QT_MOC_LITERAL(0, 0, 25), // "FirmwareUpgradeController"
QT_MOC_LITERAL(1, 26, 10), // "boardFound"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 12), // "noBoardFound"
QT_MOC_LITERAL(4, 51, 9), // "boardGone"
QT_MOC_LITERAL(5, 61, 13), // "flashComplete"
QT_MOC_LITERAL(6, 75, 14), // "flashCancelled"
QT_MOC_LITERAL(7, 90, 21), // "qgcConnectionsChanged"
QT_MOC_LITERAL(8, 112, 11), // "connections"
QT_MOC_LITERAL(9, 124, 5), // "error"
QT_MOC_LITERAL(10, 130, 17), // "_downloadProgress"
QT_MOC_LITERAL(11, 148, 4), // "curr"
QT_MOC_LITERAL(12, 153, 5), // "total"
QT_MOC_LITERAL(13, 159, 17), // "_downloadFinished"
QT_MOC_LITERAL(14, 177, 14), // "_downloadError"
QT_MOC_LITERAL(15, 192, 27), // "QNetworkReply::NetworkError"
QT_MOC_LITERAL(16, 220, 4), // "code"
QT_MOC_LITERAL(17, 225, 11), // "_foundBoard"
QT_MOC_LITERAL(18, 237, 12), // "firstAttempt"
QT_MOC_LITERAL(19, 250, 15), // "QSerialPortInfo"
QT_MOC_LITERAL(20, 266, 8), // "portInfo"
QT_MOC_LITERAL(21, 275, 4), // "type"
QT_MOC_LITERAL(22, 280, 13), // "_noBoardFound"
QT_MOC_LITERAL(23, 294, 10), // "_boardGone"
QT_MOC_LITERAL(24, 305, 16), // "_foundBootloader"
QT_MOC_LITERAL(25, 322, 17), // "bootloaderVersion"
QT_MOC_LITERAL(26, 340, 7), // "boardID"
QT_MOC_LITERAL(27, 348, 9), // "flashSize"
QT_MOC_LITERAL(28, 358, 6), // "_error"
QT_MOC_LITERAL(29, 365, 11), // "errorString"
QT_MOC_LITERAL(30, 377, 7), // "_status"
QT_MOC_LITERAL(31, 385, 12), // "statusString"
QT_MOC_LITERAL(32, 398, 21), // "_bootloaderSyncFailed"
QT_MOC_LITERAL(33, 420, 14), // "_flashComplete"
QT_MOC_LITERAL(34, 435, 15), // "_updateProgress"
QT_MOC_LITERAL(35, 451, 13), // "_eraseStarted"
QT_MOC_LITERAL(36, 465, 14), // "_eraseComplete"
QT_MOC_LITERAL(37, 480, 18), // "_eraseProgressTick"
QT_MOC_LITERAL(38, 499, 17), // "_linkDisconnected"
QT_MOC_LITERAL(39, 517, 14), // "LinkInterface*"
QT_MOC_LITERAL(40, 532, 4), // "link"
QT_MOC_LITERAL(41, 537, 16), // "startBoardSearch"
QT_MOC_LITERAL(42, 554, 6), // "cancel"
QT_MOC_LITERAL(43, 561, 5), // "flash"
QT_MOC_LITERAL(44, 567, 14), // "FirmwareType_t"
QT_MOC_LITERAL(45, 582, 12), // "firmwareType"
QT_MOC_LITERAL(46, 595, 9), // "boardPort"
QT_MOC_LITERAL(47, 605, 16), // "boardDescription"
QT_MOC_LITERAL(48, 622, 9), // "boardType"
QT_MOC_LITERAL(49, 632, 9), // "statusLog"
QT_MOC_LITERAL(50, 642, 11), // "QQuickItem*"
QT_MOC_LITERAL(51, 654, 11), // "progressBar"
QT_MOC_LITERAL(52, 666, 14), // "qgcConnections"
QT_MOC_LITERAL(53, 681, 17), // "PX4StableFirmware"
QT_MOC_LITERAL(54, 699, 15), // "PX4BetaFirmware"
QT_MOC_LITERAL(55, 715, 20), // "PX4DeveloperFirmware"
QT_MOC_LITERAL(56, 736, 17), // "PX4CustomFirmware"
QT_MOC_LITERAL(57, 754, 25), // "ApmArduCopterQuadFirmware"
QT_MOC_LITERAL(58, 780, 23), // "ApmArduCopterX8Firmware"
QT_MOC_LITERAL(59, 804, 25), // "ApmArduCopterHexaFirmware"
QT_MOC_LITERAL(60, 830, 25), // "ApmArduCopterOctoFirmware"
QT_MOC_LITERAL(61, 856, 22), // "ApmArduCopterYFirmware"
QT_MOC_LITERAL(62, 879, 23), // "ApmArduCopterY6Firmware"
QT_MOC_LITERAL(63, 903, 25), // "ApmArduCopterHeliFirmware"
QT_MOC_LITERAL(64, 929, 20), // "ApmArduPlaneFirmware"
QT_MOC_LITERAL(65, 950, 16) // "ApmRoverFirmware"

    },
    "FirmwareUpgradeController\0boardFound\0"
    "\0noBoardFound\0boardGone\0flashComplete\0"
    "flashCancelled\0qgcConnectionsChanged\0"
    "connections\0error\0_downloadProgress\0"
    "curr\0total\0_downloadFinished\0"
    "_downloadError\0QNetworkReply::NetworkError\0"
    "code\0_foundBoard\0firstAttempt\0"
    "QSerialPortInfo\0portInfo\0type\0"
    "_noBoardFound\0_boardGone\0_foundBootloader\0"
    "bootloaderVersion\0boardID\0flashSize\0"
    "_error\0errorString\0_status\0statusString\0"
    "_bootloaderSyncFailed\0_flashComplete\0"
    "_updateProgress\0_eraseStarted\0"
    "_eraseComplete\0_eraseProgressTick\0"
    "_linkDisconnected\0LinkInterface*\0link\0"
    "startBoardSearch\0cancel\0flash\0"
    "FirmwareType_t\0firmwareType\0boardPort\0"
    "boardDescription\0boardType\0statusLog\0"
    "QQuickItem*\0progressBar\0qgcConnections\0"
    "PX4StableFirmware\0PX4BetaFirmware\0"
    "PX4DeveloperFirmware\0PX4CustomFirmware\0"
    "ApmArduCopterQuadFirmware\0"
    "ApmArduCopterX8Firmware\0"
    "ApmArduCopterHexaFirmware\0"
    "ApmArduCopterOctoFirmware\0"
    "ApmArduCopterYFirmware\0ApmArduCopterY6Firmware\0"
    "ApmArduCopterHeliFirmware\0"
    "ApmArduPlaneFirmware\0ApmRoverFirmware"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FirmwareUpgradeController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       6,  202, // properties
       1,  226, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  144,    2, 0x06 /* Public */,
       3,    0,  145,    2, 0x06 /* Public */,
       4,    0,  146,    2, 0x06 /* Public */,
       5,    0,  147,    2, 0x06 /* Public */,
       6,    0,  148,    2, 0x06 /* Public */,
       7,    1,  149,    2, 0x06 /* Public */,
       9,    0,  152,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    2,  153,    2, 0x08 /* Private */,
      13,    0,  158,    2, 0x08 /* Private */,
      14,    1,  159,    2, 0x08 /* Private */,
      17,    3,  162,    2, 0x08 /* Private */,
      22,    0,  169,    2, 0x08 /* Private */,
      23,    0,  170,    2, 0x08 /* Private */,
      24,    3,  171,    2, 0x08 /* Private */,
      28,    1,  178,    2, 0x08 /* Private */,
      30,    1,  181,    2, 0x08 /* Private */,
      32,    0,  184,    2, 0x08 /* Private */,
      33,    0,  185,    2, 0x08 /* Private */,
      34,    2,  186,    2, 0x08 /* Private */,
      35,    0,  191,    2, 0x08 /* Private */,
      36,    0,  192,    2, 0x08 /* Private */,
      37,    0,  193,    2, 0x08 /* Private */,
      38,    1,  194,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      41,    0,  197,    2, 0x02 /* Public */,
      42,    0,  198,    2, 0x02 /* Public */,
      43,    1,  199,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,   11,   12,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 19, QMetaType::Int,   18,   20,   21,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   25,   26,   27,
    QMetaType::Void, QMetaType::QString,   29,
    QMetaType::Void, QMetaType::QString,   31,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 39,   40,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 44,   45,

 // properties: name, type, flags
      46, QMetaType::QString, 0x00495001,
      47, QMetaType::QString, 0x00495001,
      48, QMetaType::QString, 0x00495003,
      49, 0x80000000 | 50, 0x0009510b,
      51, 0x80000000 | 50, 0x0009510b,
      52, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       5,

 // enums: name, flags, count, data
      44, 0x0,   13,  230,

 // enum data: key, value
      53, uint(FirmwareUpgradeController::PX4StableFirmware),
      54, uint(FirmwareUpgradeController::PX4BetaFirmware),
      55, uint(FirmwareUpgradeController::PX4DeveloperFirmware),
      56, uint(FirmwareUpgradeController::PX4CustomFirmware),
      57, uint(FirmwareUpgradeController::ApmArduCopterQuadFirmware),
      58, uint(FirmwareUpgradeController::ApmArduCopterX8Firmware),
      59, uint(FirmwareUpgradeController::ApmArduCopterHexaFirmware),
      60, uint(FirmwareUpgradeController::ApmArduCopterOctoFirmware),
      61, uint(FirmwareUpgradeController::ApmArduCopterYFirmware),
      62, uint(FirmwareUpgradeController::ApmArduCopterY6Firmware),
      63, uint(FirmwareUpgradeController::ApmArduCopterHeliFirmware),
      64, uint(FirmwareUpgradeController::ApmArduPlaneFirmware),
      65, uint(FirmwareUpgradeController::ApmRoverFirmware),

       0        // eod
};

void FirmwareUpgradeController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FirmwareUpgradeController *_t = static_cast<FirmwareUpgradeController *>(_o);
        switch (_id) {
        case 0: _t->boardFound(); break;
        case 1: _t->noBoardFound(); break;
        case 2: _t->boardGone(); break;
        case 3: _t->flashComplete(); break;
        case 4: _t->flashCancelled(); break;
        case 5: _t->qgcConnectionsChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->error(); break;
        case 7: _t->_downloadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 8: _t->_downloadFinished(); break;
        case 9: _t->_downloadError((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 10: _t->_foundBoard((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QSerialPortInfo(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 11: _t->_noBoardFound(); break;
        case 12: _t->_boardGone(); break;
        case 13: _t->_foundBootloader((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 14: _t->_error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 15: _t->_status((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: _t->_bootloaderSyncFailed(); break;
        case 17: _t->_flashComplete(); break;
        case 18: _t->_updateProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 19: _t->_eraseStarted(); break;
        case 20: _t->_eraseComplete(); break;
        case 21: _t->_eraseProgressTick(); break;
        case 22: _t->_linkDisconnected((*reinterpret_cast< LinkInterface*(*)>(_a[1]))); break;
        case 23: _t->startBoardSearch(); break;
        case 24: _t->cancel(); break;
        case 25: _t->flash((*reinterpret_cast< FirmwareType_t(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
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
            typedef void (FirmwareUpgradeController::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FirmwareUpgradeController::boardFound)) {
                *result = 0;
            }
        }
        {
            typedef void (FirmwareUpgradeController::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FirmwareUpgradeController::noBoardFound)) {
                *result = 1;
            }
        }
        {
            typedef void (FirmwareUpgradeController::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FirmwareUpgradeController::boardGone)) {
                *result = 2;
            }
        }
        {
            typedef void (FirmwareUpgradeController::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FirmwareUpgradeController::flashComplete)) {
                *result = 3;
            }
        }
        {
            typedef void (FirmwareUpgradeController::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FirmwareUpgradeController::flashCancelled)) {
                *result = 4;
            }
        }
        {
            typedef void (FirmwareUpgradeController::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FirmwareUpgradeController::qgcConnectionsChanged)) {
                *result = 5;
            }
        }
        {
            typedef void (FirmwareUpgradeController::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FirmwareUpgradeController::error)) {
                *result = 6;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
        }
    }

}

const QMetaObject FirmwareUpgradeController::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_FirmwareUpgradeController.data,
      qt_meta_data_FirmwareUpgradeController,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FirmwareUpgradeController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FirmwareUpgradeController::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FirmwareUpgradeController.stringdata))
        return static_cast<void*>(const_cast< FirmwareUpgradeController*>(this));
    return QObject::qt_metacast(_clname);
}

int FirmwareUpgradeController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = boardPort(); break;
        case 1: *reinterpret_cast< QString*>(_v) = boardDescription(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _foundBoardType; break;
        case 3: *reinterpret_cast< QQuickItem**>(_v) = statusLog(); break;
        case 4: *reinterpret_cast< QQuickItem**>(_v) = progressBar(); break;
        case 5: *reinterpret_cast< bool*>(_v) = qgcConnections(); break;
        default: break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 2:
            if (_foundBoardType != *reinterpret_cast< QString*>(_v)) {
                _foundBoardType = *reinterpret_cast< QString*>(_v);
                Q_EMIT boardFound();
            }
            break;
        case 3: setStatusLog(*reinterpret_cast< QQuickItem**>(_v)); break;
        case 4: setProgressBar(*reinterpret_cast< QQuickItem**>(_v)); break;
        default: break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void FirmwareUpgradeController::boardFound()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void FirmwareUpgradeController::noBoardFound()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void FirmwareUpgradeController::boardGone()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void FirmwareUpgradeController::flashComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void FirmwareUpgradeController::flashCancelled()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void FirmwareUpgradeController::qgcConnectionsChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void FirmwareUpgradeController::error()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
