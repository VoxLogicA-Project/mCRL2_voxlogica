/****************************************************************************
** Meta object code from reading C++ file 'findreplacedialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../tools/release/mcrl2xi/findreplacedialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'findreplacedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FindReplaceDialog_t {
    QByteArrayData data[10];
    char stringdata0[97];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FindReplaceDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FindReplaceDialog_t qt_meta_stringdata_FindReplaceDialog = {
    {
QT_MOC_LITERAL(0, 0, 17), // "FindReplaceDialog"
QT_MOC_LITERAL(1, 18, 4), // "find"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 4), // "down"
QT_MOC_LITERAL(4, 29, 12), // "doWrapAround"
QT_MOC_LITERAL(5, 42, 8), // "findNext"
QT_MOC_LITERAL(6, 51, 8), // "findPrev"
QT_MOC_LITERAL(7, 60, 7), // "replace"
QT_MOC_LITERAL(8, 68, 10), // "replaceAll"
QT_MOC_LITERAL(9, 79, 17) // "textToFindChanged"

    },
    "FindReplaceDialog\0find\0\0down\0doWrapAround\0"
    "findNext\0findPrev\0replace\0replaceAll\0"
    "textToFindChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FindReplaceDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   49,    2, 0x0a /* Public */,
       1,    0,   54,    2, 0x0a /* Public */,
       5,    0,   55,    2, 0x0a /* Public */,
       6,    0,   56,    2, 0x0a /* Public */,
       7,    0,   57,    2, 0x0a /* Public */,
       8,    0,   58,    2, 0x0a /* Public */,
       9,    0,   59,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,    3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FindReplaceDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FindReplaceDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->find((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->find(); break;
        case 2: _t->findNext(); break;
        case 3: _t->findPrev(); break;
        case 4: _t->replace(); break;
        case 5: _t->replaceAll(); break;
        case 6: _t->textToFindChanged(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FindReplaceDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_FindReplaceDialog.data,
    qt_meta_data_FindReplaceDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FindReplaceDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FindReplaceDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FindReplaceDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int FindReplaceDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
