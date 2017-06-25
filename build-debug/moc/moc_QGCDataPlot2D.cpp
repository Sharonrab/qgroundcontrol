/****************************************************************************
** Meta object code from reading C++ file 'QGCDataPlot2D.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/QGCDataPlot2D.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCDataPlot2D.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QGCDataPlot2D_t {
    QByteArrayData data[19];
    char stringdata[196];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCDataPlot2D_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCDataPlot2D_t qt_meta_stringdata_QGCDataPlot2D = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QGCDataPlot2D"
QT_MOC_LITERAL(1, 14, 17), // "visibilityChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 7), // "visible"
QT_MOC_LITERAL(4, 41, 8), // "loadFile"
QT_MOC_LITERAL(5, 50, 4), // "file"
QT_MOC_LITERAL(6, 55, 10), // "reloadFile"
QT_MOC_LITERAL(7, 66, 10), // "selectFile"
QT_MOC_LITERAL(8, 77, 10), // "loadCsvLog"
QT_MOC_LITERAL(9, 88, 9), // "xAxisName"
QT_MOC_LITERAL(10, 98, 11), // "yAxisFilter"
QT_MOC_LITERAL(11, 110, 10), // "loadRawLog"
QT_MOC_LITERAL(12, 121, 10), // "saveCsvLog"
QT_MOC_LITERAL(13, 132, 8), // "savePlot"
QT_MOC_LITERAL(14, 141, 9), // "exportPDF"
QT_MOC_LITERAL(15, 151, 8), // "fileName"
QT_MOC_LITERAL(16, 160, 9), // "exportSVG"
QT_MOC_LITERAL(17, 170, 5), // "print"
QT_MOC_LITERAL(18, 176, 19) // "calculateRegression"

    },
    "QGCDataPlot2D\0visibilityChanged\0\0"
    "visible\0loadFile\0file\0reloadFile\0"
    "selectFile\0loadCsvLog\0xAxisName\0"
    "yAxisFilter\0loadRawLog\0saveCsvLog\0"
    "savePlot\0exportPDF\0fileName\0exportSVG\0"
    "print\0calculateRegression"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCDataPlot2D[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,  102,    2, 0x0a /* Public */,
       4,    1,  103,    2, 0x0a /* Public */,
       6,    0,  106,    2, 0x0a /* Public */,
       7,    0,  107,    2, 0x0a /* Public */,
       8,    3,  108,    2, 0x0a /* Public */,
       8,    2,  115,    2, 0x2a /* Public | MethodCloned */,
       8,    1,  120,    2, 0x2a /* Public | MethodCloned */,
      11,    3,  123,    2, 0x0a /* Public */,
      11,    2,  130,    2, 0x2a /* Public | MethodCloned */,
      11,    1,  135,    2, 0x2a /* Public | MethodCloned */,
      12,    0,  138,    2, 0x0a /* Public */,
      13,    0,  139,    2, 0x0a /* Public */,
      14,    1,  140,    2, 0x0a /* Public */,
      16,    1,  143,    2, 0x0a /* Public */,
      17,    0,  146,    2, 0x0a /* Public */,
      18,    0,  147,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    5,    9,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,    9,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    5,    9,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,    9,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Bool,

       0        // eod
};

void QGCDataPlot2D::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGCDataPlot2D *_t = static_cast<QGCDataPlot2D *>(_o);
        switch (_id) {
        case 0: _t->visibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->loadFile(); break;
        case 2: _t->loadFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->reloadFile(); break;
        case 4: _t->selectFile(); break;
        case 5: _t->loadCsvLog((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 6: _t->loadCsvLog((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 7: _t->loadCsvLog((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->loadRawLog((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 9: _t->loadRawLog((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 10: _t->loadRawLog((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->saveCsvLog(); break;
        case 12: _t->savePlot(); break;
        case 13: _t->exportPDF((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 14: _t->exportSVG((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 15: _t->print(); break;
        case 16: { bool _r = _t->calculateRegression();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QGCDataPlot2D::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGCDataPlot2D::visibilityChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject QGCDataPlot2D::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QGCDataPlot2D.data,
      qt_meta_data_QGCDataPlot2D,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QGCDataPlot2D::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCDataPlot2D::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QGCDataPlot2D.stringdata))
        return static_cast<void*>(const_cast< QGCDataPlot2D*>(this));
    return QWidget::qt_metacast(_clname);
}

int QGCDataPlot2D::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void QGCDataPlot2D::visibilityChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
