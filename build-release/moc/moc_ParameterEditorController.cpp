/****************************************************************************
** Meta object code from reading C++ file 'ParameterEditorController.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/QmlControls/ParameterEditorController.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ParameterEditorController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ParameterEditorController_t {
    QByteArrayData data[15];
    char stringdata[193];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ParameterEditorController_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ParameterEditorController_t qt_meta_stringdata_ParameterEditorController = {
    {
QT_MOC_LITERAL(0, 0, 25), // "ParameterEditorController"
QT_MOC_LITERAL(1, 26, 16), // "showErrorMessage"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 8), // "errorMsg"
QT_MOC_LITERAL(4, 53, 21), // "getGroupsForComponent"
QT_MOC_LITERAL(5, 75, 11), // "componentId"
QT_MOC_LITERAL(6, 87, 16), // "getFactsForGroup"
QT_MOC_LITERAL(7, 104, 5), // "group"
QT_MOC_LITERAL(8, 110, 14), // "clearRCToParam"
QT_MOC_LITERAL(9, 125, 10), // "saveToFile"
QT_MOC_LITERAL(10, 136, 12), // "loadFromFile"
QT_MOC_LITERAL(11, 149, 7), // "refresh"
QT_MOC_LITERAL(12, 157, 12), // "setRCToParam"
QT_MOC_LITERAL(13, 170, 9), // "paramName"
QT_MOC_LITERAL(14, 180, 12) // "componentIds"

    },
    "ParameterEditorController\0showErrorMessage\0"
    "\0errorMsg\0getGroupsForComponent\0"
    "componentId\0getFactsForGroup\0group\0"
    "clearRCToParam\0saveToFile\0loadFromFile\0"
    "refresh\0setRCToParam\0paramName\0"
    "componentIds"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ParameterEditorController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       1,   72, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       4,    1,   57,    2, 0x02 /* Public */,
       6,    2,   60,    2, 0x02 /* Public */,
       8,    0,   65,    2, 0x02 /* Public */,
       9,    0,   66,    2, 0x02 /* Public */,
      10,    0,   67,    2, 0x02 /* Public */,
      11,    0,   68,    2, 0x02 /* Public */,
      12,    1,   69,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // methods: parameters
    QMetaType::QStringList, QMetaType::Int,    5,
    QMetaType::QStringList, QMetaType::Int, QMetaType::QString,    5,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,

 // properties: name, type, flags
      14, QMetaType::QStringList, 0x00095401,

       0        // eod
};

void ParameterEditorController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ParameterEditorController *_t = static_cast<ParameterEditorController *>(_o);
        switch (_id) {
        case 0: _t->showErrorMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: { QStringList _r = _t->getGroupsForComponent((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 2: { QStringList _r = _t->getFactsForGroup((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 3: _t->clearRCToParam(); break;
        case 4: _t->saveToFile(); break;
        case 5: _t->loadFromFile(); break;
        case 6: _t->refresh(); break;
        case 7: _t->setRCToParam((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ParameterEditorController::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ParameterEditorController::showErrorMessage)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject ParameterEditorController::staticMetaObject = {
    { &FactPanelController::staticMetaObject, qt_meta_stringdata_ParameterEditorController.data,
      qt_meta_data_ParameterEditorController,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ParameterEditorController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ParameterEditorController::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ParameterEditorController.stringdata))
        return static_cast<void*>(const_cast< ParameterEditorController*>(this));
    return FactPanelController::qt_metacast(_clname);
}

int ParameterEditorController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FactPanelController::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QStringList*>(_v) = _componentIds; break;
        default: break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ParameterEditorController::showErrorMessage(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
