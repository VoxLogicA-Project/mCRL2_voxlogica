/****************************************************************************
** Meta object code from reading C++ file 'simdock.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../tools/release/ltsview/simdock.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'simdock.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SimDock_t {
    QByteArrayData data[11];
    char stringdata0[81];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SimDock_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SimDock_t qt_meta_stringdata_SimDock = {
    {
QT_MOC_LITERAL(0, 0, 7), // "SimDock"
QT_MOC_LITERAL(1, 8, 7), // "changed"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 16), // "selectionChanged"
QT_MOC_LITERAL(4, 34, 5), // "start"
QT_MOC_LITERAL(5, 40, 4), // "stop"
QT_MOC_LITERAL(6, 45, 9), // "backtrace"
QT_MOC_LITERAL(7, 55, 5), // "reset"
QT_MOC_LITERAL(8, 61, 7), // "trigger"
QT_MOC_LITERAL(9, 69, 4), // "undo"
QT_MOC_LITERAL(10, 74, 6) // "select"

    },
    "SimDock\0changed\0\0selectionChanged\0"
    "start\0stop\0backtrace\0reset\0trigger\0"
    "undo\0select"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SimDock[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x0a /* Public */,
       3,    0,   60,    2, 0x0a /* Public */,
       4,    0,   61,    2, 0x09 /* Protected */,
       5,    0,   62,    2, 0x09 /* Protected */,
       6,    0,   63,    2, 0x09 /* Protected */,
       7,    0,   64,    2, 0x09 /* Protected */,
       8,    0,   65,    2, 0x09 /* Protected */,
       9,    0,   66,    2, 0x09 /* Protected */,
      10,    0,   67,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SimDock::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SimDock *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->changed(); break;
        case 1: _t->selectionChanged(); break;
        case 2: _t->start(); break;
        case 3: _t->stop(); break;
        case 4: _t->backtrace(); break;
        case 5: _t->reset(); break;
        case 6: _t->trigger(); break;
        case 7: _t->undo(); break;
        case 8: _t->select(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject SimDock::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_SimDock.data,
    qt_meta_data_SimDock,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SimDock::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SimDock::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SimDock.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SimDock::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
