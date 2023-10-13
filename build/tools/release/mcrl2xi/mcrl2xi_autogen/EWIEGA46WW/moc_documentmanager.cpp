/****************************************************************************
** Meta object code from reading C++ file 'documentmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../tools/release/mcrl2xi/documentmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'documentmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DocumentManager_t {
    QByteArrayData data[9];
    char stringdata0[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DocumentManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DocumentManager_t qt_meta_stringdata_DocumentManager = {
    {
QT_MOC_LITERAL(0, 0, 15), // "DocumentManager"
QT_MOC_LITERAL(1, 16, 15), // "documentCreated"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 15), // "DocumentWidget*"
QT_MOC_LITERAL(4, 49, 8), // "document"
QT_MOC_LITERAL(5, 58, 15), // "documentChanged"
QT_MOC_LITERAL(6, 74, 14), // "documentClosed"
QT_MOC_LITERAL(7, 89, 16), // "onCurrentChanged"
QT_MOC_LITERAL(8, 106, 5) // "index"

    },
    "DocumentManager\0documentCreated\0\0"
    "DocumentWidget*\0document\0documentChanged\0"
    "documentClosed\0onCurrentChanged\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DocumentManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       5,    1,   37,    2, 0x06 /* Public */,
       6,    1,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    8,

       0        // eod
};

void DocumentManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DocumentManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->documentCreated((*reinterpret_cast< DocumentWidget*(*)>(_a[1]))); break;
        case 1: _t->documentChanged((*reinterpret_cast< DocumentWidget*(*)>(_a[1]))); break;
        case 2: _t->documentClosed((*reinterpret_cast< DocumentWidget*(*)>(_a[1]))); break;
        case 3: _t->onCurrentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DocumentWidget* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DocumentWidget* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DocumentWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DocumentManager::*)(DocumentWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentManager::documentCreated)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DocumentManager::*)(DocumentWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentManager::documentChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DocumentManager::*)(DocumentWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentManager::documentClosed)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DocumentManager::staticMetaObject = { {
    QMetaObject::SuperData::link<mcrl2::gui::qt::ExtendedTabWidget::staticMetaObject>(),
    qt_meta_stringdata_DocumentManager.data,
    qt_meta_data_DocumentManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DocumentManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DocumentManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DocumentManager.stringdata0))
        return static_cast<void*>(this);
    return mcrl2::gui::qt::ExtendedTabWidget::qt_metacast(_clname);
}

int DocumentManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = mcrl2::gui::qt::ExtendedTabWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void DocumentManager::documentCreated(DocumentWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DocumentManager::documentChanged(DocumentWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DocumentManager::documentClosed(DocumentWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
