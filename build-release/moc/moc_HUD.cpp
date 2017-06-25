/****************************************************************************
** Meta object code from reading C++ file 'HUD.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/HUD.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'HUD.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_HUD_t {
    QByteArrayData data[95];
    char stringdata[1008];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HUD_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HUD_t qt_meta_stringdata_HUD = {
    {
QT_MOC_LITERAL(0, 0, 3), // "HUD"
QT_MOC_LITERAL(1, 4, 17), // "visibilityChanged"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 7), // "visible"
QT_MOC_LITERAL(4, 31, 12), // "styleChanged"
QT_MOC_LITERAL(5, 44, 11), // "styleIsDark"
QT_MOC_LITERAL(6, 56, 12), // "setActiveUAS"
QT_MOC_LITERAL(7, 69, 13), // "UASInterface*"
QT_MOC_LITERAL(8, 83, 3), // "uas"
QT_MOC_LITERAL(9, 87, 14), // "updateAttitude"
QT_MOC_LITERAL(10, 102, 4), // "roll"
QT_MOC_LITERAL(11, 107, 5), // "pitch"
QT_MOC_LITERAL(12, 113, 3), // "yaw"
QT_MOC_LITERAL(13, 117, 9), // "timestamp"
QT_MOC_LITERAL(14, 127, 9), // "component"
QT_MOC_LITERAL(15, 137, 13), // "updateBattery"
QT_MOC_LITERAL(16, 151, 16), // "receiveHeartbeat"
QT_MOC_LITERAL(17, 168, 12), // "updateThrust"
QT_MOC_LITERAL(18, 181, 19), // "updateLocalPosition"
QT_MOC_LITERAL(19, 201, 20), // "updateGlobalPosition"
QT_MOC_LITERAL(20, 222, 11), // "updateSpeed"
QT_MOC_LITERAL(21, 234, 11), // "updateState"
QT_MOC_LITERAL(22, 246, 10), // "updateMode"
QT_MOC_LITERAL(23, 257, 2), // "id"
QT_MOC_LITERAL(24, 260, 4), // "mode"
QT_MOC_LITERAL(25, 265, 11), // "description"
QT_MOC_LITERAL(26, 277, 10), // "updateLoad"
QT_MOC_LITERAL(27, 288, 14), // "selectWaypoint"
QT_MOC_LITERAL(28, 303, 5), // "uasId"
QT_MOC_LITERAL(29, 309, 10), // "startImage"
QT_MOC_LITERAL(30, 320, 5), // "imgid"
QT_MOC_LITERAL(31, 326, 5), // "width"
QT_MOC_LITERAL(32, 332, 6), // "height"
QT_MOC_LITERAL(33, 339, 5), // "depth"
QT_MOC_LITERAL(34, 345, 8), // "channels"
QT_MOC_LITERAL(35, 354, 9), // "setPixels"
QT_MOC_LITERAL(36, 364, 20), // "const unsigned char*"
QT_MOC_LITERAL(37, 385, 9), // "imageData"
QT_MOC_LITERAL(38, 395, 6), // "length"
QT_MOC_LITERAL(39, 402, 10), // "startIndex"
QT_MOC_LITERAL(40, 413, 11), // "finishImage"
QT_MOC_LITERAL(41, 425, 9), // "saveImage"
QT_MOC_LITERAL(42, 435, 8), // "fileName"
QT_MOC_LITERAL(43, 444, 10), // "saveImages"
QT_MOC_LITERAL(44, 455, 4), // "save"
QT_MOC_LITERAL(45, 460, 22), // "selectOfflineDirectory"
QT_MOC_LITERAL(46, 483, 20), // "enableHUDInstruments"
QT_MOC_LITERAL(47, 504, 7), // "enabled"
QT_MOC_LITERAL(48, 512, 11), // "enableVideo"
QT_MOC_LITERAL(49, 524, 9), // "copyImage"
QT_MOC_LITERAL(50, 534, 20), // "paintRollPitchStrips"
QT_MOC_LITERAL(51, 555, 15), // "paintPitchLines"
QT_MOC_LITERAL(52, 571, 9), // "QPainter*"
QT_MOC_LITERAL(53, 581, 7), // "painter"
QT_MOC_LITERAL(54, 589, 9), // "paintText"
QT_MOC_LITERAL(55, 599, 4), // "text"
QT_MOC_LITERAL(56, 604, 5), // "color"
QT_MOC_LITERAL(57, 610, 8), // "fontSize"
QT_MOC_LITERAL(58, 619, 4), // "refX"
QT_MOC_LITERAL(59, 624, 4), // "refY"
QT_MOC_LITERAL(60, 629, 11), // "setupGLView"
QT_MOC_LITERAL(61, 641, 18), // "referencePositionX"
QT_MOC_LITERAL(62, 660, 18), // "referencePositionY"
QT_MOC_LITERAL(63, 679, 14), // "referenceWidth"
QT_MOC_LITERAL(64, 694, 15), // "referenceHeight"
QT_MOC_LITERAL(65, 710, 8), // "paintHUD"
QT_MOC_LITERAL(66, 719, 17), // "paintPitchLinePos"
QT_MOC_LITERAL(67, 737, 7), // "refPosX"
QT_MOC_LITERAL(68, 745, 7), // "refPosY"
QT_MOC_LITERAL(69, 753, 17), // "paintPitchLineNeg"
QT_MOC_LITERAL(70, 771, 8), // "drawLine"
QT_MOC_LITERAL(71, 780, 5), // "refX1"
QT_MOC_LITERAL(72, 786, 5), // "refY1"
QT_MOC_LITERAL(73, 792, 5), // "refX2"
QT_MOC_LITERAL(74, 798, 5), // "refY2"
QT_MOC_LITERAL(75, 804, 11), // "drawEllipse"
QT_MOC_LITERAL(76, 816, 7), // "radiusX"
QT_MOC_LITERAL(77, 824, 7), // "radiusY"
QT_MOC_LITERAL(78, 832, 8), // "startDeg"
QT_MOC_LITERAL(79, 841, 6), // "endDeg"
QT_MOC_LITERAL(80, 848, 9), // "lineWidth"
QT_MOC_LITERAL(81, 858, 10), // "drawCircle"
QT_MOC_LITERAL(82, 869, 6), // "radius"
QT_MOC_LITERAL(83, 876, 19), // "drawChangeRateStrip"
QT_MOC_LITERAL(84, 896, 4), // "xRef"
QT_MOC_LITERAL(85, 901, 4), // "yRef"
QT_MOC_LITERAL(86, 906, 7), // "minRate"
QT_MOC_LITERAL(87, 914, 7), // "maxRate"
QT_MOC_LITERAL(88, 922, 5), // "value"
QT_MOC_LITERAL(89, 928, 7), // "reverse"
QT_MOC_LITERAL(90, 936, 24), // "drawChangeIndicatorGauge"
QT_MOC_LITERAL(91, 961, 17), // "expectedMaxChange"
QT_MOC_LITERAL(92, 979, 5), // "solid"
QT_MOC_LITERAL(93, 985, 11), // "drawPolygon"
QT_MOC_LITERAL(94, 997, 10) // "refPolygon"

    },
    "HUD\0visibilityChanged\0\0visible\0"
    "styleChanged\0styleIsDark\0setActiveUAS\0"
    "UASInterface*\0uas\0updateAttitude\0roll\0"
    "pitch\0yaw\0timestamp\0component\0"
    "updateBattery\0receiveHeartbeat\0"
    "updateThrust\0updateLocalPosition\0"
    "updateGlobalPosition\0updateSpeed\0"
    "updateState\0updateMode\0id\0mode\0"
    "description\0updateLoad\0selectWaypoint\0"
    "uasId\0startImage\0imgid\0width\0height\0"
    "depth\0channels\0setPixels\0const unsigned char*\0"
    "imageData\0length\0startIndex\0finishImage\0"
    "saveImage\0fileName\0saveImages\0save\0"
    "selectOfflineDirectory\0enableHUDInstruments\0"
    "enabled\0enableVideo\0copyImage\0"
    "paintRollPitchStrips\0paintPitchLines\0"
    "QPainter*\0painter\0paintText\0text\0color\0"
    "fontSize\0refX\0refY\0setupGLView\0"
    "referencePositionX\0referencePositionY\0"
    "referenceWidth\0referenceHeight\0paintHUD\0"
    "paintPitchLinePos\0refPosX\0refPosY\0"
    "paintPitchLineNeg\0drawLine\0refX1\0refY1\0"
    "refX2\0refY2\0drawEllipse\0radiusX\0radiusY\0"
    "startDeg\0endDeg\0lineWidth\0drawCircle\0"
    "radius\0drawChangeRateStrip\0xRef\0yRef\0"
    "minRate\0maxRate\0value\0reverse\0"
    "drawChangeIndicatorGauge\0expectedMaxChange\0"
    "solid\0drawPolygon\0refPolygon"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HUD[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      40,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  214,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,  217,    2, 0x0a /* Public */,
       6,    1,  220,    2, 0x0a /* Public */,
       9,    5,  223,    2, 0x0a /* Public */,
       9,    6,  234,    2, 0x0a /* Public */,
      15,    5,  247,    2, 0x0a /* Public */,
      16,    1,  258,    2, 0x0a /* Public */,
      17,    2,  261,    2, 0x0a /* Public */,
      18,    5,  266,    2, 0x0a /* Public */,
      19,    6,  277,    2, 0x0a /* Public */,
      20,    5,  290,    2, 0x0a /* Public */,
      21,    2,  301,    2, 0x0a /* Public */,
      22,    3,  306,    2, 0x0a /* Public */,
      26,    2,  313,    2, 0x0a /* Public */,
      27,    2,  318,    2, 0x0a /* Public */,
      29,    5,  323,    2, 0x0a /* Public */,
      35,    4,  334,    2, 0x0a /* Public */,
      40,    0,  343,    2, 0x0a /* Public */,
      41,    0,  344,    2, 0x0a /* Public */,
      41,    1,  345,    2, 0x0a /* Public */,
      43,    1,  348,    2, 0x0a /* Public */,
      45,    0,  351,    2, 0x0a /* Public */,
      46,    1,  352,    2, 0x0a /* Public */,
      48,    1,  355,    2, 0x0a /* Public */,
      49,    1,  358,    2, 0x0a /* Public */,
      50,    0,  361,    2, 0x09 /* Protected */,
      51,    2,  362,    2, 0x09 /* Protected */,
      54,    6,  367,    2, 0x09 /* Protected */,
      60,    4,  380,    2, 0x09 /* Protected */,
      65,    0,  389,    2, 0x09 /* Protected */,
      66,    4,  390,    2, 0x09 /* Protected */,
      69,    4,  399,    2, 0x09 /* Protected */,
      70,    7,  408,    2, 0x09 /* Protected */,
      75,    9,  423,    2, 0x09 /* Protected */,
      81,    8,  442,    2, 0x09 /* Protected */,
      83,    8,  459,    2, 0x09 /* Protected */,
      83,    7,  476,    2, 0x29 /* Protected | MethodCloned */,
      90,    8,  491,    2, 0x09 /* Protected */,
      90,    7,  508,    2, 0x29 /* Protected | MethodCloned */,
      93,    2,  523,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::ULongLong,    8,   10,   11,   12,   13,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Int, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::ULongLong,    8,   14,   10,   11,   12,   13,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Int,    2,    2,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Double,    2,    2,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::ULongLong,    2,    2,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::ULongLong,    2,    2,    2,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::ULongLong,    2,    2,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString,   23,   24,   25,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Double,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   28,   23,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   30,   31,   32,   33,   34,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 36, QMetaType::Int, QMetaType::Int,   30,   37,   38,   39,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   42,
    QMetaType::Void, QMetaType::Bool,   44,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   47,
    QMetaType::Void, QMetaType::Bool,   47,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float, 0x80000000 | 52,   11,   53,
    QMetaType::Void, QMetaType::QString, QMetaType::QColor, QMetaType::Float, QMetaType::Float, QMetaType::Float, 0x80000000 | 52,   55,   56,   57,   58,   59,   53,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,   61,   62,   63,   64,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Float, QMetaType::Float, 0x80000000 | 52,   55,   67,   68,   53,
    QMetaType::Void, QMetaType::QString, QMetaType::Float, QMetaType::Float, 0x80000000 | 52,   55,   67,   68,   53,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::QColor, 0x80000000 | 52,   71,   72,   73,   74,   31,   56,   53,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::QColor, 0x80000000 | 52,   58,   59,   76,   77,   78,   79,   80,   56,   53,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::QColor, 0x80000000 | 52,   58,   59,   82,   78,   79,   80,   56,   53,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, 0x80000000 | 52, QMetaType::Bool,   84,   85,   32,   86,   87,   88,   53,   89,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, 0x80000000 | 52,   84,   85,   32,   86,   87,   88,   53,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::QColor, 0x80000000 | 52, QMetaType::Bool,   84,   85,   82,   91,   88,   56,   53,   92,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::QColor, 0x80000000 | 52,   84,   85,   82,   91,   88,   56,   53,
    QMetaType::Void, QMetaType::QPolygonF, 0x80000000 | 52,   94,   53,

       0        // eod
};

void HUD::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HUD *_t = static_cast<HUD *>(_o);
        switch (_id) {
        case 0: _t->visibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->styleChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setActiveUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 3: _t->updateAttitude((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< quint64(*)>(_a[5]))); break;
        case 4: _t->updateAttitude((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< quint64(*)>(_a[6]))); break;
        case 5: _t->updateBattery((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 6: _t->receiveHeartbeat((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 7: _t->updateThrust((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 8: _t->updateLocalPosition((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< quint64(*)>(_a[5]))); break;
        case 9: _t->updateGlobalPosition((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< quint64(*)>(_a[6]))); break;
        case 10: _t->updateSpeed((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< quint64(*)>(_a[5]))); break;
        case 11: _t->updateState((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 12: _t->updateMode((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 13: _t->updateLoad((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 14: _t->selectWaypoint((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 15: _t->startImage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 16: _t->setPixels((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const unsigned char*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 17: _t->finishImage(); break;
        case 18: _t->saveImage(); break;
        case 19: _t->saveImage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 20: _t->saveImages((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->selectOfflineDirectory(); break;
        case 22: _t->enableHUDInstruments((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->enableVideo((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->copyImage((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 25: _t->paintRollPitchStrips(); break;
        case 26: _t->paintPitchLines((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< QPainter*(*)>(_a[2]))); break;
        case 27: _t->paintText((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QColor(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< QPainter*(*)>(_a[6]))); break;
        case 28: _t->setupGLView((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4]))); break;
        case 29: _t->paintHUD(); break;
        case 30: _t->paintPitchLinePos((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< QPainter*(*)>(_a[4]))); break;
        case 31: _t->paintPitchLineNeg((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< QPainter*(*)>(_a[4]))); break;
        case 32: _t->drawLine((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< const QColor(*)>(_a[6])),(*reinterpret_cast< QPainter*(*)>(_a[7]))); break;
        case 33: _t->drawEllipse((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7])),(*reinterpret_cast< const QColor(*)>(_a[8])),(*reinterpret_cast< QPainter*(*)>(_a[9]))); break;
        case 34: _t->drawCircle((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< const QColor(*)>(_a[7])),(*reinterpret_cast< QPainter*(*)>(_a[8]))); break;
        case 35: _t->drawChangeRateStrip((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< QPainter*(*)>(_a[7])),(*reinterpret_cast< bool(*)>(_a[8]))); break;
        case 36: _t->drawChangeRateStrip((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< QPainter*(*)>(_a[7]))); break;
        case 37: _t->drawChangeIndicatorGauge((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< const QColor(*)>(_a[6])),(*reinterpret_cast< QPainter*(*)>(_a[7])),(*reinterpret_cast< bool(*)>(_a[8]))); break;
        case 38: _t->drawChangeIndicatorGauge((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< const QColor(*)>(_a[6])),(*reinterpret_cast< QPainter*(*)>(_a[7]))); break;
        case 39: _t->drawPolygon((*reinterpret_cast< QPolygonF(*)>(_a[1])),(*reinterpret_cast< QPainter*(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
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
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 24:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (HUD::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HUD::visibilityChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject HUD::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_HUD.data,
      qt_meta_data_HUD,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *HUD::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HUD::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_HUD.stringdata))
        return static_cast<void*>(const_cast< HUD*>(this));
    return QLabel::qt_metacast(_clname);
}

int HUD::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
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
void HUD::visibilityChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
