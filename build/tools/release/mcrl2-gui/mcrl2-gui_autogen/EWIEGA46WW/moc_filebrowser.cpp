/****************************************************************************
** Meta object code from reading C++ file 'filebrowser.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../tools/release/mcrl2-gui/filebrowser.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filebrowser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FileBrowser_t {
    QByteArrayData data[19];
    char stringdata0[236];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FileBrowser_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FileBrowser_t qt_meta_stringdata_FileBrowser = {
    {
QT_MOC_LITERAL(0, 0, 11), // "FileBrowser"
QT_MOC_LITERAL(1, 12, 16), // "openToolInstance"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 8), // "filename"
QT_MOC_LITERAL(4, 39, 15), // "ToolInformation"
QT_MOC_LITERAL(5, 55, 4), // "tool"
QT_MOC_LITERAL(6, 60, 14), // "openProperties"
QT_MOC_LITERAL(7, 75, 14), // "onToolSelected"
QT_MOC_LITERAL(8, 90, 17), // "onRemoveRequested"
QT_MOC_LITERAL(9, 108, 9), // "onNewFile"
QT_MOC_LITERAL(10, 118, 11), // "onNewFolder"
QT_MOC_LITERAL(11, 130, 11), // "onOpenFiles"
QT_MOC_LITERAL(12, 142, 13), // "onDeleteFiles"
QT_MOC_LITERAL(13, 156, 10), // "onCutFiles"
QT_MOC_LITERAL(14, 167, 11), // "onCopyFiles"
QT_MOC_LITERAL(15, 179, 12), // "onPasteFiles"
QT_MOC_LITERAL(16, 192, 12), // "onRenameFile"
QT_MOC_LITERAL(17, 205, 16), // "onFileProperties"
QT_MOC_LITERAL(18, 222, 13) // "onContextMenu"

    },
    "FileBrowser\0openToolInstance\0\0filename\0"
    "ToolInformation\0tool\0openProperties\0"
    "onToolSelected\0onRemoveRequested\0"
    "onNewFile\0onNewFolder\0onOpenFiles\0"
    "onDeleteFiles\0onCutFiles\0onCopyFiles\0"
    "onPasteFiles\0onRenameFile\0onFileProperties\0"
    "onContextMenu"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileBrowser[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   89,    2, 0x06 /* Public */,
       6,    1,   94,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   97,    2, 0x0a /* Public */,
       8,    1,   98,    2, 0x0a /* Public */,
       8,    0,  101,    2, 0x2a /* Public | MethodCloned */,
       9,    0,  102,    2, 0x09 /* Protected */,
      10,    0,  103,    2, 0x09 /* Protected */,
      11,    0,  104,    2, 0x09 /* Protected */,
      12,    0,  105,    2, 0x09 /* Protected */,
      13,    0,  106,    2, 0x09 /* Protected */,
      14,    0,  107,    2, 0x09 /* Protected */,
      15,    0,  108,    2, 0x09 /* Protected */,
      16,    0,  109,    2, 0x09 /* Protected */,
      17,    0,  110,    2, 0x09 /* Protected */,
      18,    0,  111,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FileBrowser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FileBrowser *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->openToolInstance((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< ToolInformation(*)>(_a[2]))); break;
        case 1: _t->openProperties((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->onToolSelected(); break;
        case 3: _t->onRemoveRequested((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->onRemoveRequested(); break;
        case 5: _t->onNewFile(); break;
        case 6: _t->onNewFolder(); break;
        case 7: _t->onOpenFiles(); break;
        case 8: _t->onDeleteFiles(); break;
        case 9: _t->onCutFiles(); break;
        case 10: _t->onCopyFiles(); break;
        case 11: _t->onPasteFiles(); break;
        case 12: _t->onRenameFile(); break;
        case 13: _t->onFileProperties(); break;
        case 14: _t->onContextMenu(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FileBrowser::*)(QString , ToolInformation );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileBrowser::openToolInstance)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FileBrowser::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileBrowser::openProperties)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FileBrowser::staticMetaObject = { {
    QMetaObject::SuperData::link<QTreeView::staticMetaObject>(),
    qt_meta_stringdata_FileBrowser.data,
    qt_meta_data_FileBrowser,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FileBrowser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileBrowser::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FileBrowser.stringdata0))
        return static_cast<void*>(this);
    return QTreeView::qt_metacast(_clname);
}

int FileBrowser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void FileBrowser::openToolInstance(QString _t1, ToolInformation _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FileBrowser::openProperties(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
