/****************************************************************************
** Meta object code from reading C++ file 'MainToolBar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/toolbar/MainToolBar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainToolBar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainToolBar_t {
    QByteArrayData data[68];
    char stringdata[867];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainToolBar_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainToolBar_t qt_meta_stringdata_MainToolBar = {
    {
QT_MOC_LITERAL(0, 0, 11), // "MainToolBar"
QT_MOC_LITERAL(1, 12, 22), // "connectionCountChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 5), // "count"
QT_MOC_LITERAL(4, 42, 18), // "currentViewChanged"
QT_MOC_LITERAL(5, 61, 17), // "configListChanged"
QT_MOC_LITERAL(6, 79, 20), // "connectedListChanged"
QT_MOC_LITERAL(7, 100, 13), // "connectedList"
QT_MOC_LITERAL(8, 114, 14), // "showGPSChanged"
QT_MOC_LITERAL(9, 129, 5), // "value"
QT_MOC_LITERAL(10, 135, 14), // "showMavChanged"
QT_MOC_LITERAL(11, 150, 19), // "showMessagesChanged"
QT_MOC_LITERAL(12, 170, 18), // "showBatteryChanged"
QT_MOC_LITERAL(13, 189, 15), // "showRSSIChanged"
QT_MOC_LITERAL(14, 205, 23), // "progressBarValueChanged"
QT_MOC_LITERAL(15, 229, 17), // "remoteRSSIChanged"
QT_MOC_LITERAL(16, 247, 21), // "telemetryRRSSIChanged"
QT_MOC_LITERAL(17, 269, 21), // "telemetryLRSSIChanged"
QT_MOC_LITERAL(18, 291, 10), // "_forgetUAS"
QT_MOC_LITERAL(19, 302, 13), // "UASInterface*"
QT_MOC_LITERAL(20, 316, 3), // "uas"
QT_MOC_LITERAL(21, 320, 13), // "_setActiveUAS"
QT_MOC_LITERAL(22, 334, 21), // "_updateConfigurations"
QT_MOC_LITERAL(23, 356, 14), // "_linkConnected"
QT_MOC_LITERAL(24, 371, 14), // "LinkInterface*"
QT_MOC_LITERAL(25, 386, 4), // "link"
QT_MOC_LITERAL(26, 391, 17), // "_linkDisconnected"
QT_MOC_LITERAL(27, 409, 17), // "_leaveMessageView"
QT_MOC_LITERAL(28, 427, 20), // "_setProgressBarValue"
QT_MOC_LITERAL(29, 448, 25), // "_remoteControlRSSIChanged"
QT_MOC_LITERAL(30, 474, 7), // "uint8_t"
QT_MOC_LITERAL(31, 482, 4), // "rssi"
QT_MOC_LITERAL(32, 487, 17), // "_telemetryChanged"
QT_MOC_LITERAL(33, 505, 8), // "rxerrors"
QT_MOC_LITERAL(34, 514, 5), // "fixed"
QT_MOC_LITERAL(35, 520, 7), // "remrssi"
QT_MOC_LITERAL(36, 528, 5), // "txbuf"
QT_MOC_LITERAL(37, 534, 5), // "noise"
QT_MOC_LITERAL(38, 540, 8), // "remnoise"
QT_MOC_LITERAL(39, 549, 11), // "onSetupView"
QT_MOC_LITERAL(40, 561, 10), // "onPlanView"
QT_MOC_LITERAL(41, 572, 9), // "onFlyView"
QT_MOC_LITERAL(42, 582, 13), // "onFlyViewMenu"
QT_MOC_LITERAL(43, 596, 13), // "onAnalyzeView"
QT_MOC_LITERAL(44, 610, 9), // "onConnect"
QT_MOC_LITERAL(45, 620, 4), // "conf"
QT_MOC_LITERAL(46, 625, 12), // "onDisconnect"
QT_MOC_LITERAL(47, 638, 18), // "onEnterMessageArea"
QT_MOC_LITERAL(48, 657, 1), // "x"
QT_MOC_LITERAL(49, 659, 1), // "y"
QT_MOC_LITERAL(50, 661, 11), // "currentView"
QT_MOC_LITERAL(51, 673, 10), // "ViewType_t"
QT_MOC_LITERAL(52, 684, 10), // "configList"
QT_MOC_LITERAL(53, 695, 15), // "connectionCount"
QT_MOC_LITERAL(54, 711, 7), // "showGPS"
QT_MOC_LITERAL(55, 719, 7), // "showMav"
QT_MOC_LITERAL(56, 727, 12), // "showMessages"
QT_MOC_LITERAL(57, 740, 11), // "showBattery"
QT_MOC_LITERAL(58, 752, 8), // "showRSSI"
QT_MOC_LITERAL(59, 761, 16), // "progressBarValue"
QT_MOC_LITERAL(60, 778, 10), // "remoteRSSI"
QT_MOC_LITERAL(61, 789, 14), // "telemetryRRSSI"
QT_MOC_LITERAL(62, 804, 14), // "telemetryLRSSI"
QT_MOC_LITERAL(63, 819, 8), // "ViewNone"
QT_MOC_LITERAL(64, 828, 11), // "ViewAnalyze"
QT_MOC_LITERAL(65, 840, 8), // "ViewPlan"
QT_MOC_LITERAL(66, 849, 7), // "ViewFly"
QT_MOC_LITERAL(67, 857, 9) // "ViewSetup"

    },
    "MainToolBar\0connectionCountChanged\0\0"
    "count\0currentViewChanged\0configListChanged\0"
    "connectedListChanged\0connectedList\0"
    "showGPSChanged\0value\0showMavChanged\0"
    "showMessagesChanged\0showBatteryChanged\0"
    "showRSSIChanged\0progressBarValueChanged\0"
    "remoteRSSIChanged\0telemetryRRSSIChanged\0"
    "telemetryLRSSIChanged\0_forgetUAS\0"
    "UASInterface*\0uas\0_setActiveUAS\0"
    "_updateConfigurations\0_linkConnected\0"
    "LinkInterface*\0link\0_linkDisconnected\0"
    "_leaveMessageView\0_setProgressBarValue\0"
    "_remoteControlRSSIChanged\0uint8_t\0"
    "rssi\0_telemetryChanged\0rxerrors\0fixed\0"
    "remrssi\0txbuf\0noise\0remnoise\0onSetupView\0"
    "onPlanView\0onFlyView\0onFlyViewMenu\0"
    "onAnalyzeView\0onConnect\0conf\0onDisconnect\0"
    "onEnterMessageArea\0x\0y\0currentView\0"
    "ViewType_t\0configList\0connectionCount\0"
    "showGPS\0showMav\0showMessages\0showBattery\0"
    "showRSSI\0progressBarValue\0remoteRSSI\0"
    "telemetryRRSSI\0telemetryLRSSI\0ViewNone\0"
    "ViewAnalyze\0ViewPlan\0ViewFly\0ViewSetup"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainToolBar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      30,   14, // methods
      13,  252, // properties
       1,  304, // enums/sets
       0,    0, // constructors
       0,       // flags
      13,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  164,    2, 0x06 /* Public */,
       4,    0,  167,    2, 0x06 /* Public */,
       5,    0,  168,    2, 0x06 /* Public */,
       6,    1,  169,    2, 0x06 /* Public */,
       8,    1,  172,    2, 0x06 /* Public */,
      10,    1,  175,    2, 0x06 /* Public */,
      11,    1,  178,    2, 0x06 /* Public */,
      12,    1,  181,    2, 0x06 /* Public */,
      13,    1,  184,    2, 0x06 /* Public */,
      14,    1,  187,    2, 0x06 /* Public */,
      15,    1,  190,    2, 0x06 /* Public */,
      16,    1,  193,    2, 0x06 /* Public */,
      17,    1,  196,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      18,    1,  199,    2, 0x08 /* Private */,
      21,    1,  202,    2, 0x08 /* Private */,
      22,    0,  205,    2, 0x08 /* Private */,
      23,    1,  206,    2, 0x08 /* Private */,
      26,    1,  209,    2, 0x08 /* Private */,
      27,    0,  212,    2, 0x08 /* Private */,
      28,    1,  213,    2, 0x08 /* Private */,
      29,    1,  216,    2, 0x08 /* Private */,
      32,    8,  219,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      39,    0,  236,    2, 0x02 /* Public */,
      40,    0,  237,    2, 0x02 /* Public */,
      41,    0,  238,    2, 0x02 /* Public */,
      42,    0,  239,    2, 0x02 /* Public */,
      43,    0,  240,    2, 0x02 /* Public */,
      44,    1,  241,    2, 0x02 /* Public */,
      46,    1,  244,    2, 0x02 /* Public */,
      47,    2,  247,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Float,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 24,   25,
    QMetaType::Void, 0x80000000 | 24,   25,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,    9,
    QMetaType::Void, 0x80000000 | 30,   31,
    QMetaType::Void, 0x80000000 | 24, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt,   25,   33,   34,   31,   35,   36,   37,   38,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   45,
    QMetaType::Void, QMetaType::QString,   45,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   48,   49,

 // properties: name, type, flags
      50, 0x80000000 | 51, 0x0049500b,
      52, QMetaType::QStringList, 0x00495003,
      53, QMetaType::Int, 0x00495001,
       7, QMetaType::QStringList, 0x00495003,
      54, QMetaType::Bool, 0x00495003,
      55, QMetaType::Bool, 0x00495003,
      56, QMetaType::Bool, 0x00495003,
      57, QMetaType::Bool, 0x00495003,
      58, QMetaType::Bool, 0x00495003,
      59, QMetaType::Float, 0x00495003,
      60, QMetaType::Int, 0x00495001,
      61, QMetaType::Int, 0x00495001,
      62, QMetaType::Int, 0x00495001,

 // properties: notify_signal_id
       1,
       2,
       0,
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

 // enums: name, flags, count, data
      51, 0x0,    5,  308,

 // enum data: key, value
      63, uint(MainToolBar::ViewNone),
      64, uint(MainToolBar::ViewAnalyze),
      65, uint(MainToolBar::ViewPlan),
      66, uint(MainToolBar::ViewFly),
      67, uint(MainToolBar::ViewSetup),

       0        // eod
};

void MainToolBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainToolBar *_t = static_cast<MainToolBar *>(_o);
        switch (_id) {
        case 0: _t->connectionCountChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->currentViewChanged(); break;
        case 2: _t->configListChanged(); break;
        case 3: _t->connectedListChanged((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 4: _t->showGPSChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->showMavChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->showMessagesChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->showBatteryChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->showRSSIChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->progressBarValueChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 10: _t->remoteRSSIChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->telemetryRRSSIChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->telemetryLRSSIChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->_forgetUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 14: _t->_setActiveUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 15: _t->_updateConfigurations(); break;
        case 16: _t->_linkConnected((*reinterpret_cast< LinkInterface*(*)>(_a[1]))); break;
        case 17: _t->_linkDisconnected((*reinterpret_cast< LinkInterface*(*)>(_a[1]))); break;
        case 18: _t->_leaveMessageView(); break;
        case 19: _t->_setProgressBarValue((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 20: _t->_remoteControlRSSIChanged((*reinterpret_cast< uint8_t(*)>(_a[1]))); break;
        case 21: _t->_telemetryChanged((*reinterpret_cast< LinkInterface*(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< uint(*)>(_a[4])),(*reinterpret_cast< uint(*)>(_a[5])),(*reinterpret_cast< uint(*)>(_a[6])),(*reinterpret_cast< uint(*)>(_a[7])),(*reinterpret_cast< uint(*)>(_a[8]))); break;
        case 22: _t->onSetupView(); break;
        case 23: _t->onPlanView(); break;
        case 24: _t->onFlyView(); break;
        case 25: _t->onFlyViewMenu(); break;
        case 26: _t->onAnalyzeView(); break;
        case 27: _t->onConnect((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 28: _t->onDisconnect((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 29: _t->onEnterMessageArea((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinkInterface* >(); break;
            }
            break;
        case 17:
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
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MainToolBar::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainToolBar::connectionCountChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (MainToolBar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainToolBar::currentViewChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (MainToolBar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainToolBar::configListChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (MainToolBar::*_t)(QStringList );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainToolBar::connectedListChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (MainToolBar::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainToolBar::showGPSChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (MainToolBar::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainToolBar::showMavChanged)) {
                *result = 5;
            }
        }
        {
            typedef void (MainToolBar::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainToolBar::showMessagesChanged)) {
                *result = 6;
            }
        }
        {
            typedef void (MainToolBar::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainToolBar::showBatteryChanged)) {
                *result = 7;
            }
        }
        {
            typedef void (MainToolBar::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainToolBar::showRSSIChanged)) {
                *result = 8;
            }
        }
        {
            typedef void (MainToolBar::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainToolBar::progressBarValueChanged)) {
                *result = 9;
            }
        }
        {
            typedef void (MainToolBar::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainToolBar::remoteRSSIChanged)) {
                *result = 10;
            }
        }
        {
            typedef void (MainToolBar::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainToolBar::telemetryRRSSIChanged)) {
                *result = 11;
            }
        }
        {
            typedef void (MainToolBar::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainToolBar::telemetryLRSSIChanged)) {
                *result = 12;
            }
        }
    }
}

const QMetaObject MainToolBar::staticMetaObject = {
    { &QGCQmlWidgetHolder::staticMetaObject, qt_meta_stringdata_MainToolBar.data,
      qt_meta_data_MainToolBar,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainToolBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainToolBar::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainToolBar.stringdata))
        return static_cast<void*>(const_cast< MainToolBar*>(this));
    return QGCQmlWidgetHolder::qt_metacast(_clname);
}

int MainToolBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCQmlWidgetHolder::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< ViewType_t*>(_v) = _currentView; break;
        case 1: *reinterpret_cast< QStringList*>(_v) = _linkConfigurations; break;
        case 2: *reinterpret_cast< int*>(_v) = connectionCount(); break;
        case 3: *reinterpret_cast< QStringList*>(_v) = _connectedList; break;
        case 4: *reinterpret_cast< bool*>(_v) = _showGPS; break;
        case 5: *reinterpret_cast< bool*>(_v) = _showMav; break;
        case 6: *reinterpret_cast< bool*>(_v) = _showMessages; break;
        case 7: *reinterpret_cast< bool*>(_v) = _showBattery; break;
        case 8: *reinterpret_cast< bool*>(_v) = _showRSSI; break;
        case 9: *reinterpret_cast< float*>(_v) = _progressBarValue; break;
        case 10: *reinterpret_cast< int*>(_v) = remoteRSSI(); break;
        case 11: *reinterpret_cast< int*>(_v) = telemetryRRSSI(); break;
        case 12: *reinterpret_cast< int*>(_v) = telemetryLRSSI(); break;
        default: break;
        }
        _id -= 13;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_currentView != *reinterpret_cast< ViewType_t*>(_v)) {
                _currentView = *reinterpret_cast< ViewType_t*>(_v);
                Q_EMIT currentViewChanged();
            }
            break;
        case 1:
            if (_linkConfigurations != *reinterpret_cast< QStringList*>(_v)) {
                _linkConfigurations = *reinterpret_cast< QStringList*>(_v);
                Q_EMIT configListChanged();
            }
            break;
        case 3:
            if (_connectedList != *reinterpret_cast< QStringList*>(_v)) {
                _connectedList = *reinterpret_cast< QStringList*>(_v);
                Q_EMIT connectedListChanged(_connectedList);
            }
            break;
        case 4:
            if (_showGPS != *reinterpret_cast< bool*>(_v)) {
                _showGPS = *reinterpret_cast< bool*>(_v);
                Q_EMIT showGPSChanged(_showGPS);
            }
            break;
        case 5:
            if (_showMav != *reinterpret_cast< bool*>(_v)) {
                _showMav = *reinterpret_cast< bool*>(_v);
                Q_EMIT showMavChanged(_showMav);
            }
            break;
        case 6:
            if (_showMessages != *reinterpret_cast< bool*>(_v)) {
                _showMessages = *reinterpret_cast< bool*>(_v);
                Q_EMIT showMessagesChanged(_showMessages);
            }
            break;
        case 7:
            if (_showBattery != *reinterpret_cast< bool*>(_v)) {
                _showBattery = *reinterpret_cast< bool*>(_v);
                Q_EMIT showBatteryChanged(_showBattery);
            }
            break;
        case 8:
            if (_showRSSI != *reinterpret_cast< bool*>(_v)) {
                _showRSSI = *reinterpret_cast< bool*>(_v);
                Q_EMIT showRSSIChanged(_showRSSI);
            }
            break;
        case 9:
            if (_progressBarValue != *reinterpret_cast< float*>(_v)) {
                _progressBarValue = *reinterpret_cast< float*>(_v);
                Q_EMIT progressBarValueChanged(_progressBarValue);
            }
            break;
        default: break;
        }
        _id -= 13;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 13;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void MainToolBar::connectionCountChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainToolBar::currentViewChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void MainToolBar::configListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void MainToolBar::connectedListChanged(QStringList _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MainToolBar::showGPSChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MainToolBar::showMavChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MainToolBar::showMessagesChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MainToolBar::showBatteryChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void MainToolBar::showRSSIChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void MainToolBar::progressBarValueChanged(float _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void MainToolBar::remoteRSSIChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void MainToolBar::telemetryRRSSIChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void MainToolBar::telemetryLRSSIChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}
QT_END_MOC_NAMESPACE
