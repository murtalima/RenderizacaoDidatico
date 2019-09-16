/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../CompGrafica/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[58];
    char stringdata0[977];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 24), // "on_btFrameBuffer_clicked"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 16), // "on_btDDA_clicked"
QT_MOC_LITERAL(4, 54, 22), // "on_btBresenham_clicked"
QT_MOC_LITERAL(5, 77, 23), // "on_btCirculoPit_clicked"
QT_MOC_LITERAL(6, 101, 29), // "on_btCirculoBresenham_clicked"
QT_MOC_LITERAL(7, 131, 31), // "on_btCirculoCoordenadas_clicked"
QT_MOC_LITERAL(8, 163, 13), // "printarPontos"
QT_MOC_LITERAL(9, 177, 19), // "std::vector<QPoint>"
QT_MOC_LITERAL(10, 197, 6), // "pontos"
QT_MOC_LITERAL(11, 204, 2), // "px"
QT_MOC_LITERAL(12, 207, 16), // "calculoBresenham"
QT_MOC_LITERAL(13, 224, 2), // "X1"
QT_MOC_LITERAL(14, 227, 2), // "Y1"
QT_MOC_LITERAL(15, 230, 2), // "X2"
QT_MOC_LITERAL(16, 233, 2), // "Y2"
QT_MOC_LITERAL(17, 236, 15), // "Imprimir_Deltas"
QT_MOC_LITERAL(18, 252, 10), // "calculoDDA"
QT_MOC_LITERAL(19, 263, 17), // "calculoCirculoPit"
QT_MOC_LITERAL(20, 281, 2), // "xc"
QT_MOC_LITERAL(21, 284, 2), // "yc"
QT_MOC_LITERAL(22, 287, 1), // "r"
QT_MOC_LITERAL(23, 289, 23), // "calculoCirculoBresenham"
QT_MOC_LITERAL(24, 313, 19), // "calculoCirculoCoord"
QT_MOC_LITERAL(25, 333, 4), // "quad"
QT_MOC_LITERAL(26, 338, 4), // "setY"
QT_MOC_LITERAL(27, 343, 1), // "y"
QT_MOC_LITERAL(28, 345, 4), // "setX"
QT_MOC_LITERAL(29, 350, 1), // "x"
QT_MOC_LITERAL(30, 352, 9), // "atualizar"
QT_MOC_LITERAL(31, 362, 10), // "mAtualizar"
QT_MOC_LITERAL(32, 373, 4), // "mult"
QT_MOC_LITERAL(33, 378, 20), // "on_leX2_valueChanged"
QT_MOC_LITERAL(34, 399, 20), // "on_leY2_valueChanged"
QT_MOC_LITERAL(35, 420, 20), // "on_leY1_valueChanged"
QT_MOC_LITERAL(36, 441, 20), // "on_leX1_valueChanged"
QT_MOC_LITERAL(37, 462, 22), // "on_leX1_2_valueChanged"
QT_MOC_LITERAL(38, 485, 22), // "on_leY1_2_valueChanged"
QT_MOC_LITERAL(39, 508, 22), // "on_leY2_2_valueChanged"
QT_MOC_LITERAL(40, 531, 22), // "on_leX2_2_valueChanged"
QT_MOC_LITERAL(41, 554, 20), // "on_leYc_valueChanged"
QT_MOC_LITERAL(42, 575, 20), // "on_leXc_valueChanged"
QT_MOC_LITERAL(43, 596, 22), // "on_leRaio_valueChanged"
QT_MOC_LITERAL(44, 619, 22), // "on_leXc_3_valueChanged"
QT_MOC_LITERAL(45, 642, 22), // "on_leYc_3_valueChanged"
QT_MOC_LITERAL(46, 665, 24), // "on_leRaio_3_valueChanged"
QT_MOC_LITERAL(47, 690, 28), // "on_sbQuadrantes_valueChanged"
QT_MOC_LITERAL(48, 719, 24), // "on_sbXFrame_valueChanged"
QT_MOC_LITERAL(49, 744, 24), // "on_sbYFrame_valueChanged"
QT_MOC_LITERAL(50, 769, 22), // "on_leXc_2_valueChanged"
QT_MOC_LITERAL(51, 792, 24), // "on_leRaio_2_valueChanged"
QT_MOC_LITERAL(52, 817, 22), // "on_leYc_2_valueChanged"
QT_MOC_LITERAL(53, 840, 31), // "on_cbDesenharPlano_stateChanged"
QT_MOC_LITERAL(54, 872, 25), // "on_btSalvarImagem_clicked"
QT_MOC_LITERAL(55, 898, 24), // "on_btAbrirImagem_clicked"
QT_MOC_LITERAL(56, 923, 21), // "on_btDesfazer_clicked"
QT_MOC_LITERAL(57, 945, 31) // "on_sbMultiplicador_valueChanged"

    },
    "MainWindow\0on_btFrameBuffer_clicked\0"
    "\0on_btDDA_clicked\0on_btBresenham_clicked\0"
    "on_btCirculoPit_clicked\0"
    "on_btCirculoBresenham_clicked\0"
    "on_btCirculoCoordenadas_clicked\0"
    "printarPontos\0std::vector<QPoint>\0"
    "pontos\0px\0calculoBresenham\0X1\0Y1\0X2\0"
    "Y2\0Imprimir_Deltas\0calculoDDA\0"
    "calculoCirculoPit\0xc\0yc\0r\0"
    "calculoCirculoBresenham\0calculoCirculoCoord\0"
    "quad\0setY\0y\0setX\0x\0atualizar\0mAtualizar\0"
    "mult\0on_leX2_valueChanged\0"
    "on_leY2_valueChanged\0on_leY1_valueChanged\0"
    "on_leX1_valueChanged\0on_leX1_2_valueChanged\0"
    "on_leY1_2_valueChanged\0on_leY2_2_valueChanged\0"
    "on_leX2_2_valueChanged\0on_leYc_valueChanged\0"
    "on_leXc_valueChanged\0on_leRaio_valueChanged\0"
    "on_leXc_3_valueChanged\0on_leYc_3_valueChanged\0"
    "on_leRaio_3_valueChanged\0"
    "on_sbQuadrantes_valueChanged\0"
    "on_sbXFrame_valueChanged\0"
    "on_sbYFrame_valueChanged\0"
    "on_leXc_2_valueChanged\0on_leRaio_2_valueChanged\0"
    "on_leYc_2_valueChanged\0"
    "on_cbDesenharPlano_stateChanged\0"
    "on_btSalvarImagem_clicked\0"
    "on_btAbrirImagem_clicked\0on_btDesfazer_clicked\0"
    "on_sbMultiplicador_valueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      41,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  219,    2, 0x08 /* Private */,
       3,    0,  220,    2, 0x08 /* Private */,
       4,    0,  221,    2, 0x08 /* Private */,
       5,    0,  222,    2, 0x08 /* Private */,
       6,    0,  223,    2, 0x08 /* Private */,
       7,    0,  224,    2, 0x08 /* Private */,
       8,    2,  225,    2, 0x08 /* Private */,
      12,    5,  230,    2, 0x08 /* Private */,
      18,    5,  241,    2, 0x08 /* Private */,
      19,    3,  252,    2, 0x08 /* Private */,
      23,    3,  259,    2, 0x08 /* Private */,
      24,    4,  266,    2, 0x08 /* Private */,
      26,    1,  275,    2, 0x08 /* Private */,
      28,    1,  278,    2, 0x08 /* Private */,
      30,    0,  281,    2, 0x08 /* Private */,
      31,    1,  282,    2, 0x08 /* Private */,
      33,    0,  285,    2, 0x08 /* Private */,
      34,    0,  286,    2, 0x08 /* Private */,
      35,    0,  287,    2, 0x08 /* Private */,
      36,    0,  288,    2, 0x08 /* Private */,
      37,    0,  289,    2, 0x08 /* Private */,
      38,    0,  290,    2, 0x08 /* Private */,
      39,    0,  291,    2, 0x08 /* Private */,
      40,    0,  292,    2, 0x08 /* Private */,
      41,    0,  293,    2, 0x08 /* Private */,
      42,    0,  294,    2, 0x08 /* Private */,
      43,    0,  295,    2, 0x08 /* Private */,
      44,    0,  296,    2, 0x08 /* Private */,
      45,    0,  297,    2, 0x08 /* Private */,
      46,    0,  298,    2, 0x08 /* Private */,
      47,    0,  299,    2, 0x08 /* Private */,
      48,    0,  300,    2, 0x08 /* Private */,
      49,    0,  301,    2, 0x08 /* Private */,
      50,    0,  302,    2, 0x08 /* Private */,
      51,    0,  303,    2, 0x08 /* Private */,
      52,    0,  304,    2, 0x08 /* Private */,
      53,    0,  305,    2, 0x08 /* Private */,
      54,    0,  306,    2, 0x08 /* Private */,
      55,    0,  307,    2, 0x08 /* Private */,
      56,    0,  308,    2, 0x08 /* Private */,
      57,    0,  309,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QPixmap, 0x80000000 | 9, QMetaType::QPixmap,   10,   11,
    0x80000000 | 9, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Bool,   13,   14,   15,   16,   17,
    0x80000000 | 9, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Bool,   13,   14,   15,   16,   17,
    0x80000000 | 9, QMetaType::Int, QMetaType::Int, QMetaType::Int,   20,   21,   22,
    0x80000000 | 9, QMetaType::Int, QMetaType::Int, QMetaType::Int,   20,   21,   22,
    0x80000000 | 9, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   20,   21,   22,   25,
    QMetaType::Int, QMetaType::Int,   27,
    QMetaType::Int, QMetaType::Int,   29,
    QMetaType::QPixmap,
    QMetaType::QPixmap, QMetaType::Int,   32,
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

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btFrameBuffer_clicked(); break;
        case 1: _t->on_btDDA_clicked(); break;
        case 2: _t->on_btBresenham_clicked(); break;
        case 3: _t->on_btCirculoPit_clicked(); break;
        case 4: _t->on_btCirculoBresenham_clicked(); break;
        case 5: _t->on_btCirculoCoordenadas_clicked(); break;
        case 6: { QPixmap _r = _t->printarPontos((*reinterpret_cast< std::vector<QPoint>(*)>(_a[1])),(*reinterpret_cast< QPixmap(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = std::move(_r); }  break;
        case 7: { std::vector<QPoint> _r = _t->calculoBresenham((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< std::vector<QPoint>*>(_a[0]) = std::move(_r); }  break;
        case 8: { std::vector<QPoint> _r = _t->calculoDDA((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< std::vector<QPoint>*>(_a[0]) = std::move(_r); }  break;
        case 9: { std::vector<QPoint> _r = _t->calculoCirculoPit((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< std::vector<QPoint>*>(_a[0]) = std::move(_r); }  break;
        case 10: { std::vector<QPoint> _r = _t->calculoCirculoBresenham((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< std::vector<QPoint>*>(_a[0]) = std::move(_r); }  break;
        case 11: { std::vector<QPoint> _r = _t->calculoCirculoCoord((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< std::vector<QPoint>*>(_a[0]) = std::move(_r); }  break;
        case 12: { int _r = _t->setY((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 13: { int _r = _t->setX((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 14: { QPixmap _r = _t->atualizar();
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = std::move(_r); }  break;
        case 15: { QPixmap _r = _t->mAtualizar((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = std::move(_r); }  break;
        case 16: _t->on_leX2_valueChanged(); break;
        case 17: _t->on_leY2_valueChanged(); break;
        case 18: _t->on_leY1_valueChanged(); break;
        case 19: _t->on_leX1_valueChanged(); break;
        case 20: _t->on_leX1_2_valueChanged(); break;
        case 21: _t->on_leY1_2_valueChanged(); break;
        case 22: _t->on_leY2_2_valueChanged(); break;
        case 23: _t->on_leX2_2_valueChanged(); break;
        case 24: _t->on_leYc_valueChanged(); break;
        case 25: _t->on_leXc_valueChanged(); break;
        case 26: _t->on_leRaio_valueChanged(); break;
        case 27: _t->on_leXc_3_valueChanged(); break;
        case 28: _t->on_leYc_3_valueChanged(); break;
        case 29: _t->on_leRaio_3_valueChanged(); break;
        case 30: _t->on_sbQuadrantes_valueChanged(); break;
        case 31: _t->on_sbXFrame_valueChanged(); break;
        case 32: _t->on_sbYFrame_valueChanged(); break;
        case 33: _t->on_leXc_2_valueChanged(); break;
        case 34: _t->on_leRaio_2_valueChanged(); break;
        case 35: _t->on_leYc_2_valueChanged(); break;
        case 36: _t->on_cbDesenharPlano_stateChanged(); break;
        case 37: _t->on_btSalvarImagem_clicked(); break;
        case 38: _t->on_btAbrirImagem_clicked(); break;
        case 39: _t->on_btDesfazer_clicked(); break;
        case 40: _t->on_sbMultiplicador_valueChanged(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
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
        if (_id < 41)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 41;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 41)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 41;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
