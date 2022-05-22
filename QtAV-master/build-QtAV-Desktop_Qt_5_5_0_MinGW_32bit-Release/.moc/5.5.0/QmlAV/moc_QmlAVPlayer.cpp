/****************************************************************************
** Meta object code from reading C++ file 'QmlAVPlayer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../QtAV/qml/QmlAV/QmlAVPlayer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmlAVPlayer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QmlAVPlayer_t {
    QByteArrayData data[159];
    char stringdata0[2266];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmlAVPlayer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmlAVPlayer_t qt_meta_stringdata_QmlAVPlayer = {
    {
QT_MOC_LITERAL(0, 0, 11), // "QmlAVPlayer"
QT_MOC_LITERAL(1, 12, 13), // "volumeChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 12), // "mutedChanged"
QT_MOC_LITERAL(4, 40, 15), // "hasAudioChanged"
QT_MOC_LITERAL(5, 56, 15), // "hasVideoChanged"
QT_MOC_LITERAL(6, 72, 15), // "durationChanged"
QT_MOC_LITERAL(7, 88, 15), // "positionChanged"
QT_MOC_LITERAL(8, 104, 13), // "sourceChanged"
QT_MOC_LITERAL(9, 118, 15), // "autoLoadChanged"
QT_MOC_LITERAL(10, 134, 16), // "loopCountChanged"
QT_MOC_LITERAL(11, 151, 15), // "videoOutChanged"
QT_MOC_LITERAL(12, 167, 20), // "playbackStateChanged"
QT_MOC_LITERAL(13, 188, 15), // "autoPlayChanged"
QT_MOC_LITERAL(14, 204, 19), // "playbackRateChanged"
QT_MOC_LITERAL(15, 224, 6), // "paused"
QT_MOC_LITERAL(16, 231, 7), // "stopped"
QT_MOC_LITERAL(17, 239, 7), // "playing"
QT_MOC_LITERAL(18, 247, 20), // "startPositionChanged"
QT_MOC_LITERAL(19, 268, 19), // "stopPositionChanged"
QT_MOC_LITERAL(20, 288, 15), // "seekableChanged"
QT_MOC_LITERAL(21, 304, 12), // "seekFinished"
QT_MOC_LITERAL(22, 317, 15), // "fastSeekChanged"
QT_MOC_LITERAL(23, 333, 21), // "bufferProgressChanged"
QT_MOC_LITERAL(24, 355, 25), // "videoCodecPriorityChanged"
QT_MOC_LITERAL(25, 381, 24), // "videoCodecOptionsChanged"
QT_MOC_LITERAL(26, 406, 22), // "avFormatOptionsChanged"
QT_MOC_LITERAL(27, 429, 31), // "useWallclockAsTimestampsChanged"
QT_MOC_LITERAL(28, 461, 20), // "channelLayoutChanged"
QT_MOC_LITERAL(29, 482, 14), // "timeoutChanged"
QT_MOC_LITERAL(30, 497, 21), // "abortOnTimeoutChanged"
QT_MOC_LITERAL(31, 519, 17), // "audioTrackChanged"
QT_MOC_LITERAL(32, 537, 26), // "internalAudioTracksChanged"
QT_MOC_LITERAL(33, 564, 17), // "videoTrackChanged"
QT_MOC_LITERAL(34, 582, 26), // "internalVideoTracksChanged"
QT_MOC_LITERAL(35, 609, 20), // "externalAudioChanged"
QT_MOC_LITERAL(36, 630, 26), // "externalAudioTracksChanged"
QT_MOC_LITERAL(37, 657, 28), // "internalSubtitleTrackChanged"
QT_MOC_LITERAL(38, 686, 29), // "internalSubtitleTracksChanged"
QT_MOC_LITERAL(39, 716, 17), // "bufferSizeChanged"
QT_MOC_LITERAL(40, 734, 17), // "bufferModeChanged"
QT_MOC_LITERAL(41, 752, 16), // "frameRateChanged"
QT_MOC_LITERAL(42, 769, 21), // "mediaEndActionChanged"
QT_MOC_LITERAL(43, 791, 12), // "errorChanged"
QT_MOC_LITERAL(44, 804, 5), // "error"
QT_MOC_LITERAL(45, 810, 5), // "Error"
QT_MOC_LITERAL(46, 816, 11), // "errorString"
QT_MOC_LITERAL(47, 828, 13), // "statusChanged"
QT_MOC_LITERAL(48, 842, 18), // "mediaObjectChanged"
QT_MOC_LITERAL(49, 861, 20), // "audioBackendsChanged"
QT_MOC_LITERAL(50, 882, 21), // "notifyIntervalChanged"
QT_MOC_LITERAL(51, 904, 4), // "play"
QT_MOC_LITERAL(52, 909, 5), // "pause"
QT_MOC_LITERAL(53, 915, 4), // "stop"
QT_MOC_LITERAL(54, 920, 11), // "stepForward"
QT_MOC_LITERAL(55, 932, 12), // "stepBackward"
QT_MOC_LITERAL(56, 945, 4), // "seek"
QT_MOC_LITERAL(57, 950, 6), // "offset"
QT_MOC_LITERAL(58, 957, 11), // "seekForward"
QT_MOC_LITERAL(59, 969, 12), // "seekBackward"
QT_MOC_LITERAL(60, 982, 17), // "setNotifyInterval"
QT_MOC_LITERAL(61, 1000, 14), // "notifyInterval"
QT_MOC_LITERAL(62, 1015, 8), // "_q_error"
QT_MOC_LITERAL(63, 1024, 13), // "QtAV::AVError"
QT_MOC_LITERAL(64, 1038, 1), // "e"
QT_MOC_LITERAL(65, 1040, 16), // "_q_statusChanged"
QT_MOC_LITERAL(66, 1057, 10), // "_q_started"
QT_MOC_LITERAL(67, 1068, 10), // "_q_stopped"
QT_MOC_LITERAL(68, 1079, 9), // "_q_paused"
QT_MOC_LITERAL(69, 1089, 11), // "applyVolume"
QT_MOC_LITERAL(70, 1101, 18), // "applyChannelLayout"
QT_MOC_LITERAL(71, 1120, 3), // "url"
QT_MOC_LITERAL(72, 1124, 6), // "volume"
QT_MOC_LITERAL(73, 1131, 6), // "status"
QT_MOC_LITERAL(74, 1138, 6), // "Status"
QT_MOC_LITERAL(75, 1145, 8), // "duration"
QT_MOC_LITERAL(76, 1154, 8), // "position"
QT_MOC_LITERAL(77, 1163, 5), // "muted"
QT_MOC_LITERAL(78, 1169, 8), // "hasAudio"
QT_MOC_LITERAL(79, 1178, 8), // "hasVideo"
QT_MOC_LITERAL(80, 1187, 13), // "playbackState"
QT_MOC_LITERAL(81, 1201, 13), // "PlaybackState"
QT_MOC_LITERAL(82, 1215, 8), // "autoPlay"
QT_MOC_LITERAL(83, 1224, 8), // "autoLoad"
QT_MOC_LITERAL(84, 1233, 12), // "playbackRate"
QT_MOC_LITERAL(85, 1246, 6), // "source"
QT_MOC_LITERAL(86, 1253, 5), // "loops"
QT_MOC_LITERAL(87, 1259, 14), // "bufferProgress"
QT_MOC_LITERAL(88, 1274, 8), // "seekable"
QT_MOC_LITERAL(89, 1283, 8), // "metaData"
QT_MOC_LITERAL(90, 1292, 14), // "MediaMetaData*"
QT_MOC_LITERAL(91, 1307, 11), // "mediaObject"
QT_MOC_LITERAL(92, 1319, 13), // "startPosition"
QT_MOC_LITERAL(93, 1333, 12), // "stopPosition"
QT_MOC_LITERAL(94, 1346, 8), // "fastSeek"
QT_MOC_LITERAL(95, 1355, 7), // "timeout"
QT_MOC_LITERAL(96, 1363, 14), // "abortOnTimeout"
QT_MOC_LITERAL(97, 1378, 13), // "channelLayout"
QT_MOC_LITERAL(98, 1392, 13), // "ChannelLayout"
QT_MOC_LITERAL(99, 1406, 11), // "videoCodecs"
QT_MOC_LITERAL(100, 1418, 18), // "videoCodecPriority"
QT_MOC_LITERAL(101, 1437, 17), // "videoCodecOptions"
QT_MOC_LITERAL(102, 1455, 15), // "avFormatOptions"
QT_MOC_LITERAL(103, 1471, 24), // "useWallclockAsTimestamps"
QT_MOC_LITERAL(104, 1496, 12), // "videoCapture"
QT_MOC_LITERAL(105, 1509, 19), // "QtAV::VideoCapture*"
QT_MOC_LITERAL(106, 1529, 10), // "audioTrack"
QT_MOC_LITERAL(107, 1540, 10), // "videoTrack"
QT_MOC_LITERAL(108, 1551, 10), // "bufferSize"
QT_MOC_LITERAL(109, 1562, 10), // "bufferMode"
QT_MOC_LITERAL(110, 1573, 10), // "BufferMode"
QT_MOC_LITERAL(111, 1584, 9), // "frameRate"
QT_MOC_LITERAL(112, 1594, 13), // "externalAudio"
QT_MOC_LITERAL(113, 1608, 19), // "internalAudioTracks"
QT_MOC_LITERAL(114, 1628, 19), // "internalVideoTracks"
QT_MOC_LITERAL(115, 1648, 19), // "externalAudioTracks"
QT_MOC_LITERAL(116, 1668, 22), // "internalSubtitleTracks"
QT_MOC_LITERAL(117, 1691, 21), // "internalSubtitleTrack"
QT_MOC_LITERAL(118, 1713, 14), // "mediaEndAction"
QT_MOC_LITERAL(119, 1728, 14), // "MediaEndAction"
QT_MOC_LITERAL(120, 1743, 12), // "audioFilters"
QT_MOC_LITERAL(121, 1756, 34), // "QQmlListProperty<QuickAudioFi..."
QT_MOC_LITERAL(122, 1791, 12), // "videoFilters"
QT_MOC_LITERAL(123, 1804, 34), // "QQmlListProperty<QuickVideoFi..."
QT_MOC_LITERAL(124, 1839, 13), // "audioBackends"
QT_MOC_LITERAL(125, 1853, 22), // "supportedAudioBackends"
QT_MOC_LITERAL(126, 1876, 4), // "Loop"
QT_MOC_LITERAL(127, 1881, 8), // "Infinite"
QT_MOC_LITERAL(128, 1890, 13), // "PositionValue"
QT_MOC_LITERAL(129, 1904, 11), // "PositionMax"
QT_MOC_LITERAL(130, 1916, 12), // "StoppedState"
QT_MOC_LITERAL(131, 1929, 12), // "PlayingState"
QT_MOC_LITERAL(132, 1942, 11), // "PausedState"
QT_MOC_LITERAL(133, 1954, 13), // "UnknownStatus"
QT_MOC_LITERAL(134, 1968, 7), // "NoMedia"
QT_MOC_LITERAL(135, 1976, 7), // "Loading"
QT_MOC_LITERAL(136, 1984, 6), // "Loaded"
QT_MOC_LITERAL(137, 1991, 7), // "Stalled"
QT_MOC_LITERAL(138, 1999, 9), // "Buffering"
QT_MOC_LITERAL(139, 2009, 8), // "Buffered"
QT_MOC_LITERAL(140, 2018, 10), // "EndOfMedia"
QT_MOC_LITERAL(141, 2029, 12), // "InvalidMedia"
QT_MOC_LITERAL(142, 2042, 7), // "NoError"
QT_MOC_LITERAL(143, 2050, 13), // "ResourceError"
QT_MOC_LITERAL(144, 2064, 11), // "FormatError"
QT_MOC_LITERAL(145, 2076, 12), // "NetworkError"
QT_MOC_LITERAL(146, 2089, 12), // "AccessDenied"
QT_MOC_LITERAL(147, 2102, 14), // "ServiceMissing"
QT_MOC_LITERAL(148, 2117, 17), // "ChannelLayoutAuto"
QT_MOC_LITERAL(149, 2135, 4), // "Left"
QT_MOC_LITERAL(150, 2140, 5), // "Right"
QT_MOC_LITERAL(151, 2146, 4), // "Mono"
QT_MOC_LITERAL(152, 2151, 6), // "Stereo"
QT_MOC_LITERAL(153, 2158, 10), // "BufferTime"
QT_MOC_LITERAL(154, 2169, 11), // "BufferBytes"
QT_MOC_LITERAL(155, 2181, 13), // "BufferPackets"
QT_MOC_LITERAL(156, 2195, 22), // "MediaEndAction_Default"
QT_MOC_LITERAL(157, 2218, 26), // "MediaEndAction_KeepDisplay"
QT_MOC_LITERAL(158, 2245, 20) // "MediaEndAction_Pause"

    },
    "QmlAVPlayer\0volumeChanged\0\0mutedChanged\0"
    "hasAudioChanged\0hasVideoChanged\0"
    "durationChanged\0positionChanged\0"
    "sourceChanged\0autoLoadChanged\0"
    "loopCountChanged\0videoOutChanged\0"
    "playbackStateChanged\0autoPlayChanged\0"
    "playbackRateChanged\0paused\0stopped\0"
    "playing\0startPositionChanged\0"
    "stopPositionChanged\0seekableChanged\0"
    "seekFinished\0fastSeekChanged\0"
    "bufferProgressChanged\0videoCodecPriorityChanged\0"
    "videoCodecOptionsChanged\0"
    "avFormatOptionsChanged\0"
    "useWallclockAsTimestampsChanged\0"
    "channelLayoutChanged\0timeoutChanged\0"
    "abortOnTimeoutChanged\0audioTrackChanged\0"
    "internalAudioTracksChanged\0videoTrackChanged\0"
    "internalVideoTracksChanged\0"
    "externalAudioChanged\0externalAudioTracksChanged\0"
    "internalSubtitleTrackChanged\0"
    "internalSubtitleTracksChanged\0"
    "bufferSizeChanged\0bufferModeChanged\0"
    "frameRateChanged\0mediaEndActionChanged\0"
    "errorChanged\0error\0Error\0errorString\0"
    "statusChanged\0mediaObjectChanged\0"
    "audioBackendsChanged\0notifyIntervalChanged\0"
    "play\0pause\0stop\0stepForward\0stepBackward\0"
    "seek\0offset\0seekForward\0seekBackward\0"
    "setNotifyInterval\0notifyInterval\0"
    "_q_error\0QtAV::AVError\0e\0_q_statusChanged\0"
    "_q_started\0_q_stopped\0_q_paused\0"
    "applyVolume\0applyChannelLayout\0url\0"
    "volume\0status\0Status\0duration\0position\0"
    "muted\0hasAudio\0hasVideo\0playbackState\0"
    "PlaybackState\0autoPlay\0autoLoad\0"
    "playbackRate\0source\0loops\0bufferProgress\0"
    "seekable\0metaData\0MediaMetaData*\0"
    "mediaObject\0startPosition\0stopPosition\0"
    "fastSeek\0timeout\0abortOnTimeout\0"
    "channelLayout\0ChannelLayout\0videoCodecs\0"
    "videoCodecPriority\0videoCodecOptions\0"
    "avFormatOptions\0useWallclockAsTimestamps\0"
    "videoCapture\0QtAV::VideoCapture*\0"
    "audioTrack\0videoTrack\0bufferSize\0"
    "bufferMode\0BufferMode\0frameRate\0"
    "externalAudio\0internalAudioTracks\0"
    "internalVideoTracks\0externalAudioTracks\0"
    "internalSubtitleTracks\0internalSubtitleTrack\0"
    "mediaEndAction\0MediaEndAction\0"
    "audioFilters\0QQmlListProperty<QuickAudioFilter>\0"
    "videoFilters\0QQmlListProperty<QuickVideoFilter>\0"
    "audioBackends\0supportedAudioBackends\0"
    "Loop\0Infinite\0PositionValue\0PositionMax\0"
    "StoppedState\0PlayingState\0PausedState\0"
    "UnknownStatus\0NoMedia\0Loading\0Loaded\0"
    "Stalled\0Buffering\0Buffered\0EndOfMedia\0"
    "InvalidMedia\0NoError\0ResourceError\0"
    "FormatError\0NetworkError\0AccessDenied\0"
    "ServiceMissing\0ChannelLayoutAuto\0Left\0"
    "Right\0Mono\0Stereo\0BufferTime\0BufferBytes\0"
    "BufferPackets\0MediaEndAction_Default\0"
    "MediaEndAction_KeepDisplay\0"
    "MediaEndAction_Pause"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmlAVPlayer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      64,   14, // methods
      48,  412, // properties
       8,  604, // enums/sets
       0,    0, // constructors
       0,       // flags
      47,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  334,    2, 0x06 /* Public */,
       3,    0,  335,    2, 0x06 /* Public */,
       4,    0,  336,    2, 0x06 /* Public */,
       5,    0,  337,    2, 0x06 /* Public */,
       6,    0,  338,    2, 0x06 /* Public */,
       7,    0,  339,    2, 0x06 /* Public */,
       8,    0,  340,    2, 0x06 /* Public */,
       9,    0,  341,    2, 0x06 /* Public */,
      10,    0,  342,    2, 0x06 /* Public */,
      11,    0,  343,    2, 0x06 /* Public */,
      12,    0,  344,    2, 0x06 /* Public */,
      13,    0,  345,    2, 0x06 /* Public */,
      14,    0,  346,    2, 0x06 /* Public */,
      15,    0,  347,    2, 0x06 /* Public */,
      16,    0,  348,    2, 0x06 /* Public */,
      17,    0,  349,    2, 0x06 /* Public */,
      18,    0,  350,    2, 0x06 /* Public */,
      19,    0,  351,    2, 0x06 /* Public */,
      20,    0,  352,    2, 0x06 /* Public */,
      21,    0,  353,    2, 0x06 /* Public */,
      22,    0,  354,    2, 0x06 /* Public */,
      23,    0,  355,    2, 0x06 /* Public */,
      24,    0,  356,    2, 0x06 /* Public */,
      25,    0,  357,    2, 0x06 /* Public */,
      26,    0,  358,    2, 0x06 /* Public */,
      27,    0,  359,    2, 0x06 /* Public */,
      28,    0,  360,    2, 0x06 /* Public */,
      29,    0,  361,    2, 0x06 /* Public */,
      30,    0,  362,    2, 0x06 /* Public */,
      31,    0,  363,    2, 0x06 /* Public */,
      32,    0,  364,    2, 0x06 /* Public */,
      33,    0,  365,    2, 0x06 /* Public */,
      34,    0,  366,    2, 0x06 /* Public */,
      35,    0,  367,    2, 0x06 /* Public */,
      36,    0,  368,    2, 0x06 /* Public */,
      37,    0,  369,    2, 0x06 /* Public */,
      38,    0,  370,    2, 0x06 /* Public */,
      39,    0,  371,    2, 0x06 /* Public */,
      40,    0,  372,    2, 0x06 /* Public */,
      41,    0,  373,    2, 0x06 /* Public */,
      42,    0,  374,    2, 0x06 /* Public */,
      43,    0,  375,    2, 0x06 /* Public */,
      44,    2,  376,    2, 0x06 /* Public */,
      47,    0,  381,    2, 0x06 /* Public */,
      48,    0,  382,    2, 0x06 /* Public */,
      49,    0,  383,    2, 0x06 /* Public */,
      50,    0,  384,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      51,    0,  385,    2, 0x0a /* Public */,
      52,    0,  386,    2, 0x0a /* Public */,
      53,    0,  387,    2, 0x0a /* Public */,
      54,    0,  388,    2, 0x0a /* Public */,
      55,    0,  389,    2, 0x0a /* Public */,
      56,    1,  390,    2, 0x0a /* Public */,
      58,    0,  393,    2, 0x0a /* Public */,
      59,    0,  394,    2, 0x0a /* Public */,
      60,    1,  395,    2, 0x0a /* Public */,
      62,    1,  398,    2, 0x08 /* Private */,
      65,    0,  401,    2, 0x08 /* Private */,
      66,    0,  402,    2, 0x08 /* Private */,
      67,    0,  403,    2, 0x08 /* Private */,
      68,    1,  404,    2, 0x08 /* Private */,
      69,    0,  407,    2, 0x08 /* Private */,
      70,    0,  408,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      51,    1,  409,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 45, QMetaType::QString,   44,   46,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   57,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   61,
    QMetaType::Void, 0x80000000 | 63,   64,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::QUrl,   71,

 // properties: name, type, flags
      72, QMetaType::QReal, 0x00495103,
      73, 0x80000000 | 74, 0x00495009,
      44, 0x80000000 | 45, 0x00495009,
      75, QMetaType::Int, 0x00495001,
      76, QMetaType::Int, 0x00495001,
      77, QMetaType::Bool, 0x00495103,
      78, QMetaType::Bool, 0x00495001,
      79, QMetaType::Bool, 0x00495001,
      80, 0x80000000 | 81, 0x00495009,
      82, QMetaType::Bool, 0x00495103,
      83, QMetaType::Bool, 0x00495103,
      84, QMetaType::QReal, 0x00495103,
      85, QMetaType::QUrl, 0x00495103,
      86, QMetaType::Int, 0x00495003,
      87, QMetaType::QReal, 0x00495001,
      88, QMetaType::Bool, 0x00495001,
      89, 0x80000000 | 90, 0x00095409,
      91, QMetaType::QObjectStar, 0x00490001,
      46, QMetaType::QString, 0x00495001,
      92, QMetaType::Int, 0x00495103,
      93, QMetaType::Int, 0x00495103,
      94, QMetaType::Bool, 0x00495103,
      95, QMetaType::Int, 0x00495103,
      96, QMetaType::Bool, 0x00495103,
      97, 0x80000000 | 98, 0x0049510b,
      99, QMetaType::QStringList, 0x00095001,
     100, QMetaType::QStringList, 0x00495103,
     101, QMetaType::QVariantMap, 0x00495103,
     102, QMetaType::QVariantMap, 0x00495003,
     103, QMetaType::Bool, 0x00495003,
     104, 0x80000000 | 105, 0x00095409,
     106, QMetaType::Int, 0x00495103,
     107, QMetaType::Int, 0x00495103,
     108, QMetaType::Int, 0x00495103,
     109, 0x80000000 | 110, 0x0049510b,
     111, QMetaType::QReal, 0x00495103,
     112, QMetaType::QUrl, 0x00495103,
     113, QMetaType::QVariantList, 0x00495001,
     114, QMetaType::QVariantList, 0x00495001,
     115, QMetaType::QVariantList, 0x00495001,
     116, QMetaType::QVariantList, 0x00495001,
     117, QMetaType::Int, 0x00495103,
     118, 0x80000000 | 119, 0x0049510b,
     120, 0x80000000 | 121, 0x00095009,
     122, 0x80000000 | 123, 0x00095009,
     124, QMetaType::QStringList, 0x00495103,
     125, QMetaType::QStringList, 0x00095001,
      61, QMetaType::Int, 0x00495103,

 // properties: notify_signal_id
       0,
      43,
      41,
       4,
       5,
       1,
       2,
       3,
      10,
      11,
       7,
      12,
       6,
       8,
      21,
      18,
       0,
      44,
      41,
      16,
      17,
      20,
      27,
      28,
      26,
       0,
      22,
      23,
      24,
      25,
       0,
      29,
      31,
      37,
      38,
      39,
      33,
      30,
      32,
      34,
      36,
      35,
      40,
       0,
       0,
      45,
       0,
      46,

 // enums: name, flags, count, data
     126, 0x0,    1,  636,
     128, 0x0,    1,  638,
      81, 0x0,    3,  640,
      74, 0x0,    9,  646,
      45, 0x0,    6,  664,
      98, 0x0,    5,  676,
     110, 0x0,    3,  686,
     119, 0x0,    3,  692,

 // enum data: key, value
     127, uint(QmlAVPlayer::Infinite),
     129, uint(QmlAVPlayer::PositionMax),
     130, uint(QmlAVPlayer::StoppedState),
     131, uint(QmlAVPlayer::PlayingState),
     132, uint(QmlAVPlayer::PausedState),
     133, uint(QmlAVPlayer::UnknownStatus),
     134, uint(QmlAVPlayer::NoMedia),
     135, uint(QmlAVPlayer::Loading),
     136, uint(QmlAVPlayer::Loaded),
     137, uint(QmlAVPlayer::Stalled),
     138, uint(QmlAVPlayer::Buffering),
     139, uint(QmlAVPlayer::Buffered),
     140, uint(QmlAVPlayer::EndOfMedia),
     141, uint(QmlAVPlayer::InvalidMedia),
     142, uint(QmlAVPlayer::NoError),
     143, uint(QmlAVPlayer::ResourceError),
     144, uint(QmlAVPlayer::FormatError),
     145, uint(QmlAVPlayer::NetworkError),
     146, uint(QmlAVPlayer::AccessDenied),
     147, uint(QmlAVPlayer::ServiceMissing),
     148, uint(QmlAVPlayer::ChannelLayoutAuto),
     149, uint(QmlAVPlayer::Left),
     150, uint(QmlAVPlayer::Right),
     151, uint(QmlAVPlayer::Mono),
     152, uint(QmlAVPlayer::Stereo),
     153, uint(QmlAVPlayer::BufferTime),
     154, uint(QmlAVPlayer::BufferBytes),
     155, uint(QmlAVPlayer::BufferPackets),
     156, uint(QmlAVPlayer::MediaEndAction_Default),
     157, uint(QmlAVPlayer::MediaEndAction_KeepDisplay),
     158, uint(QmlAVPlayer::MediaEndAction_Pause),

       0        // eod
};

void QmlAVPlayer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmlAVPlayer *_t = static_cast<QmlAVPlayer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->volumeChanged(); break;
        case 1: _t->mutedChanged(); break;
        case 2: _t->hasAudioChanged(); break;
        case 3: _t->hasVideoChanged(); break;
        case 4: _t->durationChanged(); break;
        case 5: _t->positionChanged(); break;
        case 6: _t->sourceChanged(); break;
        case 7: _t->autoLoadChanged(); break;
        case 8: _t->loopCountChanged(); break;
        case 9: _t->videoOutChanged(); break;
        case 10: _t->playbackStateChanged(); break;
        case 11: _t->autoPlayChanged(); break;
        case 12: _t->playbackRateChanged(); break;
        case 13: _t->paused(); break;
        case 14: _t->stopped(); break;
        case 15: _t->playing(); break;
        case 16: _t->startPositionChanged(); break;
        case 17: _t->stopPositionChanged(); break;
        case 18: _t->seekableChanged(); break;
        case 19: _t->seekFinished(); break;
        case 20: _t->fastSeekChanged(); break;
        case 21: _t->bufferProgressChanged(); break;
        case 22: _t->videoCodecPriorityChanged(); break;
        case 23: _t->videoCodecOptionsChanged(); break;
        case 24: _t->avFormatOptionsChanged(); break;
        case 25: _t->useWallclockAsTimestampsChanged(); break;
        case 26: _t->channelLayoutChanged(); break;
        case 27: _t->timeoutChanged(); break;
        case 28: _t->abortOnTimeoutChanged(); break;
        case 29: _t->audioTrackChanged(); break;
        case 30: _t->internalAudioTracksChanged(); break;
        case 31: _t->videoTrackChanged(); break;
        case 32: _t->internalVideoTracksChanged(); break;
        case 33: _t->externalAudioChanged(); break;
        case 34: _t->externalAudioTracksChanged(); break;
        case 35: _t->internalSubtitleTrackChanged(); break;
        case 36: _t->internalSubtitleTracksChanged(); break;
        case 37: _t->bufferSizeChanged(); break;
        case 38: _t->bufferModeChanged(); break;
        case 39: _t->frameRateChanged(); break;
        case 40: _t->mediaEndActionChanged(); break;
        case 41: _t->errorChanged(); break;
        case 42: _t->error((*reinterpret_cast< Error(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 43: _t->statusChanged(); break;
        case 44: _t->mediaObjectChanged(); break;
        case 45: _t->audioBackendsChanged(); break;
        case 46: _t->notifyIntervalChanged(); break;
        case 47: _t->play(); break;
        case 48: _t->pause(); break;
        case 49: _t->stop(); break;
        case 50: _t->stepForward(); break;
        case 51: _t->stepBackward(); break;
        case 52: _t->seek((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 53: _t->seekForward(); break;
        case 54: _t->seekBackward(); break;
        case 55: _t->setNotifyInterval((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 56: _t->_q_error((*reinterpret_cast< const QtAV::AVError(*)>(_a[1]))); break;
        case 57: _t->_q_statusChanged(); break;
        case 58: _t->_q_started(); break;
        case 59: _t->_q_stopped(); break;
        case 60: _t->_q_paused((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 61: _t->applyVolume(); break;
        case 62: _t->applyChannelLayout(); break;
        case 63: _t->play((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 56:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QtAV::AVError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QmlAVPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmlAVPlayer::volumeChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QmlAVPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmlAVPlayer::mutedChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (QmlAVPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmlAVPlayer::hasAudioChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (QmlAVPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmlAVPlayer::hasVideoChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (QmlAVPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmlAVPlayer::durationChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (QmlAVPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmlAVPlayer::positionChanged)) {
                *result = 5;
            }
        }
        {
            typedef void (QmlAVPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmlAVPlayer::sourceChanged)) {
                *result = 6;
            }
        }
        {
            typedef void (QmlAVPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmlAVPlayer::autoLoadChanged)) {
                *result = 7;
            }
        }
        {
            typedef void (QmlAVPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmlAVPlayer::loopCountChanged)) {
                *result = 8;
            }
        }
        {
            typedef void (QmlAVPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmlAVPlayer::videoOutChanged)) {
                *result = 9;
            }
        }
        {
            typedef void (QmlAVPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmlAVPlayer::playbackStateChanged)) {
                *result = 10;
            }
        }
        {
            typedef void (QmlAVPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmlAVPlayer::autoPlayChanged)) {
                *result = 11;
            }
        }
        {
            typedef void (QmlAVPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmlAVPlayer::playbackRateChanged)) {
                *result = 12;
            }
        }
        {
            typedef void (QmlAVPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmlAVPlayer::paused)) {
                *result = 13;
            }
        }
        {
            typedef void (QmlAVPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmlAVPlayer::stopped)) {
                *result = 14;
            }
        }
        {
            typedef void (QmlAVPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmlAVPlayer::playing)) {
                *result = 15;
            }
        }
        {
            typedef void (QmlAVPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmlAVPlayer::startPositionChanged)) {
                *result = 16;
            }
        }
        {
            typedef void (QmlAVPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmlAVPlayer::stopPositionChanged)) {
                *result = 17;
            }
        }
        {
            typedef void (QmlAVPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmlAVPlayer::seekableChanged)) {
                *result = 18;
            }
        }
        {
            typedef void (QmlAVPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmlAVPlayer::seekFinished)) {
                *result = 19;
            }
        }
        {
            typedef void (QmlAVPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmlAVPlayer::fastSeekChanged)) {
                *result = 20;
            }
        }
        {
            typedef void (QmlAVPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmlAVPlayer::bufferProgressChanged)) {
                *result = 21;
            }
        }
        {
            typedef void (QmlAVPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmlAVPlayer::videoCodecPriorityChanged)) {
                *result = 22;
            }
        }
        {
            typedef void (QmlAVPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmlAVPlayer::videoCodecOptionsChanged)) {
                *result = 23;
            }
        }
        {
            typedef void (QmlAVPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmlAVPlayer::avFormatOptionsChanged)) {
                *result = 24;
            }
        }
        {
            typedef void (QmlAVPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmlAVPlayer::useWallclockAsTimestampsChanged)) {
                *result = 25;
            }
        }
        {
            typedef void (QmlAVPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmlAVPlayer::channelLayoutChanged)) {
                *result = 26;
            }
        }
        {
            typedef void (QmlAVPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmlAVPlayer::timeoutChanged)) {
                *result = 27;
            }
        }
        {
            typedef void (QmlAVPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmlAVPlayer::abortOnTimeoutChanged)) {
                *result = 28;
            }
        }
        {
            typedef void (QmlAVPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmlAVPlayer::audioTrackChanged)) {
                *result = 29;
            }
        }
        {
            typedef void (QmlAVPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmlAVPlayer::internalAudioTracksChanged)) {
                *result = 30;
            }
        }
        {
            typedef void (QmlAVPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmlAVPlayer::videoTrackChanged)) {
                *result = 31;
            }
        }
        {
            typedef void (QmlAVPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmlAVPlayer::internalVideoTracksChanged)) {
                *result = 32;
            }
        }
        {
            typedef void (QmlAVPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmlAVPlayer::externalAudioChanged)) {
                *result = 33;
            }
        }
        {
            typedef void (QmlAVPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmlAVPlayer::externalAudioTracksChanged)) {
                *result = 34;
            }
        }
        {
            typedef void (QmlAVPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmlAVPlayer::internalSubtitleTrackChanged)) {
                *result = 35;
            }
        }
        {
            typedef void (QmlAVPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmlAVPlayer::internalSubtitleTracksChanged)) {
                *result = 36;
            }
        }
        {
            typedef void (QmlAVPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmlAVPlayer::bufferSizeChanged)) {
                *result = 37;
            }
        }
        {
            typedef void (QmlAVPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmlAVPlayer::bufferModeChanged)) {
                *result = 38;
            }
        }
        {
            typedef void (QmlAVPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmlAVPlayer::frameRateChanged)) {
                *result = 39;
            }
        }
        {
            typedef void (QmlAVPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmlAVPlayer::mediaEndActionChanged)) {
                *result = 40;
            }
        }
        {
            typedef void (QmlAVPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmlAVPlayer::errorChanged)) {
                *result = 41;
            }
        }
        {
            typedef void (QmlAVPlayer::*_t)(Error , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmlAVPlayer::error)) {
                *result = 42;
            }
        }
        {
            typedef void (QmlAVPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmlAVPlayer::statusChanged)) {
                *result = 43;
            }
        }
        {
            typedef void (QmlAVPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmlAVPlayer::mediaObjectChanged)) {
                *result = 44;
            }
        }
        {
            typedef void (QmlAVPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmlAVPlayer::audioBackendsChanged)) {
                *result = 45;
            }
        }
        {
            typedef void (QmlAVPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QmlAVPlayer::notifyIntervalChanged)) {
                *result = 46;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 16:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MediaMetaData* >(); break;
        case 30:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QtAV::VideoCapture* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QmlAVPlayer *_t = static_cast<QmlAVPlayer *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->volume(); break;
        case 1: *reinterpret_cast< Status*>(_v) = _t->status(); break;
        case 2: *reinterpret_cast< Error*>(_v) = _t->error(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->duration(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->position(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->isMuted(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->hasAudio(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->hasVideo(); break;
        case 8: *reinterpret_cast< PlaybackState*>(_v) = _t->playbackState(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->autoPlay(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->isAutoLoad(); break;
        case 11: *reinterpret_cast< qreal*>(_v) = _t->playbackRate(); break;
        case 12: *reinterpret_cast< QUrl*>(_v) = _t->source(); break;
        case 13: *reinterpret_cast< int*>(_v) = _t->loopCount(); break;
        case 14: *reinterpret_cast< qreal*>(_v) = _t->bufferProgress(); break;
        case 15: *reinterpret_cast< bool*>(_v) = _t->isSeekable(); break;
        case 16: *reinterpret_cast< MediaMetaData**>(_v) = _t->metaData(); break;
        case 17: *reinterpret_cast< QObject**>(_v) = _t->mediaObject(); break;
        case 18: *reinterpret_cast< QString*>(_v) = _t->errorString(); break;
        case 19: *reinterpret_cast< int*>(_v) = _t->startPosition(); break;
        case 20: *reinterpret_cast< int*>(_v) = _t->stopPosition(); break;
        case 21: *reinterpret_cast< bool*>(_v) = _t->isFastSeek(); break;
        case 22: *reinterpret_cast< int*>(_v) = _t->timeout(); break;
        case 23: *reinterpret_cast< bool*>(_v) = _t->abortOnTimeout(); break;
        case 24: *reinterpret_cast< ChannelLayout*>(_v) = _t->channelLayout(); break;
        case 25: *reinterpret_cast< QStringList*>(_v) = _t->videoCodecs(); break;
        case 26: *reinterpret_cast< QStringList*>(_v) = _t->videoCodecPriority(); break;
        case 27: *reinterpret_cast< QVariantMap*>(_v) = _t->videoCodecOptions(); break;
        case 28: *reinterpret_cast< QVariantMap*>(_v) = _t->avFormatOptions(); break;
        case 29: *reinterpret_cast< bool*>(_v) = _t->useWallclockAsTimestamps(); break;
        case 30: *reinterpret_cast< QtAV::VideoCapture**>(_v) = _t->videoCapture(); break;
        case 31: *reinterpret_cast< int*>(_v) = _t->audioTrack(); break;
        case 32: *reinterpret_cast< int*>(_v) = _t->videoTrack(); break;
        case 33: *reinterpret_cast< int*>(_v) = _t->bufferSize(); break;
        case 34: *reinterpret_cast< BufferMode*>(_v) = _t->bufferMode(); break;
        case 35: *reinterpret_cast< qreal*>(_v) = _t->frameRate(); break;
        case 36: *reinterpret_cast< QUrl*>(_v) = _t->externalAudio(); break;
        case 37: *reinterpret_cast< QVariantList*>(_v) = _t->internalAudioTracks(); break;
        case 38: *reinterpret_cast< QVariantList*>(_v) = _t->internalVideoTracks(); break;
        case 39: *reinterpret_cast< QVariantList*>(_v) = _t->externalAudioTracks(); break;
        case 40: *reinterpret_cast< QVariantList*>(_v) = _t->internalSubtitleTracks(); break;
        case 41: *reinterpret_cast< int*>(_v) = _t->internalSubtitleTrack(); break;
        case 42: *reinterpret_cast< MediaEndAction*>(_v) = _t->mediaEndAction(); break;
        case 43: *reinterpret_cast< QQmlListProperty<QuickAudioFilter>*>(_v) = _t->audioFilters(); break;
        case 44: *reinterpret_cast< QQmlListProperty<QuickVideoFilter>*>(_v) = _t->videoFilters(); break;
        case 45: *reinterpret_cast< QStringList*>(_v) = _t->audioBackends(); break;
        case 46: *reinterpret_cast< QStringList*>(_v) = _t->supportedAudioBackends(); break;
        case 47: *reinterpret_cast< int*>(_v) = _t->notifyInterval(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QmlAVPlayer *_t = static_cast<QmlAVPlayer *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setVolume(*reinterpret_cast< qreal*>(_v)); break;
        case 5: _t->setMuted(*reinterpret_cast< bool*>(_v)); break;
        case 9: _t->setAutoPlay(*reinterpret_cast< bool*>(_v)); break;
        case 10: _t->setAutoLoad(*reinterpret_cast< bool*>(_v)); break;
        case 11: _t->setPlaybackRate(*reinterpret_cast< qreal*>(_v)); break;
        case 12: _t->setSource(*reinterpret_cast< QUrl*>(_v)); break;
        case 13: _t->setLoopCount(*reinterpret_cast< int*>(_v)); break;
        case 19: _t->setStartPosition(*reinterpret_cast< int*>(_v)); break;
        case 20: _t->setStopPosition(*reinterpret_cast< int*>(_v)); break;
        case 21: _t->setFastSeek(*reinterpret_cast< bool*>(_v)); break;
        case 22: _t->setTimeout(*reinterpret_cast< int*>(_v)); break;
        case 23: _t->setAbortOnTimeout(*reinterpret_cast< bool*>(_v)); break;
        case 24: _t->setChannelLayout(*reinterpret_cast< ChannelLayout*>(_v)); break;
        case 26: _t->setVideoCodecPriority(*reinterpret_cast< QStringList*>(_v)); break;
        case 27: _t->setVideoCodecOptions(*reinterpret_cast< QVariantMap*>(_v)); break;
        case 28: _t->setAVFormatOptions(*reinterpret_cast< QVariantMap*>(_v)); break;
        case 29: _t->setWallclockAsTimestamps(*reinterpret_cast< bool*>(_v)); break;
        case 31: _t->setAudioTrack(*reinterpret_cast< int*>(_v)); break;
        case 32: _t->setVideoTrack(*reinterpret_cast< int*>(_v)); break;
        case 33: _t->setBufferSize(*reinterpret_cast< int*>(_v)); break;
        case 34: _t->setBufferMode(*reinterpret_cast< BufferMode*>(_v)); break;
        case 35: _t->setFrameRate(*reinterpret_cast< qreal*>(_v)); break;
        case 36: _t->setExternalAudio(*reinterpret_cast< QUrl*>(_v)); break;
        case 41: _t->setInternalSubtitleTrack(*reinterpret_cast< int*>(_v)); break;
        case 42: _t->setMediaEndAction(*reinterpret_cast< MediaEndAction*>(_v)); break;
        case 45: _t->setAudioBackends(*reinterpret_cast< QStringList*>(_v)); break;
        case 47: _t->setNotifyInterval(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QmlAVPlayer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QmlAVPlayer.data,
      qt_meta_data_QmlAVPlayer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QmlAVPlayer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlAVPlayer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QmlAVPlayer.stringdata0))
        return static_cast<void*>(const_cast< QmlAVPlayer*>(this));
    if (!strcmp(_clname, "QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(const_cast< QmlAVPlayer*>(this));
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(const_cast< QmlAVPlayer*>(this));
    return QObject::qt_metacast(_clname);
}

int QmlAVPlayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 64)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 64;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 64)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 64;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 48;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 48;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 48;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 48;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 48;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 48;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QmlAVPlayer::volumeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QmlAVPlayer::mutedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void QmlAVPlayer::hasAudioChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void QmlAVPlayer::hasVideoChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void QmlAVPlayer::durationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void QmlAVPlayer::positionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void QmlAVPlayer::sourceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}

// SIGNAL 7
void QmlAVPlayer::autoLoadChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}

// SIGNAL 8
void QmlAVPlayer::loopCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, Q_NULLPTR);
}

// SIGNAL 9
void QmlAVPlayer::videoOutChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, Q_NULLPTR);
}

// SIGNAL 10
void QmlAVPlayer::playbackStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, Q_NULLPTR);
}

// SIGNAL 11
void QmlAVPlayer::autoPlayChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, Q_NULLPTR);
}

// SIGNAL 12
void QmlAVPlayer::playbackRateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, Q_NULLPTR);
}

// SIGNAL 13
void QmlAVPlayer::paused()
{
    QMetaObject::activate(this, &staticMetaObject, 13, Q_NULLPTR);
}

// SIGNAL 14
void QmlAVPlayer::stopped()
{
    QMetaObject::activate(this, &staticMetaObject, 14, Q_NULLPTR);
}

// SIGNAL 15
void QmlAVPlayer::playing()
{
    QMetaObject::activate(this, &staticMetaObject, 15, Q_NULLPTR);
}

// SIGNAL 16
void QmlAVPlayer::startPositionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, Q_NULLPTR);
}

// SIGNAL 17
void QmlAVPlayer::stopPositionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 17, Q_NULLPTR);
}

// SIGNAL 18
void QmlAVPlayer::seekableChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 18, Q_NULLPTR);
}

// SIGNAL 19
void QmlAVPlayer::seekFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 19, Q_NULLPTR);
}

// SIGNAL 20
void QmlAVPlayer::fastSeekChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 20, Q_NULLPTR);
}

// SIGNAL 21
void QmlAVPlayer::bufferProgressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 21, Q_NULLPTR);
}

// SIGNAL 22
void QmlAVPlayer::videoCodecPriorityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 22, Q_NULLPTR);
}

// SIGNAL 23
void QmlAVPlayer::videoCodecOptionsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 23, Q_NULLPTR);
}

// SIGNAL 24
void QmlAVPlayer::avFormatOptionsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 24, Q_NULLPTR);
}

// SIGNAL 25
void QmlAVPlayer::useWallclockAsTimestampsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 25, Q_NULLPTR);
}

// SIGNAL 26
void QmlAVPlayer::channelLayoutChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 26, Q_NULLPTR);
}

// SIGNAL 27
void QmlAVPlayer::timeoutChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 27, Q_NULLPTR);
}

// SIGNAL 28
void QmlAVPlayer::abortOnTimeoutChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 28, Q_NULLPTR);
}

// SIGNAL 29
void QmlAVPlayer::audioTrackChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 29, Q_NULLPTR);
}

// SIGNAL 30
void QmlAVPlayer::internalAudioTracksChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 30, Q_NULLPTR);
}

// SIGNAL 31
void QmlAVPlayer::videoTrackChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 31, Q_NULLPTR);
}

// SIGNAL 32
void QmlAVPlayer::internalVideoTracksChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 32, Q_NULLPTR);
}

// SIGNAL 33
void QmlAVPlayer::externalAudioChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 33, Q_NULLPTR);
}

// SIGNAL 34
void QmlAVPlayer::externalAudioTracksChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 34, Q_NULLPTR);
}

// SIGNAL 35
void QmlAVPlayer::internalSubtitleTrackChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 35, Q_NULLPTR);
}

// SIGNAL 36
void QmlAVPlayer::internalSubtitleTracksChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 36, Q_NULLPTR);
}

// SIGNAL 37
void QmlAVPlayer::bufferSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 37, Q_NULLPTR);
}

// SIGNAL 38
void QmlAVPlayer::bufferModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 38, Q_NULLPTR);
}

// SIGNAL 39
void QmlAVPlayer::frameRateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 39, Q_NULLPTR);
}

// SIGNAL 40
void QmlAVPlayer::mediaEndActionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 40, Q_NULLPTR);
}

// SIGNAL 41
void QmlAVPlayer::errorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 41, Q_NULLPTR);
}

// SIGNAL 42
void QmlAVPlayer::error(Error _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 42, _a);
}

// SIGNAL 43
void QmlAVPlayer::statusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 43, Q_NULLPTR);
}

// SIGNAL 44
void QmlAVPlayer::mediaObjectChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 44, Q_NULLPTR);
}

// SIGNAL 45
void QmlAVPlayer::audioBackendsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 45, Q_NULLPTR);
}

// SIGNAL 46
void QmlAVPlayer::notifyIntervalChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 46, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
