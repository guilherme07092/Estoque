#include "mostrar.h"
#include "ui_mostrar.h"

Mostrar::Mostrar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Mostrar)
{
    ui->setupUi(this);
}

Mostrar::~Mostrar()
{
    delete ui;
}

void Mostrar::on_pushButton_clicked()
{
    close();
}

void Mostrar::recebe(QString nome,QString quant,QString codigo){
    ui->mNome->setText(nome);
    ui->mQuat->setText(quant);
    ui->mCodigo->setText(codigo);
}
