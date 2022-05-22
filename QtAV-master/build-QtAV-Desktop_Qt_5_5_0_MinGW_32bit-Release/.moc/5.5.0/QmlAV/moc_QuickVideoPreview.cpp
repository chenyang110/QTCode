/****************************************************************************
** Meta object code from reading C++ file 'QuickVideoPreview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../QtAV/qml/QmlAV/QuickVideoPreview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QuickVideoPreview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QtAV__QuickVideoPreview_t {
    QByteArrayData data[10];
    char stringdata0[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtAV__QuickVideoPreview_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtAV__QuickVideoPreview_t qt_meta_stringdata_QtAV__QuickVideoPreview = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QtAV::QuickVideoPreview"
QT_MOC_LITERAL(1, 24, 16), // "timestampChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 11), // "fileChanged"
QT_MOC_LITERAL(4, 54, 12), // "displayFrame"
QT_MOC_LITERAL(5, 67, 16), // "QtAV::VideoFrame"
QT_MOC_LITERAL(6, 84, 5), // "frame"
QT_MOC_LITERAL(7, 90, 14), // "displayNoFrame"
QT_MOC_LITERAL(8, 105, 9), // "timestamp"
QT_MOC_LITERAL(9, 115, 4) // "file"

    },
    "QtAV::QuickVideoPreview\0timestampChanged\0"
    "\0fileChanged\0displayFrame\0QtAV::VideoFrame\0"
    "frame\0displayNoFrame\0timestamp\0file"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtAV__QuickVideoPreview[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       2,   40, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   36,    2, 0x08 /* Private */,
       7,    0,   39,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,

 // properties: name, type, flags
       8, QMetaType::Int, 0x00495103,
       9, QMetaType::QUrl, 0x00495103,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void QtAV::QuickVideoPreview::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QuickVideoPreview *_t = static_cast<QuickVideoPreview *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->timestampChanged(); break;
        case 1: _t->fileChanged(); break;
        case 2: _t->displayFrame((*reinterpret_cast< const QtAV::VideoFrame(*)>(_a[1]))); break;
        case 3: _t->displayNoFrame(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QtAV::VideoFrame >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QuickVideoPreview::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QuickVideoPreview::timestampChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QuickVideoPreview::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QuickVideoPreview::fileChanged)) {
                *result = 1;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QuickVideoPreview *_t = static_cast<QuickVideoPreview *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->timestamp(); break;
        case 1: *reinterpret_cast< QUrl*>(_v) = _t->file(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QuickVideoPreview *_t = static_cast<QuickVideoPreview *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTimestamp(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setFile(*reinterpret_cast< QUrl*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QtAV::QuickVideoPreview::staticMetaObject = {
    { &BaseQuickRenderer::staticMetaObject, qt_meta_stringdata_QtAV__QuickVideoPreview.data,
      qt_meta_data_QtAV__QuickVideoPreview,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QtAV::QuickVideoPreview::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtAV::QuickVideoPreview::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QtAV__QuickVideoPreview.stringdata0))
        return static_cast<void*>(const_cast< QuickVideoPreview*>(this));
    return BaseQuickRenderer::qt_metacast(_clname);
}

int QtAV::QuickVideoPreview::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseQuickRenderer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
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
void QtAV::QuickVideoPreview::timestampChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QtAV::QuickVideoPreview::fileChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
