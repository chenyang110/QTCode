/****************************************************************************
** Meta object code from reading C++ file 'DecoderConfigPage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../QtAV/examples/player/config/DecoderConfigPage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DecoderConfigPage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DecoderConfigPage_t {
    QByteArrayData data[10];
    char stringdata0[138];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DecoderConfigPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DecoderConfigPage_t qt_meta_stringdata_DecoderConfigPage = {
    {
QT_MOC_LITERAL(0, 0, 17), // "DecoderConfigPage"
QT_MOC_LITERAL(1, 18, 25), // "videoDecoderEnableChanged"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 10), // "priorityUp"
QT_MOC_LITERAL(4, 56, 12), // "priorityDown"
QT_MOC_LITERAL(5, 69, 13), // "onDecSelected"
QT_MOC_LITERAL(6, 83, 18), // "DecoderItemWidget*"
QT_MOC_LITERAL(7, 102, 2), // "iw"
QT_MOC_LITERAL(8, 105, 16), // "updateDecodersUi"
QT_MOC_LITERAL(9, 122, 15) // "onConfigChanged"

    },
    "DecoderConfigPage\0videoDecoderEnableChanged\0"
    "\0priorityUp\0priorityDown\0onDecSelected\0"
    "DecoderItemWidget*\0iw\0updateDecodersUi\0"
    "onConfigChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DecoderConfigPage[] = {

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
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    1,   47,    2, 0x08 /* Private */,
       8,    0,   50,    2, 0x08 /* Private */,
       9,    0,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DecoderConfigPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DecoderConfigPage *_t = static_cast<DecoderConfigPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->videoDecoderEnableChanged(); break;
        case 1: _t->priorityUp(); break;
        case 2: _t->priorityDown(); break;
        case 3: _t->onDecSelected((*reinterpret_cast< DecoderItemWidget*(*)>(_a[1]))); break;
        case 4: _t->updateDecodersUi(); break;
        case 5: _t->onConfigChanged(); break;
        default: ;
        }
    }
}

const QMetaObject DecoderConfigPage::staticMetaObject = {
    { &ConfigPageBase::staticMetaObject, qt_meta_stringdata_DecoderConfigPage.data,
      qt_meta_data_DecoderConfigPage,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DecoderConfigPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DecoderConfigPage::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DecoderConfigPage.stringdata0))
        return static_cast<void*>(const_cast< DecoderConfigPage*>(this));
    return ConfigPageBase::qt_metacast(_clname);
}

int DecoderConfigPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ConfigPageBase::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
