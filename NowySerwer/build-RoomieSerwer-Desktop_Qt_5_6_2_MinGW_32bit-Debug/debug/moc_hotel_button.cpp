/****************************************************************************
** Meta object code from reading C++ file 'hotel_button.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../RoomieSerwer/hotel_button.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hotel_button.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Hotel_button_t {
    QByteArrayData data[8];
    char stringdata0[79];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Hotel_button_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Hotel_button_t qt_meta_stringdata_Hotel_button = {
    {
QT_MOC_LITERAL(0, 0, 12), // "Hotel_button"
QT_MOC_LITERAL(1, 13, 9), // "send_name"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 13), // "Hotel_button*"
QT_MOC_LITERAL(4, 38, 9), // "removeOUT"
QT_MOC_LITERAL(5, 48, 15), // "mousePressEvent"
QT_MOC_LITERAL(6, 64, 12), // "QMouseEvent*"
QT_MOC_LITERAL(7, 77, 1) // "e"

    },
    "Hotel_button\0send_name\0\0Hotel_button*\0"
    "removeOUT\0mousePressEvent\0QMouseEvent*\0"
    "e"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Hotel_button[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,
       4,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   37,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Int, QMetaType::QString, 0x80000000 | 3,    2,    2,
    QMetaType::Int, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void Hotel_button::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Hotel_button *_t = static_cast<Hotel_button *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { int _r = _t->send_name((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< Hotel_button*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 1: { int _r = _t->removeOUT((*reinterpret_cast< Hotel_button*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 2: _t->mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Hotel_button* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Hotel_button* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef int (Hotel_button::*_t)(QString , Hotel_button * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Hotel_button::send_name)) {
                *result = 0;
                return;
            }
        }
        {
            typedef int (Hotel_button::*_t)(Hotel_button * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Hotel_button::removeOUT)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject Hotel_button::staticMetaObject = {
    { &QPushButton::staticMetaObject, qt_meta_stringdata_Hotel_button.data,
      qt_meta_data_Hotel_button,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Hotel_button::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Hotel_button::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Hotel_button.stringdata0))
        return static_cast<void*>(const_cast< Hotel_button*>(this));
    return QPushButton::qt_metacast(_clname);
}

int Hotel_button::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
int Hotel_button::send_name(QString _t1, Hotel_button * _t2)
{
    int _t0 = int();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}

// SIGNAL 1
int Hotel_button::removeOUT(Hotel_button * _t1)
{
    int _t0 = int();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
    return _t0;
}
QT_END_MOC_NAMESPACE
