/****************************************************************************
** Meta object code from reading C++ file 'examiner.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../tools/release/diagraphica/examiner.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'examiner.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Examiner_t {
    QByteArrayData data[12];
    char stringdata0[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Examiner_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Examiner_t qt_meta_stringdata_Examiner = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Examiner"
QT_MOC_LITERAL(1, 9, 14), // "routingCluster"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 8), // "Cluster*"
QT_MOC_LITERAL(4, 34, 7), // "cluster"
QT_MOC_LITERAL(5, 42, 15), // "QList<Cluster*>"
QT_MOC_LITERAL(6, 58, 10), // "clusterSet"
QT_MOC_LITERAL(7, 69, 17), // "QList<Attribute*>"
QT_MOC_LITERAL(8, 87, 10), // "attributes"
QT_MOC_LITERAL(9, 98, 16), // "selectionChanged"
QT_MOC_LITERAL(10, 115, 9), // "clearData"
QT_MOC_LITERAL(11, 125, 15) // "clrFrameHistCur"

    },
    "Examiner\0routingCluster\0\0Cluster*\0"
    "cluster\0QList<Cluster*>\0clusterSet\0"
    "QList<Attribute*>\0attributes\0"
    "selectionChanged\0clearData\0clrFrameHistCur"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Examiner[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   34,    2, 0x06 /* Public */,
       9,    0,   41,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   42,    2, 0x09 /* Protected */,
      11,    0,   43,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, 0x80000000 | 7,    4,    6,    8,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Examiner::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Examiner *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->routingCluster((*reinterpret_cast< Cluster*(*)>(_a[1])),(*reinterpret_cast< QList<Cluster*>(*)>(_a[2])),(*reinterpret_cast< QList<Attribute*>(*)>(_a[3]))); break;
        case 1: _t->selectionChanged(); break;
        case 2: _t->clearData(); break;
        case 3: _t->clrFrameHistCur(); break;
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
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Examiner::*)(Cluster * , QList<Cluster*> , QList<Attribute*> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Examiner::routingCluster)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Examiner::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Examiner::selectionChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Examiner::staticMetaObject = { {
    QMetaObject::SuperData::link<Visualizer::staticMetaObject>(),
    qt_meta_stringdata_Examiner.data,
    qt_meta_data_Examiner,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Examiner::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Examiner::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Examiner.stringdata0))
        return static_cast<void*>(this);
    return Visualizer::qt_metacast(_clname);
}

int Examiner::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Visualizer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Examiner::routingCluster(Cluster * _t1, QList<Cluster*> _t2, QList<Attribute*> _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Examiner::selectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
