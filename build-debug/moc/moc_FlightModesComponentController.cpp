/****************************************************************************
** Meta object code from reading C++ file 'FlightModesComponentController.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/AutoPilotPlugins/PX4/FlightModesComponentController.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FlightModesComponentController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FlightModesComponentController_t {
    QByteArrayData data[79];
    char stringdata[1547];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FlightModesComponentController_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FlightModesComponentController_t qt_meta_stringdata_FlightModesComponentController = {
    {
QT_MOC_LITERAL(0, 0, 30), // "FlightModesComponentController"
QT_MOC_LITERAL(1, 31, 22), // "switchLiveRangeChanged"
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 17), // "thresholdsChanged"
QT_MOC_LITERAL(4, 73, 20), // "modesSelectedChanged"
QT_MOC_LITERAL(5, 94, 19), // "modesVisibleChanged"
QT_MOC_LITERAL(6, 114, 29), // "manualModeChannelIndexChanged"
QT_MOC_LITERAL(7, 144, 5), // "index"
QT_MOC_LITERAL(8, 150, 29), // "assistModeChannelIndexChanged"
QT_MOC_LITERAL(9, 180, 27), // "autoModeChannelIndexChanged"
QT_MOC_LITERAL(10, 208, 27), // "acroModeChannelIndexChanged"
QT_MOC_LITERAL(11, 236, 29), // "altCtlModeChannelIndexChanged"
QT_MOC_LITERAL(12, 266, 29), // "posCtlModeChannelIndexChanged"
QT_MOC_LITERAL(13, 296, 29), // "loiterModeChannelIndexChanged"
QT_MOC_LITERAL(14, 326, 30), // "missionModeChannelIndexChanged"
QT_MOC_LITERAL(15, 357, 29), // "returnModeChannelIndexChanged"
QT_MOC_LITERAL(16, 387, 31), // "offboardModeChannelIndexChanged"
QT_MOC_LITERAL(17, 419, 15), // "modeRowsChanged"
QT_MOC_LITERAL(18, 435, 31), // "_remoteControlChannelRawChanged"
QT_MOC_LITERAL(19, 467, 4), // "chan"
QT_MOC_LITERAL(20, 472, 4), // "fval"
QT_MOC_LITERAL(21, 477, 18), // "generateThresholds"
QT_MOC_LITERAL(22, 496, 18), // "validConfiguration"
QT_MOC_LITERAL(23, 515, 19), // "configurationErrors"
QT_MOC_LITERAL(24, 535, 12), // "channelCount"
QT_MOC_LITERAL(25, 548, 9), // "fixedWing"
QT_MOC_LITERAL(26, 558, 16), // "reservedChannels"
QT_MOC_LITERAL(27, 575, 13), // "assistModeRow"
QT_MOC_LITERAL(28, 589, 11), // "autoModeRow"
QT_MOC_LITERAL(29, 601, 11), // "acroModeRow"
QT_MOC_LITERAL(30, 613, 13), // "altCtlModeRow"
QT_MOC_LITERAL(31, 627, 13), // "posCtlModeRow"
QT_MOC_LITERAL(32, 641, 13), // "loiterModeRow"
QT_MOC_LITERAL(33, 655, 14), // "missionModeRow"
QT_MOC_LITERAL(34, 670, 13), // "returnModeRow"
QT_MOC_LITERAL(35, 684, 15), // "offboardModeRow"
QT_MOC_LITERAL(36, 700, 22), // "manualModeChannelIndex"
QT_MOC_LITERAL(37, 723, 22), // "assistModeChannelIndex"
QT_MOC_LITERAL(38, 746, 20), // "autoModeChannelIndex"
QT_MOC_LITERAL(39, 767, 20), // "acroModeChannelIndex"
QT_MOC_LITERAL(40, 788, 22), // "altCtlModeChannelIndex"
QT_MOC_LITERAL(41, 811, 22), // "posCtlModeChannelIndex"
QT_MOC_LITERAL(42, 834, 22), // "loiterModeChannelIndex"
QT_MOC_LITERAL(43, 857, 23), // "missionModeChannelIndex"
QT_MOC_LITERAL(44, 881, 22), // "returnModeChannelIndex"
QT_MOC_LITERAL(45, 904, 24), // "offboardModeChannelIndex"
QT_MOC_LITERAL(46, 929, 17), // "manualModeRcValue"
QT_MOC_LITERAL(47, 947, 17), // "assistModeRcValue"
QT_MOC_LITERAL(48, 965, 15), // "autoModeRcValue"
QT_MOC_LITERAL(49, 981, 15), // "acroModeRcValue"
QT_MOC_LITERAL(50, 997, 17), // "altCtlModeRcValue"
QT_MOC_LITERAL(51, 1015, 17), // "posCtlModeRcValue"
QT_MOC_LITERAL(52, 1033, 17), // "loiterModeRcValue"
QT_MOC_LITERAL(53, 1051, 18), // "missionModeRcValue"
QT_MOC_LITERAL(54, 1070, 17), // "returnModeRcValue"
QT_MOC_LITERAL(55, 1088, 19), // "offboardModeRcValue"
QT_MOC_LITERAL(56, 1108, 19), // "manualModeThreshold"
QT_MOC_LITERAL(57, 1128, 19), // "assistModeThreshold"
QT_MOC_LITERAL(58, 1148, 17), // "autoModeThreshold"
QT_MOC_LITERAL(59, 1166, 17), // "acroModeThreshold"
QT_MOC_LITERAL(60, 1184, 19), // "altCtlModeThreshold"
QT_MOC_LITERAL(61, 1204, 19), // "posCtlModeThreshold"
QT_MOC_LITERAL(62, 1224, 19), // "loiterModeThreshold"
QT_MOC_LITERAL(63, 1244, 20), // "missionModeThreshold"
QT_MOC_LITERAL(64, 1265, 19), // "returnModeThreshold"
QT_MOC_LITERAL(65, 1285, 21), // "offboardModeThreshold"
QT_MOC_LITERAL(66, 1307, 17), // "assistModeVisible"
QT_MOC_LITERAL(67, 1325, 15), // "autoModeVisible"
QT_MOC_LITERAL(68, 1341, 18), // "manualModeSelected"
QT_MOC_LITERAL(69, 1360, 18), // "assistModeSelected"
QT_MOC_LITERAL(70, 1379, 16), // "autoModeSelected"
QT_MOC_LITERAL(71, 1396, 16), // "acroModeSelected"
QT_MOC_LITERAL(72, 1413, 18), // "altCtlModeSelected"
QT_MOC_LITERAL(73, 1432, 18), // "posCtlModeSelected"
QT_MOC_LITERAL(74, 1451, 19), // "missionModeSelected"
QT_MOC_LITERAL(75, 1471, 18), // "loiterModeSelected"
QT_MOC_LITERAL(76, 1490, 18), // "returnModeSelected"
QT_MOC_LITERAL(77, 1509, 20), // "offboardModeSelected"
QT_MOC_LITERAL(78, 1530, 16) // "channelListModel"

    },
    "FlightModesComponentController\0"
    "switchLiveRangeChanged\0\0thresholdsChanged\0"
    "modesSelectedChanged\0modesVisibleChanged\0"
    "manualModeChannelIndexChanged\0index\0"
    "assistModeChannelIndexChanged\0"
    "autoModeChannelIndexChanged\0"
    "acroModeChannelIndexChanged\0"
    "altCtlModeChannelIndexChanged\0"
    "posCtlModeChannelIndexChanged\0"
    "loiterModeChannelIndexChanged\0"
    "missionModeChannelIndexChanged\0"
    "returnModeChannelIndexChanged\0"
    "offboardModeChannelIndexChanged\0"
    "modeRowsChanged\0_remoteControlChannelRawChanged\0"
    "chan\0fval\0generateThresholds\0"
    "validConfiguration\0configurationErrors\0"
    "channelCount\0fixedWing\0reservedChannels\0"
    "assistModeRow\0autoModeRow\0acroModeRow\0"
    "altCtlModeRow\0posCtlModeRow\0loiterModeRow\0"
    "missionModeRow\0returnModeRow\0"
    "offboardModeRow\0manualModeChannelIndex\0"
    "assistModeChannelIndex\0autoModeChannelIndex\0"
    "acroModeChannelIndex\0altCtlModeChannelIndex\0"
    "posCtlModeChannelIndex\0loiterModeChannelIndex\0"
    "missionModeChannelIndex\0returnModeChannelIndex\0"
    "offboardModeChannelIndex\0manualModeRcValue\0"
    "assistModeRcValue\0autoModeRcValue\0"
    "acroModeRcValue\0altCtlModeRcValue\0"
    "posCtlModeRcValue\0loiterModeRcValue\0"
    "missionModeRcValue\0returnModeRcValue\0"
    "offboardModeRcValue\0manualModeThreshold\0"
    "assistModeThreshold\0autoModeThreshold\0"
    "acroModeThreshold\0altCtlModeThreshold\0"
    "posCtlModeThreshold\0loiterModeThreshold\0"
    "missionModeThreshold\0returnModeThreshold\0"
    "offboardModeThreshold\0assistModeVisible\0"
    "autoModeVisible\0manualModeSelected\0"
    "assistModeSelected\0autoModeSelected\0"
    "acroModeSelected\0altCtlModeSelected\0"
    "posCtlModeSelected\0missionModeSelected\0"
    "loiterModeSelected\0returnModeSelected\0"
    "offboardModeSelected\0channelListModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FlightModesComponentController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
      57,  140, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      15,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x06 /* Public */,
       3,    0,  100,    2, 0x06 /* Public */,
       4,    0,  101,    2, 0x06 /* Public */,
       5,    0,  102,    2, 0x06 /* Public */,
       6,    1,  103,    2, 0x06 /* Public */,
       8,    1,  106,    2, 0x06 /* Public */,
       9,    1,  109,    2, 0x06 /* Public */,
      10,    1,  112,    2, 0x06 /* Public */,
      11,    1,  115,    2, 0x06 /* Public */,
      12,    1,  118,    2, 0x06 /* Public */,
      13,    1,  121,    2, 0x06 /* Public */,
      14,    1,  124,    2, 0x06 /* Public */,
      15,    1,  127,    2, 0x06 /* Public */,
      16,    1,  130,    2, 0x06 /* Public */,
      17,    0,  133,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      18,    2,  134,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      21,    0,  139,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Float,   19,   20,

 // methods: parameters
    QMetaType::Void,

 // properties: name, type, flags
      22, QMetaType::Bool, 0x00095401,
      23, QMetaType::QString, 0x00095401,
      24, QMetaType::Int, 0x00095401,
      25, QMetaType::Bool, 0x00095401,
      26, QMetaType::QString, 0x00095401,
      27, QMetaType::Int, 0x00495003,
      28, QMetaType::Int, 0x00495003,
      29, QMetaType::Int, 0x00495003,
      30, QMetaType::Int, 0x00495003,
      31, QMetaType::Int, 0x00495003,
      32, QMetaType::Int, 0x00495003,
      33, QMetaType::Int, 0x00495003,
      34, QMetaType::Int, 0x00495003,
      35, QMetaType::Int, 0x00495003,
      36, QMetaType::Int, 0x00495103,
      37, QMetaType::Int, 0x00495001,
      38, QMetaType::Int, 0x00495001,
      39, QMetaType::Int, 0x00495103,
      40, QMetaType::Int, 0x00495001,
      41, QMetaType::Int, 0x00495103,
      42, QMetaType::Int, 0x00495103,
      43, QMetaType::Int, 0x00495001,
      44, QMetaType::Int, 0x00495103,
      45, QMetaType::Int, 0x00495103,
      46, QMetaType::Double, 0x00495001,
      47, QMetaType::Double, 0x00495001,
      48, QMetaType::Double, 0x00495001,
      49, QMetaType::Double, 0x00495001,
      50, QMetaType::Double, 0x00495001,
      51, QMetaType::Double, 0x00495001,
      52, QMetaType::Double, 0x00495001,
      53, QMetaType::Double, 0x00495001,
      54, QMetaType::Double, 0x00495001,
      55, QMetaType::Double, 0x00495001,
      56, QMetaType::Double, 0x00495001,
      57, QMetaType::Double, 0x00495103,
      58, QMetaType::Double, 0x00495103,
      59, QMetaType::Double, 0x00495103,
      60, QMetaType::Double, 0x00495103,
      61, QMetaType::Double, 0x00495103,
      62, QMetaType::Double, 0x00495103,
      63, QMetaType::Double, 0x00495103,
      64, QMetaType::Double, 0x00495103,
      65, QMetaType::Double, 0x00495103,
      66, QMetaType::Bool, 0x00495003,
      67, QMetaType::Bool, 0x00495003,
      68, QMetaType::Bool, 0x00495003,
      69, QMetaType::Bool, 0x00495003,
      70, QMetaType::Bool, 0x00495003,
      71, QMetaType::Bool, 0x00495003,
      72, QMetaType::Bool, 0x00495003,
      73, QMetaType::Bool, 0x00495003,
      74, QMetaType::Bool, 0x00495003,
      75, QMetaType::Bool, 0x00495003,
      76, QMetaType::Bool, 0x00495003,
      77, QMetaType::Bool, 0x00495003,
      78, QMetaType::QStringList, 0x00095401,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
      14,
      14,
      14,
      14,
      14,
      14,
      14,
      14,
      14,
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
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       1,
       1,
       1,
       1,
       1,
       1,
       1,
       1,
       1,
       1,
       3,
       3,
       2,
       2,
       2,
       2,
       2,
       2,
       2,
       2,
       2,
       2,
       0,

       0        // eod
};

void FlightModesComponentController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FlightModesComponentController *_t = static_cast<FlightModesComponentController *>(_o);
        switch (_id) {
        case 0: _t->switchLiveRangeChanged(); break;
        case 1: _t->thresholdsChanged(); break;
        case 2: _t->modesSelectedChanged(); break;
        case 3: _t->modesVisibleChanged(); break;
        case 4: _t->manualModeChannelIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->assistModeChannelIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->autoModeChannelIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->acroModeChannelIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->altCtlModeChannelIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->posCtlModeChannelIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->loiterModeChannelIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->missionModeChannelIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->returnModeChannelIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->offboardModeChannelIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->modeRowsChanged(); break;
        case 15: _t->_remoteControlChannelRawChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 16: _t->generateThresholds(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FlightModesComponentController::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FlightModesComponentController::switchLiveRangeChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (FlightModesComponentController::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FlightModesComponentController::thresholdsChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (FlightModesComponentController::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FlightModesComponentController::modesSelectedChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (FlightModesComponentController::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FlightModesComponentController::modesVisibleChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (FlightModesComponentController::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FlightModesComponentController::manualModeChannelIndexChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (FlightModesComponentController::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FlightModesComponentController::assistModeChannelIndexChanged)) {
                *result = 5;
            }
        }
        {
            typedef void (FlightModesComponentController::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FlightModesComponentController::autoModeChannelIndexChanged)) {
                *result = 6;
            }
        }
        {
            typedef void (FlightModesComponentController::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FlightModesComponentController::acroModeChannelIndexChanged)) {
                *result = 7;
            }
        }
        {
            typedef void (FlightModesComponentController::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FlightModesComponentController::altCtlModeChannelIndexChanged)) {
                *result = 8;
            }
        }
        {
            typedef void (FlightModesComponentController::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FlightModesComponentController::posCtlModeChannelIndexChanged)) {
                *result = 9;
            }
        }
        {
            typedef void (FlightModesComponentController::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FlightModesComponentController::loiterModeChannelIndexChanged)) {
                *result = 10;
            }
        }
        {
            typedef void (FlightModesComponentController::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FlightModesComponentController::missionModeChannelIndexChanged)) {
                *result = 11;
            }
        }
        {
            typedef void (FlightModesComponentController::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FlightModesComponentController::returnModeChannelIndexChanged)) {
                *result = 12;
            }
        }
        {
            typedef void (FlightModesComponentController::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FlightModesComponentController::offboardModeChannelIndexChanged)) {
                *result = 13;
            }
        }
        {
            typedef void (FlightModesComponentController::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FlightModesComponentController::modeRowsChanged)) {
                *result = 14;
            }
        }
    }
}

const QMetaObject FlightModesComponentController::staticMetaObject = {
    { &FactPanelController::staticMetaObject, qt_meta_stringdata_FlightModesComponentController.data,
      qt_meta_data_FlightModesComponentController,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FlightModesComponentController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FlightModesComponentController::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FlightModesComponentController.stringdata))
        return static_cast<void*>(const_cast< FlightModesComponentController*>(this));
    return FactPanelController::qt_metacast(_clname);
}

int FlightModesComponentController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FactPanelController::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _validConfiguration; break;
        case 1: *reinterpret_cast< QString*>(_v) = _configurationErrors; break;
        case 2: *reinterpret_cast< int*>(_v) = _channelCount; break;
        case 3: *reinterpret_cast< bool*>(_v) = _fixedWing; break;
        case 4: *reinterpret_cast< QString*>(_v) = _reservedChannels; break;
        case 5: *reinterpret_cast< int*>(_v) = _assistModeRow; break;
        case 6: *reinterpret_cast< int*>(_v) = _autoModeRow; break;
        case 7: *reinterpret_cast< int*>(_v) = _acroModeRow; break;
        case 8: *reinterpret_cast< int*>(_v) = _altCtlModeRow; break;
        case 9: *reinterpret_cast< int*>(_v) = _posCtlModeRow; break;
        case 10: *reinterpret_cast< int*>(_v) = _loiterModeRow; break;
        case 11: *reinterpret_cast< int*>(_v) = _missionModeRow; break;
        case 12: *reinterpret_cast< int*>(_v) = _returnModeRow; break;
        case 13: *reinterpret_cast< int*>(_v) = _offboardModeRow; break;
        case 14: *reinterpret_cast< int*>(_v) = manualModeChannelIndex(); break;
        case 15: *reinterpret_cast< int*>(_v) = assistModeChannelIndex(); break;
        case 16: *reinterpret_cast< int*>(_v) = autoModeChannelIndex(); break;
        case 17: *reinterpret_cast< int*>(_v) = acroModeChannelIndex(); break;
        case 18: *reinterpret_cast< int*>(_v) = altCtlModeChannelIndex(); break;
        case 19: *reinterpret_cast< int*>(_v) = posCtlModeChannelIndex(); break;
        case 20: *reinterpret_cast< int*>(_v) = loiterModeChannelIndex(); break;
        case 21: *reinterpret_cast< int*>(_v) = missionModeChannelIndex(); break;
        case 22: *reinterpret_cast< int*>(_v) = returnModeChannelIndex(); break;
        case 23: *reinterpret_cast< int*>(_v) = offboardModeChannelIndex(); break;
        case 24: *reinterpret_cast< double*>(_v) = manualModeRcValue(); break;
        case 25: *reinterpret_cast< double*>(_v) = assistModeRcValue(); break;
        case 26: *reinterpret_cast< double*>(_v) = autoModeRcValue(); break;
        case 27: *reinterpret_cast< double*>(_v) = acroModeRcValue(); break;
        case 28: *reinterpret_cast< double*>(_v) = altCtlModeRcValue(); break;
        case 29: *reinterpret_cast< double*>(_v) = posCtlModeRcValue(); break;
        case 30: *reinterpret_cast< double*>(_v) = loiterModeRcValue(); break;
        case 31: *reinterpret_cast< double*>(_v) = missionModeRcValue(); break;
        case 32: *reinterpret_cast< double*>(_v) = returnModeRcValue(); break;
        case 33: *reinterpret_cast< double*>(_v) = offboardModeRcValue(); break;
        case 34: *reinterpret_cast< double*>(_v) = manualModeThreshold(); break;
        case 35: *reinterpret_cast< double*>(_v) = assistModeThreshold(); break;
        case 36: *reinterpret_cast< double*>(_v) = autoModeThreshold(); break;
        case 37: *reinterpret_cast< double*>(_v) = acroModeThreshold(); break;
        case 38: *reinterpret_cast< double*>(_v) = altCtlModeThreshold(); break;
        case 39: *reinterpret_cast< double*>(_v) = posCtlModeThreshold(); break;
        case 40: *reinterpret_cast< double*>(_v) = loiterModeThreshold(); break;
        case 41: *reinterpret_cast< double*>(_v) = missionModeThreshold(); break;
        case 42: *reinterpret_cast< double*>(_v) = returnModeThreshold(); break;
        case 43: *reinterpret_cast< double*>(_v) = offboardModeThreshold(); break;
        case 44: *reinterpret_cast< bool*>(_v) = _assistModeVisible; break;
        case 45: *reinterpret_cast< bool*>(_v) = _autoModeVisible; break;
        case 46: *reinterpret_cast< bool*>(_v) = _manualModeSelected; break;
        case 47: *reinterpret_cast< bool*>(_v) = _assistModeSelected; break;
        case 48: *reinterpret_cast< bool*>(_v) = _autoModeSelected; break;
        case 49: *reinterpret_cast< bool*>(_v) = _acroModeSelected; break;
        case 50: *reinterpret_cast< bool*>(_v) = _altCtlModeSelected; break;
        case 51: *reinterpret_cast< bool*>(_v) = _posCtlModeSelected; break;
        case 52: *reinterpret_cast< bool*>(_v) = _missionModeSelected; break;
        case 53: *reinterpret_cast< bool*>(_v) = _loiterModeSelected; break;
        case 54: *reinterpret_cast< bool*>(_v) = _returnModeSelected; break;
        case 55: *reinterpret_cast< bool*>(_v) = _offboardModeSelected; break;
        case 56: *reinterpret_cast< QStringList*>(_v) = _channelListModel; break;
        default: break;
        }
        _id -= 57;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 5:
            if (_assistModeRow != *reinterpret_cast< int*>(_v)) {
                _assistModeRow = *reinterpret_cast< int*>(_v);
                Q_EMIT modeRowsChanged();
            }
            break;
        case 6:
            if (_autoModeRow != *reinterpret_cast< int*>(_v)) {
                _autoModeRow = *reinterpret_cast< int*>(_v);
                Q_EMIT modeRowsChanged();
            }
            break;
        case 7:
            if (_acroModeRow != *reinterpret_cast< int*>(_v)) {
                _acroModeRow = *reinterpret_cast< int*>(_v);
                Q_EMIT modeRowsChanged();
            }
            break;
        case 8:
            if (_altCtlModeRow != *reinterpret_cast< int*>(_v)) {
                _altCtlModeRow = *reinterpret_cast< int*>(_v);
                Q_EMIT modeRowsChanged();
            }
            break;
        case 9:
            if (_posCtlModeRow != *reinterpret_cast< int*>(_v)) {
                _posCtlModeRow = *reinterpret_cast< int*>(_v);
                Q_EMIT modeRowsChanged();
            }
            break;
        case 10:
            if (_loiterModeRow != *reinterpret_cast< int*>(_v)) {
                _loiterModeRow = *reinterpret_cast< int*>(_v);
                Q_EMIT modeRowsChanged();
            }
            break;
        case 11:
            if (_missionModeRow != *reinterpret_cast< int*>(_v)) {
                _missionModeRow = *reinterpret_cast< int*>(_v);
                Q_EMIT modeRowsChanged();
            }
            break;
        case 12:
            if (_returnModeRow != *reinterpret_cast< int*>(_v)) {
                _returnModeRow = *reinterpret_cast< int*>(_v);
                Q_EMIT modeRowsChanged();
            }
            break;
        case 13:
            if (_offboardModeRow != *reinterpret_cast< int*>(_v)) {
                _offboardModeRow = *reinterpret_cast< int*>(_v);
                Q_EMIT modeRowsChanged();
            }
            break;
        case 14: setManualModeChannelIndex(*reinterpret_cast< int*>(_v)); break;
        case 17: setAcroModeChannelIndex(*reinterpret_cast< int*>(_v)); break;
        case 19: setPosCtlModeChannelIndex(*reinterpret_cast< int*>(_v)); break;
        case 20: setLoiterModeChannelIndex(*reinterpret_cast< int*>(_v)); break;
        case 22: setReturnModeChannelIndex(*reinterpret_cast< int*>(_v)); break;
        case 23: setOffboardModeChannelIndex(*reinterpret_cast< int*>(_v)); break;
        case 35: setAssistModeThreshold(*reinterpret_cast< double*>(_v)); break;
        case 36: setAutoModeThreshold(*reinterpret_cast< double*>(_v)); break;
        case 37: setAcroModeThreshold(*reinterpret_cast< double*>(_v)); break;
        case 38: setAltCtlModeThreshold(*reinterpret_cast< double*>(_v)); break;
        case 39: setPosCtlModeThreshold(*reinterpret_cast< double*>(_v)); break;
        case 40: setLoiterModeThreshold(*reinterpret_cast< double*>(_v)); break;
        case 41: setMissionModeThreshold(*reinterpret_cast< double*>(_v)); break;
        case 42: setReturnModeThreshold(*reinterpret_cast< double*>(_v)); break;
        case 43: setOffboardModeThreshold(*reinterpret_cast< double*>(_v)); break;
        case 44:
            if (_assistModeVisible != *reinterpret_cast< bool*>(_v)) {
                _assistModeVisible = *reinterpret_cast< bool*>(_v);
                Q_EMIT modesVisibleChanged();
            }
            break;
        case 45:
            if (_autoModeVisible != *reinterpret_cast< bool*>(_v)) {
                _autoModeVisible = *reinterpret_cast< bool*>(_v);
                Q_EMIT modesVisibleChanged();
            }
            break;
        case 46:
            if (_manualModeSelected != *reinterpret_cast< bool*>(_v)) {
                _manualModeSelected = *reinterpret_cast< bool*>(_v);
                Q_EMIT modesSelectedChanged();
            }
            break;
        case 47:
            if (_assistModeSelected != *reinterpret_cast< bool*>(_v)) {
                _assistModeSelected = *reinterpret_cast< bool*>(_v);
                Q_EMIT modesSelectedChanged();
            }
            break;
        case 48:
            if (_autoModeSelected != *reinterpret_cast< bool*>(_v)) {
                _autoModeSelected = *reinterpret_cast< bool*>(_v);
                Q_EMIT modesSelectedChanged();
            }
            break;
        case 49:
            if (_acroModeSelected != *reinterpret_cast< bool*>(_v)) {
                _acroModeSelected = *reinterpret_cast< bool*>(_v);
                Q_EMIT modesSelectedChanged();
            }
            break;
        case 50:
            if (_altCtlModeSelected != *reinterpret_cast< bool*>(_v)) {
                _altCtlModeSelected = *reinterpret_cast< bool*>(_v);
                Q_EMIT modesSelectedChanged();
            }
            break;
        case 51:
            if (_posCtlModeSelected != *reinterpret_cast< bool*>(_v)) {
                _posCtlModeSelected = *reinterpret_cast< bool*>(_v);
                Q_EMIT modesSelectedChanged();
            }
            break;
        case 52:
            if (_missionModeSelected != *reinterpret_cast< bool*>(_v)) {
                _missionModeSelected = *reinterpret_cast< bool*>(_v);
                Q_EMIT modesSelectedChanged();
            }
            break;
        case 53:
            if (_loiterModeSelected != *reinterpret_cast< bool*>(_v)) {
                _loiterModeSelected = *reinterpret_cast< bool*>(_v);
                Q_EMIT modesSelectedChanged();
            }
            break;
        case 54:
            if (_returnModeSelected != *reinterpret_cast< bool*>(_v)) {
                _returnModeSelected = *reinterpret_cast< bool*>(_v);
                Q_EMIT modesSelectedChanged();
            }
            break;
        case 55:
            if (_offboardModeSelected != *reinterpret_cast< bool*>(_v)) {
                _offboardModeSelected = *reinterpret_cast< bool*>(_v);
                Q_EMIT modesSelectedChanged();
            }
            break;
        default: break;
        }
        _id -= 57;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 57;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 57;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 57;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 57;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 57;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 57;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 57)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 57;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void FlightModesComponentController::switchLiveRangeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void FlightModesComponentController::thresholdsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void FlightModesComponentController::modesSelectedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void FlightModesComponentController::modesVisibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void FlightModesComponentController::manualModeChannelIndexChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void FlightModesComponentController::assistModeChannelIndexChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void FlightModesComponentController::autoModeChannelIndexChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void FlightModesComponentController::acroModeChannelIndexChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void FlightModesComponentController::altCtlModeChannelIndexChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void FlightModesComponentController::posCtlModeChannelIndexChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void FlightModesComponentController::loiterModeChannelIndexChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void FlightModesComponentController::missionModeChannelIndexChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void FlightModesComponentController::returnModeChannelIndexChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void FlightModesComponentController::offboardModeChannelIndexChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void FlightModesComponentController::modeRowsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
