#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <qpixmap.h>
#include <QPainter>
#include <cmath>
#include <iostream>
#include <vector>
#include <QMessageBox>
#include <QFile>
#include <QDir>
#include <QFileDialog>
#include <QTextStream>
#include <QStandardPaths>
#include <string>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_btFrameBuffer_clicked();
    void on_btDDA_clicked();
    void on_btBresenham_clicked();
    void on_btCirculoPit_clicked();
    void on_btCirculoBresenham_clicked();
    void on_btCirculoCoordenadas_clicked();

    QPixmap printarPontos (std::vector<QPoint> pontos, QPixmap px);
    std::vector<QPoint> calculoBresenham (int X1 , int Y1 , int X2 , int Y2,bool Imprimir_Deltas);
    std::vector<QPoint> calculoDDA (int X1 , int Y1 , int X2 , int Y2,bool Imprimir_Deltas);
    std::vector<QPoint> calculoCirculoPit(int xc ,int yc ,int r);
    std::vector<QPoint> calculoCirculoBresenham(int xc ,int yc ,int r);
    std::vector<QPoint> calculoCirculoCoord(int xc ,int yc ,int r ,int quad);
    int setY(int y);
    int setX(int x);
    QPixmap atualizar();
    QPixmap mAtualizar(int mult);

    void on_leX2_valueChanged();
    void on_leY2_valueChanged();
    void on_leY1_valueChanged();
    void on_leX1_valueChanged();
    void on_leX1_2_valueChanged();
    void on_leY1_2_valueChanged();
    void on_leY2_2_valueChanged();
    void on_leX2_2_valueChanged();
    void on_leYc_valueChanged();
    void on_leXc_valueChanged();
    void on_leRaio_valueChanged();
    void on_leXc_3_valueChanged();
    void on_leYc_3_valueChanged();
    void on_leRaio_3_valueChanged();
    void on_sbQuadrantes_valueChanged();
    void on_sbXFrame_valueChanged();
    void on_sbYFrame_valueChanged();
    void on_leXc_2_valueChanged();
    void on_leRaio_2_valueChanged();
    void on_leYc_2_valueChanged();
    void on_cbDesenharPlano_stateChanged();
    void on_btSalvarImagem_clicked();
    void on_btAbrirImagem_clicked();

    void on_btDesfazer_clicked();



    void on_sbMultiplicador_valueChanged();

private:

    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
