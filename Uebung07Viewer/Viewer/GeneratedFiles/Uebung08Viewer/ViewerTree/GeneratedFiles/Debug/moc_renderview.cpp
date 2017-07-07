/****************************************************************************
** Meta object code from reading C++ file 'renderview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../renderview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'renderview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RenderView_t {
    QByteArrayData data[9];
    char stringdata0[92];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RenderView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RenderView_t qt_meta_stringdata_RenderView = {
    {
QT_MOC_LITERAL(0, 0, 10), // "RenderView"
QT_MOC_LITERAL(1, 11, 11), // "showTrafo6j"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 7), // "visible"
QT_MOC_LITERAL(4, 32, 11), // "showTrafo6k"
QT_MOC_LITERAL(5, 44, 11), // "showTrafo6l"
QT_MOC_LITERAL(6, 56, 11), // "showTrafo6m"
QT_MOC_LITERAL(7, 68, 11), // "showTrafo7b"
QT_MOC_LITERAL(8, 80, 11) // "showTrafo7c"

    },
    "RenderView\0showTrafo6j\0\0visible\0"
    "showTrafo6k\0showTrafo6l\0showTrafo6m\0"
    "showTrafo7b\0showTrafo7c"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RenderView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x09 /* Protected */,
       4,    1,   47,    2, 0x09 /* Protected */,
       5,    1,   50,    2, 0x09 /* Protected */,
       6,    1,   53,    2, 0x09 /* Protected */,
       7,    1,   56,    2, 0x09 /* Protected */,
       8,    1,   59,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,

       0        // eod
};

void RenderView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RenderView *_t = static_cast<RenderView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showTrafo6j((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->showTrafo6k((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->showTrafo6l((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->showTrafo6m((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->showTrafo7b((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->showTrafo7c((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject RenderView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_RenderView.data,
      qt_meta_data_RenderView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *RenderView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RenderView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_RenderView.stringdata0))
        return static_cast<void*>(const_cast< RenderView*>(this));
    return QWidget::qt_metacast(_clname);
}

int RenderView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
