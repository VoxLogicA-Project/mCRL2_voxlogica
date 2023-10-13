/****************************************************************************
** Meta object code from reading C++ file 'settingsdock.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../tools/release/ltsview/settingsdock.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'settingsdock.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ComboboxHandler_t {
    QByteArrayData data[5];
    char stringdata0[45];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ComboboxHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ComboboxHandler_t qt_meta_stringdata_ComboboxHandler = {
    {
QT_MOC_LITERAL(0, 0, 15), // "ComboboxHandler"
QT_MOC_LITERAL(1, 16, 12), // "stateChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 5), // "state"
QT_MOC_LITERAL(4, 36, 8) // "setState"

    },
    "ComboboxHandler\0stateChanged\0\0state\0"
    "setState"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ComboboxHandler[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x09 /* Protected */,
       4,    0,   27,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,

       0        // eod
};

void ComboboxHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ComboboxHandler *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setState(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ComboboxHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ComboboxHandler.data,
    qt_meta_data_ComboboxHandler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ComboboxHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ComboboxHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ComboboxHandler.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ComboboxHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_SettingsDock_t {
    QByteArrayData data[9];
    char stringdata0[116];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SettingsDock_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SettingsDock_t qt_meta_stringdata_SettingsDock = {
    {
QT_MOC_LITERAL(0, 0, 12), // "SettingsDock"
QT_MOC_LITERAL(1, 13, 16), // "stateSizeChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 5), // "value"
QT_MOC_LITERAL(4, 37, 12), // "setStateSize"
QT_MOC_LITERAL(5, 50, 20), // "clusterHeightChanged"
QT_MOC_LITERAL(6, 71, 16), // "setClusterHeight"
QT_MOC_LITERAL(7, 88, 15), // "accuracyChanged"
QT_MOC_LITERAL(8, 104, 11) // "setAccuracy"

    },
    "SettingsDock\0stateSizeChanged\0\0value\0"
    "setStateSize\0clusterHeightChanged\0"
    "setClusterHeight\0accuracyChanged\0"
    "setAccuracy"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SettingsDock[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x08 /* Private */,
       4,    1,   47,    2, 0x08 /* Private */,
       5,    1,   50,    2, 0x08 /* Private */,
       6,    1,   53,    2, 0x08 /* Private */,
       7,    1,   56,    2, 0x08 /* Private */,
       8,    1,   59,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void SettingsDock::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SettingsDock *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->stateSizeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setStateSize((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->clusterHeightChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setClusterHeight((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->accuracyChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setAccuracy((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SettingsDock::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_SettingsDock.data,
    qt_meta_data_SettingsDock,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SettingsDock::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SettingsDock::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SettingsDock.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SettingsDock::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
