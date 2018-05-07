#include "dialogex.h"
#include "ui_dialogex.h"
#include "mainwindow.h"
#include "dialog.h"

Dialogex::Dialogex(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialogex)
{
    ui->setupUi(this);
}

Dialogex::~Dialogex()
{
    delete ui;
}

void Dialogex::on_pushButton_2_clicked()
{
    close();
}

void Dialogex::on_pushButton_clicked()
{
    QString h = ui->getEx->text();
    emit nome(h);
    close();
}
