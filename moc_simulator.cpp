/****************************************************************************
** Meta object code from reading C++ file 'simulator.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../BPhO2023/simulator.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'simulator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.1. It"
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

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSSimulatorENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSSimulatorENDCLASS = QtMocHelpers::stringData(
    "Simulator",
    "addBody",
    "",
    "mass",
    "position",
    "velocity",
    "removeBody",
    "index",
    "getPositions",
    "QList<QVector2D>",
    "getMasses",
    "QList<double>",
    "updatePositions",
    "dt",
    "subSteps",
    "reset"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSSimulatorENDCLASS_t {
    uint offsetsAndSizes[32];
    char stringdata0[10];
    char stringdata1[8];
    char stringdata2[1];
    char stringdata3[5];
    char stringdata4[9];
    char stringdata5[9];
    char stringdata6[11];
    char stringdata7[6];
    char stringdata8[13];
    char stringdata9[17];
    char stringdata10[10];
    char stringdata11[14];
    char stringdata12[16];
    char stringdata13[3];
    char stringdata14[9];
    char stringdata15[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSSimulatorENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSSimulatorENDCLASS_t qt_meta_stringdata_CLASSSimulatorENDCLASS = {
    {
        QT_MOC_LITERAL(0, 9),  // "Simulator"
        QT_MOC_LITERAL(10, 7),  // "addBody"
        QT_MOC_LITERAL(18, 0),  // ""
        QT_MOC_LITERAL(19, 4),  // "mass"
        QT_MOC_LITERAL(24, 8),  // "position"
        QT_MOC_LITERAL(33, 8),  // "velocity"
        QT_MOC_LITERAL(42, 10),  // "removeBody"
        QT_MOC_LITERAL(53, 5),  // "index"
        QT_MOC_LITERAL(59, 12),  // "getPositions"
        QT_MOC_LITERAL(72, 16),  // "QList<QVector2D>"
        QT_MOC_LITERAL(89, 9),  // "getMasses"
        QT_MOC_LITERAL(99, 13),  // "QList<double>"
        QT_MOC_LITERAL(113, 15),  // "updatePositions"
        QT_MOC_LITERAL(129, 2),  // "dt"
        QT_MOC_LITERAL(132, 8),  // "subSteps"
        QT_MOC_LITERAL(141, 5)   // "reset"
    },
    "Simulator",
    "addBody",
    "",
    "mass",
    "position",
    "velocity",
    "removeBody",
    "index",
    "getPositions",
    "QList<QVector2D>",
    "getMasses",
    "QList<double>",
    "updatePositions",
    "dt",
    "subSteps",
    "reset"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSSimulatorENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   62,    2, 0x02,    1 /* Public */,
       1,    3,   67,    2, 0x02,    4 /* Public */,
       6,    1,   74,    2, 0x02,    8 /* Public */,
       8,    0,   77,    2, 0x02,   10 /* Public */,
      10,    0,   78,    2, 0x02,   11 /* Public */,
      12,    2,   79,    2, 0x02,   12 /* Public */,
      12,    1,   84,    2, 0x22,   15 /* Public | MethodCloned */,
      15,    0,   87,    2, 0x02,   17 /* Public */,

 // methods: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::QVector2D,    3,    4,
    QMetaType::Void, QMetaType::Double, QMetaType::QVector2D, QMetaType::QVector2D,    3,    4,    5,
    QMetaType::Void, QMetaType::Int,    7,
    0x80000000 | 9,
    0x80000000 | 11,
    QMetaType::Void, QMetaType::Double, QMetaType::Int,   13,   14,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Simulator::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSSimulatorENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSSimulatorENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSSimulatorENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Simulator, std::true_type>,
        // method 'addBody'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector2D, std::false_type>,
        // method 'addBody'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector2D, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector2D, std::false_type>,
        // method 'removeBody'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'getPositions'
        QtPrivate::TypeAndForceComplete<QVector<QVector2D>, std::false_type>,
        // method 'getMasses'
        QtPrivate::TypeAndForceComplete<QVector<double>, std::false_type>,
        // method 'updatePositions'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'updatePositions'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'reset'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Simulator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Simulator *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->addBody((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QVector2D>>(_a[2]))); break;
        case 1: _t->addBody((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QVector2D>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QVector2D>>(_a[3]))); break;
        case 2: _t->removeBody((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: { QList<QVector2D> _r = _t->getPositions();
            if (_a[0]) *reinterpret_cast< QList<QVector2D>*>(_a[0]) = std::move(_r); }  break;
        case 4: { QList<double> _r = _t->getMasses();
            if (_a[0]) *reinterpret_cast< QList<double>*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->updatePositions((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 6: _t->updatePositions((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 7: _t->reset(); break;
        default: ;
        }
    }
}

const QMetaObject *Simulator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Simulator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSSimulatorENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Simulator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
