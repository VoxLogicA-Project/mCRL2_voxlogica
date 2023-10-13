/****************************************************************************
** Meta object code from reading C++ file 'markmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../tools/release/ltsview/markmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'markmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MarkManager_t {
    QByteArrayData data[37];
    char stringdata0[461];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MarkManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MarkManager_t qt_meta_stringdata_MarkManager = {
    {
QT_MOC_LITERAL(0, 0, 11), // "MarkManager"
QT_MOC_LITERAL(1, 12, 10), // "ltsChanged"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 16), // "markStyleChanged"
QT_MOC_LITERAL(4, 41, 9), // "MarkStyle"
QT_MOC_LITERAL(5, 51, 5), // "style"
QT_MOC_LITERAL(6, 57, 24), // "clusterMatchStyleChanged"
QT_MOC_LITERAL(7, 82, 10), // "MatchStyle"
QT_MOC_LITERAL(8, 93, 22), // "stateMatchStyleChanged"
QT_MOC_LITERAL(9, 116, 13), // "markRuleAdded"
QT_MOC_LITERAL(10, 130, 13), // "MarkRuleIndex"
QT_MOC_LITERAL(11, 144, 5), // "index"
QT_MOC_LITERAL(12, 150, 15), // "markRuleChanged"
QT_MOC_LITERAL(13, 166, 15), // "markRuleRemoved"
QT_MOC_LITERAL(14, 182, 12), // "actionMarked"
QT_MOC_LITERAL(15, 195, 6), // "action"
QT_MOC_LITERAL(16, 202, 6), // "marked"
QT_MOC_LITERAL(17, 209, 17), // "statisticsChanged"
QT_MOC_LITERAL(18, 227, 12), // "marksChanged"
QT_MOC_LITERAL(19, 240, 6), // "setLts"
QT_MOC_LITERAL(20, 247, 4), // "LTS*"
QT_MOC_LITERAL(21, 252, 3), // "lts"
QT_MOC_LITERAL(22, 256, 13), // "setRelatedLts"
QT_MOC_LITERAL(23, 270, 12), // "setMarkStyle"
QT_MOC_LITERAL(24, 283, 20), // "setClusterMatchStyle"
QT_MOC_LITERAL(25, 304, 18), // "setStateMatchStyle"
QT_MOC_LITERAL(26, 323, 11), // "addMarkRule"
QT_MOC_LITERAL(27, 335, 8), // "MarkRule"
QT_MOC_LITERAL(28, 344, 4), // "rule"
QT_MOC_LITERAL(29, 349, 11), // "setMarkRule"
QT_MOC_LITERAL(30, 361, 14), // "removeMarkRule"
QT_MOC_LITERAL(31, 376, 15), // "setActionMarked"
QT_MOC_LITERAL(32, 392, 13), // "flushClusters"
QT_MOC_LITERAL(33, 406, 23), // "flushMarkedStateNumbers"
QT_MOC_LITERAL(34, 430, 8), // "cleanLts"
QT_MOC_LITERAL(35, 439, 9), // "applyRule"
QT_MOC_LITERAL(36, 449, 11) // "unapplyRule"

    },
    "MarkManager\0ltsChanged\0\0markStyleChanged\0"
    "MarkStyle\0style\0clusterMatchStyleChanged\0"
    "MatchStyle\0stateMatchStyleChanged\0"
    "markRuleAdded\0MarkRuleIndex\0index\0"
    "markRuleChanged\0markRuleRemoved\0"
    "actionMarked\0action\0marked\0statisticsChanged\0"
    "marksChanged\0setLts\0LTS*\0lts\0setRelatedLts\0"
    "setMarkStyle\0setClusterMatchStyle\0"
    "setStateMatchStyle\0addMarkRule\0MarkRule\0"
    "rule\0setMarkRule\0removeMarkRule\0"
    "setActionMarked\0flushClusters\0"
    "flushMarkedStateNumbers\0cleanLts\0"
    "applyRule\0unapplyRule"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MarkManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  134,    2, 0x06 /* Public */,
       3,    1,  135,    2, 0x06 /* Public */,
       6,    1,  138,    2, 0x06 /* Public */,
       8,    1,  141,    2, 0x06 /* Public */,
       9,    1,  144,    2, 0x06 /* Public */,
      12,    1,  147,    2, 0x06 /* Public */,
      13,    1,  150,    2, 0x06 /* Public */,
      14,    2,  153,    2, 0x06 /* Public */,
      17,    0,  158,    2, 0x06 /* Public */,
      18,    0,  159,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      19,    1,  160,    2, 0x0a /* Public */,
      22,    1,  163,    2, 0x0a /* Public */,
      23,    1,  166,    2, 0x0a /* Public */,
      24,    1,  169,    2, 0x0a /* Public */,
      25,    1,  172,    2, 0x0a /* Public */,
      26,    1,  175,    2, 0x0a /* Public */,
      29,    2,  178,    2, 0x0a /* Public */,
      30,    1,  183,    2, 0x0a /* Public */,
      31,    2,  186,    2, 0x0a /* Public */,
      32,    0,  191,    2, 0x0a /* Public */,
      33,    0,  192,    2, 0x09 /* Protected */,
      34,    0,  193,    2, 0x09 /* Protected */,
      35,    1,  194,    2, 0x09 /* Protected */,
      36,    1,  197,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 7,    5,
    QMetaType::Void, 0x80000000 | 7,    5,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   15,   16,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 7,    5,
    QMetaType::Void, 0x80000000 | 7,    5,
    0x80000000 | 10, 0x80000000 | 27,   28,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 27,   11,   28,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   15,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 10,   11,

       0        // eod
};

void MarkManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MarkManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->ltsChanged(); break;
        case 1: _t->markStyleChanged((*reinterpret_cast< MarkStyle(*)>(_a[1]))); break;
        case 2: _t->clusterMatchStyleChanged((*reinterpret_cast< MatchStyle(*)>(_a[1]))); break;
        case 3: _t->stateMatchStyleChanged((*reinterpret_cast< MatchStyle(*)>(_a[1]))); break;
        case 4: _t->markRuleAdded((*reinterpret_cast< MarkRuleIndex(*)>(_a[1]))); break;
        case 5: _t->markRuleChanged((*reinterpret_cast< MarkRuleIndex(*)>(_a[1]))); break;
        case 6: _t->markRuleRemoved((*reinterpret_cast< MarkRuleIndex(*)>(_a[1]))); break;
        case 7: _t->actionMarked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 8: _t->statisticsChanged(); break;
        case 9: _t->marksChanged(); break;
        case 10: _t->setLts((*reinterpret_cast< LTS*(*)>(_a[1]))); break;
        case 11: _t->setRelatedLts((*reinterpret_cast< LTS*(*)>(_a[1]))); break;
        case 12: _t->setMarkStyle((*reinterpret_cast< MarkStyle(*)>(_a[1]))); break;
        case 13: _t->setClusterMatchStyle((*reinterpret_cast< MatchStyle(*)>(_a[1]))); break;
        case 14: _t->setStateMatchStyle((*reinterpret_cast< MatchStyle(*)>(_a[1]))); break;
        case 15: { MarkRuleIndex _r = _t->addMarkRule((*reinterpret_cast< MarkRule(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< MarkRuleIndex*>(_a[0]) = std::move(_r); }  break;
        case 16: _t->setMarkRule((*reinterpret_cast< MarkRuleIndex(*)>(_a[1])),(*reinterpret_cast< MarkRule(*)>(_a[2]))); break;
        case 17: _t->removeMarkRule((*reinterpret_cast< MarkRuleIndex(*)>(_a[1]))); break;
        case 18: _t->setActionMarked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 19: _t->flushClusters(); break;
        case 20: _t->flushMarkedStateNumbers(); break;
        case 21: _t->cleanLts(); break;
        case 22: _t->applyRule((*reinterpret_cast< MarkRuleIndex(*)>(_a[1]))); break;
        case 23: _t->unapplyRule((*reinterpret_cast< MarkRuleIndex(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MarkManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MarkManager::ltsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MarkManager::*)(MarkStyle );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MarkManager::markStyleChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MarkManager::*)(MatchStyle );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MarkManager::clusterMatchStyleChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MarkManager::*)(MatchStyle );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MarkManager::stateMatchStyleChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MarkManager::*)(MarkRuleIndex );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MarkManager::markRuleAdded)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MarkManager::*)(MarkRuleIndex );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MarkManager::markRuleChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (MarkManager::*)(MarkRuleIndex );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MarkManager::markRuleRemoved)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (MarkManager::*)(int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MarkManager::actionMarked)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (MarkManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MarkManager::statisticsChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (MarkManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MarkManager::marksChanged)) {
                *result = 9;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MarkManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_MarkManager.data,
    qt_meta_data_MarkManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MarkManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MarkManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MarkManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MarkManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 24)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 24;
    }
    return _id;
}

// SIGNAL 0
void MarkManager::ltsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MarkManager::markStyleChanged(MarkStyle _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MarkManager::clusterMatchStyleChanged(MatchStyle _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MarkManager::stateMatchStyleChanged(MatchStyle _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MarkManager::markRuleAdded(MarkRuleIndex _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MarkManager::markRuleChanged(MarkRuleIndex _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MarkManager::markRuleRemoved(MarkRuleIndex _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MarkManager::actionMarked(int _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void MarkManager::statisticsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void MarkManager::marksChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
