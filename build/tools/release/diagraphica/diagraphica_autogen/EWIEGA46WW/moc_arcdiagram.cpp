/****************************************************************************
** Meta object code from reading C++ file 'arcdiagram.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../tools/release/diagraphica/arcdiagram.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'arcdiagram.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ArcDiagram_t {
    QByteArrayData data[13];
    char stringdata0[152];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ArcDiagram_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ArcDiagram_t qt_meta_stringdata_ArcDiagram = {
    {
QT_MOC_LITERAL(0, 0, 10), // "ArcDiagram"
QT_MOC_LITERAL(1, 11, 14), // "routingCluster"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 8), // "Cluster*"
QT_MOC_LITERAL(4, 36, 7), // "cluster"
QT_MOC_LITERAL(5, 44, 15), // "QList<Cluster*>"
QT_MOC_LITERAL(6, 60, 10), // "clusterSet"
QT_MOC_LITERAL(7, 71, 17), // "QList<Attribute*>"
QT_MOC_LITERAL(8, 89, 10), // "attributes"
QT_MOC_LITERAL(9, 100, 12), // "hoverCluster"
QT_MOC_LITERAL(10, 113, 14), // "clickedCluster"
QT_MOC_LITERAL(11, 128, 7), // "animate"
QT_MOC_LITERAL(12, 136, 15) // "clustersChanged"

    },
    "ArcDiagram\0routingCluster\0\0Cluster*\0"
    "cluster\0QList<Cluster*>\0clusterSet\0"
    "QList<Attribute*>\0attributes\0hoverCluster\0"
    "clickedCluster\0animate\0clustersChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ArcDiagram[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   44,    2, 0x06 /* Public */,
       9,    2,   51,    2, 0x06 /* Public */,
       9,    1,   56,    2, 0x26 /* Public | MethodCloned */,
      10,    1,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   62,    2, 0x09 /* Protected */,
      12,    0,   63,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, 0x80000000 | 7,    4,    6,    8,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 7,    4,    8,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ArcDiagram::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ArcDiagram *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->routingCluster((*reinterpret_cast< Cluster*(*)>(_a[1])),(*reinterpret_cast< QList<Cluster*>(*)>(_a[2])),(*reinterpret_cast< QList<Attribute*>(*)>(_a[3]))); break;
        case 1: _t->hoverCluster((*reinterpret_cast< Cluster*(*)>(_a[1])),(*reinterpret_cast< QList<Attribute*>(*)>(_a[2]))); break;
        case 2: _t->hoverCluster((*reinterpret_cast< Cluster*(*)>(_a[1]))); break;
        case 3: _t->clickedCluster((*reinterpret_cast< Cluster*(*)>(_a[1]))); break;
        case 4: _t->animate(); break;
        case 5: _t->clustersChanged(); break;
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
            using _t = void (ArcDiagram::*)(Cluster * , QList<Cluster*> , QList<Attribute*> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ArcDiagram::routingCluster)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ArcDiagram::*)(Cluster * , QList<Attribute*> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ArcDiagram::hoverCluster)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ArcDiagram::*)(Cluster * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ArcDiagram::clickedCluster)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ArcDiagram::staticMetaObject = { {
    QMetaObject::SuperData::link<Visualizer::staticMetaObject>(),
    qt_meta_stringdata_ArcDiagram.data,
    qt_meta_data_ArcDiagram,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ArcDiagram::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ArcDiagram::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ArcDiagram.stringdata0))
        return static_cast<void*>(this);
    return Visualizer::qt_metacast(_clname);
}

int ArcDiagram::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Visualizer::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void ArcDiagram::routingCluster(Cluster * _t1, QList<Cluster*> _t2, QList<Attribute*> _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ArcDiagram::hoverCluster(Cluster * _t1, QList<Attribute*> _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 3
void ArcDiagram::clickedCluster(Cluster * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
