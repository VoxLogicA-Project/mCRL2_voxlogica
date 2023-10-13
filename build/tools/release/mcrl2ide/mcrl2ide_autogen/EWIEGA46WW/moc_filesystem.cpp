/****************************************************************************
** Meta object code from reading C++ file 'filesystem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../tools/release/mcrl2ide/filesystem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filesystem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FileSystem_t {
    QByteArrayData data[11];
    char stringdata0[162];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FileSystem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FileSystem_t qt_meta_stringdata_FileSystem = {
    {
QT_MOC_LITERAL(0, 0, 10), // "FileSystem"
QT_MOC_LITERAL(1, 11, 26), // "enterSpecificationOnlyMode"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 16), // "newProjectOpened"
QT_MOC_LITERAL(4, 56, 13), // "propertyAdded"
QT_MOC_LITERAL(5, 70, 8), // "Property"
QT_MOC_LITERAL(6, 79, 11), // "newProperty"
QT_MOC_LITERAL(7, 91, 14), // "propertyEdited"
QT_MOC_LITERAL(8, 106, 15), // "oldPropertyName"
QT_MOC_LITERAL(9, 122, 31), // "setSaveIntermediateFilesOptions"
QT_MOC_LITERAL(10, 154, 7) // "checked"

    },
    "FileSystem\0enterSpecificationOnlyMode\0"
    "\0newProjectOpened\0propertyAdded\0"
    "Property\0newProperty\0propertyEdited\0"
    "oldPropertyName\0setSaveIntermediateFilesOptions\0"
    "checked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileSystem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    1,   41,    2, 0x06 /* Public */,
       7,    2,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   49,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 5,    8,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,   10,

       0        // eod
};

void FileSystem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FileSystem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->enterSpecificationOnlyMode(); break;
        case 1: _t->newProjectOpened(); break;
        case 2: _t->propertyAdded((*reinterpret_cast< const Property(*)>(_a[1]))); break;
        case 3: _t->propertyEdited((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const Property(*)>(_a[2]))); break;
        case 4: _t->setSaveIntermediateFilesOptions((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FileSystem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileSystem::enterSpecificationOnlyMode)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FileSystem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileSystem::newProjectOpened)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FileSystem::*)(const Property & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileSystem::propertyAdded)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FileSystem::*)(const QString & , const Property & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileSystem::propertyEdited)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FileSystem::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_FileSystem.data,
    qt_meta_data_FileSystem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FileSystem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileSystem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FileSystem.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FileSystem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void FileSystem::enterSpecificationOnlyMode()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void FileSystem::newProjectOpened()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void FileSystem::propertyAdded(const Property & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FileSystem::propertyEdited(const QString & _t1, const Property & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
