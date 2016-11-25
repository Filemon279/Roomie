/****************************************************************************
** Meta object code from reading C++ file 'uslugi_info.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../RoomieSerwer/uslugi_info.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'uslugi_info.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Uslugi_info_t {
    QByteArrayData data[7];
    char stringdata0[118];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Uslugi_info_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Uslugi_info_t qt_meta_stringdata_Uslugi_info = {
    {
QT_MOC_LITERAL(0, 0, 11), // "Uslugi_info"
QT_MOC_LITERAL(1, 12, 9), // "getNumber"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 6), // "number"
QT_MOC_LITERAL(4, 30, 26), // "on_pushButton_usun_clicked"
QT_MOC_LITERAL(5, 57, 27), // "on_pushButton_close_clicked"
QT_MOC_LITERAL(6, 85, 32) // "on_pushButton_wyslij_odp_clicked"

    },
    "Uslugi_info\0getNumber\0\0number\0"
    "on_pushButton_usun_clicked\0"
    "on_pushButton_close_clicked\0"
    "on_pushButton_wyslij_odp_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Uslugi_info[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x08 /* Private */,
       4,    0,   37,    2, 0x08 /* Private */,
       5,    0,   38,    2, 0x08 /* Private */,
       6,    0,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Int, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Uslugi_info::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Uslugi_info *_t = static_cast<Uslugi_info *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { int _r = _t->getNumber((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 1: _t->on_pushButton_usun_clicked(); break;
        case 2: _t->on_pushButton_close_clicked(); break;
        case 3: _t->on_pushButton_wyslij_odp_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject Uslugi_info::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Uslugi_info.data,
      qt_meta_data_Uslugi_info,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Uslugi_info::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Uslugi_info::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Uslugi_info.stringdata0))
        return static_cast<void*>(const_cast< Uslugi_info*>(this));
    return QDialog::qt_metacast(_clname);
}

int Uslugi_info::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
