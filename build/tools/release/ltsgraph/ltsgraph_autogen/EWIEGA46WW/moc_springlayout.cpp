/****************************************************************************
** Meta object code from reading C++ file 'springlayout.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../tools/release/ltsgraph/springlayout.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'springlayout.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Graph__CustomQWidget_t {
    QByteArrayData data[1];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Graph__CustomQWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Graph__CustomQWidget_t qt_meta_stringdata_Graph__CustomQWidget = {
    {
QT_MOC_LITERAL(0, 0, 20) // "Graph::CustomQWidget"

    },
    "Graph::CustomQWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Graph__CustomQWidget[] = {

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

void Graph::CustomQWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject Graph::CustomQWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Graph__CustomQWidget.data,
    qt_meta_data_Graph__CustomQWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Graph::CustomQWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Graph::CustomQWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Graph__CustomQWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Graph::CustomQWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_Graph__SpringLayoutUi_t {
    QByteArrayData data[27];
    char stringdata0[501];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Graph__SpringLayoutUi_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Graph__SpringLayoutUi_t qt_meta_stringdata_Graph__SpringLayoutUi = {
    {
QT_MOC_LITERAL(0, 0, 21), // "Graph::SpringLayoutUi"
QT_MOC_LITERAL(1, 22, 14), // "runningChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 26), // "onProgressThresholdChanged"
QT_MOC_LITERAL(4, 65, 22), // "onHeatingFactorChanged"
QT_MOC_LITERAL(5, 88, 22), // "onCoolingFactorChanged"
QT_MOC_LITERAL(6, 111, 27), // "onStabilityThresholdChanged"
QT_MOC_LITERAL(7, 139, 28), // "onStabilityIterationsChanged"
QT_MOC_LITERAL(8, 168, 23), // "onResetPositionsPressed"
QT_MOC_LITERAL(9, 192, 19), // "onAttractionChanged"
QT_MOC_LITERAL(10, 212, 5), // "value"
QT_MOC_LITERAL(11, 218, 18), // "onRepulsionChanged"
QT_MOC_LITERAL(12, 237, 14), // "onSpeedChanged"
QT_MOC_LITERAL(13, 252, 17), // "onAccuracyChanged"
QT_MOC_LITERAL(14, 270, 21), // "onHandleWeightChanged"
QT_MOC_LITERAL(15, 292, 18), // "onNatLengthChanged"
QT_MOC_LITERAL(16, 311, 30), // "onAttractionCalculationChanged"
QT_MOC_LITERAL(17, 342, 29), // "onRepulsionCalculationChanged"
QT_MOC_LITERAL(18, 372, 25), // "onForceApplicationChanged"
QT_MOC_LITERAL(19, 398, 11), // "onStartStop"
QT_MOC_LITERAL(20, 410, 9), // "onStarted"
QT_MOC_LITERAL(21, 420, 9), // "onStopped"
QT_MOC_LITERAL(22, 430, 13), // "onTreeToggled"
QT_MOC_LITERAL(23, 444, 18), // "onAnnealingToggled"
QT_MOC_LITERAL(24, 463, 9), // "setActive"
QT_MOC_LITERAL(25, 473, 6), // "active"
QT_MOC_LITERAL(26, 480, 20) // "onAdvancedDialogShow"

    },
    "Graph::SpringLayoutUi\0runningChanged\0"
    "\0onProgressThresholdChanged\0"
    "onHeatingFactorChanged\0onCoolingFactorChanged\0"
    "onStabilityThresholdChanged\0"
    "onStabilityIterationsChanged\0"
    "onResetPositionsPressed\0onAttractionChanged\0"
    "value\0onRepulsionChanged\0onSpeedChanged\0"
    "onAccuracyChanged\0onHandleWeightChanged\0"
    "onNatLengthChanged\0onAttractionCalculationChanged\0"
    "onRepulsionCalculationChanged\0"
    "onForceApplicationChanged\0onStartStop\0"
    "onStarted\0onStopped\0onTreeToggled\0"
    "onAnnealingToggled\0setActive\0active\0"
    "onAdvancedDialogShow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Graph__SpringLayoutUi[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  129,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,  132,    2, 0x0a /* Public */,
       4,    1,  135,    2, 0x0a /* Public */,
       5,    1,  138,    2, 0x0a /* Public */,
       6,    1,  141,    2, 0x0a /* Public */,
       7,    1,  144,    2, 0x0a /* Public */,
       8,    0,  147,    2, 0x0a /* Public */,
       9,    1,  148,    2, 0x0a /* Public */,
      11,    1,  151,    2, 0x0a /* Public */,
      12,    1,  154,    2, 0x0a /* Public */,
      13,    1,  157,    2, 0x0a /* Public */,
      14,    1,  160,    2, 0x0a /* Public */,
      15,    1,  163,    2, 0x0a /* Public */,
      16,    1,  166,    2, 0x0a /* Public */,
      17,    1,  169,    2, 0x0a /* Public */,
      18,    1,  172,    2, 0x0a /* Public */,
      19,    0,  175,    2, 0x0a /* Public */,
      20,    0,  176,    2, 0x0a /* Public */,
      21,    0,  177,    2, 0x0a /* Public */,
      22,    1,  178,    2, 0x0a /* Public */,
      23,    1,  181,    2, 0x0a /* Public */,
      24,    1,  184,    2, 0x0a /* Public */,
      26,    1,  187,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void Graph::SpringLayoutUi::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SpringLayoutUi *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->runningChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->onProgressThresholdChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->onHeatingFactorChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->onCoolingFactorChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->onStabilityThresholdChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->onStabilityIterationsChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->onResetPositionsPressed(); break;
        case 7: _t->onAttractionChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->onRepulsionChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->onSpeedChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->onAccuracyChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->onHandleWeightChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->onNatLengthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->onAttractionCalculationChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->onRepulsionCalculationChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->onForceApplicationChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->onStartStop(); break;
        case 17: _t->onStarted(); break;
        case 18: _t->onStopped(); break;
        case 19: _t->onTreeToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->onAnnealingToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->setActive((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->onAdvancedDialogShow((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SpringLayoutUi::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SpringLayoutUi::runningChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Graph::SpringLayoutUi::staticMetaObject = { {
    QMetaObject::SuperData::link<QDockWidget::staticMetaObject>(),
    qt_meta_stringdata_Graph__SpringLayoutUi.data,
    qt_meta_data_Graph__SpringLayoutUi,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Graph::SpringLayoutUi::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Graph::SpringLayoutUi::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Graph__SpringLayoutUi.stringdata0))
        return static_cast<void*>(this);
    return QDockWidget::qt_metacast(_clname);
}

int Graph::SpringLayoutUi::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 23)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 23;
    }
    return _id;
}

// SIGNAL 0
void Graph::SpringLayoutUi::runningChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
