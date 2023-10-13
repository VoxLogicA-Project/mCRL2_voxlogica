/****************************************************************************
** Meta object code from reading C++ file 'propertywidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../tools/release/mcrl2ide/propertywidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'propertywidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PropertyWidget_t {
    QByteArrayData data[17];
    char stringdata0[238];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PropertyWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PropertyWidget_t qt_meta_stringdata_PropertyWidget = {
    {
QT_MOC_LITERAL(0, 0, 14), // "PropertyWidget"
QT_MOC_LITERAL(1, 15, 8), // "deleteMe"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 15), // "PropertyWidget*"
QT_MOC_LITERAL(4, 41, 10), // "thisWidget"
QT_MOC_LITERAL(5, 52, 12), // "actionVerify"
QT_MOC_LITERAL(6, 65, 18), // "actionVerifyResult"
QT_MOC_LITERAL(7, 84, 9), // "processid"
QT_MOC_LITERAL(8, 94, 18), // "actionShowEvidence"
QT_MOC_LITERAL(9, 113, 24), // "actionShowEvidenceResult"
QT_MOC_LITERAL(10, 138, 23), // "actionAbortVerification"
QT_MOC_LITERAL(11, 162, 10), // "actionEdit"
QT_MOC_LITERAL(12, 173, 14), // "updateProperty"
QT_MOC_LITERAL(13, 188, 15), // "oldPropertyName"
QT_MOC_LITERAL(14, 204, 8), // "Property"
QT_MOC_LITERAL(15, 213, 11), // "newProperty"
QT_MOC_LITERAL(16, 225, 12) // "actionDelete"

    },
    "PropertyWidget\0deleteMe\0\0PropertyWidget*\0"
    "thisWidget\0actionVerify\0actionVerifyResult\0"
    "processid\0actionShowEvidence\0"
    "actionShowEvidenceResult\0"
    "actionAbortVerification\0actionEdit\0"
    "updateProperty\0oldPropertyName\0Property\0"
    "newProperty\0actionDelete"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PropertyWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   62,    2, 0x0a /* Public */,
       6,    1,   63,    2, 0x0a /* Public */,
       8,    0,   66,    2, 0x0a /* Public */,
       9,    1,   67,    2, 0x0a /* Public */,
      10,    0,   70,    2, 0x0a /* Public */,
      11,    0,   71,    2, 0x0a /* Public */,
      12,    2,   72,    2, 0x0a /* Public */,
      16,    0,   77,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 14,   13,   15,
    QMetaType::Void,

       0        // eod
};

void PropertyWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PropertyWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->deleteMe((*reinterpret_cast< PropertyWidget*(*)>(_a[1]))); break;
        case 1: _t->actionVerify(); break;
        case 2: _t->actionVerifyResult((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->actionShowEvidence(); break;
        case 4: _t->actionShowEvidenceResult((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->actionAbortVerification(); break;
        case 6: _t->actionEdit(); break;
        case 7: _t->updateProperty((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const Property(*)>(_a[2]))); break;
        case 8: _t->actionDelete(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PropertyWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PropertyWidget::*)(PropertyWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PropertyWidget::deleteMe)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PropertyWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_PropertyWidget.data,
    qt_meta_data_PropertyWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PropertyWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PropertyWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PropertyWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int PropertyWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void PropertyWidget::deleteMe(PropertyWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
