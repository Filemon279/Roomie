/****************************************************************************
** Meta object code from reading C++ file 'hotel_server.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../RoomieSerwer/hotel_server.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hotel_server.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Hotel_server_t {
    QByteArrayData data[11];
    char stringdata0[104];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Hotel_server_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Hotel_server_t qt_meta_stringdata_Hotel_server = {
    {
QT_MOC_LITERAL(0, 0, 12), // "Hotel_server"
QT_MOC_LITERAL(1, 13, 8), // "sendLogs"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 8), // "sendUser"
QT_MOC_LITERAL(4, 32, 14), // "passButtonNext"
QT_MOC_LITERAL(5, 47, 11), // "receiveLogs"
QT_MOC_LITERAL(6, 59, 4), // "text"
QT_MOC_LITERAL(7, 64, 17), // "receiveThreadUser"
QT_MOC_LITERAL(8, 82, 10), // "passButton"
QT_MOC_LITERAL(9, 93, 3), // "msg"
QT_MOC_LITERAL(10, 97, 6) // "socket"

    },
    "Hotel_server\0sendLogs\0\0sendUser\0"
    "passButtonNext\0receiveLogs\0text\0"
    "receiveThreadUser\0passButton\0msg\0"
    "socket"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Hotel_server[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       3,    1,   47,    2, 0x06 /* Public */,
       4,    2,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   55,    2, 0x08 /* Private */,
       7,    1,   58,    2, 0x08 /* Private */,
       8,    2,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    2,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    9,   10,

       0        // eod
};

void Hotel_server::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Hotel_server *_t = static_cast<Hotel_server *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendLogs((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->sendUser((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->passButtonNext((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->receiveLogs((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->receiveThreadUser((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->passButton((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Hotel_server::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Hotel_server::sendLogs)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Hotel_server::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Hotel_server::sendUser)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Hotel_server::*_t)(QString , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Hotel_server::passButtonNext)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject Hotel_server::staticMetaObject = {
    { &QTcpServer::staticMetaObject, qt_meta_stringdata_Hotel_server.data,
      qt_meta_data_Hotel_server,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Hotel_server::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Hotel_server::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Hotel_server.stringdata0))
        return static_cast<void*>(const_cast< Hotel_server*>(this));
    return QTcpServer::qt_metacast(_clname);
}

int Hotel_server::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpServer::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void Hotel_server::sendLogs(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Hotel_server::sendUser(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Hotel_server::passButtonNext(QString _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
