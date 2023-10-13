/****************************************************************************
** Meta object code from reading C++ file 'simulator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../tools/release/diagraphica/simulator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'simulator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Simulator_t {
    QByteArrayData data[12];
    char stringdata0[126];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Simulator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Simulator_t qt_meta_stringdata_Simulator = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Simulator"
QT_MOC_LITERAL(1, 10, 14), // "routingCluster"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 8), // "Cluster*"
QT_MOC_LITERAL(4, 35, 7), // "cluster"
QT_MOC_LITERAL(5, 43, 15), // "QList<Cluster*>"
QT_MOC_LITERAL(6, 59, 10), // "clusterSet"
QT_MOC_LITERAL(7, 70, 17), // "QList<Attribute*>"
QT_MOC_LITERAL(8, 88, 10), // "attributes"
QT_MOC_LITERAL(9, 99, 12), // "hoverCluster"
QT_MOC_LITERAL(10, 112, 7), // "onTimer"
QT_MOC_LITERAL(11, 120, 5) // "reset"

    },
    "Simulator\0routingCluster\0\0Cluster*\0"
    "cluster\0QList<Cluster*>\0clusterSet\0"
    "QList<Attribute*>\0attributes\0hoverCluster\0"
    "onTimer\0reset"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Simulator[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   39,    2, 0x06 /* Public */,
       9,    2,   46,    2, 0x06 /* Public */,
       9,    1,   51,    2, 0x26 /* Public | MethodCloned */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   54,    2, 0x0a /* Public */,
      11,    0,   55,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, 0x80000000 | 7,    4,    6,    8,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 7,    4,    8,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Simulator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Simulator *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->routingCluster((*reinterpret_cast< Cluster*(*)>(_a[1])),(*reinterpret_cast< QList<Cluster*>(*)>(_a[2])),(*reinterpret_cast< QList<Attribute*>(*)>(_a[3]))); break;
        case 1: _t->hoverCluster((*reinterpret_cast< Cluster*(*)>(_a[1])),(*reinterpret_cast< QList<Attribute*>(*)>(_a[2]))); break;
        case 2: _t->hoverCluster((*reinterpret_cast< Cluster*(*)>(_a[1]))); break;
        case 3: _t->onTimer(); break;
        case 4: _t->reset(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Attribute*> >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Attribute*> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Simulator::*)(Cluster * , QList<Cluster*> , QList<Attribute*> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Simulator::routingCluster)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Simulator::*)(Cluster * , QList<Attribute*> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Simulator::hoverCluster)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Simulator::staticMetaObject = { {
    QMetaObject::SuperData::link<Visualizer::staticMetaObject>(),
    qt_meta_stringdata_Simulator.data,
    qt_meta_data_Simulator,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Simulator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Simulator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Simulator.stringdata0))
        return static_cast<void*>(this);
    return Visualizer::qt_metacast(_clname);
}

int Simulator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Visualizer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Simulator::routingCluster(Cluster * _t1, QList<Cluster*> _t2, QList<Attribute*> _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Simulator::hoverCluster(Cluster * _t1, QList<Attribute*> _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
