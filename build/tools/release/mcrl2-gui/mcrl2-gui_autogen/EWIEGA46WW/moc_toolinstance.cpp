/****************************************************************************
** Meta object code from reading C++ file 'toolinstance.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../tools/release/mcrl2-gui/toolinstance.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'toolinstance.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ToolInstance_t {
    QByteArrayData data[16];
    char stringdata0[162];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ToolInstance_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ToolInstance_t qt_meta_stringdata_ToolInstance = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ToolInstance"
QT_MOC_LITERAL(1, 13, 12), // "titleChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 5), // "title"
QT_MOC_LITERAL(4, 33, 12), // "colorChanged"
QT_MOC_LITERAL(5, 46, 5), // "color"
QT_MOC_LITERAL(6, 52, 13), // "onStateChange"
QT_MOC_LITERAL(7, 66, 22), // "QProcess::ProcessState"
QT_MOC_LITERAL(8, 89, 5), // "state"
QT_MOC_LITERAL(9, 95, 11), // "onOutputLog"
QT_MOC_LITERAL(10, 107, 7), // "outText"
QT_MOC_LITERAL(11, 115, 10), // "onErrorLog"
QT_MOC_LITERAL(12, 126, 5), // "onRun"
QT_MOC_LITERAL(13, 132, 7), // "onAbort"
QT_MOC_LITERAL(14, 140, 6), // "onSave"
QT_MOC_LITERAL(15, 147, 14) // "onColorChanged"

    },
    "ToolInstance\0titleChanged\0\0title\0"
    "colorChanged\0color\0onStateChange\0"
    "QProcess::ProcessState\0state\0onOutputLog\0"
    "outText\0onErrorLog\0onRun\0onAbort\0"
    "onSave\0onColorChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ToolInstance[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    1,   62,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   65,    2, 0x0a /* Public */,
       9,    1,   68,    2, 0x0a /* Public */,
      11,    1,   71,    2, 0x0a /* Public */,
      12,    0,   74,    2, 0x0a /* Public */,
      13,    0,   75,    2, 0x0a /* Public */,
      14,    0,   76,    2, 0x0a /* Public */,
      15,    1,   77,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QColor,    5,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QColor,    5,

       0        // eod
};

void ToolInstance::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ToolInstance *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->titleChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->colorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 2: _t->onStateChange((*reinterpret_cast< QProcess::ProcessState(*)>(_a[1]))); break;
        case 3: _t->onOutputLog((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->onErrorLog((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->onRun(); break;
        case 6: _t->onAbort(); break;
        case 7: _t->onSave(); break;
        case 8: _t->onColorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ToolInstance::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ToolInstance::titleChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ToolInstance::*)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ToolInstance::colorChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ToolInstance::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ToolInstance.data,
    qt_meta_data_ToolInstance,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ToolInstance::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ToolInstance::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ToolInstance.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ToolInstance::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void ToolInstance::titleChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ToolInstance::colorChanged(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
