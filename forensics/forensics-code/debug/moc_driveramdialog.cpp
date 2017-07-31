/****************************************************************************
** Meta object code from reading C++ file 'driveramdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../driveramdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'driveramdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_driveramDialog_t {
    QByteArrayData data[8];
    char stringdata0[144];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_driveramDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_driveramDialog_t qt_meta_stringdata_driveramDialog = {
    {
QT_MOC_LITERAL(0, 0, 14), // "driveramDialog"
QT_MOC_LITERAL(1, 15, 19), // "on_checkBox_clicked"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 10), // "showDialog"
QT_MOC_LITERAL(4, 47, 23), // "on_pushButton_7_clicked"
QT_MOC_LITERAL(5, 71, 23), // "on_pushButton_8_clicked"
QT_MOC_LITERAL(6, 95, 23), // "on_pushButton_9_clicked"
QT_MOC_LITERAL(7, 119, 24) // "on_pushButton_10_clicked"

    },
    "driveramDialog\0on_checkBox_clicked\0\0"
    "showDialog\0on_pushButton_7_clicked\0"
    "on_pushButton_8_clicked\0on_pushButton_9_clicked\0"
    "on_pushButton_10_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_driveramDialog[] = {

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
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void driveramDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        driveramDialog *_t = static_cast<driveramDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_checkBox_clicked(); break;
        case 1: _t->showDialog(); break;
        case 2: _t->on_pushButton_7_clicked(); break;
        case 3: _t->on_pushButton_8_clicked(); break;
        case 4: _t->on_pushButton_9_clicked(); break;
        case 5: _t->on_pushButton_10_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject driveramDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_driveramDialog.data,
      qt_meta_data_driveramDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *driveramDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *driveramDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_driveramDialog.stringdata0))
        return static_cast<void*>(const_cast< driveramDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int driveramDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
