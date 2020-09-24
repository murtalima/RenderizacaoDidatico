#include "mainwindow.h"
#include "ui_mainwindow.h"

int W_PX = 100;
int H_PX = 100;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    QWidget::showNormal();
    ui->setupUi(this);



}


MainWindow::~MainWindow()
{

    delete ui;
}
//funcoes principais :
void MainWindow::on_btFrameBuffer_clicked()
{
    int FB = ui->sbFB->text().toInt();
    int X = ui->sbXFrame->text().toInt();
    int Y = ui->sbYFrame->text().toInt();
    int W = ui->sbW->text().toInt();
    int B = ui->sbT->text().toInt();
    int H = ui->sbH->text().toInt();
    unsigned int T = H*W*B/8;
    unsigned int M =  FB + (X+Y*W) * (B/8);
    ui->leM->setText(QString::number(M));
    ui->leTamanhoBuffer->setText(QString::number(T));
}

void MainWindow::on_btDDA_clicked()
{
    int mult = ui->sbMultiplicador->value();

    int X1 = ui->leX1->text().toInt();
    int Y1 = ui->leY1->text().toInt();
    int X2 = ui->leX2->text().toInt();
    int Y2 = ui->leY2->text().toInt();

    QFile file(QStandardPaths::DocumentsLocation+"/out.txt");
    if(ui->cbManterImagem->isChecked()){
        file.open(QIODevice::Append | QIODevice::Text);
    }else{
            file.open(QIODevice::WriteOnly | QIODevice::Text);
    }
    QTextStream out(&file);
    out << "1" <<"#";
    out << X1 << "#";
    out << Y1 << "#";
    out << X2 << "#";
    out << Y2 << "#";
    out << "\n";
    QPixmap px (W_PX*mult,H_PX*mult);
    px.fill(Qt::white);
    file.close();
    if(ui->cbManterImagem->isChecked())
        px = mAtualizar(ui->sbMultiplicador->value());
        else
            px=printarPontos(calculoDDA(X1*mult,Y1*mult,X2*mult,Y2*mult,true),px);

    ui->test->setPixmap(px);
}

void MainWindow::on_btBresenham_clicked(){

    int mult = ui->sbMultiplicador->value();
    int X1 = ui->leX1_2->text().toInt();
    int Y1 = ui->leY1_2->text().toInt();
    int X2 = ui->leX2_2->text().toInt();
    int Y2 = ui->leY2_2->text().toInt();

    QFile file(QStandardPaths::DocumentsLocation+"/out.txt");
    if(ui->cbManterImagem->isChecked()){
        file.open(QIODevice::Append | QIODevice::Text);
    }else{
            file.open(QIODevice::WriteOnly | QIODevice::Text);
    }
    QTextStream out(&file);
    out << "2" <<"#";
    out << X1 << "#";
    out << Y1 << "#";
    out << X2 << "#";
    out << Y2 << "#";
    out << "\n";
    QPixmap px (W_PX*mult,H_PX*mult);
    px.fill(Qt::white);
    file.close();
    if(ui->cbManterImagem->isChecked())
        px = mAtualizar(ui->sbMultiplicador->value());
        else
            px=printarPontos(calculoBresenham(X1*mult,Y1*mult,X2*mult,Y2*mult,true),px);

    ui->test->setPixmap(px);
}

void MainWindow::on_btCirculoPit_clicked()
{
    int mult = ui->sbMultiplicador->value();

    int xc = ui->leXc->text().toInt();
    int yc = ui->leYc->text().toInt();
    int r = ui->leRaio->text().toInt();
    QFile file(QStandardPaths::DocumentsLocation+"/out.txt");
    if(ui->cbManterImagem->isChecked()){
        file.open(QIODevice::Append | QIODevice::Text);
    }else{
            file.open(QIODevice::WriteOnly | QIODevice::Text);
    }
    QTextStream out(&file);

    out << "3" <<"#";
    out << xc << "#";
    out << yc << "#";
    out << r << "#";
    out << "\n";
    QPixmap px (W_PX*mult,H_PX*mult);
    px.fill(Qt::white);
    file.close();
    if(ui->cbManterImagem->isChecked())
        px = mAtualizar(ui->sbMultiplicador->value());
        else
            px=printarPontos(calculoCirculoPit(xc*mult,yc*mult,r*mult),px);

    ui->test->setPixmap(px);
}

void MainWindow::on_btCirculoBresenham_clicked()
{

    int mult = ui->sbMultiplicador->value();
    int xc = ui->leXc_2->text().toInt();
    int yc = ui->leYc_2->text().toInt();
    int r = ui->leRaio_2->text().toInt();

    QFile file(QStandardPaths::DocumentsLocation+"/out.txt");
    if(ui->cbManterImagem->isChecked()){
        file.open(QIODevice::Append | QIODevice::Text);
    }else{
            file.open(QIODevice::WriteOnly | QIODevice::Text);
    }
    QTextStream out(&file);

    out << "4" <<"#";
    out << xc << "#";
    out << yc << "#";
    out << r << "#";
    out << "\n";
    QPixmap px (W_PX*mult,H_PX*mult);
    px.fill(Qt::white);
    file.close();
    if(ui->cbManterImagem->isChecked())
        px = mAtualizar(ui->sbMultiplicador->value());
        else
            px=printarPontos(calculoCirculoBresenham(xc*mult,yc*mult,r*mult),px);

    ui->test->setPixmap(px);
}

void MainWindow::on_btCirculoCoordenadas_clicked()
{


    int mult = ui->sbMultiplicador->value();
    int xc = ui->leXc_3->text().toInt();
    int yc = ui->leYc_3->text().toInt();
    int r = ui->leRaio_3->text().toInt();
    int quad = ui-> sbQuadrantes->text().toInt();
    QFile file(QStandardPaths::DocumentsLocation+"/out.txt");
    if(ui->cbManterImagem->isChecked()){
        file.open(QIODevice::Append | QIODevice::Text);
    }else{
            file.open(QIODevice::WriteOnly | QIODevice::Text);
    }
    QTextStream out(&file);

    out << "5" <<"#";
    out << xc << "#";
    out << yc << "#";
    out << r << "#";
    out << quad << "#";
    out << "\n";
    QPixmap px (W_PX*mult,H_PX*mult);
    px.fill(Qt::white);
    file.close();
    if(ui->cbManterImagem->isChecked())
        px = mAtualizar(mult);
        else{
            px=printarPontos(calculoCirculoCoord(xc*mult,yc*mult,r*mult,quad),px);
        }
    ui->test->setPixmap(px);
}
//funcoes auxiliares :
int MainWindow::setX (int x){
    int i = W_PX;
    return i/2 + x;
}

int MainWindow::setY (int y){
    int i =H_PX;
    return  i/2 - y;

}

QPixmap MainWindow::atualizar(){


    QPixmap px (W_PX,H_PX);
    px.fill(Qt::white);
    QFile file(QStandardPaths::DocumentsLocation+"/out.txt");
    file.open(QIODevice::ReadOnly | QIODevice::Text);
    QTextStream in(&file);
    while(!in.atEnd()) {
        QString line = in.readLine();
        QStringList fields = line.split("#");
        if(fields[0].toInt()== 1) {
            px = printarPontos(calculoDDA(fields[1].toInt(),fields[2].toInt(),fields[3].toInt(),fields[4].toInt(),false),px);
        }
        if(fields[0].toInt()== 2) {
            px = printarPontos(calculoBresenham(fields[1].toInt(),fields[2].toInt(),fields[3].toInt(),fields[4].toInt(),false),px);
        }
        if(fields[0].toInt()== 3) {
            px = printarPontos(calculoCirculoPit(fields[1].toInt(),fields[2].toInt(),fields[3].toInt()),px);
        }
        if(fields[0].toInt()== 4) {
            px = printarPontos(calculoCirculoBresenham(fields[1].toInt(),fields[2].toInt(),fields[3].toInt()),px);
        }
        if(fields[0].toInt()== 5) {
            px = printarPontos(calculoCirculoCoord(fields[1].toInt(),fields[2].toInt(),fields[3].toInt(),fields[4].toInt()),px);
        }

    }
    return px;
}

std::vector<QPoint> MainWindow::calculoCirculoCoord(int xc ,int yc ,int r ,int quad) {
    std::vector<QPoint> pontos;
    int x, y, x1, y1;
    pontos.push_back(QPoint(xc,yc));
    quad /= 2;
    double i;
    x1 =(r + xc);
    y1 = yc;
    for(i = 0.0; i <= 2 *  M_PI; i += (M_PI / quad)){
        x = (xc) + r * cos(i);
        y = yc + r * sin(i);
        pontos.push_back(QPoint(x,y));
        pontos.push_back(QPoint(xc,yc));
        std::vector<QPoint> linha = calculoBresenham(x1,y1,x,y,true);
        pontos.insert(pontos.end(),linha.begin(),linha.end());
        x1 = x;
        y1 = y;
    }
    return pontos;
}

std::vector<QPoint> MainWindow::calculoCirculoPit(int xc ,int yc ,int r) {
    std::vector<QPoint> pontos;
    int x, y, y1, y2, x1, x2;

    pontos.push_back(QPoint(xc,yc));

    for(x = (xc - r); x <= (xc + r); x++){

        y1 = yc + sqrt(pow(r, 2) - pow((x - xc), 2));
        y2 = yc - sqrt(pow(r, 2) - pow((x - xc), 2));
        pontos.push_back(QPoint(x,y1));
        pontos.push_back(QPoint(x,y2));


    }

    for(y = (yc - r); y <= (yc + r); y++){
        x1 = xc + sqrt(pow(r, 2) - pow((y - yc), 2));
        x2 = xc - sqrt(pow(r, 2) - pow((y - yc), 2));
        pontos.push_back(QPoint(x1,y));
        pontos.push_back(QPoint(x2,y));

    }
    return pontos;
}

std::vector<QPoint> MainWindow::calculoCirculoBresenham(int xc ,int yc ,int r) {
    std::vector<QPoint> pontos;
    int x, y, p, varControle;
        p = 1 - (r + yc);
        y = (r);
        x = 0;


        pontos.push_back(QPoint(xc,yc));


        while(x < y){
                x++;
                if(p < 0){
                    p = p + 2 * x + 1;
                } else {
                    y--;
                    p = p + 2 * x + 1 - 2 * y;
                }
            }
            varControle = x;
            int vetorX[varControle];
            int vetorY[varControle];

            int i = 0;
            p = 1 - (r);
            y = (r);
            x = 0;


            while(x < y){
                x++;
                if(p < 0) {
                    p = p + 2 * x + 1;
                } else {
                    y--;
                    p = p + 2 * x + 1 - 2 * y;
                }
                vetorX[i] = y;
                vetorY[i] = x;
                i++;
                pontos.push_back(QPoint(x+xc,y+yc));


            }

            for(i = 0; i < varControle; i++) {


                pontos.push_back(QPoint(vetorX[i]+xc,vetorY[i]+yc));

                pontos.push_back(QPoint(-vetorY[i]+xc,vetorX[i]+yc));

                pontos.push_back(QPoint(-vetorX[i]+xc,vetorY[i]+yc));

                pontos.push_back(QPoint(-vetorX[i]+xc,-vetorY[i]+yc));

                pontos.push_back(QPoint(-vetorY[i]+xc,-vetorX[i]+yc));

                pontos.push_back(QPoint(vetorY[i]+xc,-vetorX[i]+yc));

                pontos.push_back(QPoint(vetorX[i]+xc,-vetorY[i]+yc));
            }
            return pontos;

}

std::vector<QPoint> MainWindow::calculoDDA (int X1 , int Y1 , int X2 , int Y2,bool Imprimir_Deltas){
    std::vector<QPoint> pontos;
    int Dx = X2 - X1;
    int Dy = Y2 - Y1;

    int Step;
    if (abs(Dx)> abs(Dy))
        Step = abs(Dx);
            else
                Step = abs(Dy);

    float Ix = (float)Dx / (float)Step;
    float Iy = (float)Dy / (float)Step;
    if(Imprimir_Deltas){
        ui->leDx->setText(QString::number(Dx));
        ui->leDy->setText(QString::number(Dy));
        ui->leStep->setText(QString::number(Step));
        ui->leIx->setText(QString::number(Ix));
        ui->leIy->setText(QString::number(Iy));
    }
    pontos.push_back(QPoint(X1,Y1));

    float Xp = X1;
    float Yp = Y1;
    for (int i = 0; i<Step ; i++){
       Xp += Ix;
       Yp += Iy;
       pontos.push_back(QPoint(round(Xp),round(Yp)));
    }
    return pontos;
}

std::vector<QPoint> MainWindow::calculoBresenham (int X1 , int Y1 , int X2 , int Y2,bool Imprimir_Deltas) {
    int  Dx, Dy, P, incY, incX, incP1y, incP2y, incP1x, incP2x;
    std::vector<QPoint> pontos;
    Dy = (Y2 - Y1);
    Dx = (X2 - X1);

    if (Dy < 0){
        incY = -1;
        Dy *= -1;
    } else {
        incY = 1;
    }
    if (Dx < 0) {
        incX = -1;
        Dx *= -1;
    } else {
        incX = 1;
    }
    P = 2 * Dy - Dx;

    incP1y =  (2 * Dy);
    incP2y =  (2 * Dy) - (2 * Dx);

    incP1x = (2 * Dx);
    incP2x = (2 * Dx) - (2 * Dy);

    pontos.push_back(QPoint(X1,Y1));

    if (Dx > Dy) {
        while (X1 != X2) {
            X1 += incX;
            if (P <= 0) {
                P += incP1y;
            }
            else {
                Y1 += incY;
                P += incP2y;
            }
             pontos.push_back(QPoint(X1,Y1));

        }
    } else {
        P = 2 * Dx - Dy;
        while (Y1 != Y2) {
            Y1 += incY;
            if (P <= 0) {
                P += incP1x;
            }
            else {
                X1 += incX;
                P += incP2x;
            }
             pontos.push_back(QPoint(X1,Y1));

        }
    }
    if(Imprimir_Deltas==true){
        ui->leDx_2->setText(QString::number(Dx));
        ui->leDy_2->setText(QString::number(Dy));
        ui->leP->setText(QString::number(P));
        if(Dx>Dy){
            ui->leP2->setText(QString::number(incP1y));
            ui->leXy2->setText(QString::number(incP2y));
        }
        else {
            ui->leP2->setText(QString::number(incP1x));
            ui->leXy2->setText(QString::number(incP2x));
        }
      }
    return pontos;

}

QPixmap MainWindow::printarPontos (std::vector<QPoint> pontos,QPixmap px){
    QPoint ponto;
    int cc = 0;
    QString pontosTxt;

    QPainter painter(&px);
    QPen linepen(Qt::red);
    linepen.setWidth(2);
    QPen linepen2(Qt::black);
    linepen2.setWidth(1);

    painter.setPen(linepen);
    painter.drawPoint(setX(pontos.front().x()),setY(pontos.front().y()));
    painter.setPen(linepen2);

    pontosTxt += "P1= ("  + QString::number(pontos.front().x()) + " , " + QString::number(pontos.front().y()) + ")  ";
    pontosTxt += "P2= (" + QString::number(pontos.back().x()) + " , " + QString::number(pontos.back().y()) + ")\n";

    if (ui->cbDesenharPlano->isChecked()){
        for (int i = 0 ; i <= ui->test->width();i++){
           painter.drawPoint(setX(i),setY(0));
           painter.drawPoint(setX(-i),setY(0));
        }
        for (int i = 0 ; i <= ui->test->height();i++){
           painter.drawPoint(setX(0),setY(i));
           painter.drawPoint(setX(0),setY(-i));
        }
    }
    while (pontos.size()>0) {
        ponto.setX(pontos.front().x());
        ponto.setY(pontos.front().y());
        pontos.erase(pontos.begin(),pontos.begin()+1);
        painter.drawPoint(setX(ponto.x()),setY(ponto.y()));
        if(cc%20==0)
            pontosTxt += "\n";
        pontosTxt +="(" + QString::number(ponto.x()) + " , " + QString::number(ponto.y()) + ")";
        cc++;
    }

    if(ui->cbMostrarPontos->isChecked())
        QMessageBox::warning(this, tr("Pontos"), pontosTxt, QMessageBox::Ok);
    return px;
}

void MainWindow::on_btSalvarImagem_clicked()
{
    QString filename =  QFileDialog::getSaveFileName(
              this,
              "Open Document",
              QDir::currentPath());
    QFile imgTxt(QStandardPaths::DocumentsLocation+"/out.txt");
    imgTxt.open(QIODevice::ReadOnly | QIODevice::Text);
    QTextStream in(&imgTxt);
    QFile fileJPG(filename+".jpg");
    QFile fileTXT(filename+".txt");
    fileJPG.open(QIODevice::WriteOnly);
    fileTXT.open(QIODevice::WriteOnly | QIODevice::Text);
    QTextStream out(&fileTXT);
    while(!in.atEnd()) {
        QString line = in.readLine();
        out << line << "\n";
    }
    QPixmap px = mAtualizar(ui->sbMultiplicador->value());

    px.save(&fileJPG, "JPG");
}

void MainWindow::on_btAbrirImagem_clicked()
{
    QString filename =  QFileDialog::getOpenFileName(
              this,
              "Open Document",
              QDir::currentPath(),
              "TXT files (*.txt)");
    QFile file(filename);
    QTextStream in(&file);
    file.open(QIODevice::ReadWrite | QIODevice::Text);
    QFile imgTxt(QStandardPaths::DocumentsLocation+"/out.txt");
    imgTxt.open(QIODevice::WriteOnly | QIODevice::Text);
    QTextStream out(&imgTxt);
    while(!in.atEnd()) {
        QString line = in.readLine();
        out << line << "\n";

    }
    ui->test->setPixmap(atualizar());
}
void MainWindow::on_btDesfazer_clicked()
{

    QStringList content ;
    QFile file(QStandardPaths::DocumentsLocation+"/out.txt");
    file.open(QIODevice::ReadOnly | QIODevice::Text);
    QTextStream in(&file);
    while(!in.atEnd()) {
        QString line = in.readLine();
        content.append(line);
    }
    file.close();
    file.open(QIODevice::WriteOnly | QIODevice::Text);
    QTextStream out(&file);
    for(int i = 0 ; i < content.size()-1;i++) {
        out << content[i] << "\n";
    }
    file.close();
    ui->test->setPixmap(atualizar());
}
//funcoes pra atualizar resultado :
void MainWindow::on_cbDesenharPlano_stateChanged()
{
    QPixmap px = mAtualizar(ui->sbMultiplicador->value());
    QPainter painter(&px);
    QPen linepen(Qt::black);
    linepen.setWidth(1);
    painter.setPen(linepen);
    if (ui->cbDesenharPlano->isChecked()){
        for (int i = 0 ; i < ui->test->width();i++){
           painter.drawPoint(setX(i),setY(0));
           painter.drawPoint(setX(-i),setY(0));
           painter.drawPoint(setX(0),setY(i));
           painter.drawPoint(setX(0),setY(-i));
        }

    }
    ui->test->setPixmap(px);

}

//dda
void MainWindow::on_leX2_valueChanged()
{
    if(ui->cbNaoAtualizar->isChecked()==false)
    on_btDDA_clicked();
}

void MainWindow::on_leY2_valueChanged()
{
    if(ui->cbNaoAtualizar->isChecked()==false)
    on_btDDA_clicked();
}

void MainWindow::on_leY1_valueChanged()
{
    if(ui->cbNaoAtualizar->isChecked()==false)
    on_btDDA_clicked();
}

void MainWindow::on_leX1_valueChanged()
{
    if(ui->cbNaoAtualizar->isChecked()==false)
    on_btDDA_clicked();
}
//bresenham
void MainWindow::on_leX1_2_valueChanged()
{
    if(ui->cbNaoAtualizar->isChecked()==false)
    on_btBresenham_clicked();
}

void MainWindow::on_leY1_2_valueChanged()
{
    if(ui->cbNaoAtualizar->isChecked()==false)
    on_btBresenham_clicked();
}

void MainWindow::on_leY2_2_valueChanged()
{
    if(ui->cbNaoAtualizar->isChecked()==false)
    on_btBresenham_clicked();
}

void MainWindow::on_leX2_2_valueChanged()
{
    if(ui->cbNaoAtualizar->isChecked()==false)
    on_btBresenham_clicked();
}
//circulo pitagoras
void MainWindow::on_leYc_valueChanged()
{
    if(ui->cbNaoAtualizar->isChecked()==false)
    on_btCirculoPit_clicked();
}

void MainWindow::on_leXc_valueChanged()
{
    if(ui->cbNaoAtualizar->isChecked()==false)
    on_btCirculoPit_clicked();
}

void MainWindow::on_leRaio_valueChanged()
{
    if(ui->cbNaoAtualizar->isChecked()==false)
    on_btCirculoPit_clicked();
}
//circulo bresenham
void MainWindow::on_leXc_2_valueChanged()
{
    if(ui->cbNaoAtualizar->isChecked()==false)
    on_btCirculoBresenham_clicked();
}

void MainWindow::on_leYc_2_valueChanged()
{
    if(ui->cbNaoAtualizar->isChecked()==false)
    on_btCirculoBresenham_clicked();
}

void MainWindow::on_leRaio_2_valueChanged()
{
    if(ui->cbNaoAtualizar->isChecked()==false)
    on_btCirculoBresenham_clicked();
}
//circulo coordenadas polares
void MainWindow::on_leXc_3_valueChanged()
{
    if(ui->cbNaoAtualizar->isChecked()==false)
    on_btCirculoCoordenadas_clicked();
}

void MainWindow::on_leYc_3_valueChanged()
{
    if(ui->cbNaoAtualizar->isChecked()==false)
    on_btCirculoCoordenadas_clicked();
}

void MainWindow::on_leRaio_3_valueChanged()
{
    if(ui->cbNaoAtualizar->isChecked()==false)
    on_btCirculoCoordenadas_clicked();
}

void MainWindow::on_sbQuadrantes_valueChanged()
{
    if(ui->cbNaoAtualizar->isChecked()==false)
    on_btCirculoCoordenadas_clicked();
}
//frame buffer

void MainWindow::on_sbXFrame_valueChanged()
{
    if(ui->cbNaoAtualizar->isChecked()==false)
    on_btFrameBuffer_clicked();
}

void MainWindow::on_sbYFrame_valueChanged()
{
    if(ui->cbNaoAtualizar->isChecked()==false)
    on_btFrameBuffer_clicked();
}



QPixmap MainWindow::mAtualizar(int mult){

    W_PX *= mult;
    H_PX *= mult;
    QPixmap px(W_PX,H_PX);
    px.fill(Qt::white);
    QFile file(QStandardPaths::DocumentsLocation+"/out.txt");
    file.open(QIODevice::ReadOnly | QIODevice::Text);
    QTextStream in(&file);
    while(!in.atEnd()) {
        QString line = in.readLine();
        QStringList fields = line.split("#");
        if(fields[0].toInt()== 1) {
            px = printarPontos(calculoDDA(fields[1].toInt()*mult,fields[2].toInt()*mult,fields[3].toInt()*mult,fields[4].toInt()*mult,false),px);
        }
        if(fields[0].toInt()== 2) {
            px = printarPontos(calculoBresenham(fields[1].toInt()*mult,fields[2].toInt()*mult,fields[3].toInt()*mult,fields[4].toInt()*mult,false),px);
        }
        if(fields[0].toInt()== 3) {
            px = printarPontos(calculoCirculoPit(fields[1].toInt()*mult,fields[2].toInt()*mult,fields[3].toInt()*mult),px);
        }
        if(fields[0].toInt()== 4) {
            px = printarPontos(calculoCirculoBresenham(fields[1].toInt()*mult,fields[2].toInt()*mult,fields[3].toInt()*mult),px);
        }
        if(fields[0].toInt()== 5) {
            px = printarPontos(calculoCirculoCoord(fields[1].toInt()*mult,fields[2].toInt()*mult,fields[3].toInt()*mult,fields[4].toInt()),px);
        }

    }
    W_PX /= mult;
    H_PX /= mult;
    return px;
}
void MainWindow::on_sbMultiplicador_valueChanged()
{
    ui->test->setPixmap(mAtualizar(ui->sbMultiplicador->value()));
}
