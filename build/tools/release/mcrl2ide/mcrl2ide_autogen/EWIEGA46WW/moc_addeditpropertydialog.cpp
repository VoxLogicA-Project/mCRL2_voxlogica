/****************************************************************************
** Meta object code from reading C++ file 'addeditpropertydialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../tools/release/mcrl2ide/addeditpropertydialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addeditpropertydialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AddEditPropertyDialog_t {
    QByteArrayData data[10];
    char stringdata0[135];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AddEditPropertyDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AddEditPropertyDialog_t qt_meta_stringdata_AddEditPropertyDialog = {
    {
QT_MOC_LITERAL(0, 0, 21), // "AddEditPropertyDialog"
QT_MOC_LITERAL(1, 22, 18), // "actionSaveAndParse"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 12), // "parseResults"
QT_MOC_LITERAL(4, 55, 9), // "processid"
QT_MOC_LITERAL(5, 65, 15), // "clearParseLabel"
QT_MOC_LITERAL(6, 81, 18), // "actionSaveAndClose"
QT_MOC_LITERAL(7, 100, 27), // "setEquivalenceTabToModified"
QT_MOC_LITERAL(8, 128, 4), // "done"
QT_MOC_LITERAL(9, 133, 1) // "r"

    },
    "AddEditPropertyDialog\0actionSaveAndParse\0"
    "\0parseResults\0processid\0clearParseLabel\0"
    "actionSaveAndClose\0setEquivalenceTabToModified\0"
    "done\0r"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddEditPropertyDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a /* Public */,
       3,    1,   45,    2, 0x0a /* Public */,
       5,    0,   48,    2, 0x0a /* Public */,
       6,    0,   49,    2, 0x0a /* Public */,
       7,    0,   50,    2, 0x0a /* Public */,
       8,    1,   51,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,

       0        // eod
};

void AddEditPropertyDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AddEditPropertyDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->actionSaveAndParse(); break;
        case 1: _t->parseResults((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->clearParseLabel(); break;
        case 3: _t->actionSaveAndClose(); break;
        case 4: _t->setEquivalenceTabToModified(); break;
        case 5: _t->done((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AddEditPropertyDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_AddEditPropertyDialog.data,
    qt_meta_data_AddEditPropertyDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AddEditPropertyDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddEditPropertyDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AddEditPropertyDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int AddEditPropertyDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
