/****************************************************************************
** Meta object code from reading C++ file 'AudioTabController.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/tabcontrollers/AudioTabController.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AudioTabController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN11advsettings18AudioTabControllerE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN11advsettings18AudioTabControllerE = QtMocHelpers::stringData(
    "advsettings::AudioTabController",
    "playbackDeviceIndexChanged",
    "",
    "index",
    "mirrorDeviceIndexChanged",
    "mirrorVolumeChanged",
    "value",
    "mirrorMutedChanged",
    "micDeviceIndexChanged",
    "micVolumeChanged",
    "micMutedChanged",
    "micProximitySensorCanMuteChanged",
    "micReversePttChanged",
    "playbackDeviceListChanged",
    "recordingDeviceListChanged",
    "audioProfilesUpdated",
    "audioProfileAdded",
    "audioProfileDefaultChanged",
    "playbackOverrideChanged",
    "recordingOverrideChanged",
    "defaultProfileDisplay",
    "pttEnabledChanged",
    "pttActiveChanged",
    "pttShowNotificationChanged",
    "setMirrorVolume",
    "notify",
    "setMirrorMuted",
    "setMicVolume",
    "setMicMuted",
    "setMicProximitySensorCanMute",
    "setMicReversePtt",
    "setPlaybackDeviceIndex",
    "setMirrorDeviceIndex",
    "setMicDeviceIndex",
    "addAudioProfile",
    "name",
    "applyAudioProfile",
    "deleteAudioProfile",
    "setPlaybackOverride",
    "setRecordingOverride",
    "setAudioProfileDefault",
    "setPttEnabled",
    "setPttShowNotification",
    "applyDefaultProfile",
    "getPlaybackDeviceCount",
    "getPlaybackDeviceName",
    "getRecordingDeviceCount",
    "getRecordingDeviceName",
    "getAudioProfileCount",
    "getAudioProfileName",
    "getDefaultAudioProfileIndex",
    "playbackDeviceIndex",
    "mirrorDeviceIndex",
    "mirrorVolume",
    "mirrorMuted",
    "micDeviceIndex",
    "micVolume",
    "micMuted",
    "micProximitySensorCanMute",
    "micReversePtt",
    "audioProfileDefault",
    "playbackOverride",
    "recordingOverride",
    "pttEnabled",
    "pttActive",
    "pttShowNotification"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN11advsettings18AudioTabControllerE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      59,   14, // methods
      15,  549, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      20,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  368,    2, 0x06,   16 /* Public */,
       4,    1,  371,    2, 0x06,   18 /* Public */,
       5,    1,  374,    2, 0x06,   20 /* Public */,
       7,    1,  377,    2, 0x06,   22 /* Public */,
       8,    1,  380,    2, 0x06,   24 /* Public */,
       9,    1,  383,    2, 0x06,   26 /* Public */,
      10,    1,  386,    2, 0x06,   28 /* Public */,
      11,    1,  389,    2, 0x06,   30 /* Public */,
      12,    1,  392,    2, 0x06,   32 /* Public */,
      13,    0,  395,    2, 0x06,   34 /* Public */,
      14,    0,  396,    2, 0x06,   35 /* Public */,
      15,    0,  397,    2, 0x06,   36 /* Public */,
      16,    0,  398,    2, 0x06,   37 /* Public */,
      17,    1,  399,    2, 0x06,   38 /* Public */,
      18,    0,  402,    2, 0x06,   40 /* Public */,
      19,    0,  403,    2, 0x06,   41 /* Public */,
      20,    0,  404,    2, 0x06,   42 /* Public */,
      21,    1,  405,    2, 0x06,   43 /* Public */,
      22,    1,  408,    2, 0x06,   45 /* Public */,
      23,    1,  411,    2, 0x06,   47 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      24,    2,  414,    2, 0x0a,   49 /* Public */,
      24,    1,  419,    2, 0x2a,   52 /* Public | MethodCloned */,
      26,    2,  422,    2, 0x0a,   54 /* Public */,
      26,    1,  427,    2, 0x2a,   57 /* Public | MethodCloned */,
      27,    2,  430,    2, 0x0a,   59 /* Public */,
      27,    1,  435,    2, 0x2a,   62 /* Public | MethodCloned */,
      28,    2,  438,    2, 0x0a,   64 /* Public */,
      28,    1,  443,    2, 0x2a,   67 /* Public | MethodCloned */,
      29,    2,  446,    2, 0x0a,   69 /* Public */,
      29,    1,  451,    2, 0x2a,   72 /* Public | MethodCloned */,
      30,    2,  454,    2, 0x0a,   74 /* Public */,
      30,    1,  459,    2, 0x2a,   77 /* Public | MethodCloned */,
      31,    2,  462,    2, 0x0a,   79 /* Public */,
      31,    1,  467,    2, 0x2a,   82 /* Public | MethodCloned */,
      32,    2,  470,    2, 0x0a,   84 /* Public */,
      32,    1,  475,    2, 0x2a,   87 /* Public | MethodCloned */,
      33,    2,  478,    2, 0x0a,   89 /* Public */,
      33,    1,  483,    2, 0x2a,   92 /* Public | MethodCloned */,
      34,    1,  486,    2, 0x0a,   94 /* Public */,
      36,    1,  489,    2, 0x0a,   96 /* Public */,
      37,    1,  492,    2, 0x0a,   98 /* Public */,
      38,    2,  495,    2, 0x0a,  100 /* Public */,
      38,    1,  500,    2, 0x2a,  103 /* Public | MethodCloned */,
      39,    2,  503,    2, 0x0a,  105 /* Public */,
      39,    1,  508,    2, 0x2a,  108 /* Public | MethodCloned */,
      40,    2,  511,    2, 0x0a,  110 /* Public */,
      40,    1,  516,    2, 0x2a,  113 /* Public | MethodCloned */,
      41,    2,  519,    2, 0x0a,  115 /* Public */,
      41,    1,  524,    2, 0x2a,  118 /* Public | MethodCloned */,
      42,    2,  527,    2, 0x0a,  120 /* Public */,
      42,    1,  532,    2, 0x2a,  123 /* Public | MethodCloned */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      43,    0,  535,    2, 0x02,  125 /* Public */,
      44,    0,  536,    2, 0x02,  126 /* Public */,
      45,    1,  537,    2, 0x02,  127 /* Public */,
      46,    0,  540,    2, 0x02,  129 /* Public */,
      47,    1,  541,    2, 0x02,  130 /* Public */,
      48,    0,  544,    2, 0x02,  132 /* Public */,
      49,    1,  545,    2, 0x02,  133 /* Public */,
      50,    0,  548,    2, 0x02,  135 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Float,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Float,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::Float, QMetaType::Bool,    6,   25,
    QMetaType::Void, QMetaType::Float,    6,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,    6,   25,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Float, QMetaType::Bool,    6,   25,
    QMetaType::Void, QMetaType::Float,    6,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,    6,   25,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,    6,   25,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,    6,   25,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    6,   25,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    6,   25,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    6,   25,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::QString,   35,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,    6,   25,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,    6,   25,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,    6,   25,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,    6,   25,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,    6,   25,
    QMetaType::Void, QMetaType::Bool,    6,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::QString, QMetaType::Int,    3,
    QMetaType::Int,
    QMetaType::QString, QMetaType::Int,    3,
    QMetaType::UInt,
    QMetaType::QString, QMetaType::UInt,    3,
    QMetaType::Int,

 // properties: name, type, flags, notifyId, revision
      51, QMetaType::Int, 0x00015103, uint(0), 0,
      52, QMetaType::Int, 0x00015103, uint(1), 0,
      53, QMetaType::Float, 0x00015103, uint(2), 0,
      54, QMetaType::Bool, 0x00015103, uint(3), 0,
      55, QMetaType::Int, 0x00015103, uint(4), 0,
      56, QMetaType::Float, 0x00015103, uint(5), 0,
      57, QMetaType::Bool, 0x00015103, uint(6), 0,
      58, QMetaType::Bool, 0x00015103, uint(7), 0,
      59, QMetaType::Bool, 0x00015103, uint(8), 0,
      60, QMetaType::Bool, 0x00015103, uint(13), 0,
      61, QMetaType::Bool, 0x00015103, uint(14), 0,
      62, QMetaType::Bool, 0x00015103, uint(15), 0,
      63, QMetaType::Bool, 0x00015103, uint(17), 0,
      64, QMetaType::Bool, 0x00015001, uint(18), 0,
      65, QMetaType::Bool, 0x00015103, uint(19), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject advsettings::AudioTabController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN11advsettings18AudioTabControllerE.offsetsAndSizes,
    qt_meta_data_ZN11advsettings18AudioTabControllerE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN11advsettings18AudioTabControllerE_t,
        // property 'playbackDeviceIndex'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'mirrorDeviceIndex'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'mirrorVolume'
        QtPrivate::TypeAndForceComplete<float, std::true_type>,
        // property 'mirrorMuted'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'micDeviceIndex'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'micVolume'
        QtPrivate::TypeAndForceComplete<float, std::true_type>,
        // property 'micMuted'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'micProximitySensorCanMute'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'micReversePtt'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'audioProfileDefault'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'playbackOverride'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'recordingOverride'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'pttEnabled'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'pttActive'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'pttShowNotification'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AudioTabController, std::true_type>,
        // method 'playbackDeviceIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'mirrorDeviceIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'mirrorVolumeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'mirrorMutedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'micDeviceIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'micVolumeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'micMutedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'micProximitySensorCanMuteChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'micReversePttChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'playbackDeviceListChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'recordingDeviceListChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'audioProfilesUpdated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'audioProfileAdded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'audioProfileDefaultChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'playbackOverrideChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'recordingOverrideChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'defaultProfileDisplay'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'pttEnabledChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'pttActiveChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'pttShowNotificationChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setMirrorVolume'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setMirrorVolume'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'setMirrorMuted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setMirrorMuted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setMicVolume'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setMicVolume'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'setMicMuted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setMicMuted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setMicProximitySensorCanMute'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setMicProximitySensorCanMute'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setMicReversePtt'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setMicReversePtt'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setPlaybackDeviceIndex'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setPlaybackDeviceIndex'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setMirrorDeviceIndex'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setMirrorDeviceIndex'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setMicDeviceIndex'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setMicDeviceIndex'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'addAudioProfile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'applyAudioProfile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<unsigned , std::false_type>,
        // method 'deleteAudioProfile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<unsigned , std::false_type>,
        // method 'setPlaybackOverride'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setPlaybackOverride'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setRecordingOverride'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setRecordingOverride'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setAudioProfileDefault'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setAudioProfileDefault'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setPttEnabled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setPttEnabled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setPttShowNotification'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setPttShowNotification'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'applyDefaultProfile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'getPlaybackDeviceCount'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'getPlaybackDeviceName'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'getRecordingDeviceCount'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'getRecordingDeviceName'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'getAudioProfileCount'
        QtPrivate::TypeAndForceComplete<unsigned , std::false_type>,
        // method 'getAudioProfileName'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<unsigned , std::false_type>,
        // method 'getDefaultAudioProfileIndex'
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void advsettings::AudioTabController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<AudioTabController *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->playbackDeviceIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->mirrorDeviceIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->mirrorVolumeChanged((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        case 3: _t->mirrorMutedChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->micDeviceIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->micVolumeChanged((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        case 6: _t->micMutedChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->micProximitySensorCanMuteChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->micReversePttChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->playbackDeviceListChanged(); break;
        case 10: _t->recordingDeviceListChanged(); break;
        case 11: _t->audioProfilesUpdated(); break;
        case 12: _t->audioProfileAdded(); break;
        case 13: _t->audioProfileDefaultChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 14: _t->playbackOverrideChanged(); break;
        case 15: _t->recordingOverrideChanged(); break;
        case 16: _t->defaultProfileDisplay(); break;
        case 17: _t->pttEnabledChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 18: _t->pttActiveChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 19: _t->pttShowNotificationChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 20: _t->setMirrorVolume((*reinterpret_cast< std::add_pointer_t<float>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 21: _t->setMirrorVolume((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        case 22: _t->setMirrorMuted((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 23: _t->setMirrorMuted((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 24: _t->setMicVolume((*reinterpret_cast< std::add_pointer_t<float>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 25: _t->setMicVolume((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        case 26: _t->setMicMuted((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 27: _t->setMicMuted((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 28: _t->setMicProximitySensorCanMute((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 29: _t->setMicProximitySensorCanMute((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 30: _t->setMicReversePtt((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 31: _t->setMicReversePtt((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 32: _t->setPlaybackDeviceIndex((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 33: _t->setPlaybackDeviceIndex((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 34: _t->setMirrorDeviceIndex((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 35: _t->setMirrorDeviceIndex((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 36: _t->setMicDeviceIndex((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 37: _t->setMicDeviceIndex((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 38: _t->addAudioProfile((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 39: _t->applyAudioProfile((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1]))); break;
        case 40: _t->deleteAudioProfile((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1]))); break;
        case 41: _t->setPlaybackOverride((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 42: _t->setPlaybackOverride((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 43: _t->setRecordingOverride((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 44: _t->setRecordingOverride((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 45: _t->setAudioProfileDefault((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 46: _t->setAudioProfileDefault((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 47: _t->setPttEnabled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 48: _t->setPttEnabled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 49: _t->setPttShowNotification((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 50: _t->setPttShowNotification((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 51: _t->applyDefaultProfile(); break;
        case 52: { int _r = _t->getPlaybackDeviceCount();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 53: { QString _r = _t->getPlaybackDeviceName((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 54: { int _r = _t->getRecordingDeviceCount();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 55: { QString _r = _t->getRecordingDeviceName((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 56: { uint _r = _t->getAudioProfileCount();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = std::move(_r); }  break;
        case 57: { QString _r = _t->getAudioProfileName((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 58: { int _r = _t->getDefaultAudioProfileIndex();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (AudioTabController::*)(int );
            if (_q_method_type _q_method = &AudioTabController::playbackDeviceIndexChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (AudioTabController::*)(int );
            if (_q_method_type _q_method = &AudioTabController::mirrorDeviceIndexChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (AudioTabController::*)(float );
            if (_q_method_type _q_method = &AudioTabController::mirrorVolumeChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (AudioTabController::*)(bool );
            if (_q_method_type _q_method = &AudioTabController::mirrorMutedChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _q_method_type = void (AudioTabController::*)(int );
            if (_q_method_type _q_method = &AudioTabController::micDeviceIndexChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _q_method_type = void (AudioTabController::*)(float );
            if (_q_method_type _q_method = &AudioTabController::micVolumeChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _q_method_type = void (AudioTabController::*)(bool );
            if (_q_method_type _q_method = &AudioTabController::micMutedChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _q_method_type = void (AudioTabController::*)(bool );
            if (_q_method_type _q_method = &AudioTabController::micProximitySensorCanMuteChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _q_method_type = void (AudioTabController::*)(bool );
            if (_q_method_type _q_method = &AudioTabController::micReversePttChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _q_method_type = void (AudioTabController::*)();
            if (_q_method_type _q_method = &AudioTabController::playbackDeviceListChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _q_method_type = void (AudioTabController::*)();
            if (_q_method_type _q_method = &AudioTabController::recordingDeviceListChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _q_method_type = void (AudioTabController::*)();
            if (_q_method_type _q_method = &AudioTabController::audioProfilesUpdated; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _q_method_type = void (AudioTabController::*)();
            if (_q_method_type _q_method = &AudioTabController::audioProfileAdded; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _q_method_type = void (AudioTabController::*)(bool );
            if (_q_method_type _q_method = &AudioTabController::audioProfileDefaultChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 13;
                return;
            }
        }
        {
            using _q_method_type = void (AudioTabController::*)();
            if (_q_method_type _q_method = &AudioTabController::playbackOverrideChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 14;
                return;
            }
        }
        {
            using _q_method_type = void (AudioTabController::*)();
            if (_q_method_type _q_method = &AudioTabController::recordingOverrideChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 15;
                return;
            }
        }
        {
            using _q_method_type = void (AudioTabController::*)();
            if (_q_method_type _q_method = &AudioTabController::defaultProfileDisplay; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 16;
                return;
            }
        }
        {
            using _q_method_type = void (AudioTabController::*)(bool );
            if (_q_method_type _q_method = &AudioTabController::pttEnabledChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 17;
                return;
            }
        }
        {
            using _q_method_type = void (AudioTabController::*)(bool );
            if (_q_method_type _q_method = &AudioTabController::pttActiveChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 18;
                return;
            }
        }
        {
            using _q_method_type = void (AudioTabController::*)(bool );
            if (_q_method_type _q_method = &AudioTabController::pttShowNotificationChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 19;
                return;
            }
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->playbackDeviceIndex(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->mirrorDeviceIndex(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->mirrorVolume(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->mirrorMuted(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->micDeviceIndex(); break;
        case 5: *reinterpret_cast< float*>(_v) = _t->micVolume(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->micMuted(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->micProximitySensorCanMute(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->micReversePtt(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->audioProfileDefault(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->playbackOverride(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->recordingOverride(); break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->pttEnabled(); break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->pttActive(); break;
        case 14: *reinterpret_cast< bool*>(_v) = _t->pttShowNotification(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPlaybackDeviceIndex(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setMirrorDeviceIndex(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setMirrorVolume(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setMirrorMuted(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setMicDeviceIndex(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setMicVolume(*reinterpret_cast< float*>(_v)); break;
        case 6: _t->setMicMuted(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setMicProximitySensorCanMute(*reinterpret_cast< bool*>(_v)); break;
        case 8: _t->setMicReversePtt(*reinterpret_cast< bool*>(_v)); break;
        case 9: _t->setAudioProfileDefault(*reinterpret_cast< bool*>(_v)); break;
        case 10: _t->setPlaybackOverride(*reinterpret_cast< bool*>(_v)); break;
        case 11: _t->setRecordingOverride(*reinterpret_cast< bool*>(_v)); break;
        case 12: _t->setPttEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 14: _t->setPttShowNotification(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *advsettings::AudioTabController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *advsettings::AudioTabController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN11advsettings18AudioTabControllerE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int advsettings::AudioTabController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 59)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 59;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 59)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 59;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void advsettings::AudioTabController::playbackDeviceIndexChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void advsettings::AudioTabController::mirrorDeviceIndexChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void advsettings::AudioTabController::mirrorVolumeChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void advsettings::AudioTabController::mirrorMutedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void advsettings::AudioTabController::micDeviceIndexChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void advsettings::AudioTabController::micVolumeChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void advsettings::AudioTabController::micMutedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void advsettings::AudioTabController::micProximitySensorCanMuteChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void advsettings::AudioTabController::micReversePttChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void advsettings::AudioTabController::playbackDeviceListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void advsettings::AudioTabController::recordingDeviceListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void advsettings::AudioTabController::audioProfilesUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void advsettings::AudioTabController::audioProfileAdded()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void advsettings::AudioTabController::audioProfileDefaultChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void advsettings::AudioTabController::playbackOverrideChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void advsettings::AudioTabController::recordingOverrideChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void advsettings::AudioTabController::defaultProfileDisplay()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void advsettings::AudioTabController::pttEnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void advsettings::AudioTabController::pttActiveChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void advsettings::AudioTabController::pttShowNotificationChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}
QT_WARNING_POP
