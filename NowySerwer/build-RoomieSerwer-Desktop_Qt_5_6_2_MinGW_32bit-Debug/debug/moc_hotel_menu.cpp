/****************************************************************************
** Meta object code from reading C++ file 'hotel_menu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../RoomieSerwer/hotel_menu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hotel_menu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Hotel_menu_t {
    QByteArrayData data[16];
    char stringdata0[240];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Hotel_menu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Hotel_menu_t qt_meta_stringdata_Hotel_menu = {
    {
QT_MOC_LITERAL(0, 0, 10), // "Hotel_menu"
QT_MOC_LITERAL(1, 11, 10), // "sendNumber"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 9), // "remove_IN"
QT_MOC_LITERAL(4, 33, 13), // "Hotel_button*"
QT_MOC_LITERAL(5, 47, 1), // "b"
QT_MOC_LITERAL(6, 49, 32), // "on_pushButton_Ustawienia_clicked"
QT_MOC_LITERAL(7, 82, 31), // "on_pushButton_Zarzadzaj_clicked"
QT_MOC_LITERAL(8, 114, 30), // "on_pushButton_Wymelduj_clicked"
QT_MOC_LITERAL(9, 145, 30), // "on_pushButton_Zamelduj_clicked"
QT_MOC_LITERAL(10, 176, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(11, 198, 12), // "createButton"
QT_MOC_LITERAL(12, 211, 3), // "msg"
QT_MOC_LITERAL(13, 215, 6), // "socket"
QT_MOC_LITERAL(14, 222, 12), // "handleButton"
QT_MOC_LITERAL(15, 235, 4) // "name"

    },
    "Hotel_menu\0sendNumber\0\0remove_IN\0"
    "Hotel_button*\0b\0on_pushButton_Ustawienia_clicked\0"
    "on_pushButton_Zarzadzaj_clicked\0"
    "on_pushButton_Wymelduj_clicked\0"
    "on_pushButton_Zamelduj_clicked\0"
    "on_pushButton_clicked\0createButton\0"
    "msg\0socket\0handleButton\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Hotel_menu[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   62,    2, 0x08 /* Private */,
       6,    0,   65,    2, 0x08 /* Private */,
       7,    0,   66,    2, 0x08 /* Private */,
       8,    0,   67,    2, 0x08 /* Private */,
       9,    0,   68,    2, 0x08 /* Private */,
      10,    0,   69,    2, 0x08 /* Private */,
      11,    2,   70,    2, 0x08 /* Private */,
      14,    2,   75,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Int, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   12,   13,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,   15,    5,

       0        // eod
};

void Hotel_menu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Hotel_menu *_t = static_cast<Hotel_menu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { int _r = _t->sendNumber((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 1: _t->remove_IN((*reinterpret_cast< Hotel_button*(*)>(_a[1]))); break;
        case 2: _t->on_pushButton_Ustawienia_clicked(); break;
        case 3: _t->on_pushButton_Zarzadzaj_clicked(); break;
        case 4: _t->on_pushButton_Wymelduj_clicked(); break;
        case 5: _t->on_pushButton_Zamelduj_clicked(); break;
        case 6: _t->on_pushButton_clicked(); break;
        case 7: _t->createButton((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->handleButton((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< Hotel_button*(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Hotel_button* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Hotel_button* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef int (Hotel_menu::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Hotel_menu::sendNumber)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Hotel_menu::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Hotel_menu.data,
      qt_meta_data_Hotel_menu,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Hotel_menu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Hotel_menu::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Hotel_menu.stringdata0))
        return static_cast<void*>(const_cast< Hotel_menu*>(this));
    return QDialog::qt_metacast(_clname);
}

int Hotel_menu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
int Hotel_menu::sendNumber(int _t1)
{
    int _t0 = int();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}
QT_END_MOC_NAMESPACE
