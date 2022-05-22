/****************************************************************************
** Meta object code from reading C++ file 'QuickSubtitleItem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../QtAV/qml/QmlAV/QuickSubtitleItem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QuickSubtitleItem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QuickSubtitleItem_t {
    QByteArrayData data[7];
    char stringdata0[80];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QuickSubtitleItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QuickSubtitleItem_t qt_meta_stringdata_QuickSubtitleItem = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QuickSubtitleItem"
QT_MOC_LITERAL(1, 18, 13), // "sourceChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 15), // "fillModeChanged"
QT_MOC_LITERAL(4, 49, 6), // "source"
QT_MOC_LITERAL(5, 56, 14), // "QuickSubtitle*"
QT_MOC_LITERAL(6, 71, 8) // "fillMode"

    },
    "QuickSubtitleItem\0sourceChanged\0\0"
    "fillModeChanged\0source\0QuickSubtitle*\0"
    "fillMode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QuickSubtitleItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       2,   26, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    0,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       4, 0x80000000 | 5, 0x0049510b,
       6, QMetaType::Int, 0x00495103,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void QuickSubtitleItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QuickSubtitleItem *_t = static_cast<QuickSubtitleItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sourceChanged(); break;
        case 1: _t->fillModeChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QuickSubtitleItem::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QuickSubtitleItem::sourceChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QuickSubtitleItem::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QuickSubtitleItem::fillModeChanged)) {
                *result = 1;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QuickSubtitle* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QuickSubtitleItem *_t = static_cast<QuickSubtitleItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QuickSubtitle**>(_v) = _t->source(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->fillMode(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QuickSubtitleItem *_t = static_cast<QuickSubtitleItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSource(*reinterpret_cast< QuickSubtitle**>(_v)); break;
        case 1: _t->setFillMode(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QuickSubtitleItem::staticMetaObject = {
    { &QQuickItem::staticMetaObject, qt_meta_stringdata_QuickSubtitleItem.data,
      qt_meta_data_QuickSubtitleItem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QuickSubtitleItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QuickSubtitleItem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QuickSubtitleItem.stringdata0))
        return static_cast<void*>(const_cast< QuickSubtitleItem*>(this));
    if (!strcmp(_clname, "QuickSubtitleObserver"))
        return static_cast< QuickSubtitleObserver*>(const_cast< QuickSubtitleItem*>(this));
    return QQuickItem::qt_metacast(_clname);
}

int QuickSubtitleItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QuickSubtitleItem::sourceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QuickSubtitleItem::fillModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
