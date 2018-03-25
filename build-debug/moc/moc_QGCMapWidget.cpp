/****************************************************************************
** Meta object code from reading C++ file 'QGCMapWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/map/QGCMapWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCMapWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QGCMapWidget_t {
    QByteArrayData data[52];
    char stringdata[696];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCMapWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCMapWidget_t qt_meta_stringdata_QGCMapWidget = {
    {
QT_MOC_LITERAL(0, 0, 12), // "QGCMapWidget"
QT_MOC_LITERAL(1, 13, 19), // "homePositionChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 8), // "latitude"
QT_MOC_LITERAL(4, 43, 9), // "longitude"
QT_MOC_LITERAL(5, 53, 8), // "altitude"
QT_MOC_LITERAL(6, 62, 15), // "waypointCreated"
QT_MOC_LITERAL(7, 78, 9), // "Waypoint*"
QT_MOC_LITERAL(8, 88, 2), // "wp"
QT_MOC_LITERAL(9, 91, 15), // "waypointChanged"
QT_MOC_LITERAL(10, 107, 10), // "CP_Created"
QT_MOC_LITERAL(11, 118, 10), // "CP_Changed"
QT_MOC_LITERAL(12, 129, 21), // "guidedActionTriggered"
QT_MOC_LITERAL(13, 151, 24), // "guidedAltActionTriggered"
QT_MOC_LITERAL(14, 176, 22), // "setHomeActionTriggered"
QT_MOC_LITERAL(15, 199, 6), // "addUAS"
QT_MOC_LITERAL(16, 206, 13), // "UASInterface*"
QT_MOC_LITERAL(17, 220, 3), // "uas"
QT_MOC_LITERAL(18, 224, 20), // "updateGlobalPosition"
QT_MOC_LITERAL(19, 245, 3), // "lat"
QT_MOC_LITERAL(20, 249, 3), // "lon"
QT_MOC_LITERAL(21, 253, 7), // "altAMSL"
QT_MOC_LITERAL(22, 261, 8), // "altWGS84"
QT_MOC_LITERAL(23, 270, 4), // "usec"
QT_MOC_LITERAL(24, 275, 19), // "updateLocalPosition"
QT_MOC_LITERAL(25, 295, 28), // "updateLocalPositionEstimates"
QT_MOC_LITERAL(26, 324, 17), // "updateSystemSpecs"
QT_MOC_LITERAL(27, 342, 12), // "activeUASSet"
QT_MOC_LITERAL(28, 355, 14), // "showGoToDialog"
QT_MOC_LITERAL(29, 370, 6), // "goHome"
QT_MOC_LITERAL(30, 377, 14), // "updateWaypoint"
QT_MOC_LITERAL(31, 392, 8), // "updateCP"
QT_MOC_LITERAL(32, 401, 18), // "updateWaypointList"
QT_MOC_LITERAL(33, 420, 13), // "updateCP_List"
QT_MOC_LITERAL(34, 434, 18), // "updateHomePosition"
QT_MOC_LITERAL(35, 453, 18), // "setUpdateRateLimit"
QT_MOC_LITERAL(36, 472, 7), // "seconds"
QT_MOC_LITERAL(37, 480, 18), // "cacheVisibleRegion"
QT_MOC_LITERAL(38, 499, 19), // "setFollowUAVEnabled"
QT_MOC_LITERAL(39, 519, 7), // "enabled"
QT_MOC_LITERAL(40, 527, 17), // "setTrailModeTimed"
QT_MOC_LITERAL(41, 545, 20), // "setTrailModeDistance"
QT_MOC_LITERAL(42, 566, 6), // "meters"
QT_MOC_LITERAL(43, 573, 12), // "deleteTrails"
QT_MOC_LITERAL(44, 586, 14), // "setZoomBlocked"
QT_MOC_LITERAL(45, 601, 7), // "blocked"
QT_MOC_LITERAL(46, 609, 12), // "loadSettings"
QT_MOC_LITERAL(47, 622, 14), // "changePosition"
QT_MOC_LITERAL(48, 637, 13), // "storeSettings"
QT_MOC_LITERAL(49, 651, 21), // "handleMapWaypointEdit"
QT_MOC_LITERAL(50, 673, 13), // "WayPointItem*"
QT_MOC_LITERAL(51, 687, 8) // "waypoint"

    },
    "QGCMapWidget\0homePositionChanged\0\0"
    "latitude\0longitude\0altitude\0waypointCreated\0"
    "Waypoint*\0wp\0waypointChanged\0CP_Created\0"
    "CP_Changed\0guidedActionTriggered\0"
    "guidedAltActionTriggered\0"
    "setHomeActionTriggered\0addUAS\0"
    "UASInterface*\0uas\0updateGlobalPosition\0"
    "lat\0lon\0altAMSL\0altWGS84\0usec\0"
    "updateLocalPosition\0updateLocalPositionEstimates\0"
    "updateSystemSpecs\0activeUASSet\0"
    "showGoToDialog\0goHome\0updateWaypoint\0"
    "updateCP\0updateWaypointList\0updateCP_List\0"
    "updateHomePosition\0setUpdateRateLimit\0"
    "seconds\0cacheVisibleRegion\0"
    "setFollowUAVEnabled\0enabled\0"
    "setTrailModeTimed\0setTrailModeDistance\0"
    "meters\0deleteTrails\0setZoomBlocked\0"
    "blocked\0loadSettings\0changePosition\0"
    "storeSettings\0handleMapWaypointEdit\0"
    "WayPointItem*\0waypoint"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCMapWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      33,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,  179,    2, 0x06 /* Public */,
       6,    1,  186,    2, 0x06 /* Public */,
       9,    1,  189,    2, 0x06 /* Public */,
      10,    1,  192,    2, 0x06 /* Public */,
      11,    1,  195,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    0,  198,    2, 0x0a /* Public */,
      13,    0,  199,    2, 0x0a /* Public */,
      14,    0,  200,    2, 0x0a /* Public */,
      15,    1,  201,    2, 0x0a /* Public */,
      18,    6,  204,    2, 0x0a /* Public */,
      18,    0,  217,    2, 0x0a /* Public */,
      24,    0,  218,    2, 0x0a /* Public */,
      25,    0,  219,    2, 0x0a /* Public */,
      26,    1,  220,    2, 0x0a /* Public */,
      27,    1,  223,    2, 0x0a /* Public */,
      28,    0,  226,    2, 0x0a /* Public */,
      29,    0,  227,    2, 0x0a /* Public */,
      30,    2,  228,    2, 0x0a /* Public */,
      31,    2,  233,    2, 0x0a /* Public */,
      32,    1,  238,    2, 0x0a /* Public */,
      33,    1,  241,    2, 0x0a /* Public */,
      34,    3,  244,    2, 0x0a /* Public */,
      35,    1,  251,    2, 0x0a /* Public */,
      37,    0,  254,    2, 0x0a /* Public */,
      38,    1,  255,    2, 0x0a /* Public */,
      40,    1,  258,    2, 0x0a /* Public */,
      41,    1,  261,    2, 0x0a /* Public */,
      43,    0,  264,    2, 0x0a /* Public */,
      44,    1,  265,    2, 0x0a /* Public */,
      46,    1,  268,    2, 0x0a /* Public */,
      46,    0,  271,    2, 0x2a /* Public | MethodCloned */,
      48,    0,  272,    2, 0x0a /* Public */,
      49,    1,  273,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double,    3,    4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 16, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::ULongLong,   17,   19,   20,   21,   22,   23,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 7,   17,    8,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 7,   17,    8,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double,    3,    4,    5,
    QMetaType::Void, QMetaType::Float,   36,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   39,
    QMetaType::Void, QMetaType::Int,   36,
    QMetaType::Void, QMetaType::Int,   42,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   45,
    QMetaType::Void, QMetaType::Bool,   47,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 50,   51,

       0        // eod
};

void QGCMapWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGCMapWidget *_t = static_cast<QGCMapWidget *>(_o);
        switch (_id) {
        case 0: _t->homePositionChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 1: _t->waypointCreated((*reinterpret_cast< Waypoint*(*)>(_a[1]))); break;
        case 2: _t->waypointChanged((*reinterpret_cast< Waypoint*(*)>(_a[1]))); break;
        case 3: _t->CP_Created((*reinterpret_cast< Waypoint*(*)>(_a[1]))); break;
        case 4: _t->CP_Changed((*reinterpret_cast< Waypoint*(*)>(_a[1]))); break;
        case 5: _t->guidedActionTriggered(); break;
        case 6: { bool _r = _t->guidedAltActionTriggered();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->setHomeActionTriggered();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: _t->addUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 9: _t->updateGlobalPosition((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< quint64(*)>(_a[6]))); break;
        case 10: _t->updateGlobalPosition(); break;
        case 11: _t->updateLocalPosition(); break;
        case 12: _t->updateLocalPositionEstimates(); break;
        case 13: _t->updateSystemSpecs((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->activeUASSet((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 15: _t->showGoToDialog(); break;
        case 16: _t->goHome(); break;
        case 17: _t->updateWaypoint((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Waypoint*(*)>(_a[2]))); break;
        case 18: _t->updateCP((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Waypoint*(*)>(_a[2]))); break;
        case 19: _t->updateWaypointList((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->updateCP_List((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->updateHomePosition((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 22: _t->setUpdateRateLimit((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 23: _t->cacheVisibleRegion(); break;
        case 24: _t->setFollowUAVEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->setTrailModeTimed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: _t->setTrailModeDistance((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: _t->deleteTrails(); break;
        case 28: _t->setZoomBlocked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 29: _t->loadSettings((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 30: _t->loadSettings(); break;
        case 31: _t->storeSettings(); break;
        case 32: _t->handleMapWaypointEdit((*reinterpret_cast< WayPointItem*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Waypoint* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Waypoint* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Waypoint* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Waypoint* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 9:
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
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Waypoint* >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Waypoint* >(); break;
            }
            break;
        case 32:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WayPointItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QGCMapWidget::*_t)(double , double , double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGCMapWidget::homePositionChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QGCMapWidget::*_t)(Waypoint * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGCMapWidget::waypointCreated)) {
                *result = 1;
            }
        }
        {
            typedef void (QGCMapWidget::*_t)(Waypoint * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGCMapWidget::waypointChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (QGCMapWidget::*_t)(Waypoint * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGCMapWidget::CP_Created)) {
                *result = 3;
            }
        }
        {
            typedef void (QGCMapWidget::*_t)(Waypoint * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGCMapWidget::CP_Changed)) {
                *result = 4;
            }
        }
    }
}

const QMetaObject QGCMapWidget::staticMetaObject = {
    { &mapcontrol::OPMapWidget::staticMetaObject, qt_meta_stringdata_QGCMapWidget.data,
      qt_meta_data_QGCMapWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QGCMapWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCMapWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QGCMapWidget.stringdata))
        return static_cast<void*>(const_cast< QGCMapWidget*>(this));
    return mapcontrol::OPMapWidget::qt_metacast(_clname);
}

int QGCMapWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = mapcontrol::OPMapWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 33)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 33;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 33)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 33;
    }
    return _id;
}

// SIGNAL 0
void QGCMapWidget::homePositionChanged(double _t1, double _t2, double _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QGCMapWidget::waypointCreated(Waypoint * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QGCMapWidget::waypointChanged(Waypoint * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QGCMapWidget::CP_Created(Waypoint * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QGCMapWidget::CP_Changed(Waypoint * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
