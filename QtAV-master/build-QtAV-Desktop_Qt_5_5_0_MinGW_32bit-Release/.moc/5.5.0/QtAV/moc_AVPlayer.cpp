/****************************************************************************
** Meta object code from reading C++ file 'AVPlayer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../QtAV/src/QtAV/AVPlayer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AVPlayer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QtAV__AVPlayer_t {
    QByteArrayData data[141];
    char stringdata0[1845];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtAV__AVPlayer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtAV__AVPlayer_t qt_meta_stringdata_QtAV__AVPlayer = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QtAV::AVPlayer"
QT_MOC_LITERAL(1, 15, 21), // "bufferProgressChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 23), // "relativeTimeModeChanged"
QT_MOC_LITERAL(4, 62, 15), // "autoLoadChanged"
QT_MOC_LITERAL(5, 78, 16), // "asyncLoadChanged"
QT_MOC_LITERAL(6, 95, 11), // "muteChanged"
QT_MOC_LITERAL(7, 107, 13), // "sourceChanged"
QT_MOC_LITERAL(8, 121, 6), // "loaded"
QT_MOC_LITERAL(9, 128, 18), // "mediaStatusChanged"
QT_MOC_LITERAL(10, 147, 17), // "QtAV::MediaStatus"
QT_MOC_LITERAL(11, 165, 6), // "status"
QT_MOC_LITERAL(12, 172, 21), // "mediaEndActionChanged"
QT_MOC_LITERAL(13, 194, 20), // "QtAV::MediaEndAction"
QT_MOC_LITERAL(14, 215, 6), // "action"
QT_MOC_LITERAL(15, 222, 15), // "durationChanged"
QT_MOC_LITERAL(16, 238, 5), // "error"
QT_MOC_LITERAL(17, 244, 13), // "QtAV::AVError"
QT_MOC_LITERAL(18, 258, 1), // "e"
QT_MOC_LITERAL(19, 260, 6), // "paused"
QT_MOC_LITERAL(20, 267, 1), // "p"
QT_MOC_LITERAL(21, 269, 7), // "started"
QT_MOC_LITERAL(22, 277, 7), // "stopped"
QT_MOC_LITERAL(23, 285, 9), // "stoppedAt"
QT_MOC_LITERAL(24, 295, 8), // "position"
QT_MOC_LITERAL(25, 304, 12), // "stateChanged"
QT_MOC_LITERAL(26, 317, 21), // "QtAV::AVPlayer::State"
QT_MOC_LITERAL(27, 339, 5), // "state"
QT_MOC_LITERAL(28, 345, 12), // "speedChanged"
QT_MOC_LITERAL(29, 358, 5), // "speed"
QT_MOC_LITERAL(30, 364, 13), // "repeatChanged"
QT_MOC_LITERAL(31, 378, 1), // "r"
QT_MOC_LITERAL(32, 380, 20), // "currentRepeatChanged"
QT_MOC_LITERAL(33, 401, 20), // "startPositionChanged"
QT_MOC_LITERAL(34, 422, 19), // "stopPositionChanged"
QT_MOC_LITERAL(35, 442, 15), // "seekableChanged"
QT_MOC_LITERAL(36, 458, 12), // "seekFinished"
QT_MOC_LITERAL(37, 471, 12), // "stepFinished"
QT_MOC_LITERAL(38, 484, 15), // "positionChanged"
QT_MOC_LITERAL(39, 500, 23), // "interruptTimeoutChanged"
QT_MOC_LITERAL(40, 524, 25), // "interruptOnTimeoutChanged"
QT_MOC_LITERAL(41, 550, 21), // "notifyIntervalChanged"
QT_MOC_LITERAL(42, 572, 17), // "brightnessChanged"
QT_MOC_LITERAL(43, 590, 3), // "val"
QT_MOC_LITERAL(44, 594, 15), // "contrastChanged"
QT_MOC_LITERAL(45, 610, 10), // "hueChanged"
QT_MOC_LITERAL(46, 621, 17), // "saturationChanged"
QT_MOC_LITERAL(47, 639, 15), // "chaptersChanged"
QT_MOC_LITERAL(48, 655, 21), // "subtitleStreamChanged"
QT_MOC_LITERAL(49, 677, 5), // "value"
QT_MOC_LITERAL(50, 683, 26), // "internalAudioTracksChanged"
QT_MOC_LITERAL(51, 710, 6), // "tracks"
QT_MOC_LITERAL(52, 717, 26), // "internalVideoTracksChanged"
QT_MOC_LITERAL(53, 744, 26), // "externalAudioTracksChanged"
QT_MOC_LITERAL(54, 771, 29), // "internalSubtitleTracksChanged"
QT_MOC_LITERAL(55, 801, 26), // "internalSubtitleHeaderRead"
QT_MOC_LITERAL(56, 828, 5), // "codec"
QT_MOC_LITERAL(57, 834, 4), // "data"
QT_MOC_LITERAL(58, 839, 26), // "internalSubtitlePacketRead"
QT_MOC_LITERAL(59, 866, 5), // "track"
QT_MOC_LITERAL(60, 872, 12), // "QtAV::Packet"
QT_MOC_LITERAL(61, 885, 6), // "packet"
QT_MOC_LITERAL(62, 892, 4), // "load"
QT_MOC_LITERAL(63, 897, 11), // "togglePause"
QT_MOC_LITERAL(64, 909, 5), // "pause"
QT_MOC_LITERAL(65, 915, 4), // "play"
QT_MOC_LITERAL(66, 920, 4), // "stop"
QT_MOC_LITERAL(67, 925, 11), // "stepForward"
QT_MOC_LITERAL(68, 937, 12), // "stepBackward"
QT_MOC_LITERAL(69, 950, 19), // "setRelativeTimeMode"
QT_MOC_LITERAL(70, 970, 9), // "setRepeat"
QT_MOC_LITERAL(71, 980, 3), // "max"
QT_MOC_LITERAL(72, 984, 16), // "setStartPosition"
QT_MOC_LITERAL(73, 1001, 3), // "pos"
QT_MOC_LITERAL(74, 1005, 15), // "setStopPosition"
QT_MOC_LITERAL(75, 1021, 12), // "setTimeRange"
QT_MOC_LITERAL(76, 1034, 5), // "start"
QT_MOC_LITERAL(77, 1040, 10), // "isSeekable"
QT_MOC_LITERAL(78, 1051, 11), // "setPosition"
QT_MOC_LITERAL(79, 1063, 4), // "seek"
QT_MOC_LITERAL(80, 1068, 11), // "seekForward"
QT_MOC_LITERAL(81, 1080, 12), // "seekBackward"
QT_MOC_LITERAL(82, 1093, 15), // "seekNextChapter"
QT_MOC_LITERAL(83, 1109, 19), // "seekPreviousChapter"
QT_MOC_LITERAL(84, 1129, 11), // "setSeekType"
QT_MOC_LITERAL(85, 1141, 8), // "SeekType"
QT_MOC_LITERAL(86, 1150, 4), // "type"
QT_MOC_LITERAL(87, 1155, 8), // "seekType"
QT_MOC_LITERAL(88, 1164, 14), // "bufferProgress"
QT_MOC_LITERAL(89, 1179, 11), // "bufferSpeed"
QT_MOC_LITERAL(90, 1191, 8), // "buffered"
QT_MOC_LITERAL(91, 1200, 13), // "setBufferMode"
QT_MOC_LITERAL(92, 1214, 10), // "BufferMode"
QT_MOC_LITERAL(93, 1225, 4), // "mode"
QT_MOC_LITERAL(94, 1230, 10), // "bufferMode"
QT_MOC_LITERAL(95, 1241, 14), // "setBufferValue"
QT_MOC_LITERAL(96, 1256, 11), // "bufferValue"
QT_MOC_LITERAL(97, 1268, 17), // "setNotifyInterval"
QT_MOC_LITERAL(98, 1286, 4), // "msec"
QT_MOC_LITERAL(99, 1291, 14), // "notifyInterval"
QT_MOC_LITERAL(100, 1306, 11), // "updateClock"
QT_MOC_LITERAL(101, 1318, 5), // "msecs"
QT_MOC_LITERAL(102, 1324, 13), // "setBrightness"
QT_MOC_LITERAL(103, 1338, 11), // "setContrast"
QT_MOC_LITERAL(104, 1350, 6), // "setHue"
QT_MOC_LITERAL(105, 1357, 13), // "setSaturation"
QT_MOC_LITERAL(106, 1371, 12), // "loadInternal"
QT_MOC_LITERAL(107, 1384, 12), // "playInternal"
QT_MOC_LITERAL(108, 1397, 21), // "stopFromDemuxerThread"
QT_MOC_LITERAL(109, 1419, 14), // "aboutToQuitApp"
QT_MOC_LITERAL(110, 1434, 16), // "startNotifyTimer"
QT_MOC_LITERAL(111, 1451, 15), // "stopNotifyTimer"
QT_MOC_LITERAL(112, 1467, 9), // "onStarted"
QT_MOC_LITERAL(113, 1477, 17), // "updateMediaStatus"
QT_MOC_LITERAL(114, 1495, 30), // "onMediaEndActionPauseTriggered"
QT_MOC_LITERAL(115, 1526, 14), // "onSeekFinished"
QT_MOC_LITERAL(116, 1541, 14), // "onStepFinished"
QT_MOC_LITERAL(117, 1556, 22), // "tryClearVideoRenderers"
QT_MOC_LITERAL(118, 1579, 11), // "seekChapter"
QT_MOC_LITERAL(119, 1591, 4), // "incr"
QT_MOC_LITERAL(120, 1596, 16), // "relativeTimeMode"
QT_MOC_LITERAL(121, 1613, 8), // "autoLoad"
QT_MOC_LITERAL(122, 1622, 9), // "asyncLoad"
QT_MOC_LITERAL(123, 1632, 8), // "seekable"
QT_MOC_LITERAL(124, 1641, 8), // "duration"
QT_MOC_LITERAL(125, 1650, 13), // "startPosition"
QT_MOC_LITERAL(126, 1664, 12), // "stopPosition"
QT_MOC_LITERAL(127, 1677, 6), // "repeat"
QT_MOC_LITERAL(128, 1684, 13), // "currentRepeat"
QT_MOC_LITERAL(129, 1698, 16), // "interruptTimeout"
QT_MOC_LITERAL(130, 1715, 18), // "interruptOnTimeout"
QT_MOC_LITERAL(131, 1734, 10), // "brightness"
QT_MOC_LITERAL(132, 1745, 8), // "contrast"
QT_MOC_LITERAL(133, 1754, 10), // "saturation"
QT_MOC_LITERAL(134, 1765, 5), // "State"
QT_MOC_LITERAL(135, 1771, 11), // "mediaStatus"
QT_MOC_LITERAL(136, 1783, 14), // "mediaEndAction"
QT_MOC_LITERAL(137, 1798, 8), // "chapters"
QT_MOC_LITERAL(138, 1807, 12), // "StoppedState"
QT_MOC_LITERAL(139, 1820, 12), // "PlayingState"
QT_MOC_LITERAL(140, 1833, 11) // "PausedState"

    },
    "QtAV::AVPlayer\0bufferProgressChanged\0"
    "\0relativeTimeModeChanged\0autoLoadChanged\0"
    "asyncLoadChanged\0muteChanged\0sourceChanged\0"
    "loaded\0mediaStatusChanged\0QtAV::MediaStatus\0"
    "status\0mediaEndActionChanged\0"
    "QtAV::MediaEndAction\0action\0durationChanged\0"
    "error\0QtAV::AVError\0e\0paused\0p\0started\0"
    "stopped\0stoppedAt\0position\0stateChanged\0"
    "QtAV::AVPlayer::State\0state\0speedChanged\0"
    "speed\0repeatChanged\0r\0currentRepeatChanged\0"
    "startPositionChanged\0stopPositionChanged\0"
    "seekableChanged\0seekFinished\0stepFinished\0"
    "positionChanged\0interruptTimeoutChanged\0"
    "interruptOnTimeoutChanged\0"
    "notifyIntervalChanged\0brightnessChanged\0"
    "val\0contrastChanged\0hueChanged\0"
    "saturationChanged\0chaptersChanged\0"
    "subtitleStreamChanged\0value\0"
    "internalAudioTracksChanged\0tracks\0"
    "internalVideoTracksChanged\0"
    "externalAudioTracksChanged\0"
    "internalSubtitleTracksChanged\0"
    "internalSubtitleHeaderRead\0codec\0data\0"
    "internalSubtitlePacketRead\0track\0"
    "QtAV::Packet\0packet\0load\0togglePause\0"
    "pause\0play\0stop\0stepForward\0stepBackward\0"
    "setRelativeTimeMode\0setRepeat\0max\0"
    "setStartPosition\0pos\0setStopPosition\0"
    "setTimeRange\0start\0isSeekable\0setPosition\0"
    "seek\0seekForward\0seekBackward\0"
    "seekNextChapter\0seekPreviousChapter\0"
    "setSeekType\0SeekType\0type\0seekType\0"
    "bufferProgress\0bufferSpeed\0buffered\0"
    "setBufferMode\0BufferMode\0mode\0bufferMode\0"
    "setBufferValue\0bufferValue\0setNotifyInterval\0"
    "msec\0notifyInterval\0updateClock\0msecs\0"
    "setBrightness\0setContrast\0setHue\0"
    "setSaturation\0loadInternal\0playInternal\0"
    "stopFromDemuxerThread\0aboutToQuitApp\0"
    "startNotifyTimer\0stopNotifyTimer\0"
    "onStarted\0updateMediaStatus\0"
    "onMediaEndActionPauseTriggered\0"
    "onSeekFinished\0onStepFinished\0"
    "tryClearVideoRenderers\0seekChapter\0"
    "incr\0relativeTimeMode\0autoLoad\0asyncLoad\0"
    "seekable\0duration\0startPosition\0"
    "stopPosition\0repeat\0currentRepeat\0"
    "interruptTimeout\0interruptOnTimeout\0"
    "brightness\0contrast\0saturation\0State\0"
    "mediaStatus\0mediaEndAction\0chapters\0"
    "StoppedState\0PlayingState\0PausedState"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtAV__AVPlayer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      92,   14, // methods
      21,  670, // properties
       1,  754, // enums/sets
       0,    0, // constructors
       0,       // flags
      40,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  474,    2, 0x06 /* Public */,
       3,    0,  477,    2, 0x06 /* Public */,
       4,    0,  478,    2, 0x06 /* Public */,
       5,    0,  479,    2, 0x06 /* Public */,
       6,    0,  480,    2, 0x06 /* Public */,
       7,    0,  481,    2, 0x06 /* Public */,
       8,    0,  482,    2, 0x06 /* Public */,
       9,    1,  483,    2, 0x06 /* Public */,
      12,    1,  486,    2, 0x06 /* Public */,
      15,    1,  489,    2, 0x06 /* Public */,
      16,    1,  492,    2, 0x06 /* Public */,
      19,    1,  495,    2, 0x06 /* Public */,
      21,    0,  498,    2, 0x06 /* Public */,
      22,    0,  499,    2, 0x06 /* Public */,
      23,    1,  500,    2, 0x06 /* Public */,
      25,    1,  503,    2, 0x06 /* Public */,
      28,    1,  506,    2, 0x06 /* Public */,
      30,    1,  509,    2, 0x06 /* Public */,
      32,    1,  512,    2, 0x06 /* Public */,
      33,    1,  515,    2, 0x06 /* Public */,
      34,    1,  518,    2, 0x06 /* Public */,
      35,    0,  521,    2, 0x06 /* Public */,
      36,    1,  522,    2, 0x06 /* Public */,
      37,    0,  525,    2, 0x06 /* Public */,
      38,    1,  526,    2, 0x06 /* Public */,
      39,    0,  529,    2, 0x06 /* Public */,
      40,    0,  530,    2, 0x06 /* Public */,
      41,    0,  531,    2, 0x06 /* Public */,
      42,    1,  532,    2, 0x06 /* Public */,
      44,    1,  535,    2, 0x06 /* Public */,
      45,    1,  538,    2, 0x06 /* Public */,
      46,    1,  541,    2, 0x06 /* Public */,
      47,    1,  544,    2, 0x06 /* Public */,
      48,    1,  547,    2, 0x06 /* Public */,
      50,    1,  550,    2, 0x06 /* Public */,
      52,    1,  553,    2, 0x06 /* Public */,
      53,    1,  556,    2, 0x06 /* Public */,
      54,    1,  559,    2, 0x06 /* Public */,
      55,    2,  562,    2, 0x06 /* Public */,
      58,    2,  567,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      62,    0,  572,    2, 0x0a /* Public */,
      63,    0,  573,    2, 0x0a /* Public */,
      64,    1,  574,    2, 0x0a /* Public */,
      64,    0,  577,    2, 0x2a /* Public | MethodCloned */,
      65,    0,  578,    2, 0x0a /* Public */,
      66,    0,  579,    2, 0x0a /* Public */,
      67,    0,  580,    2, 0x0a /* Public */,
      68,    0,  581,    2, 0x0a /* Public */,
      69,    1,  582,    2, 0x0a /* Public */,
      70,    1,  585,    2, 0x0a /* Public */,
      72,    1,  588,    2, 0x0a /* Public */,
      74,    1,  591,    2, 0x0a /* Public */,
      74,    0,  594,    2, 0x2a /* Public | MethodCloned */,
      75,    2,  595,    2, 0x0a /* Public */,
      75,    1,  600,    2, 0x2a /* Public | MethodCloned */,
      77,    0,  603,    2, 0x0a /* Public */,
      78,    1,  604,    2, 0x0a /* Public */,
      79,    1,  607,    2, 0x0a /* Public */,
      79,    1,  610,    2, 0x0a /* Public */,
      80,    0,  613,    2, 0x0a /* Public */,
      81,    0,  614,    2, 0x0a /* Public */,
      82,    0,  615,    2, 0x0a /* Public */,
      83,    0,  616,    2, 0x0a /* Public */,
      84,    1,  617,    2, 0x0a /* Public */,
      87,    0,  620,    2, 0x0a /* Public */,
      88,    0,  621,    2, 0x0a /* Public */,
      89,    0,  622,    2, 0x0a /* Public */,
      90,    0,  623,    2, 0x0a /* Public */,
      91,    1,  624,    2, 0x0a /* Public */,
      94,    0,  627,    2, 0x0a /* Public */,
      95,    1,  628,    2, 0x0a /* Public */,
      96,    0,  631,    2, 0x0a /* Public */,
      97,    1,  632,    2, 0x0a /* Public */,
      99,    0,  635,    2, 0x0a /* Public */,
     100,    1,  636,    2, 0x0a /* Public */,
     102,    1,  639,    2, 0x0a /* Public */,
     103,    1,  642,    2, 0x0a /* Public */,
     104,    1,  645,    2, 0x0a /* Public */,
     105,    1,  648,    2, 0x0a /* Public */,
     106,    0,  651,    2, 0x08 /* Private */,
     107,    0,  652,    2, 0x08 /* Private */,
     108,    0,  653,    2, 0x08 /* Private */,
     109,    0,  654,    2, 0x08 /* Private */,
     110,    0,  655,    2, 0x08 /* Private */,
     111,    0,  656,    2, 0x08 /* Private */,
     112,    0,  657,    2, 0x08 /* Private */,
     113,    1,  658,    2, 0x08 /* Private */,
     114,    0,  661,    2, 0x08 /* Private */,
     115,    1,  662,    2, 0x08 /* Private */,
     116,    0,  665,    2, 0x08 /* Private */,
     117,    0,  666,    2, 0x08 /* Private */,
     118,    1,  667,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QReal,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, QMetaType::LongLong,    2,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, QMetaType::Bool,   20,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,   24,
    QMetaType::Void, 0x80000000 | 26,   27,
    QMetaType::Void, QMetaType::QReal,   29,
    QMetaType::Void, QMetaType::Int,   31,
    QMetaType::Void, QMetaType::Int,   31,
    QMetaType::Void, QMetaType::LongLong,   24,
    QMetaType::Void, QMetaType::LongLong,   24,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,   24,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,   24,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   43,
    QMetaType::Void, QMetaType::Int,   43,
    QMetaType::Void, QMetaType::Int,   43,
    QMetaType::Void, QMetaType::Int,   43,
    QMetaType::Void, QMetaType::UInt,   43,
    QMetaType::Void, QMetaType::Int,   49,
    QMetaType::Void, QMetaType::QVariantList,   51,
    QMetaType::Void, QMetaType::QVariantList,   51,
    QMetaType::Void, QMetaType::QVariantList,   51,
    QMetaType::Void, QMetaType::QVariantList,   51,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QByteArray,   56,   57,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 60,   59,   61,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   20,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   49,
    QMetaType::Void, QMetaType::Int,   71,
    QMetaType::Void, QMetaType::LongLong,   73,
    QMetaType::Void, QMetaType::LongLong,   73,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,   76,   66,
    QMetaType::Void, QMetaType::LongLong,   76,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::LongLong,   24,
    QMetaType::Void, QMetaType::QReal,   31,
    QMetaType::Void, QMetaType::LongLong,   73,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 85,   86,
    0x80000000 | 85,
    QMetaType::QReal,
    QMetaType::QReal,
    QMetaType::LongLong,
    QMetaType::Void, 0x80000000 | 92,   93,
    0x80000000 | 92,
    QMetaType::Void, QMetaType::LongLong,   49,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,   98,
    QMetaType::Int,
    QMetaType::Void, QMetaType::LongLong,  101,
    QMetaType::Void, QMetaType::Int,   43,
    QMetaType::Void, QMetaType::Int,   43,
    QMetaType::Void, QMetaType::Int,   43,
    QMetaType::Void, QMetaType::Int,   43,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,   49,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,  119,

 // properties: name, type, flags
     120, QMetaType::Bool, 0x00495103,
     121, QMetaType::Bool, 0x00495103,
     122, QMetaType::Bool, 0x00495103,
      88, QMetaType::QReal, 0x00495001,
     123, QMetaType::Bool, 0x00495001,
     124, QMetaType::LongLong, 0x00495001,
      24, QMetaType::LongLong, 0x00495103,
     125, QMetaType::LongLong, 0x00495103,
     126, QMetaType::LongLong, 0x00495103,
     127, QMetaType::LongLong, 0x00495103,
     128, QMetaType::Int, 0x00495001,
     129, QMetaType::LongLong, 0x00495103,
     130, QMetaType::Bool, 0x00495103,
      99, QMetaType::Int, 0x00495103,
     131, QMetaType::Int, 0x00495103,
     132, QMetaType::Int, 0x00495103,
     133, QMetaType::Int, 0x00495103,
      27, 0x80000000 | 134, 0x0049510b,
     135, 0x80000000 | 10, 0x00495009,
     136, 0x80000000 | 13, 0x0049510b,
     137, QMetaType::UInt, 0x00495001,

 // properties: notify_signal_id
       1,
       2,
       3,
       0,
      21,
       9,
      24,
      19,
      20,
      17,
      18,
      25,
      26,
      27,
      28,
      29,
      31,
      15,
       7,
       8,
      32,

 // enums: name, flags, count, data
     134, 0x0,    3,  758,

 // enum data: key, value
     138, uint(QtAV::AVPlayer::StoppedState),
     139, uint(QtAV::AVPlayer::PlayingState),
     140, uint(QtAV::AVPlayer::PausedState),

       0        // eod
};

void QtAV::AVPlayer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AVPlayer *_t = static_cast<AVPlayer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->bufferProgressChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 1: _t->relativeTimeModeChanged(); break;
        case 2: _t->autoLoadChanged(); break;
        case 3: _t->asyncLoadChanged(); break;
        case 4: _t->muteChanged(); break;
        case 5: _t->sourceChanged(); break;
        case 6: _t->loaded(); break;
        case 7: _t->mediaStatusChanged((*reinterpret_cast< QtAV::MediaStatus(*)>(_a[1]))); break;
        case 8: _t->mediaEndActionChanged((*reinterpret_cast< QtAV::MediaEndAction(*)>(_a[1]))); break;
        case 9: _t->durationChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 10: _t->error((*reinterpret_cast< const QtAV::AVError(*)>(_a[1]))); break;
        case 11: _t->paused((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->started(); break;
        case 13: _t->stopped(); break;
        case 14: _t->stoppedAt((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 15: _t->stateChanged((*reinterpret_cast< QtAV::AVPlayer::State(*)>(_a[1]))); break;
        case 16: _t->speedChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 17: _t->repeatChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->currentRepeatChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->startPositionChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 20: _t->stopPositionChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 21: _t->seekableChanged(); break;
        case 22: _t->seekFinished((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 23: _t->stepFinished(); break;
        case 24: _t->positionChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 25: _t->interruptTimeoutChanged(); break;
        case 26: _t->interruptOnTimeoutChanged(); break;
        case 27: _t->notifyIntervalChanged(); break;
        case 28: _t->brightnessChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 29: _t->contrastChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 30: _t->hueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 31: _t->saturationChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 32: _t->chaptersChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 33: _t->subtitleStreamChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 34: _t->internalAudioTracksChanged((*reinterpret_cast< const QVariantList(*)>(_a[1]))); break;
        case 35: _t->internalVideoTracksChanged((*reinterpret_cast< const QVariantList(*)>(_a[1]))); break;
        case 36: _t->externalAudioTracksChanged((*reinterpret_cast< const QVariantList(*)>(_a[1]))); break;
        case 37: _t->internalSubtitleTracksChanged((*reinterpret_cast< const QVariantList(*)>(_a[1]))); break;
        case 38: _t->internalSubtitleHeaderRead((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 39: _t->internalSubtitlePacketRead((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QtAV::Packet(*)>(_a[2]))); break;
        case 40: { bool _r = _t->load();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 41: _t->togglePause(); break;
        case 42: _t->pause((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 43: _t->pause(); break;
        case 44: _t->play(); break;
        case 45: _t->stop(); break;
        case 46: _t->stepForward(); break;
        case 47: _t->stepBackward(); break;
        case 48: _t->setRelativeTimeMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 49: _t->setRepeat((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 50: _t->setStartPosition((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 51: _t->setStopPosition((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 52: _t->setStopPosition(); break;
        case 53: _t->setTimeRange((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 54: _t->setTimeRange((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 55: { bool _r = _t->isSeekable();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 56: _t->setPosition((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 57: _t->seek((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 58: _t->seek((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 59: _t->seekForward(); break;
        case 60: _t->seekBackward(); break;
        case 61: _t->seekNextChapter(); break;
        case 62: _t->seekPreviousChapter(); break;
        case 63: _t->setSeekType((*reinterpret_cast< SeekType(*)>(_a[1]))); break;
        case 64: { SeekType _r = _t->seekType();
            if (_a[0]) *reinterpret_cast< SeekType*>(_a[0]) = _r; }  break;
        case 65: { qreal _r = _t->bufferProgress();
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 66: { qreal _r = _t->bufferSpeed();
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 67: { qint64 _r = _t->buffered();
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 68: _t->setBufferMode((*reinterpret_cast< BufferMode(*)>(_a[1]))); break;
        case 69: { BufferMode _r = _t->bufferMode();
            if (_a[0]) *reinterpret_cast< BufferMode*>(_a[0]) = _r; }  break;
        case 70: _t->setBufferValue((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 71: { int _r = _t->bufferValue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 72: _t->setNotifyInterval((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 73: { int _r = _t->notifyInterval();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 74: _t->updateClock((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 75: _t->setBrightness((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 76: _t->setContrast((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 77: _t->setHue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 78: _t->setSaturation((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 79: _t->loadInternal(); break;
        case 80: _t->playInternal(); break;
        case 81: _t->stopFromDemuxerThread(); break;
        case 82: _t->aboutToQuitApp(); break;
        case 83: _t->startNotifyTimer(); break;
        case 84: _t->stopNotifyTimer(); break;
        case 85: _t->onStarted(); break;
        case 86: _t->updateMediaStatus((*reinterpret_cast< QtAV::MediaStatus(*)>(_a[1]))); break;
        case 87: _t->onMediaEndActionPauseTriggered(); break;
        case 88: _t->onSeekFinished((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 89: _t->onStepFinished(); break;
        case 90: _t->tryClearVideoRenderers(); break;
        case 91: _t->seekChapter((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QtAV::MediaStatus >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QtAV::MediaEndAction >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QtAV::AVError >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QtAV::AVPlayer::State >(); break;
            }
            break;
        case 86:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QtAV::MediaStatus >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AVPlayer::*_t)(qreal );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AVPlayer::bufferProgressChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (AVPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AVPlayer::relativeTimeModeChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (AVPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AVPlayer::autoLoadChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (AVPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AVPlayer::asyncLoadChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (AVPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AVPlayer::muteChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (AVPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AVPlayer::sourceChanged)) {
                *result = 5;
            }
        }
        {
            typedef void (AVPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AVPlayer::loaded)) {
                *result = 6;
            }
        }
        {
            typedef void (AVPlayer::*_t)(QtAV::MediaStatus );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AVPlayer::mediaStatusChanged)) {
                *result = 7;
            }
        }
        {
            typedef void (AVPlayer::*_t)(QtAV::MediaEndAction );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AVPlayer::mediaEndActionChanged)) {
                *result = 8;
            }
        }
        {
            typedef void (AVPlayer::*_t)(qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AVPlayer::durationChanged)) {
                *result = 9;
            }
        }
        {
            typedef void (AVPlayer::*_t)(const QtAV::AVError & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AVPlayer::error)) {
                *result = 10;
            }
        }
        {
            typedef void (AVPlayer::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AVPlayer::paused)) {
                *result = 11;
            }
        }
        {
            typedef void (AVPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AVPlayer::started)) {
                *result = 12;
            }
        }
        {
            typedef void (AVPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AVPlayer::stopped)) {
                *result = 13;
            }
        }
        {
            typedef void (AVPlayer::*_t)(qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AVPlayer::stoppedAt)) {
                *result = 14;
            }
        }
        {
            typedef void (AVPlayer::*_t)(QtAV::AVPlayer::State );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AVPlayer::stateChanged)) {
                *result = 15;
            }
        }
        {
            typedef void (AVPlayer::*_t)(qreal );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AVPlayer::speedChanged)) {
                *result = 16;
            }
        }
        {
            typedef void (AVPlayer::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AVPlayer::repeatChanged)) {
                *result = 17;
            }
        }
        {
            typedef void (AVPlayer::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AVPlayer::currentRepeatChanged)) {
                *result = 18;
            }
        }
        {
            typedef void (AVPlayer::*_t)(qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AVPlayer::startPositionChanged)) {
                *result = 19;
            }
        }
        {
            typedef void (AVPlayer::*_t)(qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AVPlayer::stopPositionChanged)) {
                *result = 20;
            }
        }
        {
            typedef void (AVPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AVPlayer::seekableChanged)) {
                *result = 21;
            }
        }
        {
            typedef void (AVPlayer::*_t)(qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AVPlayer::seekFinished)) {
                *result = 22;
            }
        }
        {
            typedef void (AVPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AVPlayer::stepFinished)) {
                *result = 23;
            }
        }
        {
            typedef void (AVPlayer::*_t)(qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AVPlayer::positionChanged)) {
                *result = 24;
            }
        }
        {
            typedef void (AVPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AVPlayer::interruptTimeoutChanged)) {
                *result = 25;
            }
        }
        {
            typedef void (AVPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AVPlayer::interruptOnTimeoutChanged)) {
                *result = 26;
            }
        }
        {
            typedef void (AVPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AVPlayer::notifyIntervalChanged)) {
                *result = 27;
            }
        }
        {
            typedef void (AVPlayer::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AVPlayer::brightnessChanged)) {
                *result = 28;
            }
        }
        {
            typedef void (AVPlayer::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AVPlayer::contrastChanged)) {
                *result = 29;
            }
        }
        {
            typedef void (AVPlayer::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AVPlayer::hueChanged)) {
                *result = 30;
            }
        }
        {
            typedef void (AVPlayer::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AVPlayer::saturationChanged)) {
                *result = 31;
            }
        }
        {
            typedef void (AVPlayer::*_t)(unsigned int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AVPlayer::chaptersChanged)) {
                *result = 32;
            }
        }
        {
            typedef void (AVPlayer::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AVPlayer::subtitleStreamChanged)) {
                *result = 33;
            }
        }
        {
            typedef void (AVPlayer::*_t)(const QVariantList & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AVPlayer::internalAudioTracksChanged)) {
                *result = 34;
            }
        }
        {
            typedef void (AVPlayer::*_t)(const QVariantList & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AVPlayer::internalVideoTracksChanged)) {
                *result = 35;
            }
        }
        {
            typedef void (AVPlayer::*_t)(const QVariantList & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AVPlayer::externalAudioTracksChanged)) {
                *result = 36;
            }
        }
        {
            typedef void (AVPlayer::*_t)(const QVariantList & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AVPlayer::internalSubtitleTracksChanged)) {
                *result = 37;
            }
        }
        {
            typedef void (AVPlayer::*_t)(const QByteArray & , const QByteArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AVPlayer::internalSubtitleHeaderRead)) {
                *result = 38;
            }
        }
        {
            typedef void (AVPlayer::*_t)(int , const QtAV::Packet & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AVPlayer::internalSubtitlePacketRead)) {
                *result = 39;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 19:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QtAV::MediaEndAction >(); break;
        case 18:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QtAV::MediaStatus >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        AVPlayer *_t = static_cast<AVPlayer *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->relativeTimeMode(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isAutoLoad(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isAsyncLoad(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->bufferProgress(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isSeekable(); break;
        case 5: *reinterpret_cast< qint64*>(_v) = _t->duration(); break;
        case 6: *reinterpret_cast< qint64*>(_v) = _t->position(); break;
        case 7: *reinterpret_cast< qint64*>(_v) = _t->startPosition(); break;
        case 8: *reinterpret_cast< qint64*>(_v) = _t->stopPosition(); break;
        case 9: *reinterpret_cast< qint64*>(_v) = _t->repeat(); break;
        case 10: *reinterpret_cast< int*>(_v) = _t->currentRepeat(); break;
        case 11: *reinterpret_cast< qint64*>(_v) = _t->interruptTimeout(); break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->isInterruptOnTimeout(); break;
        case 13: *reinterpret_cast< int*>(_v) = _t->notifyInterval(); break;
        case 14: *reinterpret_cast< int*>(_v) = _t->brightness(); break;
        case 15: *reinterpret_cast< int*>(_v) = _t->contrast(); break;
        case 16: *reinterpret_cast< int*>(_v) = _t->saturation(); break;
        case 17: *reinterpret_cast< State*>(_v) = _t->state(); break;
        case 18: *reinterpret_cast< QtAV::MediaStatus*>(_v) = _t->mediaStatus(); break;
        case 19: *reinterpret_cast< QtAV::MediaEndAction*>(_v) = _t->mediaEndAction(); break;
        case 20: *reinterpret_cast< uint*>(_v) = _t->chapters(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        AVPlayer *_t = static_cast<AVPlayer *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRelativeTimeMode(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setAutoLoad(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setAsyncLoad(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setPosition(*reinterpret_cast< qint64*>(_v)); break;
        case 7: _t->setStartPosition(*reinterpret_cast< qint64*>(_v)); break;
        case 8: _t->setStopPosition(*reinterpret_cast< qint64*>(_v)); break;
        case 9: _t->setRepeat(*reinterpret_cast< qint64*>(_v)); break;
        case 11: _t->setInterruptTimeout(*reinterpret_cast< qint64*>(_v)); break;
        case 12: _t->setInterruptOnTimeout(*reinterpret_cast< bool*>(_v)); break;
        case 13: _t->setNotifyInterval(*reinterpret_cast< int*>(_v)); break;
        case 14: _t->setBrightness(*reinterpret_cast< int*>(_v)); break;
        case 15: _t->setContrast(*reinterpret_cast< int*>(_v)); break;
        case 16: _t->setSaturation(*reinterpret_cast< int*>(_v)); break;
        case 17: _t->setState(*reinterpret_cast< State*>(_v)); break;
        case 19: _t->setMediaEndAction(*reinterpret_cast< QtAV::MediaEndAction*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QtAV::AVPlayer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QtAV__AVPlayer.data,
      qt_meta_data_QtAV__AVPlayer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QtAV::AVPlayer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtAV::AVPlayer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QtAV__AVPlayer.stringdata0))
        return static_cast<void*>(const_cast< AVPlayer*>(this));
    return QObject::qt_metacast(_clname);
}

int QtAV::AVPlayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 92)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 92;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 92)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 92;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 21;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 21;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 21;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 21;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 21;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QtAV::AVPlayer::bufferProgressChanged(qreal _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtAV::AVPlayer::relativeTimeModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void QtAV::AVPlayer::autoLoadChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void QtAV::AVPlayer::asyncLoadChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void QtAV::AVPlayer::muteChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void QtAV::AVPlayer::sourceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void QtAV::AVPlayer::loaded()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}

// SIGNAL 7
void QtAV::AVPlayer::mediaStatusChanged(QtAV::MediaStatus _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QtAV::AVPlayer::mediaEndActionChanged(QtAV::MediaEndAction _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QtAV::AVPlayer::durationChanged(qint64 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QtAV::AVPlayer::error(const QtAV::AVError & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void QtAV::AVPlayer::paused(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void QtAV::AVPlayer::started()
{
    QMetaObject::activate(this, &staticMetaObject, 12, Q_NULLPTR);
}

// SIGNAL 13
void QtAV::AVPlayer::stopped()
{
    QMetaObject::activate(this, &staticMetaObject, 13, Q_NULLPTR);
}

// SIGNAL 14
void QtAV::AVPlayer::stoppedAt(qint64 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void QtAV::AVPlayer::stateChanged(QtAV::AVPlayer::State _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void QtAV::AVPlayer::speedChanged(qreal _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void QtAV::AVPlayer::repeatChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void QtAV::AVPlayer::currentRepeatChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void QtAV::AVPlayer::startPositionChanged(qint64 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void QtAV::AVPlayer::stopPositionChanged(qint64 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void QtAV::AVPlayer::seekableChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 21, Q_NULLPTR);
}

// SIGNAL 22
void QtAV::AVPlayer::seekFinished(qint64 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void QtAV::AVPlayer::stepFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 23, Q_NULLPTR);
}

// SIGNAL 24
void QtAV::AVPlayer::positionChanged(qint64 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void QtAV::AVPlayer::interruptTimeoutChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 25, Q_NULLPTR);
}

// SIGNAL 26
void QtAV::AVPlayer::interruptOnTimeoutChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 26, Q_NULLPTR);
}

// SIGNAL 27
void QtAV::AVPlayer::notifyIntervalChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 27, Q_NULLPTR);
}

// SIGNAL 28
void QtAV::AVPlayer::brightnessChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void QtAV::AVPlayer::contrastChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void QtAV::AVPlayer::hueChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void QtAV::AVPlayer::saturationChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void QtAV::AVPlayer::chaptersChanged(unsigned int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void QtAV::AVPlayer::subtitleStreamChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void QtAV::AVPlayer::internalAudioTracksChanged(const QVariantList & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void QtAV::AVPlayer::internalVideoTracksChanged(const QVariantList & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void QtAV::AVPlayer::externalAudioTracksChanged(const QVariantList & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
}

// SIGNAL 37
void QtAV::AVPlayer::internalSubtitleTracksChanged(const QVariantList & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
}

// SIGNAL 38
void QtAV::AVPlayer::internalSubtitleHeaderRead(const QByteArray & _t1, const QByteArray & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
}

// SIGNAL 39
void QtAV::AVPlayer::internalSubtitlePacketRead(int _t1, const QtAV::Packet & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
}
QT_END_MOC_NAMESPACE
