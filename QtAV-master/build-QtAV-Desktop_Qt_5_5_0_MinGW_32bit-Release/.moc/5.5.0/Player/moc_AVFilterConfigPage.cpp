/****************************************************************************
** Meta object code from reading C++ file 'AVFilterConfigPage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../QtAV/examples/player/config/AVFilterConfigPage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AVFilterConfigPage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AVFilterConfigPage_t {
    QByteArrayData data[5];
    char stringdata0[63];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AVFilterConfigPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AVFilterConfigPage_t qt_meta_stringdata_AVFilterConfigPage = {
    {
QT_MOC_LITERAL(0, 0, 18), // "AVFilterConfigPage"
QT_MOC_LITERAL(1, 19, 18), // "audioFilterChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 4), // "name"
QT_MOC_LITERAL(4, 44, 18) // "videoFilterChanged"

    },
    "AVFilterConfigPage\0audioFilterChanged\0"
    "\0name\0videoFilterChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AVFilterConfigPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x08 /* Private */,
       4,    1,   27,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void AVFilterConfigPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AVFilterConfigPage *_t = static_cast<AVFilterConfigPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->audioFilterChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->videoFilterChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject AVFilterConfigPage::staticMetaObject = {
    { &ConfigPageBase::staticMetaObject, qt_meta_stringdata_AVFilterConfigPage.data,
      qt_meta_data_AVFilterConfigPage,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AVFilterConfigPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AVFilterConfigPage::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AVFilterConfigPage.stringdata0))
        return static_cast<void*>(const_cast< AVFilterConfigPage*>(this));
    return ConfigPageBase::qt_metacast(_clname);
}

int AVFilterConfigPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ConfigPageBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
