/****************************************************************************
** Meta object code from reading C++ file 'orbits.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../BPhO2023/orbits.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'orbits.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOrbitsENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSOrbitsENDCLASS = QtMocHelpers::stringData(
    "Orbits",
    "getOrbit",
    "QList<QVector2D>",
    "",
    "index",
    "numSamples",
    "simplify",
    "getOrbit3D",
    "QList<QVector3D>",
    "getMaxDisplacement",
    "displacementAt",
    "theta",
    "planet",
    "displacementAt3D",
    "getMaxDisplacement3D"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSOrbitsENDCLASS_t {
    uint offsetsAndSizes[30];
    char stringdata0[7];
    char stringdata1[9];
    char stringdata2[17];
    char stringdata3[1];
    char stringdata4[6];
    char stringdata5[11];
    char stringdata6[9];
    char stringdata7[11];
    char stringdata8[17];
    char stringdata9[19];
    char stringdata10[15];
    char stringdata11[6];
    char stringdata12[7];
    char stringdata13[17];
    char stringdata14[21];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSOrbitsENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSOrbitsENDCLASS_t qt_meta_stringdata_CLASSOrbitsENDCLASS = {
    {
        QT_MOC_LITERAL(0, 6),  // "Orbits"
        QT_MOC_LITERAL(7, 8),  // "getOrbit"
        QT_MOC_LITERAL(16, 16),  // "QList<QVector2D>"
        QT_MOC_LITERAL(33, 0),  // ""
        QT_MOC_LITERAL(34, 5),  // "index"
        QT_MOC_LITERAL(40, 10),  // "numSamples"
        QT_MOC_LITERAL(51, 8),  // "simplify"
        QT_MOC_LITERAL(60, 10),  // "getOrbit3D"
        QT_MOC_LITERAL(71, 16),  // "QList<QVector3D>"
        QT_MOC_LITERAL(88, 18),  // "getMaxDisplacement"
        QT_MOC_LITERAL(107, 14),  // "displacementAt"
        QT_MOC_LITERAL(122, 5),  // "theta"
        QT_MOC_LITERAL(128, 6),  // "planet"
        QT_MOC_LITERAL(135, 16),  // "displacementAt3D"
        QT_MOC_LITERAL(152, 20)   // "getMaxDisplacement3D"
    },
    "Orbits",
    "getOrbit",
    "QList<QVector2D>",
    "",
    "index",
    "numSamples",
    "simplify",
    "getOrbit3D",
    "QList<QVector3D>",
    "getMaxDisplacement",
    "displacementAt",
    "theta",
    "planet",
    "displacementAt3D",
    "getMaxDisplacement3D"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOrbitsENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       1,    3,   74,    3, 0x02,    1 /* Public */,
       1,    2,   81,    3, 0x22,    5 /* Public | MethodCloned */,
       1,    1,   86,    3, 0x22,    8 /* Public | MethodCloned */,
       7,    3,   89,    3, 0x02,   10 /* Public */,
       7,    2,   96,    3, 0x22,   14 /* Public | MethodCloned */,
       7,    1,  101,    3, 0x22,   17 /* Public | MethodCloned */,
       9,    1,  104,    3, 0x02,   19 /* Public */,
      10,    2,  107,    3, 0x02,   21 /* Public */,
      13,    2,  112,    3, 0x02,   24 /* Public */,
      14,    1,  117,    3, 0x02,   27 /* Public */,

 // methods: parameters
    0x80000000 | 2, QMetaType::Int, QMetaType::Int, QMetaType::Bool,    4,    5,    6,
    0x80000000 | 2, QMetaType::Int, QMetaType::Int,    4,    5,
    0x80000000 | 2, QMetaType::Int,    4,
    0x80000000 | 8, QMetaType::Int, QMetaType::Int, QMetaType::Bool,    4,    5,    6,
    0x80000000 | 8, QMetaType::Int, QMetaType::Int,    4,    5,
    0x80000000 | 8, QMetaType::Int,    4,
    QMetaType::QVector2D, QMetaType::Int,    4,
    QMetaType::QVector2D, QMetaType::Double, QMetaType::Int,   11,   12,
    QMetaType::QVector3D, QMetaType::Double, QMetaType::Int,   11,   12,
    QMetaType::QVector3D, QMetaType::Int,    4,

       0        // eod
};

Q_CONSTINIT const QMetaObject Orbits::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSOrbitsENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOrbitsENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOrbitsENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Orbits, std::true_type>,
        // method 'getOrbit'
        QtPrivate::TypeAndForceComplete<QVector<QVector2D>, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'getOrbit'
        QtPrivate::TypeAndForceComplete<QVector<QVector2D>, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'getOrbit'
        QtPrivate::TypeAndForceComplete<QVector<QVector2D>, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'getOrbit3D'
        QtPrivate::TypeAndForceComplete<QVector<QVector3D>, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'getOrbit3D'
        QtPrivate::TypeAndForceComplete<QVector<QVector3D>, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'getOrbit3D'
        QtPrivate::TypeAndForceComplete<QVector<QVector3D>, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'getMaxDisplacement'
        QtPrivate::TypeAndForceComplete<QVector2D, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'displacementAt'
        QtPrivate::TypeAndForceComplete<QVector2D, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'displacementAt3D'
        QtPrivate::TypeAndForceComplete<QVector3D, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'getMaxDisplacement3D'
        QtPrivate::TypeAndForceComplete<QVector3D, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void Orbits::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Orbits *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { QList<QVector2D> _r = _t->getOrbit((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3])));
            if (_a[0]) *reinterpret_cast< QList<QVector2D>*>(_a[0]) = std::move(_r); }  break;
        case 1: { QList<QVector2D> _r = _t->getOrbit((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QList<QVector2D>*>(_a[0]) = std::move(_r); }  break;
        case 2: { QList<QVector2D> _r = _t->getOrbit((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QVector2D>*>(_a[0]) = std::move(_r); }  break;
        case 3: { QList<QVector3D> _r = _t->getOrbit3D((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3])));
            if (_a[0]) *reinterpret_cast< QList<QVector3D>*>(_a[0]) = std::move(_r); }  break;
        case 4: { QList<QVector3D> _r = _t->getOrbit3D((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QList<QVector3D>*>(_a[0]) = std::move(_r); }  break;
        case 5: { QList<QVector3D> _r = _t->getOrbit3D((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QVector3D>*>(_a[0]) = std::move(_r); }  break;
        case 6: { QVector2D _r = _t->getMaxDisplacement((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector2D*>(_a[0]) = std::move(_r); }  break;
        case 7: { QVector2D _r = _t->displacementAt((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVector2D*>(_a[0]) = std::move(_r); }  break;
        case 8: { QVector3D _r = _t->displacementAt3D((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVector3D*>(_a[0]) = std::move(_r); }  break;
        case 9: { QVector3D _r = _t->getMaxDisplacement3D((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector3D*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject *Orbits::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Orbits::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOrbitsENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Orbits::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
