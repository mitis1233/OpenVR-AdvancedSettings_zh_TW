/****************************************************************************
** Meta object code from reading C++ file 'FixFloorTabController.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/tabcontrollers/FixFloorTabController.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FixFloorTabController.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN11advsettings21FixFloorTabControllerE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN11advsettings21FixFloorTabControllerE = QtMocHelpers::stringData(
    "advsettings::FixFloorTabController",
    "statusMessageSignal",
    "",
    "measureStartSignal",
    "measureEndSignal",
    "canUndoChanged",
    "value",
    "fixFloorClicked",
    "recenterClicked",
    "undoFixFloorClicked",
    "setCanUndo",
    "notify",
    "currentStatusMessage",
    "currentStatusMessageTimeout",
    "canUndo"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN11advsettings21FixFloorTabControllerE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       1,   99, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   80,    2, 0x06,    2 /* Public */,
       3,    0,   81,    2, 0x06,    3 /* Public */,
       4,    0,   82,    2, 0x06,    4 /* Public */,
       5,    1,   83,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    0,   86,    2, 0x0a,    7 /* Public */,
       8,    0,   87,    2, 0x0a,    8 /* Public */,
       9,    0,   88,    2, 0x0a,    9 /* Public */,
      10,    2,   89,    2, 0x0a,   10 /* Public */,
      10,    1,   94,    2, 0x2a,   13 /* Public | MethodCloned */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      12,    0,   97,    2, 0x02,   15 /* Public */,
      13,    0,   98,    2, 0x02,   16 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,    6,   11,
    QMetaType::Void, QMetaType::Bool,    6,

 // methods: parameters
    QMetaType::QString,
    QMetaType::Float,

 // properties: name, type, flags, notifyId, revision
      14, QMetaType::Bool, 0x00015103, uint(3), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject advsettings::FixFloorTabController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN11advsettings21FixFloorTabControllerE.offsetsAndSizes,
    qt_meta_data_ZN11advsettings21FixFloorTabControllerE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN11advsettings21FixFloorTabControllerE_t,
        // property 'canUndo'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FixFloorTabController, std::true_type>,
        // method 'statusMessageSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'measureStartSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'measureEndSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'canUndoChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'fixFloorClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'recenterClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'undoFixFloorClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setCanUndo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setCanUndo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'currentStatusMessage'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'currentStatusMessageTimeout'
        QtPrivate::TypeAndForceComplete<float, std::false_type>
    >,
    nullptr
} };

void advsettings::FixFloorTabController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<FixFloorTabController *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->statusMessageSignal(); break;
        case 1: _t->measureStartSignal(); break;
        case 2: _t->measureEndSignal(); break;
        case 3: _t->canUndoChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->fixFloorClicked(); break;
        case 5: _t->recenterClicked(); break;
        case 6: _t->undoFixFloorClicked(); break;
        case 7: _t->setCanUndo((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 8: _t->setCanUndo((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: { QString _r = _t->currentStatusMessage();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 10: { float _r = _t->currentStatusMessageTimeout();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (FixFloorTabController::*)();
            if (_q_method_type _q_method = &FixFloorTabController::statusMessageSignal; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (FixFloorTabController::*)();
            if (_q_method_type _q_method = &FixFloorTabController::measureStartSignal; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (FixFloorTabController::*)();
            if (_q_method_type _q_method = &FixFloorTabController::measureEndSignal; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (FixFloorTabController::*)(bool );
            if (_q_method_type _q_method = &FixFloorTabController::canUndoChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->canUndo(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCanUndo(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *advsettings::FixFloorTabController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *advsettings::FixFloorTabController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN11advsettings21FixFloorTabControllerE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int advsettings::FixFloorTabController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void advsettings::FixFloorTabController::statusMessageSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void advsettings::FixFloorTabController::measureStartSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void advsettings::FixFloorTabController::measureEndSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void advsettings::FixFloorTabController::canUndoChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
