/****************************************************************************
** Meta object code from reading C++ file 'ptolemy.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../BPhO2023/ptolemy.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ptolemy.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSPtolemyENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSPtolemyENDCLASS = QtMocHelpers::stringData(
    "Ptolemy",
    "getOrbit",
    "QList<QVector2D>",
    "",
    "index",
    "numSamples",
    "simplify",
    "cacheOrbit",
    "periods"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSPtolemyENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[8];
    char stringdata1[9];
    char stringdata2[17];
    char stringdata3[1];
    char stringdata4[6];
    char stringdata5[11];
    char stringdata6[9];
    char stringdata7[11];
    char stringdata8[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSPtolemyENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSPtolemyENDCLASS_t qt_meta_stringdata_CLASSPtolemyENDCLASS = {
    {
        QT_MOC_LITERAL(0, 7),  // "Ptolemy"
        QT_MOC_LITERAL(8, 8),  // "getOrbit"
        QT_MOC_LITERAL(17, 16),  // "QList<QVector2D>"
        QT_MOC_LITERAL(34, 0),  // ""
        QT_MOC_LITERAL(35, 5),  // "index"
        QT_MOC_LITERAL(41, 10),  // "numSamples"
        QT_MOC_LITERAL(52, 8),  // "simplify"
        QT_MOC_LITERAL(61, 10),  // "cacheOrbit"
        QT_MOC_LITERAL(72, 7)   // "periods"
    },
    "Ptolemy",
    "getOrbit",
    "QList<QVector2D>",
    "",
    "index",
    "numSamples",
    "simplify",
    "cacheOrbit",
    "periods"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPtolemyENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       1,    3,   50,    3, 0x02,    1 /* Public */,
       1,    2,   57,    3, 0x22,    5 /* Public | MethodCloned */,
       1,    1,   62,    3, 0x22,    8 /* Public | MethodCloned */,
       7,    3,   65,    3, 0x02,   10 /* Public */,
       7,    2,   72,    3, 0x22,   14 /* Public | MethodCloned */,
       7,    1,   77,    3, 0x22,   17 /* Public | MethodCloned */,

 // methods: parameters
    0x80000000 | 2, QMetaType::Int, QMetaType::Int, QMetaType::Bool,    4,    5,    6,
    0x80000000 | 2, QMetaType::Int, QMetaType::Int,    4,    5,
    0x80000000 | 2, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    4,    5,    8,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,
    QMetaType::Void, QMetaType::Int,    4,

       0        // eod
};

Q_CONSTINIT const QMetaObject Ptolemy::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSPtolemyENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPtolemyENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPtolemyENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Ptolemy, std::true_type>,
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
        // method 'cacheOrbit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'cacheOrbit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'cacheOrbit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void Ptolemy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Ptolemy *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { QList<QVector2D> _r = _t->getOrbit((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3])));
            if (_a[0]) *reinterpret_cast< QList<QVector2D>*>(_a[0]) = std::move(_r); }  break;
        case 1: { QList<QVector2D> _r = _t->getOrbit((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QList<QVector2D>*>(_a[0]) = std::move(_r); }  break;
        case 2: { QList<QVector2D> _r = _t->getOrbit((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QVector2D>*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->cacheOrbit((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 4: _t->cacheOrbit((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 5: _t->cacheOrbit((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *Ptolemy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Ptolemy::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPtolemyENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Ptolemy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
