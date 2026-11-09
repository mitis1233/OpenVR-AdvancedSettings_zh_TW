/****************************************************************************
** Meta object code from reading C++ file 'StatisticsTabController.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/tabcontrollers/StatisticsTabController.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'StatisticsTabController.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN11advsettings23StatisticsTabControllerE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN11advsettings23StatisticsTabControllerE = QtMocHelpers::stringData(
    "advsettings::StatisticsTabController",
    "statsDistanceResetClicked",
    "",
    "statsRotationResetClicked",
    "statsLeftControllerSpeedResetClicked",
    "statsRightControllerSpeedResetClicked",
    "presentedFramesResetClicked",
    "droppedFramesResetClicked",
    "reprojectedFramesResetClicked",
    "timedOutResetClicked",
    "totalRatioResetClicked",
    "hmdDistanceMoved",
    "hmdRotations",
    "leftControllerMaxSpeed",
    "rightControllerMaxSpeed",
    "presentedFrames",
    "droppedFrames",
    "reprojectedFrames",
    "timedOut",
    "totalReprojectedRatio"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN11advsettings23StatisticsTabControllerE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       9,   77, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x0a,   10 /* Public */,
       3,    0,   69,    2, 0x0a,   11 /* Public */,
       4,    0,   70,    2, 0x0a,   12 /* Public */,
       5,    0,   71,    2, 0x0a,   13 /* Public */,
       6,    0,   72,    2, 0x0a,   14 /* Public */,
       7,    0,   73,    2, 0x0a,   15 /* Public */,
       8,    0,   74,    2, 0x0a,   16 /* Public */,
       9,    0,   75,    2, 0x0a,   17 /* Public */,
      10,    0,   76,    2, 0x0a,   18 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags, notifyId, revision
      11, QMetaType::Float, 0x00015001, uint(-1), 0,
      12, QMetaType::Float, 0x00015001, uint(-1), 0,
      13, QMetaType::Float, 0x00015001, uint(-1), 0,
      14, QMetaType::Float, 0x00015001, uint(-1), 0,
      15, QMetaType::Int, 0x00015001, uint(-1), 0,
      16, QMetaType::Int, 0x00015001, uint(-1), 0,
      17, QMetaType::Int, 0x00015001, uint(-1), 0,
      18, QMetaType::Int, 0x00015001, uint(-1), 0,
      19, QMetaType::Float, 0x00015001, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject advsettings::StatisticsTabController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN11advsettings23StatisticsTabControllerE.offsetsAndSizes,
    qt_meta_data_ZN11advsettings23StatisticsTabControllerE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN11advsettings23StatisticsTabControllerE_t,
        // property 'hmdDistanceMoved'
        QtPrivate::TypeAndForceComplete<float, std::true_type>,
        // property 'hmdRotations'
        QtPrivate::TypeAndForceComplete<float, std::true_type>,
        // property 'leftControllerMaxSpeed'
        QtPrivate::TypeAndForceComplete<float, std::true_type>,
        // property 'rightControllerMaxSpeed'
        QtPrivate::TypeAndForceComplete<float, std::true_type>,
        // property 'presentedFrames'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'droppedFrames'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'reprojectedFrames'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'timedOut'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'totalReprojectedRatio'
        QtPrivate::TypeAndForceComplete<float, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<StatisticsTabController, std::true_type>,
        // method 'statsDistanceResetClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'statsRotationResetClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'statsLeftControllerSpeedResetClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'statsRightControllerSpeedResetClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'presentedFramesResetClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'droppedFramesResetClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'reprojectedFramesResetClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'timedOutResetClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'totalRatioResetClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void advsettings::StatisticsTabController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<StatisticsTabController *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->statsDistanceResetClicked(); break;
        case 1: _t->statsRotationResetClicked(); break;
        case 2: _t->statsLeftControllerSpeedResetClicked(); break;
        case 3: _t->statsRightControllerSpeedResetClicked(); break;
        case 4: _t->presentedFramesResetClicked(); break;
        case 5: _t->droppedFramesResetClicked(); break;
        case 6: _t->reprojectedFramesResetClicked(); break;
        case 7: _t->timedOutResetClicked(); break;
        case 8: _t->totalRatioResetClicked(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->hmdDistanceMoved(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->hmdRotations(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->leftControllerMaxSpeed(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->rightControllerMaxSpeed(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->presentedFrames(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->droppedFrames(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->reprojectedFrames(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->timedOut(); break;
        case 8: *reinterpret_cast< float*>(_v) = _t->totalReprojectedRatio(); break;
        default: break;
        }
    }
}

const QMetaObject *advsettings::StatisticsTabController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *advsettings::StatisticsTabController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN11advsettings23StatisticsTabControllerE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int advsettings::StatisticsTabController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
