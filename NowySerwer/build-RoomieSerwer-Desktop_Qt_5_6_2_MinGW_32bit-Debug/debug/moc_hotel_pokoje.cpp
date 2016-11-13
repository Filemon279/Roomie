/****************************************************************************
** Meta object code from reading C++ file 'hotel_pokoje.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../RoomieSerwer/hotel_pokoje.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hotel_pokoje.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Hotel_pokoje_t {
    QByteArrayData data[11];
    char stringdata0[140];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Hotel_pokoje_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Hotel_pokoje_t qt_meta_stringdata_Hotel_pokoje = {
    {
QT_MOC_LITERAL(0, 0, 12), // "Hotel_pokoje"
QT_MOC_LITERAL(1, 13, 11), // "receiveLogs"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 4), // "text"
QT_MOC_LITERAL(4, 31, 11), // "receiveUser"
QT_MOC_LITERAL(5, 43, 13), // "keyPressEvent"
QT_MOC_LITERAL(6, 57, 10), // "QKeyEvent*"
QT_MOC_LITERAL(7, 68, 1), // "e"
QT_MOC_LITERAL(8, 70, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(9, 94, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(10, 118, 21) // "on_pushButton_clicked"

    },
    "Hotel_pokoje\0receiveLogs\0\0text\0"
    "receiveUser\0keyPressEvent\0QKeyEvent*\0"
    "e\0on_pushButton_3_clicked\0"
    "on_pushButton_2_clicked\0on_pushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Hotel_pokoje[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x08 /* Private */,
       4,    1,   47,    2, 0x08 /* Private */,
       5,    1,   50,    2, 0x08 /* Private */,
       8,    0,   53,    2, 0x08 /* Private */,
       9,    0,   54,    2, 0x08 /* Private */,
      10,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Hotel_pokoje::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Hotel_pokoje *_t = static_cast<Hotel_pokoje *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->receiveLogs((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->receiveUser((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->keyPressEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 3: _t->on_pushButton_3_clicked(); break;
        case 4: _t->on_pushButton_2_clicked(); break;
        case 5: _t->on_pushButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject Hotel_pokoje::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Hotel_pokoje.data,
      qt_meta_data_Hotel_pokoje,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Hotel_pokoje::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Hotel_pokoje::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Hotel_pokoje.stringdata0))
        return static_cast<void*>(const_cast< Hotel_pokoje*>(this));
    return QDialog::qt_metacast(_clname);
}

int Hotel_pokoje::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
