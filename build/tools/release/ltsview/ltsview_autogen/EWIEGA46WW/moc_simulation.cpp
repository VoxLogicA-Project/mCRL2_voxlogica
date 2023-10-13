/****************************************************************************
** Meta object code from reading C++ file 'simulation.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../tools/release/ltsview/simulation.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'simulation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Simulation_t {
    QByteArrayData data[19];
    char stringdata0[191];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Simulation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Simulation_t qt_meta_stringdata_Simulation = {
    {
QT_MOC_LITERAL(0, 0, 10), // "Simulation"
QT_MOC_LITERAL(1, 11, 7), // "started"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 7), // "stopped"
QT_MOC_LITERAL(4, 28, 7), // "changed"
QT_MOC_LITERAL(5, 36, 16), // "selectionChanged"
QT_MOC_LITERAL(6, 53, 5), // "start"
QT_MOC_LITERAL(7, 59, 4), // "stop"
QT_MOC_LITERAL(8, 64, 15), // "setInitialState"
QT_MOC_LITERAL(9, 80, 6), // "State*"
QT_MOC_LITERAL(10, 87, 12), // "initialState"
QT_MOC_LITERAL(11, 100, 16), // "selectTransition"
QT_MOC_LITERAL(12, 117, 11), // "Transition*"
QT_MOC_LITERAL(13, 129, 10), // "transition"
QT_MOC_LITERAL(14, 140, 16), // "followTransition"
QT_MOC_LITERAL(15, 157, 4), // "undo"
QT_MOC_LITERAL(16, 162, 9), // "traceback"
QT_MOC_LITERAL(17, 172, 9), // "loadTrace"
QT_MOC_LITERAL(18, 182, 8) // "filename"

    },
    "Simulation\0started\0\0stopped\0changed\0"
    "selectionChanged\0start\0stop\0setInitialState\0"
    "State*\0initialState\0selectTransition\0"
    "Transition*\0transition\0followTransition\0"
    "undo\0traceback\0loadTrace\0filename"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Simulation[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    0,   75,    2, 0x06 /* Public */,
       4,    0,   76,    2, 0x06 /* Public */,
       5,    0,   77,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   78,    2, 0x0a /* Public */,
       7,    0,   79,    2, 0x0a /* Public */,
       8,    1,   80,    2, 0x0a /* Public */,
      11,    1,   83,    2, 0x0a /* Public */,
      14,    1,   86,    2, 0x0a /* Public */,
      15,    0,   89,    2, 0x0a /* Public */,
      16,    0,   90,    2, 0x0a /* Public */,
      17,    1,   91,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString,   18,

       0        // eod
};

void Simulation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Simulation *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->started(); break;
        case 1: _t->stopped(); break;
        case 2: _t->changed(); break;
        case 3: _t->selectionChanged(); break;
        case 4: _t->start(); break;
        case 5: _t->stop(); break;
        case 6: _t->setInitialState((*reinterpret_cast< State*(*)>(_a[1]))); break;
        case 7: _t->selectTransition((*reinterpret_cast< Transition*(*)>(_a[1]))); break;
        case 8: _t->followTransition((*reinterpret_cast< Transition*(*)>(_a[1]))); break;
        case 9: _t->undo(); break;
        case 10: _t->traceback(); break;
        case 11: { bool _r = _t->loadTrace((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Simulation::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Simulation::started)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Simulation::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Simulation::stopped)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Simulation::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Simulation::changed)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Simulation::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Simulation::selectionChanged)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Simulation::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Simulation.data,
    qt_meta_data_Simulation,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Simulation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Simulation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Simulation.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Simulation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void Simulation::started()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Simulation::stopped()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Simulation::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Simulation::selectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
