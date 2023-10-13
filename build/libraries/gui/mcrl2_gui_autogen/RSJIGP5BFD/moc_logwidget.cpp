/****************************************************************************
** Meta object code from reading C++ file 'logwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../libraries/gui/include/mcrl2/gui/logwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'logwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mcrl2__gui__qt__LogRelay_t {
    QByteArrayData data[7];
    char stringdata0[66];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mcrl2__gui__qt__LogRelay_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mcrl2__gui__qt__LogRelay_t qt_meta_stringdata_mcrl2__gui__qt__LogRelay = {
    {
QT_MOC_LITERAL(0, 0, 24), // "mcrl2::gui::qt::LogRelay"
QT_MOC_LITERAL(1, 25, 10), // "logMessage"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 5), // "level"
QT_MOC_LITERAL(4, 43, 4), // "hint"
QT_MOC_LITERAL(5, 48, 9), // "timestamp"
QT_MOC_LITERAL(6, 58, 7) // "message"

    },
    "mcrl2::gui::qt::LogRelay\0logMessage\0"
    "\0level\0hint\0timestamp\0message"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mcrl2__gui__qt__LogRelay[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QDateTime, QMetaType::QString,    3,    4,    5,    6,

       0        // eod
};

void mcrl2::gui::qt::LogRelay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LogRelay *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->logMessage((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QDateTime(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LogRelay::*)(QString , QString , QDateTime , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LogRelay::logMessage)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject mcrl2::gui::qt::LogRelay::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_mcrl2__gui__qt__LogRelay.data,
    qt_meta_data_mcrl2__gui__qt__LogRelay,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mcrl2::gui::qt::LogRelay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mcrl2::gui::qt::LogRelay::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mcrl2__gui__qt__LogRelay.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "output_policy"))
        return static_cast< output_policy*>(this);
    return QObject::qt_metacast(_clname);
}

int mcrl2::gui::qt::LogRelay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void mcrl2::gui::qt::LogRelay::logMessage(QString _t1, QString _t2, QDateTime _t3, QString _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_mcrl2__gui__qt__LogWidget_t {
    QByteArrayData data[9];
    char stringdata0[97];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mcrl2__gui__qt__LogWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mcrl2__gui__qt__LogWidget_t qt_meta_stringdata_mcrl2__gui__qt__LogWidget = {
    {
QT_MOC_LITERAL(0, 0, 25), // "mcrl2::gui::qt::LogWidget"
QT_MOC_LITERAL(1, 26, 10), // "logMessage"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 5), // "level"
QT_MOC_LITERAL(4, 44, 4), // "hint"
QT_MOC_LITERAL(5, 49, 9), // "timestamp"
QT_MOC_LITERAL(6, 59, 7), // "message"
QT_MOC_LITERAL(7, 67, 16), // "formattedMessage"
QT_MOC_LITERAL(8, 84, 12) // "writeMessage"

    },
    "mcrl2::gui::qt::LogWidget\0logMessage\0"
    "\0level\0hint\0timestamp\0message\0"
    "formattedMessage\0writeMessage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mcrl2__gui__qt__LogWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    5,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    4,   35,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QDateTime, QMetaType::QString, QMetaType::QString,    3,    4,    5,    6,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QDateTime, QMetaType::QString,    3,    4,    5,    6,

       0        // eod
};

void mcrl2::gui::qt::LogWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LogWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->logMessage((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QDateTime(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5]))); break;
        case 1: _t->writeMessage((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QDateTime(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LogWidget::*)(QString , QString , QDateTime , QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LogWidget::logMessage)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject mcrl2::gui::qt::LogWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_mcrl2__gui__qt__LogWidget.data,
    qt_meta_data_mcrl2__gui__qt__LogWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mcrl2::gui::qt::LogWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mcrl2::gui::qt::LogWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mcrl2__gui__qt__LogWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int mcrl2::gui::qt::LogWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void mcrl2::gui::qt::LogWidget::logMessage(QString _t1, QString _t2, QDateTime _t3, QString _t4, QString _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
