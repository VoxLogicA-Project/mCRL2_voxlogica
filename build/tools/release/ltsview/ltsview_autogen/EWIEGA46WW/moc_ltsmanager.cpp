/****************************************************************************
** Meta object code from reading C++ file 'ltsmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../tools/release/ltsview/ltsmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ltsmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LtsManagerHelper_t {
    QByteArrayData data[16];
    char stringdata0[200];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LtsManagerHelper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LtsManagerHelper_t qt_meta_stringdata_LtsManagerHelper = {
    {
QT_MOC_LITERAL(0, 0, 16), // "LtsManagerHelper"
QT_MOC_LITERAL(1, 17, 10), // "loadingLts"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 13), // "rankingStates"
QT_MOC_LITERAL(4, 43, 16), // "clusteringStates"
QT_MOC_LITERAL(5, 60, 20), // "computingClusterInfo"
QT_MOC_LITERAL(6, 81, 19), // "positioningClusters"
QT_MOC_LITERAL(7, 101, 17), // "positioningStates"
QT_MOC_LITERAL(8, 119, 8), // "finished"
QT_MOC_LITERAL(9, 128, 7), // "loadLts"
QT_MOC_LITERAL(10, 136, 8), // "filename"
QT_MOC_LITERAL(11, 145, 13), // "clusterStates"
QT_MOC_LITERAL(12, 159, 4), // "LTS*"
QT_MOC_LITERAL(13, 164, 3), // "lts"
QT_MOC_LITERAL(14, 168, 16), // "positionClusters"
QT_MOC_LITERAL(15, 185, 14) // "positionStates"

    },
    "LtsManagerHelper\0loadingLts\0\0rankingStates\0"
    "clusteringStates\0computingClusterInfo\0"
    "positioningClusters\0positioningStates\0"
    "finished\0loadLts\0filename\0clusterStates\0"
    "LTS*\0lts\0positionClusters\0positionStates"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LtsManagerHelper[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    0,   70,    2, 0x06 /* Public */,
       4,    0,   71,    2, 0x06 /* Public */,
       5,    0,   72,    2, 0x06 /* Public */,
       6,    0,   73,    2, 0x06 /* Public */,
       7,    0,   74,    2, 0x06 /* Public */,
       8,    0,   75,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   76,    2, 0x0a /* Public */,
      11,    1,   79,    2, 0x0a /* Public */,
      14,    1,   82,    2, 0x0a /* Public */,
      15,    1,   85,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 12,   13,

       0        // eod
};

void LtsManagerHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LtsManagerHelper *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->loadingLts(); break;
        case 1: _t->rankingStates(); break;
        case 2: _t->clusteringStates(); break;
        case 3: _t->computingClusterInfo(); break;
        case 4: _t->positioningClusters(); break;
        case 5: _t->positioningStates(); break;
        case 6: _t->finished(); break;
        case 7: _t->loadLts((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->clusterStates((*reinterpret_cast< LTS*(*)>(_a[1]))); break;
        case 9: _t->positionClusters((*reinterpret_cast< LTS*(*)>(_a[1]))); break;
        case 10: _t->positionStates((*reinterpret_cast< LTS*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LtsManagerHelper::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LtsManagerHelper::loadingLts)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LtsManagerHelper::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LtsManagerHelper::rankingStates)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (LtsManagerHelper::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LtsManagerHelper::clusteringStates)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (LtsManagerHelper::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LtsManagerHelper::computingClusterInfo)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (LtsManagerHelper::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LtsManagerHelper::positioningClusters)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (LtsManagerHelper::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LtsManagerHelper::positioningStates)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (LtsManagerHelper::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LtsManagerHelper::finished)) {
                *result = 6;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LtsManagerHelper::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_LtsManagerHelper.data,
    qt_meta_data_LtsManagerHelper,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LtsManagerHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LtsManagerHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LtsManagerHelper.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int LtsManagerHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void LtsManagerHelper::loadingLts()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void LtsManagerHelper::rankingStates()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void LtsManagerHelper::clusteringStates()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void LtsManagerHelper::computingClusterInfo()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void LtsManagerHelper::positioningClusters()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void LtsManagerHelper::positioningStates()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void LtsManagerHelper::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
struct qt_meta_stringdata_LtsManager_t {
    QByteArrayData data[40];
    char stringdata0[532];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LtsManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LtsManager_t qt_meta_stringdata_LtsManager = {
    {
QT_MOC_LITERAL(0, 0, 10), // "LtsManager"
QT_MOC_LITERAL(1, 11, 16), // "startStructuring"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 15), // "stopStructuring"
QT_MOC_LITERAL(4, 45, 10), // "loadingLts"
QT_MOC_LITERAL(5, 56, 15), // "errorLoadingLts"
QT_MOC_LITERAL(6, 72, 13), // "rankingStates"
QT_MOC_LITERAL(7, 86, 16), // "clusteringStates"
QT_MOC_LITERAL(8, 103, 20), // "computingClusterInfo"
QT_MOC_LITERAL(9, 124, 19), // "positioningClusters"
QT_MOC_LITERAL(10, 144, 17), // "positioningStates"
QT_MOC_LITERAL(11, 162, 13), // "ltsStructured"
QT_MOC_LITERAL(12, 176, 10), // "ltsChanged"
QT_MOC_LITERAL(13, 187, 4), // "LTS*"
QT_MOC_LITERAL(14, 192, 3), // "lts"
QT_MOC_LITERAL(15, 196, 15), // "clustersChanged"
QT_MOC_LITERAL(16, 212, 23), // "clusterPositionsChanged"
QT_MOC_LITERAL(17, 236, 21), // "statePositionsChanged"
QT_MOC_LITERAL(18, 258, 9), // "ltsZoomed"
QT_MOC_LITERAL(19, 268, 16), // "selectionChanged"
QT_MOC_LITERAL(20, 285, 17), // "simulationChanged"
QT_MOC_LITERAL(21, 303, 7), // "openLts"
QT_MOC_LITERAL(22, 311, 8), // "filename"
QT_MOC_LITERAL(23, 320, 11), // "zoomInBelow"
QT_MOC_LITERAL(24, 332, 8), // "Cluster*"
QT_MOC_LITERAL(25, 341, 7), // "cluster"
QT_MOC_LITERAL(26, 349, 11), // "zoomInAbove"
QT_MOC_LITERAL(27, 361, 7), // "zoomOut"
QT_MOC_LITERAL(28, 369, 8), // "unselect"
QT_MOC_LITERAL(29, 378, 11), // "selectState"
QT_MOC_LITERAL(30, 390, 6), // "State*"
QT_MOC_LITERAL(31, 397, 5), // "state"
QT_MOC_LITERAL(32, 403, 13), // "selectCluster"
QT_MOC_LITERAL(33, 417, 13), // "simulateState"
QT_MOC_LITERAL(34, 431, 9), // "loadTrace"
QT_MOC_LITERAL(35, 441, 13), // "clusterStates"
QT_MOC_LITERAL(36, 455, 16), // "positionClusters"
QT_MOC_LITERAL(37, 472, 14), // "positionStates"
QT_MOC_LITERAL(38, 487, 23), // "updateSimulationHistory"
QT_MOC_LITERAL(39, 511, 20) // "unselectNonsimilated"

    },
    "LtsManager\0startStructuring\0\0"
    "stopStructuring\0loadingLts\0errorLoadingLts\0"
    "rankingStates\0clusteringStates\0"
    "computingClusterInfo\0positioningClusters\0"
    "positioningStates\0ltsStructured\0"
    "ltsChanged\0LTS*\0lts\0clustersChanged\0"
    "clusterPositionsChanged\0statePositionsChanged\0"
    "ltsZoomed\0selectionChanged\0simulationChanged\0"
    "openLts\0filename\0zoomInBelow\0Cluster*\0"
    "cluster\0zoomInAbove\0zoomOut\0unselect\0"
    "selectState\0State*\0state\0selectCluster\0"
    "simulateState\0loadTrace\0clusterStates\0"
    "positionClusters\0positionStates\0"
    "updateSimulationHistory\0unselectNonsimilated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LtsManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      33,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      17,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  179,    2, 0x06 /* Public */,
       3,    0,  180,    2, 0x06 /* Public */,
       4,    0,  181,    2, 0x06 /* Public */,
       5,    0,  182,    2, 0x06 /* Public */,
       6,    0,  183,    2, 0x06 /* Public */,
       7,    0,  184,    2, 0x06 /* Public */,
       8,    0,  185,    2, 0x06 /* Public */,
       9,    0,  186,    2, 0x06 /* Public */,
      10,    0,  187,    2, 0x06 /* Public */,
      11,    0,  188,    2, 0x06 /* Public */,
      12,    1,  189,    2, 0x06 /* Public */,
      15,    0,  192,    2, 0x06 /* Public */,
      16,    0,  193,    2, 0x06 /* Public */,
      17,    0,  194,    2, 0x06 /* Public */,
      18,    1,  195,    2, 0x06 /* Public */,
      19,    0,  198,    2, 0x06 /* Public */,
      20,    0,  199,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      21,    1,  200,    2, 0x0a /* Public */,
      23,    1,  203,    2, 0x0a /* Public */,
      23,    0,  206,    2, 0x0a /* Public */,
      26,    1,  207,    2, 0x0a /* Public */,
      26,    0,  210,    2, 0x0a /* Public */,
      27,    0,  211,    2, 0x0a /* Public */,
      28,    0,  212,    2, 0x0a /* Public */,
      29,    1,  213,    2, 0x0a /* Public */,
      32,    1,  216,    2, 0x0a /* Public */,
      33,    1,  219,    2, 0x0a /* Public */,
      34,    1,  222,    2, 0x0a /* Public */,
      35,    0,  225,    2, 0x09 /* Protected */,
      36,    0,  226,    2, 0x09 /* Protected */,
      37,    0,  227,    2, 0x09 /* Protected */,
      38,    0,  228,    2, 0x09 /* Protected */,
      39,    0,  229,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Bool, QMetaType::QString,   22,
    QMetaType::Void, 0x80000000 | 24,   25,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 24,   25,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 30,   31,
    QMetaType::Void, 0x80000000 | 24,   25,
    QMetaType::Void, 0x80000000 | 30,   31,
    QMetaType::Void, QMetaType::QString,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LtsManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LtsManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->startStructuring(); break;
        case 1: _t->stopStructuring(); break;
        case 2: _t->loadingLts(); break;
        case 3: _t->errorLoadingLts(); break;
        case 4: _t->rankingStates(); break;
        case 5: _t->clusteringStates(); break;
        case 6: _t->computingClusterInfo(); break;
        case 7: _t->positioningClusters(); break;
        case 8: _t->positioningStates(); break;
        case 9: _t->ltsStructured(); break;
        case 10: _t->ltsChanged((*reinterpret_cast< LTS*(*)>(_a[1]))); break;
        case 11: _t->clustersChanged(); break;
        case 12: _t->clusterPositionsChanged(); break;
        case 13: _t->statePositionsChanged(); break;
        case 14: _t->ltsZoomed((*reinterpret_cast< LTS*(*)>(_a[1]))); break;
        case 15: _t->selectionChanged(); break;
        case 16: _t->simulationChanged(); break;
        case 17: { bool _r = _t->openLts((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 18: _t->zoomInBelow((*reinterpret_cast< Cluster*(*)>(_a[1]))); break;
        case 19: _t->zoomInBelow(); break;
        case 20: _t->zoomInAbove((*reinterpret_cast< Cluster*(*)>(_a[1]))); break;
        case 21: _t->zoomInAbove(); break;
        case 22: { bool _r = _t->zoomOut();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 23: _t->unselect(); break;
        case 24: _t->selectState((*reinterpret_cast< State*(*)>(_a[1]))); break;
        case 25: _t->selectCluster((*reinterpret_cast< Cluster*(*)>(_a[1]))); break;
        case 26: _t->simulateState((*reinterpret_cast< State*(*)>(_a[1]))); break;
        case 27: _t->loadTrace((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 28: _t->clusterStates(); break;
        case 29: _t->positionClusters(); break;
        case 30: _t->positionStates(); break;
        case 31: _t->updateSimulationHistory(); break;
        case 32: _t->unselectNonsimilated(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LtsManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LtsManager::startStructuring)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LtsManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LtsManager::stopStructuring)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (LtsManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LtsManager::loadingLts)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (LtsManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LtsManager::errorLoadingLts)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (LtsManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LtsManager::rankingStates)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (LtsManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LtsManager::clusteringStates)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (LtsManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LtsManager::computingClusterInfo)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (LtsManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LtsManager::positioningClusters)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (LtsManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LtsManager::positioningStates)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (LtsManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LtsManager::ltsStructured)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (LtsManager::*)(LTS * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LtsManager::ltsChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (LtsManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LtsManager::clustersChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (LtsManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LtsManager::clusterPositionsChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (LtsManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LtsManager::statePositionsChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (LtsManager::*)(LTS * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LtsManager::ltsZoomed)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (LtsManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LtsManager::selectionChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (LtsManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LtsManager::simulationChanged)) {
                *result = 16;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LtsManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_LtsManager.data,
    qt_meta_data_LtsManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LtsManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LtsManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LtsManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int LtsManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 33)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 33;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 33)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 33;
    }
    return _id;
}

// SIGNAL 0
void LtsManager::startStructuring()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void LtsManager::stopStructuring()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void LtsManager::loadingLts()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void LtsManager::errorLoadingLts()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void LtsManager::rankingStates()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void LtsManager::clusteringStates()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void LtsManager::computingClusterInfo()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void LtsManager::positioningClusters()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void LtsManager::positioningStates()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void LtsManager::ltsStructured()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void LtsManager::ltsChanged(LTS * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void LtsManager::clustersChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void LtsManager::clusterPositionsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void LtsManager::statePositionsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void LtsManager::ltsZoomed(LTS * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void LtsManager::selectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void LtsManager::simulationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
