/****************************************************************************
** Meta object code from reading C++ file 'QuickFilter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../QtAV/qml/QmlAV/QuickFilter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QuickFilter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QuickVideoFilter_t {
    QByteArrayData data[17];
    char stringdata0[211];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QuickVideoFilter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QuickVideoFilter_t qt_meta_stringdata_QuickVideoFilter = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QuickVideoFilter"
QT_MOC_LITERAL(1, 17, 15), // "avfilterChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 17), // "userFilterChanged"
QT_MOC_LITERAL(4, 52, 13), // "shaderChanged"
QT_MOC_LITERAL(5, 66, 11), // "typeChanged"
QT_MOC_LITERAL(6, 78, 8), // "avfilter"
QT_MOC_LITERAL(7, 87, 18), // "supportedAVFilters"
QT_MOC_LITERAL(8, 106, 10), // "userFilter"
QT_MOC_LITERAL(9, 117, 12), // "VideoFilter*"
QT_MOC_LITERAL(10, 130, 6), // "shader"
QT_MOC_LITERAL(11, 137, 26), // "QtAV::DynamicShaderObject*"
QT_MOC_LITERAL(12, 164, 4), // "type"
QT_MOC_LITERAL(13, 169, 10), // "FilterType"
QT_MOC_LITERAL(14, 180, 8), // "AVFilter"
QT_MOC_LITERAL(15, 189, 10), // "GLSLFilter"
QT_MOC_LITERAL(16, 200, 10) // "UserFilter"

    },
    "QuickVideoFilter\0avfilterChanged\0\0"
    "userFilterChanged\0shaderChanged\0"
    "typeChanged\0avfilter\0supportedAVFilters\0"
    "userFilter\0VideoFilter*\0shader\0"
    "QtAV::DynamicShaderObject*\0type\0"
    "FilterType\0AVFilter\0GLSLFilter\0"
    "UserFilter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QuickVideoFilter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       5,   38, // properties
       1,   58, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    0,   36,    2, 0x06 /* Public */,
       5,    0,   37,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       6, QMetaType::QString, 0x00495003,
       7, QMetaType::QStringList, 0x00095001,
       8, 0x80000000 | 9, 0x0049510b,
      10, 0x80000000 | 11, 0x0049510b,
      12, 0x80000000 | 13, 0x0049510b,

 // properties: notify_signal_id
       0,
       0,
       1,
       2,
       3,

 // enums: name, flags, count, data
      13, 0x0,    3,   62,

 // enum data: key, value
      14, uint(QuickVideoFilter::AVFilter),
      15, uint(QuickVideoFilter::GLSLFilter),
      16, uint(QuickVideoFilter::UserFilter),

       0        // eod
};

void QuickVideoFilter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QuickVideoFilter *_t = static_cast<QuickVideoFilter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->avfilterChanged(); break;
        case 1: _t->userFilterChanged(); break;
        case 2: _t->shaderChanged(); break;
        case 3: _t->typeChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QuickVideoFilter::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QuickVideoFilter::avfilterChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QuickVideoFilter::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QuickVideoFilter::userFilterChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (QuickVideoFilter::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QuickVideoFilter::shaderChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (QuickVideoFilter::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QuickVideoFilter::typeChanged)) {
                *result = 3;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QtAV::DynamicShaderObject* >(); break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< VideoFilter* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QuickVideoFilter *_t = static_cast<QuickVideoFilter *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->avfilter(); break;
        case 1: *reinterpret_cast< QStringList*>(_v) = _t->supportedAVFilters(); break;
        case 2: *reinterpret_cast< VideoFilter**>(_v) = _t->userFilter(); break;
        case 3: *reinterpret_cast< QtAV::DynamicShaderObject**>(_v) = _t->shader(); break;
        case 4: *reinterpret_cast< FilterType*>(_v) = _t->type(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QuickVideoFilter *_t = static_cast<QuickVideoFilter *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAVFilter(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setUserFilter(*reinterpret_cast< VideoFilter**>(_v)); break;
        case 3: _t->setShader(*reinterpret_cast< QtAV::DynamicShaderObject**>(_v)); break;
        case 4: _t->setType(*reinterpret_cast< FilterType*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QuickVideoFilter::staticMetaObject = {
    { &VideoFilter::staticMetaObject, qt_meta_stringdata_QuickVideoFilter.data,
      qt_meta_data_QuickVideoFilter,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QuickVideoFilter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QuickVideoFilter::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QuickVideoFilter.stringdata0))
        return static_cast<void*>(const_cast< QuickVideoFilter*>(this));
    return VideoFilter::qt_metacast(_clname);
}

int QuickVideoFilter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VideoFilter::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QuickVideoFilter::avfilterChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QuickVideoFilter::userFilterChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void QuickVideoFilter::shaderChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void QuickVideoFilter::typeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
struct qt_meta_stringdata_QuickAudioFilter_t {
    QByteArrayData data[13];
    char stringdata0[152];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QuickAudioFilter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QuickAudioFilter_t qt_meta_stringdata_QuickAudioFilter = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QuickAudioFilter"
QT_MOC_LITERAL(1, 17, 15), // "avfilterChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 17), // "userFilterChanged"
QT_MOC_LITERAL(4, 52, 11), // "typeChanged"
QT_MOC_LITERAL(5, 64, 8), // "avfilter"
QT_MOC_LITERAL(6, 73, 18), // "supportedAVFilters"
QT_MOC_LITERAL(7, 92, 10), // "userFilter"
QT_MOC_LITERAL(8, 103, 12), // "AudioFilter*"
QT_MOC_LITERAL(9, 116, 4), // "type"
QT_MOC_LITERAL(10, 121, 10), // "FilterType"
QT_MOC_LITERAL(11, 132, 8), // "AVFilter"
QT_MOC_LITERAL(12, 141, 10) // "UserFilter"

    },
    "QuickAudioFilter\0avfilterChanged\0\0"
    "userFilterChanged\0typeChanged\0avfilter\0"
    "supportedAVFilters\0userFilter\0"
    "AudioFilter*\0type\0FilterType\0AVFilter\0"
    "UserFilter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QuickAudioFilter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       4,   32, // properties
       1,   48, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,
       4,    0,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       5, QMetaType::QString, 0x00495003,
       6, QMetaType::QStringList, 0x00095001,
       7, 0x80000000 | 8, 0x0049510b,
       9, 0x80000000 | 10, 0x0049510b,

 // properties: notify_signal_id
       0,
       0,
       1,
       2,

 // enums: name, flags, count, data
      10, 0x0,    2,   52,

 // enum data: key, value
      11, uint(QuickAudioFilter::AVFilter),
      12, uint(QuickAudioFilter::UserFilter),

       0        // eod
};

void QuickAudioFilter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QuickAudioFilter *_t = static_cast<QuickAudioFilter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->avfilterChanged(); break;
        case 1: _t->userFilterChanged(); break;
        case 2: _t->typeChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QuickAudioFilter::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QuickAudioFilter::avfilterChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QuickAudioFilter::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QuickAudioFilter::userFilterChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (QuickAudioFilter::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QuickAudioFilter::typeChanged)) {
                *result = 2;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AudioFilter* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QuickAudioFilter *_t = static_cast<QuickAudioFilter *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->avfilter(); break;
        case 1: *reinterpret_cast< QStringList*>(_v) = _t->supportedAVFilters(); break;
        case 2: *reinterpret_cast< AudioFilter**>(_v) = _t->userFilter(); break;
        case 3: *reinterpret_cast< FilterType*>(_v) = _t->type(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QuickAudioFilter *_t = static_cast<QuickAudioFilter *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAVFilter(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setUserFilter(*reinterpret_cast< AudioFilter**>(_v)); break;
        case 3: _t->setType(*reinterpret_cast< FilterType*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QuickAudioFilter::staticMetaObject = {
    { &AudioFilter::staticMetaObject, qt_meta_stringdata_QuickAudioFilter.data,
      qt_meta_data_QuickAudioFilter,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QuickAudioFilter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QuickAudioFilter::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QuickAudioFilter.stringdata0))
        return static_cast<void*>(const_cast< QuickAudioFilter*>(this));
    return AudioFilter::qt_metacast(_clname);
}

int QuickAudioFilter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AudioFilter::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QuickAudioFilter::avfilterChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QuickAudioFilter::userFilterChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void QuickAudioFilter::typeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
