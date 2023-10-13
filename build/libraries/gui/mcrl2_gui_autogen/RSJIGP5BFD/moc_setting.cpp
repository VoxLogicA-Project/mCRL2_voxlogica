/****************************************************************************
** Meta object code from reading C++ file 'setting.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../libraries/gui/include/mcrl2/gui/setting.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'setting.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mcrl2__gui__qt__SettingInt_t {
    QByteArrayData data[5];
    char stringdata0[51];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mcrl2__gui__qt__SettingInt_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mcrl2__gui__qt__SettingInt_t qt_meta_stringdata_mcrl2__gui__qt__SettingInt = {
    {
QT_MOC_LITERAL(0, 0, 26), // "mcrl2::gui::qt::SettingInt"
QT_MOC_LITERAL(1, 27, 7), // "changed"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 5), // "value"
QT_MOC_LITERAL(4, 42, 8) // "setValue"

    },
    "mcrl2::gui::qt::SettingInt\0changed\0\0"
    "value\0setValue"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mcrl2__gui__qt__SettingInt[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   27,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void mcrl2::gui::qt::SettingInt::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SettingInt *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SettingInt::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingInt::changed)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject mcrl2::gui::qt::SettingInt::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_mcrl2__gui__qt__SettingInt.data,
    qt_meta_data_mcrl2__gui__qt__SettingInt,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mcrl2::gui::qt::SettingInt::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mcrl2::gui::qt::SettingInt::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mcrl2__gui__qt__SettingInt.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int mcrl2::gui::qt::SettingInt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void mcrl2::gui::qt::SettingInt::changed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_mcrl2__gui__qt__SettingBool_t {
    QByteArrayData data[5];
    char stringdata0[52];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mcrl2__gui__qt__SettingBool_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mcrl2__gui__qt__SettingBool_t qt_meta_stringdata_mcrl2__gui__qt__SettingBool = {
    {
QT_MOC_LITERAL(0, 0, 27), // "mcrl2::gui::qt::SettingBool"
QT_MOC_LITERAL(1, 28, 7), // "changed"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 5), // "value"
QT_MOC_LITERAL(4, 43, 8) // "setValue"

    },
    "mcrl2::gui::qt::SettingBool\0changed\0"
    "\0value\0setValue"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mcrl2__gui__qt__SettingBool[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   27,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,

       0        // eod
};

void mcrl2::gui::qt::SettingBool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SettingBool *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->changed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SettingBool::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingBool::changed)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject mcrl2::gui::qt::SettingBool::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_mcrl2__gui__qt__SettingBool.data,
    qt_meta_data_mcrl2__gui__qt__SettingBool,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mcrl2::gui::qt::SettingBool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mcrl2::gui::qt::SettingBool::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mcrl2__gui__qt__SettingBool.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int mcrl2::gui::qt::SettingBool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void mcrl2::gui::qt::SettingBool::changed(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_mcrl2__gui__qt__SettingFloat_t {
    QByteArrayData data[5];
    char stringdata0[53];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mcrl2__gui__qt__SettingFloat_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mcrl2__gui__qt__SettingFloat_t qt_meta_stringdata_mcrl2__gui__qt__SettingFloat = {
    {
QT_MOC_LITERAL(0, 0, 28), // "mcrl2::gui::qt::SettingFloat"
QT_MOC_LITERAL(1, 29, 7), // "changed"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 5), // "value"
QT_MOC_LITERAL(4, 44, 8) // "setValue"

    },
    "mcrl2::gui::qt::SettingFloat\0changed\0"
    "\0value\0setValue"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mcrl2__gui__qt__SettingFloat[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   27,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Float,    3,

       0        // eod
};

void mcrl2::gui::qt::SettingFloat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SettingFloat *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 1: _t->setValue((*reinterpret_cast< float(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SettingFloat::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingFloat::changed)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject mcrl2::gui::qt::SettingFloat::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_mcrl2__gui__qt__SettingFloat.data,
    qt_meta_data_mcrl2__gui__qt__SettingFloat,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mcrl2::gui::qt::SettingFloat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mcrl2::gui::qt::SettingFloat::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mcrl2__gui__qt__SettingFloat.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int mcrl2::gui::qt::SettingFloat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void mcrl2::gui::qt::SettingFloat::changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_mcrl2__gui__qt__SettingColor_t {
    QByteArrayData data[5];
    char stringdata0[53];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mcrl2__gui__qt__SettingColor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mcrl2__gui__qt__SettingColor_t qt_meta_stringdata_mcrl2__gui__qt__SettingColor = {
    {
QT_MOC_LITERAL(0, 0, 28), // "mcrl2::gui::qt::SettingColor"
QT_MOC_LITERAL(1, 29, 7), // "changed"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 5), // "value"
QT_MOC_LITERAL(4, 44, 8) // "setValue"

    },
    "mcrl2::gui::qt::SettingColor\0changed\0"
    "\0value\0setValue"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mcrl2__gui__qt__SettingColor[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   27,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QColor,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QColor,    3,

       0        // eod
};

void mcrl2::gui::qt::SettingColor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SettingColor *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->changed((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 1: _t->setValue((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SettingColor::*)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingColor::changed)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject mcrl2::gui::qt::SettingColor::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_mcrl2__gui__qt__SettingColor.data,
    qt_meta_data_mcrl2__gui__qt__SettingColor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mcrl2::gui::qt::SettingColor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mcrl2::gui::qt::SettingColor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mcrl2__gui__qt__SettingColor.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int mcrl2::gui::qt::SettingColor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void mcrl2::gui::qt::SettingColor::changed(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_mcrl2__gui__qt__SettingEnum_t {
    QByteArrayData data[1];
    char stringdata0[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mcrl2__gui__qt__SettingEnum_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mcrl2__gui__qt__SettingEnum_t qt_meta_stringdata_mcrl2__gui__qt__SettingEnum = {
    {
QT_MOC_LITERAL(0, 0, 27) // "mcrl2::gui::qt::SettingEnum"

    },
    "mcrl2::gui::qt::SettingEnum"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mcrl2__gui__qt__SettingEnum[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void mcrl2::gui::qt::SettingEnum::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject mcrl2::gui::qt::SettingEnum::staticMetaObject = { {
    QMetaObject::SuperData::link<SettingInt::staticMetaObject>(),
    qt_meta_stringdata_mcrl2__gui__qt__SettingEnum.data,
    qt_meta_data_mcrl2__gui__qt__SettingEnum,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mcrl2::gui::qt::SettingEnum::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mcrl2::gui::qt::SettingEnum::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mcrl2__gui__qt__SettingEnum.stringdata0))
        return static_cast<void*>(this);
    return SettingInt::qt_metacast(_clname);
}

int mcrl2::gui::qt::SettingEnum::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SettingInt::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
