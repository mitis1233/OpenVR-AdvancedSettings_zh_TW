/****************************************************************************
** Meta object code from reading C++ file 'SteamVRTabController.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/tabcontrollers/SteamVRTabController.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SteamVRTabController.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN11advsettings20SteamVRTabControllerE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN11advsettings20SteamVRTabControllerE = QtMocHelpers::stringData(
    "advsettings::SteamVRTabController",
    "performanceGraphChanged",
    "",
    "value",
    "multipleDriverChanged",
    "systemButtonChanged",
    "noFadeToGridChanged",
    "dNDChanged",
    "controllerPowerChanged",
    "noHMDChanged",
    "cameraActiveChanged",
    "cameraBoundsChanged",
    "cameraContChanged",
    "pairStatusChanged",
    "updateRXTX",
    "perAppBindEnabledChanged",
    "onConnected",
    "onDisconnect",
    "onMsgRec",
    "Msg",
    "setPerformanceGraph",
    "notify",
    "setSystemButton",
    "setNoFadeToGrid",
    "setMultipleDriver",
    "setDND",
    "setControllerPower",
    "setNoHMD",
    "setCameraActive",
    "setCameraBounds",
    "setCameraCont",
    "setPerAppBindEnabled",
    "restartSteamVR",
    "onGetBindingUrlResponse",
    "QNetworkReply*",
    "reply",
    "onApplyBindingResponse",
    "onGetBindingDataResponse",
    "searchRXTX",
    "launchBindingUI",
    "getRXTXCount",
    "getTXList",
    "i",
    "getRXList",
    "getDeviceName",
    "getDongleType",
    "getDongleUsage",
    "pairDevice",
    "sn",
    "updateRXTXList",
    "setBindingQMLWrapper",
    "appID",
    "def",
    "systemButton",
    "multipleDriver",
    "noFadeToGrid",
    "performanceGraph",
    "dnd",
    "cameraActive",
    "cameraBounds",
    "cameraCont",
    "perAppBindEnabled",
    "controllerPower",
    "noHMD"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN11advsettings20SteamVRTabControllerE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      54,   14, // methods
      11,  508, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      13,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  338,    2, 0x06,   12 /* Public */,
       4,    1,  341,    2, 0x06,   14 /* Public */,
       5,    1,  344,    2, 0x06,   16 /* Public */,
       6,    1,  347,    2, 0x06,   18 /* Public */,
       7,    1,  350,    2, 0x06,   20 /* Public */,
       8,    1,  353,    2, 0x06,   22 /* Public */,
       9,    1,  356,    2, 0x06,   24 /* Public */,
      10,    1,  359,    2, 0x06,   26 /* Public */,
      11,    1,  362,    2, 0x06,   28 /* Public */,
      12,    1,  365,    2, 0x06,   30 /* Public */,
      13,    1,  368,    2, 0x06,   32 /* Public */,
      14,    1,  371,    2, 0x06,   34 /* Public */,
      15,    1,  374,    2, 0x06,   36 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      16,    0,  377,    2, 0x0a,   38 /* Public */,
      17,    0,  378,    2, 0x0a,   39 /* Public */,
      18,    1,  379,    2, 0x0a,   40 /* Public */,
      20,    2,  382,    2, 0x0a,   42 /* Public */,
      20,    1,  387,    2, 0x2a,   45 /* Public | MethodCloned */,
      22,    2,  390,    2, 0x0a,   47 /* Public */,
      22,    1,  395,    2, 0x2a,   50 /* Public | MethodCloned */,
      23,    2,  398,    2, 0x0a,   52 /* Public */,
      23,    1,  403,    2, 0x2a,   55 /* Public | MethodCloned */,
      24,    2,  406,    2, 0x0a,   57 /* Public */,
      24,    1,  411,    2, 0x2a,   60 /* Public | MethodCloned */,
      25,    2,  414,    2, 0x0a,   62 /* Public */,
      25,    1,  419,    2, 0x2a,   65 /* Public | MethodCloned */,
      26,    2,  422,    2, 0x0a,   67 /* Public */,
      26,    1,  427,    2, 0x2a,   70 /* Public | MethodCloned */,
      27,    2,  430,    2, 0x0a,   72 /* Public */,
      27,    1,  435,    2, 0x2a,   75 /* Public | MethodCloned */,
      28,    2,  438,    2, 0x0a,   77 /* Public */,
      28,    1,  443,    2, 0x2a,   80 /* Public | MethodCloned */,
      29,    2,  446,    2, 0x0a,   82 /* Public */,
      29,    1,  451,    2, 0x2a,   85 /* Public | MethodCloned */,
      30,    2,  454,    2, 0x0a,   87 /* Public */,
      30,    1,  459,    2, 0x2a,   90 /* Public | MethodCloned */,
      31,    2,  462,    2, 0x0a,   92 /* Public */,
      31,    1,  467,    2, 0x2a,   95 /* Public | MethodCloned */,
      32,    0,  470,    2, 0x0a,   97 /* Public */,
      33,    1,  471,    2, 0x0a,   98 /* Public */,
      36,    1,  474,    2, 0x0a,  100 /* Public */,
      37,    1,  477,    2, 0x0a,  102 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      38,    0,  480,    2, 0x02,  104 /* Public */,
      39,    0,  481,    2, 0x02,  105 /* Public */,
      40,    0,  482,    2, 0x02,  106 /* Public */,
      41,    1,  483,    2, 0x02,  107 /* Public */,
      43,    1,  486,    2, 0x02,  109 /* Public */,
      44,    1,  489,    2, 0x02,  111 /* Public */,
      45,    1,  492,    2, 0x02,  113 /* Public */,
      46,    0,  495,    2, 0x02,  115 /* Public */,
      47,    1,  496,    2, 0x02,  116 /* Public */,
      49,    0,  499,    2, 0x02,  118 /* Public */,
      50,    2,  500,    2, 0x02,  119 /* Public */,
      50,    1,  505,    2, 0x22,  122 /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,    3,   21,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,    3,   21,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,    3,   21,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,    3,   21,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,    3,   21,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,    3,   21,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,    3,   21,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,    3,   21,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,    3,   21,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,    3,   21,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,    3,   21,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 34,   35,
    QMetaType::Void, 0x80000000 | 34,   35,
    QMetaType::Void, 0x80000000 | 34,   35,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::UInt,
    QMetaType::QString, QMetaType::Int,   42,
    QMetaType::QString, QMetaType::Int,   42,
    QMetaType::QString, QMetaType::Int,   42,
    QMetaType::QString, QMetaType::Int,   42,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,   48,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   51,   52,
    QMetaType::Void, QMetaType::QString,   51,

 // properties: name, type, flags, notifyId, revision
      53, QMetaType::Bool, 0x00015103, uint(2), 0,
      54, QMetaType::Bool, 0x00015103, uint(1), 0,
      55, QMetaType::Bool, 0x00015103, uint(3), 0,
      56, QMetaType::Bool, 0x00015103, uint(0), 0,
      57, QMetaType::Bool, 0x00015003, uint(4), 0,
      58, QMetaType::Bool, 0x00015103, uint(7), 0,
      59, QMetaType::Bool, 0x00015103, uint(8), 0,
      60, QMetaType::Bool, 0x00015103, uint(9), 0,
      61, QMetaType::Bool, 0x00015103, uint(12), 0,
      62, QMetaType::Bool, 0x00015103, uint(5), 0,
      63, QMetaType::Bool, 0x00015103, uint(6), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject advsettings::SteamVRTabController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN11advsettings20SteamVRTabControllerE.offsetsAndSizes,
    qt_meta_data_ZN11advsettings20SteamVRTabControllerE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN11advsettings20SteamVRTabControllerE_t,
        // property 'systemButton'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'multipleDriver'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'noFadeToGrid'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'performanceGraph'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'dnd'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'cameraActive'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'cameraBounds'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'cameraCont'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'perAppBindEnabled'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'controllerPower'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'noHMD'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SteamVRTabController, std::true_type>,
        // method 'performanceGraphChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'multipleDriverChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'systemButtonChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'noFadeToGridChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'dNDChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'controllerPowerChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'noHMDChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'cameraActiveChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'cameraBoundsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'cameraContChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'pairStatusChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'updateRXTX'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'perAppBindEnabledChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'onConnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onDisconnect'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onMsgRec'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'setPerformanceGraph'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setPerformanceGraph'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setSystemButton'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setSystemButton'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setNoFadeToGrid'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setNoFadeToGrid'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setMultipleDriver'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setMultipleDriver'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setDND'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setDND'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setControllerPower'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setControllerPower'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setNoHMD'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setNoHMD'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setCameraActive'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setCameraActive'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setCameraBounds'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setCameraBounds'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setCameraCont'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setCameraCont'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setPerAppBindEnabled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setPerAppBindEnabled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'restartSteamVR'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onGetBindingUrlResponse'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>,
        // method 'onApplyBindingResponse'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>,
        // method 'onGetBindingDataResponse'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>,
        // method 'searchRXTX'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'launchBindingUI'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'getRXTXCount'
        QtPrivate::TypeAndForceComplete<unsigned , std::false_type>,
        // method 'getTXList'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'getRXList'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'getDeviceName'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'getDongleType'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'getDongleUsage'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'pairDevice'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'updateRXTXList'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setBindingQMLWrapper'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setBindingQMLWrapper'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>
    >,
    nullptr
} };

void advsettings::SteamVRTabController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SteamVRTabController *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->performanceGraphChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->multipleDriverChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->systemButtonChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->noFadeToGridChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->dNDChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->controllerPowerChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->noHMDChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->cameraActiveChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->cameraBoundsChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->cameraContChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 10: _t->pairStatusChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 11: _t->updateRXTX((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 12: _t->perAppBindEnabledChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 13: _t->onConnected(); break;
        case 14: _t->onDisconnect(); break;
        case 15: _t->onMsgRec((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 16: _t->setPerformanceGraph((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 17: _t->setPerformanceGraph((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 18: _t->setSystemButton((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 19: _t->setSystemButton((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 20: _t->setNoFadeToGrid((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 21: _t->setNoFadeToGrid((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 22: _t->setMultipleDriver((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 23: _t->setMultipleDriver((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 24: _t->setDND((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 25: _t->setDND((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 26: _t->setControllerPower((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 27: _t->setControllerPower((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 28: _t->setNoHMD((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 29: _t->setNoHMD((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 30: _t->setCameraActive((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 31: _t->setCameraActive((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 32: _t->setCameraBounds((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 33: _t->setCameraBounds((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 34: _t->setCameraCont((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 35: _t->setCameraCont((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 36: _t->setPerAppBindEnabled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 37: _t->setPerAppBindEnabled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 38: _t->restartSteamVR(); break;
        case 39: _t->onGetBindingUrlResponse((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1]))); break;
        case 40: _t->onApplyBindingResponse((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1]))); break;
        case 41: _t->onGetBindingDataResponse((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1]))); break;
        case 42: _t->searchRXTX(); break;
        case 43: _t->launchBindingUI(); break;
        case 44: { uint _r = _t->getRXTXCount();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = std::move(_r); }  break;
        case 45: { QString _r = _t->getTXList((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 46: { QString _r = _t->getRXList((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 47: { QString _r = _t->getDeviceName((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 48: { QString _r = _t->getDongleType((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 49: { QString _r = _t->getDongleUsage();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 50: _t->pairDevice((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 51: _t->updateRXTXList(); break;
        case 52: _t->setBindingQMLWrapper((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 53: _t->setBindingQMLWrapper((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 39:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply* >(); break;
            }
            break;
        case 40:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply* >(); break;
            }
            break;
        case 41:
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
            using _q_method_type = void (SteamVRTabController::*)(bool );
            if (_q_method_type _q_method = &SteamVRTabController::performanceGraphChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (SteamVRTabController::*)(bool );
            if (_q_method_type _q_method = &SteamVRTabController::multipleDriverChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (SteamVRTabController::*)(bool );
            if (_q_method_type _q_method = &SteamVRTabController::systemButtonChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (SteamVRTabController::*)(bool );
            if (_q_method_type _q_method = &SteamVRTabController::noFadeToGridChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _q_method_type = void (SteamVRTabController::*)(bool );
            if (_q_method_type _q_method = &SteamVRTabController::dNDChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _q_method_type = void (SteamVRTabController::*)(bool );
            if (_q_method_type _q_method = &SteamVRTabController::controllerPowerChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _q_method_type = void (SteamVRTabController::*)(bool );
            if (_q_method_type _q_method = &SteamVRTabController::noHMDChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _q_method_type = void (SteamVRTabController::*)(bool );
            if (_q_method_type _q_method = &SteamVRTabController::cameraActiveChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _q_method_type = void (SteamVRTabController::*)(bool );
            if (_q_method_type _q_method = &SteamVRTabController::cameraBoundsChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _q_method_type = void (SteamVRTabController::*)(bool );
            if (_q_method_type _q_method = &SteamVRTabController::cameraContChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _q_method_type = void (SteamVRTabController::*)(QString );
            if (_q_method_type _q_method = &SteamVRTabController::pairStatusChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _q_method_type = void (SteamVRTabController::*)(bool );
            if (_q_method_type _q_method = &SteamVRTabController::updateRXTX; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _q_method_type = void (SteamVRTabController::*)(bool );
            if (_q_method_type _q_method = &SteamVRTabController::perAppBindEnabledChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->systemButton(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->multipleDriver(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->noFadeToGrid(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->performanceGraph(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->dnd(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->cameraActive(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->cameraBounds(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->cameraCont(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->perAppBindEnabled(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->controllerPower(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->noHMD(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSystemButton(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setMultipleDriver(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setNoFadeToGrid(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setPerformanceGraph(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setDND(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setCameraActive(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setCameraBounds(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setCameraCont(*reinterpret_cast< bool*>(_v)); break;
        case 8: _t->setPerAppBindEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 9: _t->setControllerPower(*reinterpret_cast< bool*>(_v)); break;
        case 10: _t->setNoHMD(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *advsettings::SteamVRTabController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *advsettings::SteamVRTabController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN11advsettings20SteamVRTabControllerE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int advsettings::SteamVRTabController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 54)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 54;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 54)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 54;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void advsettings::SteamVRTabController::performanceGraphChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void advsettings::SteamVRTabController::multipleDriverChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void advsettings::SteamVRTabController::systemButtonChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void advsettings::SteamVRTabController::noFadeToGridChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void advsettings::SteamVRTabController::dNDChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void advsettings::SteamVRTabController::controllerPowerChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void advsettings::SteamVRTabController::noHMDChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void advsettings::SteamVRTabController::cameraActiveChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void advsettings::SteamVRTabController::cameraBoundsChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void advsettings::SteamVRTabController::cameraContChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void advsettings::SteamVRTabController::pairStatusChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void advsettings::SteamVRTabController::updateRXTX(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void advsettings::SteamVRTabController::perAppBindEnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}
QT_WARNING_POP
