/****************************************************************************
** Meta object code from reading C++ file 'loanwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../TA_ProjectD_GUI/loanwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'loanwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LoanWindow_t {
    QByteArrayData data[16];
    char stringdata0[351];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LoanWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LoanWindow_t qt_meta_stringdata_LoanWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "LoanWindow"
QT_MOC_LITERAL(1, 11, 20), // "on_YearsPush_pressed"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 19), // "on_LoanPush_pressed"
QT_MOC_LITERAL(4, 53, 23), // "on_PaymentsPush_pressed"
QT_MOC_LITERAL(5, 77, 19), // "on_RatePush_pressed"
QT_MOC_LITERAL(6, 97, 25), // "on_LoanLine_returnPressed"
QT_MOC_LITERAL(7, 123, 26), // "on_YearsLine_returnPressed"
QT_MOC_LITERAL(8, 150, 29), // "on_PaymentsLine_returnPressed"
QT_MOC_LITERAL(9, 180, 25), // "on_RateLine_returnPressed"
QT_MOC_LITERAL(10, 206, 19), // "on_CalcPush_pressed"
QT_MOC_LITERAL(11, 226, 24), // "on_TaxDeductPush_pressed"
QT_MOC_LITERAL(12, 251, 30), // "on_TaxDeductLine_returnPressed"
QT_MOC_LITERAL(13, 282, 20), // "on_ResetPush_pressed"
QT_MOC_LITERAL(14, 303, 21), // "on_OutputPush_pressed"
QT_MOC_LITERAL(15, 325, 25) // "on_FileLine_returnPressed"

    },
    "LoanWindow\0on_YearsPush_pressed\0\0"
    "on_LoanPush_pressed\0on_PaymentsPush_pressed\0"
    "on_RatePush_pressed\0on_LoanLine_returnPressed\0"
    "on_YearsLine_returnPressed\0"
    "on_PaymentsLine_returnPressed\0"
    "on_RateLine_returnPressed\0on_CalcPush_pressed\0"
    "on_TaxDeductPush_pressed\0"
    "on_TaxDeductLine_returnPressed\0"
    "on_ResetPush_pressed\0on_OutputPush_pressed\0"
    "on_FileLine_returnPressed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LoanWindow[] = {

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
       7,    0,   89,    2, 0x08 /* Private */,
       8,    0,   90,    2, 0x08 /* Private */,
       9,    0,   91,    2, 0x08 /* Private */,
      10,    0,   92,    2, 0x08 /* Private */,
      11,    0,   93,    2, 0x08 /* Private */,
      12,    0,   94,    2, 0x08 /* Private */,
      13,    0,   95,    2, 0x08 /* Private */,
      14,    0,   96,    2, 0x08 /* Private */,
      15,    0,   97,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LoanWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LoanWindow *_t = static_cast<LoanWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_YearsPush_pressed(); break;
        case 1: _t->on_LoanPush_pressed(); break;
        case 2: _t->on_PaymentsPush_pressed(); break;
        case 3: _t->on_RatePush_pressed(); break;
        case 4: _t->on_LoanLine_returnPressed(); break;
        case 5: _t->on_YearsLine_returnPressed(); break;
        case 6: _t->on_PaymentsLine_returnPressed(); break;
        case 7: _t->on_RateLine_returnPressed(); break;
        case 8: _t->on_CalcPush_pressed(); break;
        case 9: _t->on_TaxDeductPush_pressed(); break;
        case 10: _t->on_TaxDeductLine_returnPressed(); break;
        case 11: _t->on_ResetPush_pressed(); break;
        case 12: _t->on_OutputPush_pressed(); break;
        case 13: _t->on_FileLine_returnPressed(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject LoanWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_LoanWindow.data,
      qt_meta_data_LoanWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *LoanWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LoanWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LoanWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int LoanWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
