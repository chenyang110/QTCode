/****************************************************************************
** Meta object code from reading C++ file 'VideoPreviewWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../QtAV/widgets/QtAVWidgets/VideoPreviewWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VideoPreviewWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QtAV__VideoPreviewWidget_t {
    QByteArrayData data[11];
    char stringdata0[133];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtAV__VideoPreviewWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtAV__VideoPreviewWidget_t qt_meta_stringdata_QtAV__VideoPreviewWidget = {
    {
QT_MOC_LITERAL(0, 0, 24), // "QtAV::VideoPreviewWidget"
QT_MOC_LITERAL(1, 25, 16), // "timestampChanged"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 11), // "fileChanged"
QT_MOC_LITERAL(4, 55, 8), // "gotError"
QT_MOC_LITERAL(5, 64, 8), // "gotAbort"
QT_MOC_LITERAL(6, 73, 8), // "gotFrame"
QT_MOC_LITERAL(7, 82, 16), // "QtAV::VideoFrame"
QT_MOC_LITERAL(8, 99, 5), // "frame"
QT_MOC_LITERAL(9, 105, 12), // "displayFrame"
QT_MOC_LITERAL(10, 118, 14) // "displayNoFrame"

    },
    "QtAV::VideoPreviewWidget\0timestampChanged\0"
    "\0fileChanged\0gotError\0gotAbort\0gotFrame\0"
    "QtAV::VideoFrame\0frame\0displayFrame\0"
    "displayNoFrame"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtAV__VideoPreviewWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    1,   51,    2, 0x06 /* Public */,
       5,    1,   54,    2, 0x06 /* Public */,
       6,    1,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   60,    2, 0x0a /* Public */,
      10,    0,   63,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 7,    8,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,

       0        // eod
};

void QtAV::VideoPreviewWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VideoPreviewWidget *_t = static_cast<VideoPreviewWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->timestampChanged(); break;
        case 1: _t->fileChanged(); break;
        case 2: _t->gotError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->gotAbort((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->gotFrame((*reinterpret_cast< const QtAV::VideoFrame(*)>(_a[1]))); break;
        case 5: _t->displayFrame((*reinterpret_cast< const QtAV::VideoFrame(*)>(_a[1]))); break;
        case 6: _t->displayNoFrame(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QtAV::VideoFrame >(); break;
            }
            break;
        case 5:
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
            typedef void (VideoPreviewWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VideoPreviewWidget::timestampChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (VideoPreviewWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VideoPreviewWidget::fileChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (VideoPreviewWidget::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VideoPreviewWidget::gotError)) {
                *result = 2;
            }
        }
        {
            typedef void (VideoPreviewWidget::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VideoPreviewWidget::gotAbort)) {
                *result = 3;
            }
        }
        {
            typedef void (VideoPreviewWidget::*_t)(const QtAV::VideoFrame & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VideoPreviewWidget::gotFrame)) {
                *result = 4;
            }
        }
    }
}

const QMetaObject QtAV::VideoPreviewWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QtAV__VideoPreviewWidget.data,
      qt_meta_data_QtAV__VideoPreviewWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QtAV::VideoPreviewWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtAV::VideoPreviewWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QtAV__VideoPreviewWidget.stringdata0))
        return static_cast<void*>(const_cast< VideoPreviewWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int QtAV::VideoPreviewWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void QtAV::VideoPreviewWidget::timestampChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QtAV::VideoPreviewWidget::fileChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void QtAV::VideoPreviewWidget::gotError(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QtAV::VideoPreviewWidget::gotAbort(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QtAV::VideoPreviewWidget::gotFrame(const QtAV::VideoFrame & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
