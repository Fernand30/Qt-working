/****************************************************************************
** Meta object code from reading C++ file 'stitching.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../stitching.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stitching.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_stitchingDilog_t {
    QByteArrayData data[14];
    char stringdata0[175];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_stitchingDilog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_stitchingDilog_t qt_meta_stringdata_stitchingDilog = {
    {
QT_MOC_LITERAL(0, 0, 14), // "stitchingDilog"
QT_MOC_LITERAL(1, 15, 18), // "on_openbtn_clicked"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(4, 57, 18), // "on_savebtn_clicked"
QT_MOC_LITERAL(5, 76, 19), // "on_resetBtn_clicked"
QT_MOC_LITERAL(6, 96, 12), // "processFrame"
QT_MOC_LITERAL(7, 109, 13), // "ProcessStatut"
QT_MOC_LITERAL(8, 123, 8), // "cv::Mat&"
QT_MOC_LITERAL(9, 132, 5), // "frame"
QT_MOC_LITERAL(10, 138, 10), // "saveToFile"
QT_MOC_LITERAL(11, 149, 10), // "SaveStatut"
QT_MOC_LITERAL(12, 160, 8), // "filename"
QT_MOC_LITERAL(13, 169, 5) // "reset"

    },
    "stitchingDilog\0on_openbtn_clicked\0\0"
    "on_pushButton_clicked\0on_savebtn_clicked\0"
    "on_resetBtn_clicked\0processFrame\0"
    "ProcessStatut\0cv::Mat&\0frame\0saveToFile\0"
    "SaveStatut\0filename\0reset"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_stitchingDilog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    1,   53,    2, 0x08 /* Private */,
      10,    1,   56,    2, 0x08 /* Private */,
      13,    0,   59,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 7, 0x80000000 | 8,    9,
    0x80000000 | 11, QMetaType::QString,   12,
    QMetaType::Void,

       0        // eod
};

void stitchingDilog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        stitchingDilog *_t = static_cast<stitchingDilog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_openbtn_clicked(); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->on_savebtn_clicked(); break;
        case 3: _t->on_resetBtn_clicked(); break;
        case 4: { ProcessStatut _r = _t->processFrame((*reinterpret_cast< cv::Mat(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< ProcessStatut*>(_a[0]) = _r; }  break;
        case 5: { SaveStatut _r = _t->saveToFile((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< SaveStatut*>(_a[0]) = _r; }  break;
        case 6: _t->reset(); break;
        default: ;
        }
    }
}

const QMetaObject stitchingDilog::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_stitchingDilog.data,
      qt_meta_data_stitchingDilog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *stitchingDilog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *stitchingDilog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_stitchingDilog.stringdata0))
        return static_cast<void*>(const_cast< stitchingDilog*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int stitchingDilog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE