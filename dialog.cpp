#include "dialog.h"
#include "ui_dialog.h"
#include "mainwindow.h"
#include "produto.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_2_clicked()
{
    close();
}

void Dialog::on_pushButton_clicked()
{

    QString nome = ui->getNome->text();
    QString quant = ui->getQuant->text();
    QString codigo = ui->getCodigo->text();
    emit vetor(nome,quant,codigo);
    close();

}
