/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[42];
    char stringdata0[459];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 13), // "showValidPort"
QT_MOC_LITERAL(25, 0), // ""
QT_MOC_LITERAL(26, 20), // "serialPort_readyRead"
QT_MOC_LITERAL(47, 32), // "on_pushButton_serialopen_clicked"
QT_MOC_LITERAL(80, 26), // "on_pushButton_send_clicked"
QT_MOC_LITERAL(107, 29), // "on_pushButton_headdef_clicked"
QT_MOC_LITERAL(137, 33), // "on_pushButton_clearencode_cli..."
QT_MOC_LITERAL(171, 30), // "on_pushButton_leftslow_pressed"
QT_MOC_LITERAL(202, 31), // "on_pushButton_leftslow_released"
QT_MOC_LITERAL(234, 31), // "on_pushButton_rightslow_pressed"
QT_MOC_LITERAL(266, 32), // "on_pushButton_rightslow_released"
QT_MOC_LITERAL(299, 31), // "on_pushButton_leftquick_clicked"
QT_MOC_LITERAL(331, 32), // "on_pushButton_rightquick_clicked"
QT_MOC_LITERAL(364, 26), // "on_pushButton_step_clicked"
QT_MOC_LITERAL(391, 13), // "keyPressEvent"
QT_MOC_LITERAL(405, 10), // "QKeyEvent*"
QT_MOC_LITERAL(416, 5), // "event"
QT_MOC_LITERAL(422, 15), // "keyReleaseEvent"
QT_MOC_LITERAL(438, 10), // "sizechange"
QT_MOC_LITERAL(449, 9) // "butenable"

    },
    "MainWindow\0showValidPort\0\0"
    "serialPort_readyRead\0"
    "on_pushButton_serialopen_clicked\0"
    "on_pushButton_send_clicked\0"
    "on_pushButton_headdef_clicked\0"
    "on_pushButton_clearencode_clicked\0"
    "on_pushButton_leftslow_pressed\0"
    "on_pushButton_leftslow_released\0"
    "on_pushButton_rightslow_pressed\0"
    "on_pushButton_rightslow_released\0"
    "on_pushButton_leftquick_clicked\0"
    "on_pushButton_rightquick_clicked\0"
    "on_pushButton_step_clicked\0keyPressEvent\0"
    "QKeyEvent*\0event\0keyReleaseEvent\0"
    "sizechange\0butenable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  116,    2, 0x08,    1 /* Private */,
       3,    0,  117,    2, 0x08,    2 /* Private */,
       4,    0,  118,    2, 0x08,    3 /* Private */,
       5,    0,  119,    2, 0x08,    4 /* Private */,
       6,    0,  120,    2, 0x08,    5 /* Private */,
       7,    0,  121,    2, 0x08,    6 /* Private */,
       8,    0,  122,    2, 0x08,    7 /* Private */,
       9,    0,  123,    2, 0x08,    8 /* Private */,
      10,    0,  124,    2, 0x08,    9 /* Private */,
      11,    0,  125,    2, 0x08,   10 /* Private */,
      12,    0,  126,    2, 0x08,   11 /* Private */,
      13,    0,  127,    2, 0x08,   12 /* Private */,
      14,    0,  128,    2, 0x08,   13 /* Private */,
      15,    1,  129,    2, 0x08,   14 /* Private */,
      18,    1,  132,    2, 0x08,   16 /* Private */,
      19,    0,  135,    2, 0x08,   18 /* Private */,
      20,    0,  136,    2, 0x08,   19 /* Private */,

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
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->showValidPort(); break;
        case 1: _t->serialPort_readyRead(); break;
        case 2: _t->on_pushButton_serialopen_clicked(); break;
        case 3: _t->on_pushButton_send_clicked(); break;
        case 4: _t->on_pushButton_headdef_clicked(); break;
        case 5: _t->on_pushButton_clearencode_clicked(); break;
        case 6: _t->on_pushButton_leftslow_pressed(); break;
        case 7: _t->on_pushButton_leftslow_released(); break;
        case 8: _t->on_pushButton_rightslow_pressed(); break;
        case 9: _t->on_pushButton_rightslow_released(); break;
        case 10: _t->on_pushButton_leftquick_clicked(); break;
        case 11: _t->on_pushButton_rightquick_clicked(); break;
        case 12: _t->on_pushButton_step_clicked(); break;
        case 13: _t->keyPressEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 14: _t->keyReleaseEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 15: _t->sizechange(); break;
        case 16: _t->butenable(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSize,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t
, QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QKeyEvent *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QKeyEvent *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 17;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
