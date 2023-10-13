/****************************************************************************
** Meta object code from reading C++ file 'solver.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../tools/release/mcrl2xi/solver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'solver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Solver_t {
    QByteArrayData data[12];
    char stringdata0[103];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Solver_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Solver_t qt_meta_stringdata_Solver = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Solver"
QT_MOC_LITERAL(1, 7, 10), // "solvedPart"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 6), // "output"
QT_MOC_LITERAL(4, 26, 8), // "finished"
QT_MOC_LITERAL(5, 35, 10), // "parseError"
QT_MOC_LITERAL(6, 46, 5), // "error"
QT_MOC_LITERAL(7, 52, 9), // "exprError"
QT_MOC_LITERAL(8, 62, 5), // "solve"
QT_MOC_LITERAL(9, 68, 13), // "specification"
QT_MOC_LITERAL(10, 82, 14), // "dataExpression"
QT_MOC_LITERAL(11, 97, 5) // "abort"

    },
    "Solver\0solvedPart\0\0output\0finished\0"
    "parseError\0error\0exprError\0solve\0"
    "specification\0dataExpression\0abort"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Solver[] = {

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
       1,    1,   44,    2, 0x06 /* Public */,
       4,    0,   47,    2, 0x06 /* Public */,
       5,    1,   48,    2, 0x06 /* Public */,
       7,    1,   51,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    2,   54,    2, 0x0a /* Public */,
      11,    0,   59,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    9,   10,
    QMetaType::Void,

       0        // eod
};

void Solver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Solver *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->solvedPart((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->finished(); break;
        case 2: _t->parseError((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->exprError((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->solve((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 5: _t->abort(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Solver::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Solver::solvedPart)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Solver::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Solver::finished)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Solver::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Solver::parseError)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Solver::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Solver::exprError)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Solver::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Solver.data,
    qt_meta_data_Solver,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Solver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Solver::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Solver.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Solver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void Solver::solvedPart(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Solver::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Solver::parseError(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Solver::exprError(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
