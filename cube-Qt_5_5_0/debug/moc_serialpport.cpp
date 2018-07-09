/****************************************************************************
** Meta object code from reading C++ file 'serialpport.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "F:/work/ProJect/QtProject/cube/serialpport.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'serialpport.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_serialPport_t {
    QByteArrayData data[18];
    char stringdata0[324];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_serialPport_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_serialPport_t qt_meta_stringdata_serialPport = {
    {
QT_MOC_LITERAL(0, 0, 11), // "serialPport"
QT_MOC_LITERAL(1, 12, 9), // "readMyCom"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 27), // "on_pushButton_close_clicked"
QT_MOC_LITERAL(4, 51, 26), // "on_pushButton_open_clicked"
QT_MOC_LITERAL(5, 78, 25), // "on_pushButton_ref_clicked"
QT_MOC_LITERAL(6, 104, 26), // "on_pushButton_send_clicked"
QT_MOC_LITERAL(7, 131, 11), // "sendComData"
QT_MOC_LITERAL(8, 143, 7), // "sendCom"
QT_MOC_LITERAL(9, 151, 6), // "addLog"
QT_MOC_LITERAL(10, 158, 3), // "msg"
QT_MOC_LITERAL(11, 162, 19), // "on_upButton_clicked"
QT_MOC_LITERAL(12, 182, 21), // "on_downButton_clicked"
QT_MOC_LITERAL(13, 204, 21), // "on_leftButton_clicked"
QT_MOC_LITERAL(14, 226, 22), // "on_rightButton_clicked"
QT_MOC_LITERAL(15, 249, 22), // "on_resetButton_clicked"
QT_MOC_LITERAL(16, 272, 25), // "on_rotateButton_b_clicked"
QT_MOC_LITERAL(17, 298, 25) // "on_rotateButton_f_clicked"

    },
    "serialPport\0readMyCom\0\0"
    "on_pushButton_close_clicked\0"
    "on_pushButton_open_clicked\0"
    "on_pushButton_ref_clicked\0"
    "on_pushButton_send_clicked\0sendComData\0"
    "sendCom\0addLog\0msg\0on_upButton_clicked\0"
    "on_downButton_clicked\0on_leftButton_clicked\0"
    "on_rightButton_clicked\0on_resetButton_clicked\0"
    "on_rotateButton_b_clicked\0"
    "on_rotateButton_f_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_serialPport[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    0,   88,    2, 0x08 /* Private */,
       7,    1,   89,    2, 0x08 /* Private */,
       9,    1,   92,    2, 0x08 /* Private */,
      11,    0,   95,    2, 0x08 /* Private */,
      12,    0,   96,    2, 0x08 /* Private */,
      13,    0,   97,    2, 0x08 /* Private */,
      14,    0,   98,    2, 0x08 /* Private */,
      15,    0,   99,    2, 0x08 /* Private */,
      16,    0,  100,    2, 0x08 /* Private */,
      17,    0,  101,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void serialPport::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        serialPport *_t = static_cast<serialPport *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->readMyCom(); break;
        case 1: _t->on_pushButton_close_clicked(); break;
        case 2: _t->on_pushButton_open_clicked(); break;
        case 3: _t->on_pushButton_ref_clicked(); break;
        case 4: _t->on_pushButton_send_clicked(); break;
        case 5: _t->sendComData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->addLog((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->on_upButton_clicked(); break;
        case 8: _t->on_downButton_clicked(); break;
        case 9: _t->on_leftButton_clicked(); break;
        case 10: _t->on_rightButton_clicked(); break;
        case 11: _t->on_resetButton_clicked(); break;
        case 12: _t->on_rotateButton_b_clicked(); break;
        case 13: _t->on_rotateButton_f_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject serialPport::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_serialPport.data,
      qt_meta_data_serialPport,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *serialPport::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *serialPport::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_serialPport.stringdata0))
        return static_cast<void*>(const_cast< serialPport*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int serialPport::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
struct qt_meta_stringdata_rotateData_t {
    QByteArrayData data[9];
    char stringdata0[39];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rotateData_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rotateData_t qt_meta_stringdata_rotateData = {
    {
QT_MOC_LITERAL(0, 0, 10), // "rotateData"
QT_MOC_LITERAL(1, 11, 5), // "store"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 1), // "x"
QT_MOC_LITERAL(4, 20, 1), // "y"
QT_MOC_LITERAL(5, 22, 1), // "z"
QT_MOC_LITERAL(6, 24, 4), // "getx"
QT_MOC_LITERAL(7, 29, 4), // "gety"
QT_MOC_LITERAL(8, 34, 4) // "getz"

    },
    "rotateData\0store\0\0x\0y\0z\0getx\0gety\0"
    "getz"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rotateData[] = {

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
       1,    3,   34,    2, 0x08 /* Private */,
       6,    0,   41,    2, 0x08 /* Private */,
       7,    0,   42,    2, 0x08 /* Private */,
       8,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::UShort, QMetaType::UShort, QMetaType::UShort,    3,    4,    5,
    QMetaType::UShort,
    QMetaType::UShort,
    QMetaType::UShort,

       0        // eod
};

void rotateData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        rotateData *_t = static_cast<rotateData *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->store((*reinterpret_cast< unsigned short(*)>(_a[1])),(*reinterpret_cast< unsigned short(*)>(_a[2])),(*reinterpret_cast< unsigned short(*)>(_a[3]))); break;
        case 1: { unsigned short _r = _t->getx();
            if (_a[0]) *reinterpret_cast< unsigned short*>(_a[0]) = _r; }  break;
        case 2: { unsigned short _r = _t->gety();
            if (_a[0]) *reinterpret_cast< unsigned short*>(_a[0]) = _r; }  break;
        case 3: { unsigned short _r = _t->getz();
            if (_a[0]) *reinterpret_cast< unsigned short*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject rotateData::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_rotateData.data,
      qt_meta_data_rotateData,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *rotateData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rotateData::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_rotateData.stringdata0))
        return static_cast<void*>(const_cast< rotateData*>(this));
    return QObject::qt_metacast(_clname);
}

int rotateData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
