/****************************************************************************
** Meta object code from reading C++ file 'testUV.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../projet/TEST/testUV.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'testUV.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TestUV_t {
    QByteArrayData data[7];
    char stringdata[101];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_TestUV_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_TestUV_t qt_meta_stringdata_TestUV = {
    {
QT_MOC_LITERAL(0, 0, 6),
QT_MOC_LITERAL(1, 7, 16),
QT_MOC_LITERAL(2, 24, 0),
QT_MOC_LITERAL(3, 25, 12),
QT_MOC_LITERAL(4, 38, 11),
QT_MOC_LITERAL(5, 50, 23),
QT_MOC_LITERAL(6, 74, 25)
    },
    "TestUV\0TestsetNbCredits\0\0TestsetTitre\0"
    "TestsetCode\0TestsetOuvertureAutomne\0"
    "TestsetOuverturePrintemps\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TestUV[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08,
       3,    0,   40,    2, 0x08,
       4,    0,   41,    2, 0x08,
       5,    0,   42,    2, 0x08,
       6,    0,   43,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TestUV::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TestUV *_t = static_cast<TestUV *>(_o);
        switch (_id) {
        case 0: _t->TestsetNbCredits(); break;
        case 1: _t->TestsetTitre(); break;
        case 2: _t->TestsetCode(); break;
        case 3: _t->TestsetOuvertureAutomne(); break;
        case 4: _t->TestsetOuverturePrintemps(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject TestUV::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TestUV.data,
      qt_meta_data_TestUV,  qt_static_metacall, 0, 0}
};


const QMetaObject *TestUV::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TestUV::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TestUV.stringdata))
        return static_cast<void*>(const_cast< TestUV*>(this));
    return QObject::qt_metacast(_clname);
}

int TestUV::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE