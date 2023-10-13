/****************************************************************************
** Meta object code from reading C++ file 'findandreplacedialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../tools/release/mcrl2ide/findandreplacedialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'findandreplacedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FindAndReplaceDialog_t {
    QByteArrayData data[12];
    char stringdata0[161];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FindAndReplaceDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FindAndReplaceDialog_t qt_meta_stringdata_FindAndReplaceDialog = {
    {
QT_MOC_LITERAL(0, 0, 20), // "FindAndReplaceDialog"
QT_MOC_LITERAL(1, 21, 14), // "setFindEnabled"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 17), // "setReplaceEnabled"
QT_MOC_LITERAL(4, 55, 20), // "setReplaceAllEnabled"
QT_MOC_LITERAL(5, 76, 10), // "actionFind"
QT_MOC_LITERAL(6, 87, 13), // "forReplaceAll"
QT_MOC_LITERAL(7, 101, 13), // "actionReplace"
QT_MOC_LITERAL(8, 115, 16), // "actionReplaceAll"
QT_MOC_LITERAL(9, 132, 12), // "updateEditor"
QT_MOC_LITERAL(10, 145, 8), // "QWidget*"
QT_MOC_LITERAL(11, 154, 6) // "widget"

    },
    "FindAndReplaceDialog\0setFindEnabled\0"
    "\0setReplaceEnabled\0setReplaceAllEnabled\0"
    "actionFind\0forReplaceAll\0actionReplace\0"
    "actionReplaceAll\0updateEditor\0QWidget*\0"
    "widget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FindAndReplaceDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x0a /* Public */,
       3,    0,   55,    2, 0x0a /* Public */,
       4,    0,   56,    2, 0x0a /* Public */,
       5,    1,   57,    2, 0x0a /* Public */,
       5,    0,   60,    2, 0x2a /* Public | MethodCloned */,
       7,    0,   61,    2, 0x0a /* Public */,
       8,    0,   62,    2, 0x0a /* Public */,
       9,    2,   63,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 10,    2,   11,

       0        // eod
};

void FindAndReplaceDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FindAndReplaceDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setFindEnabled(); break;
        case 1: _t->setReplaceEnabled(); break;
        case 2: _t->setReplaceAllEnabled(); break;
        case 3: _t->actionFind((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->actionFind(); break;
        case 5: _t->actionReplace(); break;
        case 6: _t->actionReplaceAll(); break;
        case 7: _t->updateEditor((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FindAndReplaceDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_FindAndReplaceDialog.data,
    qt_meta_data_FindAndReplaceDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FindAndReplaceDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FindAndReplaceDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FindAndReplaceDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int FindAndReplaceDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
