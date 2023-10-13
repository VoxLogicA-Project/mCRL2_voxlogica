/****************************************************************************
** Meta object code from reading C++ file 'processsystem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../tools/release/mcrl2ide/processsystem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'processsystem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ProcessThread_t {
    QByteArrayData data[12];
    char stringdata0[158];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ProcessThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ProcessThread_t qt_meta_stringdata_ProcessThread = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ProcessThread"
QT_MOC_LITERAL(1, 14, 17), // "newProcessInQueue"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 12), // "startProcess"
QT_MOC_LITERAL(4, 46, 9), // "processid"
QT_MOC_LITERAL(5, 56, 22), // "currentProcessFinished"
QT_MOC_LITERAL(6, 79, 13), // "statusChanged"
QT_MOC_LITERAL(7, 93, 7), // "running"
QT_MOC_LITERAL(8, 101, 11), // "ProcessType"
QT_MOC_LITERAL(9, 113, 11), // "processType"
QT_MOC_LITERAL(10, 125, 16), // "newProcessQueued"
QT_MOC_LITERAL(11, 142, 15) // "processFinished"

    },
    "ProcessThread\0newProcessInQueue\0\0"
    "startProcess\0processid\0currentProcessFinished\0"
    "statusChanged\0running\0ProcessType\0"
    "processType\0newProcessQueued\0"
    "processFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ProcessThread[] = {

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
       1,    0,   44,    2, 0x06 /* Public */,
       3,    1,   45,    2, 0x06 /* Public */,
       5,    0,   48,    2, 0x06 /* Public */,
       6,    2,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   54,    2, 0x0a /* Public */,
      11,    1,   57,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 8,    7,    9,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::Int,    4,

       0        // eod
};

void ProcessThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ProcessThread *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->newProcessInQueue(); break;
        case 1: _t->startProcess((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->currentProcessFinished(); break;
        case 3: _t->statusChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< ProcessType(*)>(_a[2]))); break;
        case 4: _t->newProcessQueued((*reinterpret_cast< ProcessType(*)>(_a[1]))); break;
        case 5: _t->processFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ProcessType >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ProcessType >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ProcessThread::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProcessThread::newProcessInQueue)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ProcessThread::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProcessThread::startProcess)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ProcessThread::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProcessThread::currentProcessFinished)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ProcessThread::*)(bool , ProcessType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProcessThread::statusChanged)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ProcessThread::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_ProcessThread.data,
    qt_meta_data_ProcessThread,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ProcessThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProcessThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ProcessThread.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int ProcessThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void ProcessThread::newProcessInQueue()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ProcessThread::startProcess(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ProcessThread::currentProcessFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ProcessThread::statusChanged(bool _t1, ProcessType _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
struct qt_meta_stringdata_ProcessSystem_t {
    QByteArrayData data[13];
    char stringdata0[189];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ProcessSystem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ProcessSystem_t qt_meta_stringdata_ProcessSystem = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ProcessSystem"
QT_MOC_LITERAL(1, 14, 16), // "newProcessQueued"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 11), // "ProcessType"
QT_MOC_LITERAL(4, 44, 11), // "processType"
QT_MOC_LITERAL(5, 56, 15), // "processFinished"
QT_MOC_LITERAL(6, 72, 9), // "processid"
QT_MOC_LITERAL(7, 82, 12), // "startProcess"
QT_MOC_LITERAL(8, 95, 21), // "executeNextSubprocess"
QT_MOC_LITERAL(9, 117, 16), // "previousExitCode"
QT_MOC_LITERAL(10, 134, 18), // "mcrl2ParsingResult"
QT_MOC_LITERAL(11, 153, 16), // "mcfParsingResult"
QT_MOC_LITERAL(12, 170, 18) // "verificationResult"

    },
    "ProcessSystem\0newProcessQueued\0\0"
    "ProcessType\0processType\0processFinished\0"
    "processid\0startProcess\0executeNextSubprocess\0"
    "previousExitCode\0mcrl2ParsingResult\0"
    "mcfParsingResult\0verificationResult"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ProcessSystem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       5,    1,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   60,    2, 0x08 /* Private */,
       8,    2,   63,    2, 0x08 /* Private */,
       8,    1,   68,    2, 0x28 /* Private | MethodCloned */,
      10,    1,   71,    2, 0x08 /* Private */,
      11,    1,   74,    2, 0x08 /* Private */,
      12,    1,   77,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,    6,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,

       0        // eod
};

void ProcessSystem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ProcessSystem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->newProcessQueued((*reinterpret_cast< ProcessType(*)>(_a[1]))); break;
        case 1: _t->processFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->startProcess((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->executeNextSubprocess((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->executeNextSubprocess((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->mcrl2ParsingResult((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->mcfParsingResult((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->verificationResult((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ProcessType >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ProcessSystem::*)(ProcessType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProcessSystem::newProcessQueued)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ProcessSystem::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProcessSystem::processFinished)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ProcessSystem::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ProcessSystem.data,
    qt_meta_data_ProcessSystem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ProcessSystem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProcessSystem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ProcessSystem.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ProcessSystem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void ProcessSystem::newProcessQueued(ProcessType _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ProcessSystem::processFinished(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
