/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../tools/release/lpsxsim/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[27];
    char stringdata0[319];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 17), // "openSpecification"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 9), // "loadTrace"
QT_MOC_LITERAL(4, 40, 9), // "saveTrace"
QT_MOC_LITERAL(5, 50, 9), // "playTrace"
QT_MOC_LITERAL(6, 60, 10), // "randomPlay"
QT_MOC_LITERAL(7, 71, 8), // "stopPlay"
QT_MOC_LITERAL(8, 80, 12), // "setPlayDelay"
QT_MOC_LITERAL(9, 93, 16), // "updateSimulation"
QT_MOC_LITERAL(10, 110, 13), // "stateSelected"
QT_MOC_LITERAL(11, 124, 20), // "setTauPrioritization"
QT_MOC_LITERAL(12, 145, 8), // "filename"
QT_MOC_LITERAL(13, 154, 23), // "onInitializedSimulation"
QT_MOC_LITERAL(14, 178, 11), // "selectState"
QT_MOC_LITERAL(15, 190, 5), // "state"
QT_MOC_LITERAL(16, 196, 13), // "truncateTrace"
QT_MOC_LITERAL(17, 210, 16), // "selectTransition"
QT_MOC_LITERAL(18, 227, 10), // "transition"
QT_MOC_LITERAL(19, 238, 13), // "animationStep"
QT_MOC_LITERAL(20, 252, 8), // "undoLast"
QT_MOC_LITERAL(21, 261, 11), // "onLogOutput"
QT_MOC_LITERAL(22, 273, 5), // "level"
QT_MOC_LITERAL(23, 279, 4), // "hint"
QT_MOC_LITERAL(24, 284, 9), // "timestamp"
QT_MOC_LITERAL(25, 294, 7), // "message"
QT_MOC_LITERAL(26, 302, 16) // "formattedMessage"

    },
    "MainWindow\0openSpecification\0\0loadTrace\0"
    "saveTrace\0playTrace\0randomPlay\0stopPlay\0"
    "setPlayDelay\0updateSimulation\0"
    "stateSelected\0setTauPrioritization\0"
    "filename\0onInitializedSimulation\0"
    "selectState\0state\0truncateTrace\0"
    "selectTransition\0transition\0animationStep\0"
    "undoLast\0onLogOutput\0level\0hint\0"
    "timestamp\0message\0formattedMessage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x09 /* Protected */,
       3,    0,  105,    2, 0x09 /* Protected */,
       4,    0,  106,    2, 0x09 /* Protected */,
       5,    0,  107,    2, 0x09 /* Protected */,
       6,    0,  108,    2, 0x09 /* Protected */,
       7,    0,  109,    2, 0x09 /* Protected */,
       8,    0,  110,    2, 0x09 /* Protected */,
       9,    0,  111,    2, 0x09 /* Protected */,
      10,    0,  112,    2, 0x09 /* Protected */,
      11,    0,  113,    2, 0x09 /* Protected */,
       1,    1,  114,    2, 0x0a /* Public */,
      13,    0,  117,    2, 0x0a /* Public */,
      14,    1,  118,    2, 0x0a /* Public */,
      16,    1,  121,    2, 0x0a /* Public */,
      17,    1,  124,    2, 0x0a /* Public */,
      19,    0,  127,    2, 0x0a /* Public */,
      20,    0,  128,    2, 0x0a /* Public */,
      21,    5,  129,    2, 0x0a /* Public */,

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
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QDateTime, QMetaType::QString, QMetaType::QString,   22,   23,   24,   25,   26,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->openSpecification(); break;
        case 1: _t->loadTrace(); break;
        case 2: _t->saveTrace(); break;
        case 3: _t->playTrace(); break;
        case 4: _t->randomPlay(); break;
        case 5: _t->stopPlay(); break;
        case 6: _t->setPlayDelay(); break;
        case 7: _t->updateSimulation(); break;
        case 8: _t->stateSelected(); break;
        case 9: _t->setTauPrioritization(); break;
        case 10: _t->openSpecification((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->onInitializedSimulation(); break;
        case 12: _t->selectState((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->truncateTrace((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->selectTransition((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->animationStep(); break;
        case 16: _t->undoLast(); break;
        case 17: _t->onLogOutput((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QDateTime(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
