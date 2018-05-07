#include "dialogbuscar.h"
#include "ui_dialogbuscar.h"
#include "produto.h"
#include "mainwindow.h"

Dialogbuscar::Dialogbuscar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialogbuscar)
{
    ui->setupUi(this);
}

Dialogbuscar::~Dialogbuscar()
{
    delete ui;
}

void Dialogbuscar::on_pushButton_2_clicked()
{
    close();
}

void Dialogbuscar::on_pushButton_clicked()
{
    QString s = ui->getB->text();
    emit mandaBusca(s);
    close();
}
