/****************************************************************************
** Meta object code from reading C++ file 'playerwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../QtAV/examples/simpleplayer/playerwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'playerwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PlayerWindow_t {
    QByteArrayData data[8];
    char stringdata0[83];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PlayerWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PlayerWindow_t qt_meta_stringdata_PlayerWindow = {
    {
QT_MOC_LITERAL(0, 0, 12), // "PlayerWindow"
QT_MOC_LITERAL(1, 13, 9), // "openMedia"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 12), // "seekBySlider"
QT_MOC_LITERAL(4, 37, 5), // "value"
QT_MOC_LITERAL(5, 43, 9), // "playPause"
QT_MOC_LITERAL(6, 53, 12), // "updateSlider"
QT_MOC_LITERAL(7, 66, 16) // "updateSliderUnit"

    },
    "PlayerWindow\0openMedia\0\0seekBySlider\0"
    "value\0playPause\0updateSlider\0"
    "updateSliderUnit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlayerWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x0a /* Public */,
       3,    1,   50,    2, 0x0a /* Public */,
       3,    0,   53,    2, 0x0a /* Public */,
       5,    0,   54,    2, 0x0a /* Public */,
       6,    1,   55,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PlayerWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PlayerWindow *_t = static_cast<PlayerWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->openMedia(); break;
        case 1: _t->seekBySlider((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->seekBySlider(); break;
        case 3: _t->playPause(); break;
        case 4: _t->updateSlider((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 5: _t->updateSlider(); break;
        case 6: _t->updateSliderUnit(); break;
        default: ;
        }
    }
}

const QMetaObject PlayerWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PlayerWindow.data,
      qt_meta_data_PlayerWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PlayerWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlayerWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PlayerWindow.stringdata0))
        return static_cast<void*>(const_cast< PlayerWindow*>(this));
    return QWidget::qt_metacast(_clname);
}

int PlayerWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
