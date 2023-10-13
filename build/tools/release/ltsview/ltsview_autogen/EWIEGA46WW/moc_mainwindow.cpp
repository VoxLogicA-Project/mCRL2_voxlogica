/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../tools/release/ltsview/mainwindow.h"
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
    char stringdata0[333];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 4), // "open"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 8), // "filename"
QT_MOC_LITERAL(4, 26, 9), // "openTrace"
QT_MOC_LITERAL(5, 36, 12), // "exportBitmap"
QT_MOC_LITERAL(6, 49, 10), // "exportText"
QT_MOC_LITERAL(7, 60, 12), // "setStatusBar"
QT_MOC_LITERAL(8, 73, 7), // "message"
QT_MOC_LITERAL(9, 81, 14), // "clearStatusBar"
QT_MOC_LITERAL(10, 96, 14), // "startRendering"
QT_MOC_LITERAL(11, 111, 10), // "loadingLts"
QT_MOC_LITERAL(12, 122, 13), // "rankingStates"
QT_MOC_LITERAL(13, 136, 16), // "clusteringStates"
QT_MOC_LITERAL(14, 153, 20), // "computingClusterInfo"
QT_MOC_LITERAL(15, 174, 19), // "positioningClusters"
QT_MOC_LITERAL(16, 194, 17), // "positioningStates"
QT_MOC_LITERAL(17, 212, 18), // "hideProgressDialog"
QT_MOC_LITERAL(18, 231, 11), // "setProgress"
QT_MOC_LITERAL(19, 243, 5), // "phase"
QT_MOC_LITERAL(20, 249, 16), // "selectionChanged"
QT_MOC_LITERAL(21, 266, 11), // "zoomChanged"
QT_MOC_LITERAL(22, 278, 16), // "startStructuring"
QT_MOC_LITERAL(23, 295, 15), // "stopStructuring"
QT_MOC_LITERAL(24, 311, 10), // "logMessage"
QT_MOC_LITERAL(25, 322, 5), // "level"
QT_MOC_LITERAL(26, 328, 4) // "hint"

    },
    "MainWindow\0open\0\0filename\0openTrace\0"
    "exportBitmap\0exportText\0setStatusBar\0"
    "message\0clearStatusBar\0startRendering\0"
    "loadingLts\0rankingStates\0clusteringStates\0"
    "computingClusterInfo\0positioningClusters\0"
    "positioningStates\0hideProgressDialog\0"
    "setProgress\0phase\0selectionChanged\0"
    "zoomChanged\0startStructuring\0"
    "stopStructuring\0logMessage\0level\0hint"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  119,    2, 0x0a /* Public */,
       1,    0,  122,    2, 0x09 /* Protected */,
       4,    0,  123,    2, 0x09 /* Protected */,
       5,    0,  124,    2, 0x09 /* Protected */,
       6,    0,  125,    2, 0x09 /* Protected */,
       7,    1,  126,    2, 0x09 /* Protected */,
       9,    0,  129,    2, 0x09 /* Protected */,
      10,    0,  130,    2, 0x09 /* Protected */,
      11,    0,  131,    2, 0x09 /* Protected */,
      12,    0,  132,    2, 0x09 /* Protected */,
      13,    0,  133,    2, 0x09 /* Protected */,
      14,    0,  134,    2, 0x09 /* Protected */,
      15,    0,  135,    2, 0x09 /* Protected */,
      16,    0,  136,    2, 0x09 /* Protected */,
      17,    0,  137,    2, 0x09 /* Protected */,
      18,    2,  138,    2, 0x09 /* Protected */,
      20,    0,  143,    2, 0x09 /* Protected */,
      21,    0,  144,    2, 0x09 /* Protected */,
      22,    0,  145,    2, 0x09 /* Protected */,
      23,    0,  146,    2, 0x09 /* Protected */,
      24,    4,  147,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   19,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QDateTime, QMetaType::QString,   25,   26,    2,    8,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->open((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->open(); break;
        case 2: _t->openTrace(); break;
        case 3: _t->exportBitmap(); break;
        case 4: _t->exportText(); break;
        case 5: _t->setStatusBar((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->clearStatusBar(); break;
        case 7: _t->startRendering(); break;
        case 8: _t->loadingLts(); break;
        case 9: _t->rankingStates(); break;
        case 10: _t->clusteringStates(); break;
        case 11: _t->computingClusterInfo(); break;
        case 12: _t->positioningClusters(); break;
        case 13: _t->positioningStates(); break;
        case 14: _t->hideProgressDialog(); break;
        case 15: _t->setProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 16: _t->selectionChanged(); break;
        case 17: _t->zoomChanged(); break;
        case 18: _t->startStructuring(); break;
        case 19: _t->stopStructuring(); break;
        case 20: _t->logMessage((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QDateTime(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
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
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 21;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
