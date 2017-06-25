/****************************************************************************
** Meta object code from reading C++ file 'CameraView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/CameraView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CameraView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CameraView_t {
    QByteArrayData data[19];
    char stringdata[172];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CameraView_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CameraView_t qt_meta_stringdata_CameraView = {
    {
QT_MOC_LITERAL(0, 0, 10), // "CameraView"
QT_MOC_LITERAL(1, 11, 6), // "addUAS"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 13), // "UASInterface*"
QT_MOC_LITERAL(4, 33, 3), // "uas"
QT_MOC_LITERAL(5, 37, 10), // "startImage"
QT_MOC_LITERAL(6, 48, 5), // "imgid"
QT_MOC_LITERAL(7, 54, 5), // "width"
QT_MOC_LITERAL(8, 60, 6), // "height"
QT_MOC_LITERAL(9, 67, 5), // "depth"
QT_MOC_LITERAL(10, 73, 8), // "channels"
QT_MOC_LITERAL(11, 82, 9), // "setPixels"
QT_MOC_LITERAL(12, 92, 20), // "const unsigned char*"
QT_MOC_LITERAL(13, 113, 9), // "imageData"
QT_MOC_LITERAL(14, 123, 6), // "length"
QT_MOC_LITERAL(15, 130, 10), // "startIndex"
QT_MOC_LITERAL(16, 141, 11), // "finishImage"
QT_MOC_LITERAL(17, 153, 9), // "saveImage"
QT_MOC_LITERAL(18, 163, 8) // "fileName"

    },
    "CameraView\0addUAS\0\0UASInterface*\0uas\0"
    "startImage\0imgid\0width\0height\0depth\0"
    "channels\0setPixels\0const unsigned char*\0"
    "imageData\0length\0startIndex\0finishImage\0"
    "saveImage\0fileName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CameraView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x0a /* Public */,
       5,    5,   47,    2, 0x0a /* Public */,
      11,    4,   58,    2, 0x0a /* Public */,
      16,    0,   67,    2, 0x0a /* Public */,
      17,    0,   68,    2, 0x0a /* Public */,
      17,    1,   69,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    6,    7,    8,    9,   10,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 12, QMetaType::Int, QMetaType::UInt,    6,   13,   14,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   18,

       0        // eod
};

void CameraView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CameraView *_t = static_cast<CameraView *>(_o);
        switch (_id) {
        case 0: _t->addUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 1: _t->startImage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 2: _t->setPixels((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const unsigned char*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< uint(*)>(_a[4]))); break;
        case 3: _t->finishImage(); break;
        case 4: _t->saveImage(); break;
        case 5: _t->saveImage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        }
    }
}

const QMetaObject CameraView::staticMetaObject = {
    { &QGLWidget::staticMetaObject, qt_meta_stringdata_CameraView.data,
      qt_meta_data_CameraView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CameraView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CameraView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CameraView.stringdata))
        return static_cast<void*>(const_cast< CameraView*>(this));
    return QGLWidget::qt_metacast(_clname);
}

int CameraView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
