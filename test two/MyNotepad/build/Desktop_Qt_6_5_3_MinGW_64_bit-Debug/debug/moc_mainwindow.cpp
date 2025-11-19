/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../MyNotepad/mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "on_actionAbout_triggered",
    "",
    "on_actionFind_triggered",
    "on_actionReplace_triggered",
    "on_actionNew_triggered",
    "on_actionOpen_triggered",
    "on_actionSave_triggered",
    "on_actionSaveAs_triggered",
    "on_textEdit_textChanged",
    "on_actionUndo_triggered",
    "on_actionCut_triggered",
    "on_actionCopy_triggered",
    "on_actionPaste_triggered",
    "on_actionRedo_triggered",
    "on_textEdit_undoAvailable",
    "b",
    "on_textEdit_copyAvailable",
    "on_textEdit_redoAvailable",
    "on_actionFont_triggered",
    "on_actionFontColor_triggered",
    "on_actionFontBackgroundColor_triggered",
    "on_action_BackgroundColor_triggered",
    "on_actionLineWrap_triggered",
    "on_actionToolbar_triggered",
    "on_actionStatus_triggered",
    "on_actionSelectALl_triggered",
    "on_actionExit_triggered",
    "on_textEdit_cursorPositionChanged"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[58];
    char stringdata0[11];
    char stringdata1[25];
    char stringdata2[1];
    char stringdata3[24];
    char stringdata4[27];
    char stringdata5[23];
    char stringdata6[24];
    char stringdata7[24];
    char stringdata8[26];
    char stringdata9[24];
    char stringdata10[24];
    char stringdata11[23];
    char stringdata12[24];
    char stringdata13[25];
    char stringdata14[24];
    char stringdata15[26];
    char stringdata16[2];
    char stringdata17[26];
    char stringdata18[26];
    char stringdata19[24];
    char stringdata20[29];
    char stringdata21[39];
    char stringdata22[36];
    char stringdata23[28];
    char stringdata24[27];
    char stringdata25[26];
    char stringdata26[29];
    char stringdata27[24];
    char stringdata28[34];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 24),  // "on_actionAbout_triggered"
        QT_MOC_LITERAL(36, 0),  // ""
        QT_MOC_LITERAL(37, 23),  // "on_actionFind_triggered"
        QT_MOC_LITERAL(61, 26),  // "on_actionReplace_triggered"
        QT_MOC_LITERAL(88, 22),  // "on_actionNew_triggered"
        QT_MOC_LITERAL(111, 23),  // "on_actionOpen_triggered"
        QT_MOC_LITERAL(135, 23),  // "on_actionSave_triggered"
        QT_MOC_LITERAL(159, 25),  // "on_actionSaveAs_triggered"
        QT_MOC_LITERAL(185, 23),  // "on_textEdit_textChanged"
        QT_MOC_LITERAL(209, 23),  // "on_actionUndo_triggered"
        QT_MOC_LITERAL(233, 22),  // "on_actionCut_triggered"
        QT_MOC_LITERAL(256, 23),  // "on_actionCopy_triggered"
        QT_MOC_LITERAL(280, 24),  // "on_actionPaste_triggered"
        QT_MOC_LITERAL(305, 23),  // "on_actionRedo_triggered"
        QT_MOC_LITERAL(329, 25),  // "on_textEdit_undoAvailable"
        QT_MOC_LITERAL(355, 1),  // "b"
        QT_MOC_LITERAL(357, 25),  // "on_textEdit_copyAvailable"
        QT_MOC_LITERAL(383, 25),  // "on_textEdit_redoAvailable"
        QT_MOC_LITERAL(409, 23),  // "on_actionFont_triggered"
        QT_MOC_LITERAL(433, 28),  // "on_actionFontColor_triggered"
        QT_MOC_LITERAL(462, 38),  // "on_actionFontBackgroundColor_..."
        QT_MOC_LITERAL(501, 35),  // "on_action_BackgroundColor_tri..."
        QT_MOC_LITERAL(537, 27),  // "on_actionLineWrap_triggered"
        QT_MOC_LITERAL(565, 26),  // "on_actionToolbar_triggered"
        QT_MOC_LITERAL(592, 25),  // "on_actionStatus_triggered"
        QT_MOC_LITERAL(618, 28),  // "on_actionSelectALl_triggered"
        QT_MOC_LITERAL(647, 23),  // "on_actionExit_triggered"
        QT_MOC_LITERAL(671, 33)   // "on_textEdit_cursorPositionCha..."
    },
    "MainWindow",
    "on_actionAbout_triggered",
    "",
    "on_actionFind_triggered",
    "on_actionReplace_triggered",
    "on_actionNew_triggered",
    "on_actionOpen_triggered",
    "on_actionSave_triggered",
    "on_actionSaveAs_triggered",
    "on_textEdit_textChanged",
    "on_actionUndo_triggered",
    "on_actionCut_triggered",
    "on_actionCopy_triggered",
    "on_actionPaste_triggered",
    "on_actionRedo_triggered",
    "on_textEdit_undoAvailable",
    "b",
    "on_textEdit_copyAvailable",
    "on_textEdit_redoAvailable",
    "on_actionFont_triggered",
    "on_actionFontColor_triggered",
    "on_actionFontBackgroundColor_triggered",
    "on_action_BackgroundColor_triggered",
    "on_actionLineWrap_triggered",
    "on_actionToolbar_triggered",
    "on_actionStatus_triggered",
    "on_actionSelectALl_triggered",
    "on_actionExit_triggered",
    "on_textEdit_cursorPositionChanged"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  170,    2, 0x08,    1 /* Private */,
       3,    0,  171,    2, 0x08,    2 /* Private */,
       4,    0,  172,    2, 0x08,    3 /* Private */,
       5,    0,  173,    2, 0x08,    4 /* Private */,
       6,    0,  174,    2, 0x08,    5 /* Private */,
       7,    0,  175,    2, 0x08,    6 /* Private */,
       8,    0,  176,    2, 0x08,    7 /* Private */,
       9,    0,  177,    2, 0x08,    8 /* Private */,
      10,    0,  178,    2, 0x08,    9 /* Private */,
      11,    0,  179,    2, 0x08,   10 /* Private */,
      12,    0,  180,    2, 0x08,   11 /* Private */,
      13,    0,  181,    2, 0x08,   12 /* Private */,
      14,    0,  182,    2, 0x08,   13 /* Private */,
      15,    1,  183,    2, 0x08,   14 /* Private */,
      17,    1,  186,    2, 0x08,   16 /* Private */,
      18,    1,  189,    2, 0x08,   18 /* Private */,
      19,    0,  192,    2, 0x08,   20 /* Private */,
      20,    0,  193,    2, 0x08,   21 /* Private */,
      21,    0,  194,    2, 0x08,   22 /* Private */,
      22,    0,  195,    2, 0x08,   23 /* Private */,
      23,    0,  196,    2, 0x08,   24 /* Private */,
      24,    0,  197,    2, 0x08,   25 /* Private */,
      25,    0,  198,    2, 0x08,   26 /* Private */,
      26,    0,  199,    2, 0x08,   27 /* Private */,
      27,    0,  200,    2, 0x08,   28 /* Private */,
      28,    0,  201,    2, 0x08,   29 /* Private */,

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
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, QMetaType::Bool,   16,
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

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'on_actionAbout_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionFind_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionReplace_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionNew_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionOpen_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionSave_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionSaveAs_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_textEdit_textChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionUndo_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionCut_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionCopy_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionPaste_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionRedo_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_textEdit_undoAvailable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_textEdit_copyAvailable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_textEdit_redoAvailable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_actionFont_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionFontColor_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionFontBackgroundColor_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_action_BackgroundColor_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionLineWrap_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionToolbar_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionStatus_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionSelectALl_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionExit_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_textEdit_cursorPositionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_actionAbout_triggered(); break;
        case 1: _t->on_actionFind_triggered(); break;
        case 2: _t->on_actionReplace_triggered(); break;
        case 3: _t->on_actionNew_triggered(); break;
        case 4: _t->on_actionOpen_triggered(); break;
        case 5: _t->on_actionSave_triggered(); break;
        case 6: _t->on_actionSaveAs_triggered(); break;
        case 7: _t->on_textEdit_textChanged(); break;
        case 8: _t->on_actionUndo_triggered(); break;
        case 9: _t->on_actionCut_triggered(); break;
        case 10: _t->on_actionCopy_triggered(); break;
        case 11: _t->on_actionPaste_triggered(); break;
        case 12: _t->on_actionRedo_triggered(); break;
        case 13: _t->on_textEdit_undoAvailable((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 14: _t->on_textEdit_copyAvailable((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 15: _t->on_textEdit_redoAvailable((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 16: _t->on_actionFont_triggered(); break;
        case 17: _t->on_actionFontColor_triggered(); break;
        case 18: _t->on_actionFontBackgroundColor_triggered(); break;
        case 19: _t->on_action_BackgroundColor_triggered(); break;
        case 20: _t->on_actionLineWrap_triggered(); break;
        case 21: _t->on_actionToolbar_triggered(); break;
        case 22: _t->on_actionStatus_triggered(); break;
        case 23: _t->on_actionSelectALl_triggered(); break;
        case 24: _t->on_actionExit_triggered(); break;
        case 25: _t->on_textEdit_cursorPositionChanged(); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 26;
    }
    return _id;
}
QT_WARNING_POP
