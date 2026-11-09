/****************************************************************************
** Meta object code from reading C++ file 'overlaycontroller.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/overlaycontroller.h"
#include <QtGui/qscreen.h>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'overlaycontroller.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN11advsettings17OverlayControllerE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN11advsettings17OverlayControllerE = QtMocHelpers::stringData(
    "advsettings::OverlayController",
    "keyBoardInputSignal",
    "",
    "input",
    "userValue",
    "crashRecoveryDisabledChanged",
    "value",
    "exclusiveInputEnabledChanged",
    "enableDebugChanged",
    "disableVersionCheckChanged",
    "newVersionDetectedChanged",
    "versionCheckTextChanged",
    "vsyncDisabledChanged",
    "customTickRateMsChanged",
    "autoApplyChaperoneEnabledChanged",
    "soundVolumeChanged",
    "desktopModeToggleChanged",
    "hideSocialsChanged",
    "languageChanged",
    "submitLastTextField",
    "renderOverlay",
    "OnRenderRequest",
    "OnTimeoutPumpEvents",
    "OnNetworkReply",
    "QNetworkReply*",
    "reply",
    "showKeyboard",
    "existingText",
    "hideKeyboard",
    "setKeyboardPos",
    "playActivationSound",
    "playFocusChangedSound",
    "playAlarm01Sound",
    "loop",
    "setAlarm01SoundVolume",
    "vol",
    "cancelAlarm01Sound",
    "setCrashRecoveryDisabled",
    "notify",
    "setExclusiveInputEnabled",
    "setEnableDebug",
    "setDisableVersionCheck",
    "setNewVersionDetected",
    "setVersionCheckText",
    "setVsyncDisabled",
    "setCustomTickRateMs",
    "setAutoApplyChaperoneEnabled",
    "setSoundVolume",
    "setDesktopModeToggle",
    "setHideSocials",
    "setLanguage",
    "exitApp",
    "setAutoChapProfileName",
    "index",
    "getVersionString",
    "getVRRuntimePathUrl",
    "soundDisabled",
    "isAiTranslated",
    "locale",
    "aiTranslationPromptSeen",
    "setAiTranslationPromptSeen",
    "resetAiTranslationPrompts",
    "m_desktopMode",
    "crashRecoveryDisabled",
    "vsyncDisabled",
    "enableDebug",
    "disableVersionCheck",
    "newVersionDetected",
    "versionCheckText",
    "customTickRateMs",
    "exclusiveInputEnabled",
    "autoApplyChaperoneEnabled",
    "soundVolume",
    "desktopModeToggle",
    "hideSocials",
    "language"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN11advsettings17OverlayControllerE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      67,   14, // methods
      14,  617, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      17,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,  416,    2, 0x06,   15 /* Public */,
       1,    1,  421,    2, 0x26,   18 /* Public | MethodCloned */,
       5,    1,  424,    2, 0x06,   20 /* Public */,
       7,    1,  427,    2, 0x06,   22 /* Public */,
       8,    1,  430,    2, 0x06,   24 /* Public */,
       9,    1,  433,    2, 0x06,   26 /* Public */,
      10,    1,  436,    2, 0x06,   28 /* Public */,
      11,    1,  439,    2, 0x06,   30 /* Public */,
      12,    1,  442,    2, 0x06,   32 /* Public */,
      13,    1,  445,    2, 0x06,   34 /* Public */,
      14,    1,  448,    2, 0x06,   36 /* Public */,
      15,    1,  451,    2, 0x06,   38 /* Public */,
      16,    1,  454,    2, 0x06,   40 /* Public */,
      17,    1,  457,    2, 0x06,   42 /* Public */,
      18,    1,  460,    2, 0x06,   44 /* Public */,
      19,    1,  463,    2, 0x06,   46 /* Public */,
      19,    0,  466,    2, 0x26,   48 /* Public | MethodCloned */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      20,    0,  467,    2, 0x0a,   49 /* Public */,
      21,    0,  468,    2, 0x0a,   50 /* Public */,
      22,    0,  469,    2, 0x0a,   51 /* Public */,
      23,    1,  470,    2, 0x0a,   52 /* Public */,
      26,    2,  473,    2, 0x0a,   54 /* Public */,
      26,    1,  478,    2, 0x2a,   57 /* Public | MethodCloned */,
      28,    1,  481,    2, 0x0a,   59 /* Public */,
      28,    0,  484,    2, 0x2a,   61 /* Public | MethodCloned */,
      29,    0,  485,    2, 0x0a,   62 /* Public */,
      30,    0,  486,    2, 0x0a,   63 /* Public */,
      31,    0,  487,    2, 0x0a,   64 /* Public */,
      32,    1,  488,    2, 0x0a,   65 /* Public */,
      32,    0,  491,    2, 0x2a,   67 /* Public | MethodCloned */,
      34,    1,  492,    2, 0x0a,   68 /* Public */,
      36,    0,  495,    2, 0x0a,   70 /* Public */,
      37,    2,  496,    2, 0x0a,   71 /* Public */,
      37,    1,  501,    2, 0x2a,   74 /* Public | MethodCloned */,
      39,    2,  504,    2, 0x0a,   76 /* Public */,
      39,    1,  509,    2, 0x2a,   79 /* Public | MethodCloned */,
      40,    2,  512,    2, 0x0a,   81 /* Public */,
      40,    1,  517,    2, 0x2a,   84 /* Public | MethodCloned */,
      41,    2,  520,    2, 0x0a,   86 /* Public */,
      41,    1,  525,    2, 0x2a,   89 /* Public | MethodCloned */,
      42,    2,  528,    2, 0x0a,   91 /* Public */,
      42,    1,  533,    2, 0x2a,   94 /* Public | MethodCloned */,
      43,    2,  536,    2, 0x0a,   96 /* Public */,
      43,    1,  541,    2, 0x2a,   99 /* Public | MethodCloned */,
      44,    2,  544,    2, 0x0a,  101 /* Public */,
      44,    1,  549,    2, 0x2a,  104 /* Public | MethodCloned */,
      45,    2,  552,    2, 0x0a,  106 /* Public */,
      45,    1,  557,    2, 0x2a,  109 /* Public | MethodCloned */,
      46,    2,  560,    2, 0x0a,  111 /* Public */,
      46,    1,  565,    2, 0x2a,  114 /* Public | MethodCloned */,
      47,    2,  568,    2, 0x0a,  116 /* Public */,
      47,    1,  573,    2, 0x2a,  119 /* Public | MethodCloned */,
      48,    2,  576,    2, 0x0a,  121 /* Public */,
      48,    1,  581,    2, 0x2a,  124 /* Public | MethodCloned */,
      49,    2,  584,    2, 0x0a,  126 /* Public */,
      49,    1,  589,    2, 0x2a,  129 /* Public | MethodCloned */,
      50,    2,  592,    2, 0x0a,  131 /* Public */,
      50,    1,  597,    2, 0x2a,  134 /* Public | MethodCloned */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      51,    0,  600,    2, 0x02,  136 /* Public */,
      52,    1,  601,    2, 0x02,  137 /* Public */,
      54,    0,  604,    2, 0x02,  139 /* Public */,
      55,    0,  605,    2, 0x02,  140 /* Public */,
      56,    0,  606,    2, 0x02,  141 /* Public */,
      57,    1,  607,    2, 0x102,  142 /* Public | MethodIsConst  */,
      59,    1,  610,    2, 0x102,  144 /* Public | MethodIsConst  */,
      60,    1,  613,    2, 0x02,  146 /* Public */,
      61,    0,  616,    2, 0x02,  148 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::ULong,    3,    4,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::ULong,    6,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 24,   25,
    QMetaType::Void, QMetaType::QString, QMetaType::ULong,   27,    4,
    QMetaType::Void, QMetaType::QString,   27,
    QMetaType::Void, QMetaType::ULong,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   33,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,   35,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,    6,   38,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,    6,   38,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,    6,   38,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,    6,   38,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,    6,   38,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    6,   38,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,    6,   38,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    6,   38,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,    6,   38,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Double, QMetaType::Bool,    6,   38,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,    6,   38,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,    6,   38,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    6,   38,
    QMetaType::Void, QMetaType::QString,    6,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   53,
    QMetaType::QString,
    QMetaType::QUrl,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::QString,   58,
    QMetaType::Bool, QMetaType::QString,   58,
    QMetaType::Void, QMetaType::QString,   58,
    QMetaType::Void,

 // properties: name, type, flags, notifyId, revision
      62, QMetaType::Bool, 0x00015001, uint(-1), 0,
      63, QMetaType::Bool, 0x00015103, uint(2), 0,
      64, QMetaType::Bool, 0x00015103, uint(8), 0,
      65, QMetaType::Bool, 0x00015103, uint(4), 0,
      66, QMetaType::Bool, 0x00015103, uint(5), 0,
      67, QMetaType::Bool, 0x00015103, uint(6), 0,
      68, QMetaType::QString, 0x00015103, uint(7), 0,
      69, QMetaType::Int, 0x00015103, uint(9), 0,
      70, QMetaType::Bool, 0x00015103, uint(3), 0,
      71, QMetaType::Bool, 0x00015103, uint(10), 0,
      72, QMetaType::Double, 0x00015103, uint(11), 0,
      73, QMetaType::Bool, 0x00015103, uint(12), 0,
      74, QMetaType::Bool, 0x00015103, uint(13), 0,
      75, QMetaType::QString, 0x00015103, uint(14), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject advsettings::OverlayController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN11advsettings17OverlayControllerE.offsetsAndSizes,
    qt_meta_data_ZN11advsettings17OverlayControllerE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN11advsettings17OverlayControllerE_t,
        // property 'm_desktopMode'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'crashRecoveryDisabled'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'vsyncDisabled'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'enableDebug'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'disableVersionCheck'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'newVersionDetected'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'versionCheckText'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'customTickRateMs'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'exclusiveInputEnabled'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'autoApplyChaperoneEnabled'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'soundVolume'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'desktopModeToggle'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'hideSocials'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'language'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<OverlayController, std::true_type>,
        // method 'keyBoardInputSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<unsigned long, std::false_type>,
        // method 'keyBoardInputSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'crashRecoveryDisabledChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'exclusiveInputEnabledChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'enableDebugChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'disableVersionCheckChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'newVersionDetectedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'versionCheckTextChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'vsyncDisabledChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'customTickRateMsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'autoApplyChaperoneEnabledChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'soundVolumeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'desktopModeToggleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'hideSocialsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'languageChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'submitLastTextField'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<unsigned long, std::false_type>,
        // method 'submitLastTextField'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'renderOverlay'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'OnRenderRequest'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'OnTimeoutPumpEvents'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'OnNetworkReply'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>,
        // method 'showKeyboard'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<unsigned long, std::false_type>,
        // method 'showKeyboard'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'hideKeyboard'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<unsigned long, std::false_type>,
        // method 'hideKeyboard'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setKeyboardPos'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'playActivationSound'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'playFocusChangedSound'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'playAlarm01Sound'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'playAlarm01Sound'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setAlarm01SoundVolume'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'cancelAlarm01Sound'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setCrashRecoveryDisabled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setCrashRecoveryDisabled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setExclusiveInputEnabled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setExclusiveInputEnabled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setEnableDebug'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setEnableDebug'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setDisableVersionCheck'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setDisableVersionCheck'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setNewVersionDetected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setNewVersionDetected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setVersionCheckText'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setVersionCheckText'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'setVsyncDisabled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setVsyncDisabled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setCustomTickRateMs'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setCustomTickRateMs'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setAutoApplyChaperoneEnabled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setAutoApplyChaperoneEnabled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setSoundVolume'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setSoundVolume'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'setDesktopModeToggle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setDesktopModeToggle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setHideSocials'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setHideSocials'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setLanguage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setLanguage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'exitApp'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setAutoChapProfileName'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'getVersionString'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'getVRRuntimePathUrl'
        QtPrivate::TypeAndForceComplete<QUrl, std::false_type>,
        // method 'soundDisabled'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'isAiTranslated'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'aiTranslationPromptSeen'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'setAiTranslationPromptSeen'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'resetAiTranslationPrompts'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void advsettings::OverlayController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<OverlayController *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->keyBoardInputSignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<ulong>>(_a[2]))); break;
        case 1: _t->keyBoardInputSignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->crashRecoveryDisabledChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->exclusiveInputEnabledChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->enableDebugChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->disableVersionCheckChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->newVersionDetectedChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->versionCheckTextChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->vsyncDisabledChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->customTickRateMsChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->autoApplyChaperoneEnabledChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 11: _t->soundVolumeChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 12: _t->desktopModeToggleChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 13: _t->hideSocialsChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 14: _t->languageChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 15: _t->submitLastTextField((*reinterpret_cast< std::add_pointer_t<ulong>>(_a[1]))); break;
        case 16: _t->submitLastTextField(); break;
        case 17: _t->renderOverlay(); break;
        case 18: _t->OnRenderRequest(); break;
        case 19: _t->OnTimeoutPumpEvents(); break;
        case 20: _t->OnNetworkReply((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1]))); break;
        case 21: _t->showKeyboard((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<ulong>>(_a[2]))); break;
        case 22: _t->showKeyboard((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 23: _t->hideKeyboard((*reinterpret_cast< std::add_pointer_t<ulong>>(_a[1]))); break;
        case 24: _t->hideKeyboard(); break;
        case 25: _t->setKeyboardPos(); break;
        case 26: _t->playActivationSound(); break;
        case 27: _t->playFocusChangedSound(); break;
        case 28: _t->playAlarm01Sound((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 29: _t->playAlarm01Sound(); break;
        case 30: _t->setAlarm01SoundVolume((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        case 31: _t->cancelAlarm01Sound(); break;
        case 32: _t->setCrashRecoveryDisabled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 33: _t->setCrashRecoveryDisabled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 34: _t->setExclusiveInputEnabled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 35: _t->setExclusiveInputEnabled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 36: _t->setEnableDebug((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 37: _t->setEnableDebug((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 38: _t->setDisableVersionCheck((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 39: _t->setDisableVersionCheck((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 40: _t->setNewVersionDetected((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 41: _t->setNewVersionDetected((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 42: _t->setVersionCheckText((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 43: _t->setVersionCheckText((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 44: _t->setVsyncDisabled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 45: _t->setVsyncDisabled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 46: _t->setCustomTickRateMs((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 47: _t->setCustomTickRateMs((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 48: _t->setAutoApplyChaperoneEnabled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 49: _t->setAutoApplyChaperoneEnabled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 50: _t->setSoundVolume((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 51: _t->setSoundVolume((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 52: _t->setDesktopModeToggle((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 53: _t->setDesktopModeToggle((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 54: _t->setHideSocials((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 55: _t->setHideSocials((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 56: _t->setLanguage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 57: _t->setLanguage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 58: _t->exitApp(); break;
        case 59: _t->setAutoChapProfileName((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 60: { QString _r = _t->getVersionString();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 61: { QUrl _r = _t->getVRRuntimePathUrl();
            if (_a[0]) *reinterpret_cast< QUrl*>(_a[0]) = std::move(_r); }  break;
        case 62: { bool _r = _t->soundDisabled();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 63: { bool _r = _t->isAiTranslated((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 64: { bool _r = _t->aiTranslationPromptSeen((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 65: _t->setAiTranslationPromptSeen((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 66: _t->resetAiTranslationPrompts(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (OverlayController::*)(QString , unsigned long );
            if (_q_method_type _q_method = &OverlayController::keyBoardInputSignal; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (OverlayController::*)(bool );
            if (_q_method_type _q_method = &OverlayController::crashRecoveryDisabledChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (OverlayController::*)(bool );
            if (_q_method_type _q_method = &OverlayController::exclusiveInputEnabledChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _q_method_type = void (OverlayController::*)(bool );
            if (_q_method_type _q_method = &OverlayController::enableDebugChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _q_method_type = void (OverlayController::*)(bool );
            if (_q_method_type _q_method = &OverlayController::disableVersionCheckChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _q_method_type = void (OverlayController::*)(bool );
            if (_q_method_type _q_method = &OverlayController::newVersionDetectedChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _q_method_type = void (OverlayController::*)(QString );
            if (_q_method_type _q_method = &OverlayController::versionCheckTextChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _q_method_type = void (OverlayController::*)(bool );
            if (_q_method_type _q_method = &OverlayController::vsyncDisabledChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _q_method_type = void (OverlayController::*)(int );
            if (_q_method_type _q_method = &OverlayController::customTickRateMsChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _q_method_type = void (OverlayController::*)(bool );
            if (_q_method_type _q_method = &OverlayController::autoApplyChaperoneEnabledChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _q_method_type = void (OverlayController::*)(double );
            if (_q_method_type _q_method = &OverlayController::soundVolumeChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _q_method_type = void (OverlayController::*)(bool );
            if (_q_method_type _q_method = &OverlayController::desktopModeToggleChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _q_method_type = void (OverlayController::*)(bool );
            if (_q_method_type _q_method = &OverlayController::hideSocialsChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 13;
                return;
            }
        }
        {
            using _q_method_type = void (OverlayController::*)(QString );
            if (_q_method_type _q_method = &OverlayController::languageChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 14;
                return;
            }
        }
        {
            using _q_method_type = void (OverlayController::*)(unsigned long );
            if (_q_method_type _q_method = &OverlayController::submitLastTextField; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 15;
                return;
            }
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isDesktopMode(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->crashRecoveryDisabled(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->vsyncDisabled(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->enableDebug(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->disableVersionCheck(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->newVersionDetected(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->versionCheckText(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->customTickRateMs(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->exclusiveInputEnabled(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->autoApplyChaperoneEnabled(); break;
        case 10: *reinterpret_cast< double*>(_v) = _t->soundVolume(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->desktopModeToggle(); break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->hideSocials(); break;
        case 13: *reinterpret_cast< QString*>(_v) = _t->language(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setCrashRecoveryDisabled(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setVsyncDisabled(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setEnableDebug(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setDisableVersionCheck(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setNewVersionDetected(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setVersionCheckText(*reinterpret_cast< QString*>(_v)); break;
        case 7: _t->setCustomTickRateMs(*reinterpret_cast< int*>(_v)); break;
        case 8: _t->setExclusiveInputEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 9: _t->setAutoApplyChaperoneEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 10: _t->setSoundVolume(*reinterpret_cast< double*>(_v)); break;
        case 11: _t->setDesktopModeToggle(*reinterpret_cast< bool*>(_v)); break;
        case 12: _t->setHideSocials(*reinterpret_cast< bool*>(_v)); break;
        case 13: _t->setLanguage(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *advsettings::OverlayController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *advsettings::OverlayController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN11advsettings17OverlayControllerE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int advsettings::OverlayController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 67)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 67;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 67)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 67;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void advsettings::OverlayController::keyBoardInputSignal(QString _t1, unsigned long _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 2
void advsettings::OverlayController::crashRecoveryDisabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void advsettings::OverlayController::exclusiveInputEnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void advsettings::OverlayController::enableDebugChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void advsettings::OverlayController::disableVersionCheckChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void advsettings::OverlayController::newVersionDetectedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void advsettings::OverlayController::versionCheckTextChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void advsettings::OverlayController::vsyncDisabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void advsettings::OverlayController::customTickRateMsChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void advsettings::OverlayController::autoApplyChaperoneEnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void advsettings::OverlayController::soundVolumeChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void advsettings::OverlayController::desktopModeToggleChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void advsettings::OverlayController::hideSocialsChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void advsettings::OverlayController::languageChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void advsettings::OverlayController::submitLastTextField(unsigned long _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}
QT_WARNING_POP
