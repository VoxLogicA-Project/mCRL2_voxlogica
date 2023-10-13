/****************************************************************************
** Meta object code from reading C++ file 'codeeditor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../libraries/gui/include/mcrl2/gui/codeeditor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'codeeditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mcrl2__gui__qt__CodeHighlighter_t {
    QByteArrayData data[1];
    char stringdata0[32];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mcrl2__gui__qt__CodeHighlighter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mcrl2__gui__qt__CodeHighlighter_t qt_meta_stringdata_mcrl2__gui__qt__CodeHighlighter = {
    {
QT_MOC_LITERAL(0, 0, 31) // "mcrl2::gui::qt::CodeHighlighter"

    },
    "mcrl2::gui::qt::CodeHighlighter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mcrl2__gui__qt__CodeHighlighter[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void mcrl2::gui::qt::CodeHighlighter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject mcrl2::gui::qt::CodeHighlighter::staticMetaObject = { {
    QMetaObject::SuperData::link<QSyntaxHighlighter::staticMetaObject>(),
    qt_meta_stringdata_mcrl2__gui__qt__CodeHighlighter.data,
    qt_meta_data_mcrl2__gui__qt__CodeHighlighter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mcrl2::gui::qt::CodeHighlighter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mcrl2::gui::qt::CodeHighlighter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mcrl2__gui__qt__CodeHighlighter.stringdata0))
        return static_cast<void*>(this);
    return QSyntaxHighlighter::qt_metacast(_clname);
}

int mcrl2::gui::qt::CodeHighlighter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSyntaxHighlighter::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_mcrl2__gui__qt__CodeEditor_t {
    QByteArrayData data[12];
    char stringdata0[140];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mcrl2__gui__qt__CodeEditor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mcrl2__gui__qt__CodeEditor_t qt_meta_stringdata_mcrl2__gui__qt__CodeEditor = {
    {
QT_MOC_LITERAL(0, 0, 26), // "mcrl2::gui::qt::CodeEditor"
QT_MOC_LITERAL(1, 27, 10), // "deleteChar"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 6), // "zoomIn"
QT_MOC_LITERAL(4, 46, 5), // "range"
QT_MOC_LITERAL(5, 52, 7), // "zoomOut"
QT_MOC_LITERAL(6, 60, 15), // "showContextMenu"
QT_MOC_LITERAL(7, 76, 8), // "position"
QT_MOC_LITERAL(8, 85, 25), // "updateLineNumberAreaWidth"
QT_MOC_LITERAL(9, 111, 20), // "updateLineNumberArea"
QT_MOC_LITERAL(10, 132, 4), // "rect"
QT_MOC_LITERAL(11, 137, 2) // "dy"

    },
    "mcrl2::gui::qt::CodeEditor\0deleteChar\0"
    "\0zoomIn\0range\0zoomOut\0showContextMenu\0"
    "position\0updateLineNumberAreaWidth\0"
    "updateLineNumberArea\0rect\0dy"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mcrl2__gui__qt__CodeEditor[] = {

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
       3,    1,   55,    2, 0x0a /* Public */,
       3,    0,   58,    2, 0x2a /* Public | MethodCloned */,
       5,    1,   59,    2, 0x0a /* Public */,
       5,    0,   62,    2, 0x2a /* Public | MethodCloned */,
       6,    1,   63,    2, 0x08 /* Private */,
       8,    1,   66,    2, 0x08 /* Private */,
       9,    2,   69,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    7,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QRect, QMetaType::Int,   10,   11,

       0        // eod
};

void mcrl2::gui::qt::CodeEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CodeEditor *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->deleteChar(); break;
        case 1: _t->zoomIn((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->zoomIn(); break;
        case 3: _t->zoomOut((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->zoomOut(); break;
        case 5: _t->showContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 6: _t->updateLineNumberAreaWidth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->updateLineNumberArea((*reinterpret_cast< const QRect(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject mcrl2::gui::qt::CodeEditor::staticMetaObject = { {
    QMetaObject::SuperData::link<QPlainTextEdit::staticMetaObject>(),
    qt_meta_stringdata_mcrl2__gui__qt__CodeEditor.data,
    qt_meta_data_mcrl2__gui__qt__CodeEditor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mcrl2::gui::qt::CodeEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mcrl2::gui::qt::CodeEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mcrl2__gui__qt__CodeEditor.stringdata0))
        return static_cast<void*>(this);
    return QPlainTextEdit::qt_metacast(_clname);
}

int mcrl2::gui::qt::CodeEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPlainTextEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
