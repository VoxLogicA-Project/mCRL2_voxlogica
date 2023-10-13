/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../tools/release/mcrl2-gui/mainwindow.h"
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
    QByteArrayData data[22];
    char stringdata0[253];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 11), // "onLogOutput"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 5), // "level"
QT_MOC_LITERAL(4, 30, 4), // "hint"
QT_MOC_LITERAL(5, 35, 9), // "timestamp"
QT_MOC_LITERAL(6, 45, 7), // "message"
QT_MOC_LITERAL(7, 53, 16), // "formattedMessage"
QT_MOC_LITERAL(8, 70, 10), // "onToolInfo"
QT_MOC_LITERAL(9, 81, 17), // "onTabTitleChanged"
QT_MOC_LITERAL(10, 99, 5), // "title"
QT_MOC_LITERAL(11, 105, 17), // "onTabColorChanged"
QT_MOC_LITERAL(12, 123, 5), // "color"
QT_MOC_LITERAL(13, 129, 17), // "onTabCloseRequest"
QT_MOC_LITERAL(14, 147, 5), // "index"
QT_MOC_LITERAL(15, 153, 18), // "createToolInstance"
QT_MOC_LITERAL(16, 172, 8), // "filename"
QT_MOC_LITERAL(17, 181, 15), // "ToolInformation"
QT_MOC_LITERAL(18, 197, 4), // "info"
QT_MOC_LITERAL(19, 202, 21), // "createFileInformation"
QT_MOC_LITERAL(20, 224, 9), // "onOpenIDE"
QT_MOC_LITERAL(21, 234, 18) // "onResetPerspective"

    },
    "MainWindow\0onLogOutput\0\0level\0hint\0"
    "timestamp\0message\0formattedMessage\0"
    "onToolInfo\0onTabTitleChanged\0title\0"
    "onTabColorChanged\0color\0onTabCloseRequest\0"
    "index\0createToolInstance\0filename\0"
    "ToolInformation\0info\0createFileInformation\0"
    "onOpenIDE\0onResetPerspective"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    5,   59,    2, 0x0a /* Public */,
       8,    0,   70,    2, 0x0a /* Public */,
       9,    1,   71,    2, 0x0a /* Public */,
      11,    1,   74,    2, 0x0a /* Public */,
      13,    1,   77,    2, 0x0a /* Public */,
      15,    2,   80,    2, 0x0a /* Public */,
      19,    1,   85,    2, 0x0a /* Public */,
      20,    0,   88,    2, 0x0a /* Public */,
      21,    0,   89,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QDateTime, QMetaType::QString, QMetaType::QString,    3,    4,    5,    6,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QColor,   12,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 17,   16,   18,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onLogOutput((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QDateTime(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5]))); break;
        case 1: _t->onToolInfo(); break;
        case 2: _t->onTabTitleChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->onTabColorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 4: _t->onTabCloseRequest((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->createToolInstance((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< ToolInformation(*)>(_a[2]))); break;
        case 6: _t->createFileInformation((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->onOpenIDE(); break;
        case 8: _t->onResetPerspective(); break;
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
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
