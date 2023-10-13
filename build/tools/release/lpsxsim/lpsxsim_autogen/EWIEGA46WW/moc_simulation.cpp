/****************************************************************************
** Meta object code from reading C++ file 'simulation.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../tools/release/lpsxsim/simulation.h"
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
    QByteArrayData data[20];
    char stringdata0[217];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Simulation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Simulation_t qt_meta_stringdata_Simulation = {
    {
QT_MOC_LITERAL(0, 0, 10), // "Simulation"
QT_MOC_LITERAL(1, 11, 18), // "initialisationDone"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 8), // "finished"
QT_MOC_LITERAL(4, 40, 4), // "init"
QT_MOC_LITERAL(5, 45, 8), // "filename"
QT_MOC_LITERAL(6, 54, 18), // "do_not_use_dummies"
QT_MOC_LITERAL(7, 73, 11), // "updateTrace"
QT_MOC_LITERAL(8, 85, 17), // "firstChangedState"
QT_MOC_LITERAL(9, 103, 5), // "reset"
QT_MOC_LITERAL(10, 109, 11), // "stateNumber"
QT_MOC_LITERAL(11, 121, 6), // "select"
QT_MOC_LITERAL(12, 128, 16), // "transitionNumber"
QT_MOC_LITERAL(13, 145, 11), // "QSemaphore*"
QT_MOC_LITERAL(14, 157, 9), // "semaphore"
QT_MOC_LITERAL(15, 167, 25), // "enable_tau_prioritization"
QT_MOC_LITERAL(16, 193, 6), // "enable"
QT_MOC_LITERAL(17, 200, 6), // "action"
QT_MOC_LITERAL(18, 207, 4), // "load"
QT_MOC_LITERAL(19, 212, 4) // "save"

    },
    "Simulation\0initialisationDone\0\0finished\0"
    "init\0filename\0do_not_use_dummies\0"
    "updateTrace\0firstChangedState\0reset\0"
    "stateNumber\0select\0transitionNumber\0"
    "QSemaphore*\0semaphore\0enable_tau_prioritization\0"
    "enable\0action\0load\0save"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Simulation[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    2,   66,    2, 0x08 /* Private */,
       7,    1,   71,    2, 0x08 /* Private */,
       9,    1,   74,    2, 0x0a /* Public */,
      11,    2,   77,    2, 0x0a /* Public */,
      15,    3,   82,    2, 0x0a /* Public */,
      15,    2,   89,    2, 0x2a /* Public | MethodCloned */,
      18,    1,   94,    2, 0x0a /* Public */,
      19,    1,   97,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    5,    6,
    QMetaType::Void, QMetaType::UInt,    8,
    QMetaType::Void, QMetaType::UInt,   10,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 13,   12,   14,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 13, QMetaType::QString,   16,   14,   17,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 13,   16,   14,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,

       0        // eod
};

void Simulation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Simulation *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->initialisationDone(); break;
        case 1: _t->finished(); break;
        case 2: _t->init((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->updateTrace((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 4: _t->reset((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 5: _t->select((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< QSemaphore*(*)>(_a[2]))); break;
        case 6: _t->enable_tau_prioritization((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QSemaphore*(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 7: _t->enable_tau_prioritization((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QSemaphore*(*)>(_a[2]))); break;
        case 8: _t->load((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->save((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Simulation::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Simulation::initialisationDone)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Simulation::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Simulation::finished)) {
                *result = 1;
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
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void Simulation::initialisationDone()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Simulation::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
