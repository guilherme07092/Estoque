#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"
#include "produto.h"
#include "dialogex.h"
#include "dialogbuscar.h"
#include "mostrar.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionAdicionar_triggered()
{
    Dialog *dialog= new Dialog(this);
    dialog->setModal(true);
    dialog->show();
    connect(dialog,SIGNAL(vetor(QString,QString,QString)),this,SLOT(recebeVetor(QString,QString,QString)));
}

void MainWindow::recebeVetor(QString nome, QString q, QString n)
{
    int h;
    if(p.size() == 0){
        p.push_back(new Produto(nome,q,n));
        printaLista();
        h = 3;
    }else{
        for(int i = 0;i < p.size();i ++){
            if(p.at(i)->getNome() == nome){
                h = 1;
            }else{
                h = 0;
            }
        }
    }

    if(h == 1){
        ui->lbR->setText("O Produto já está cadastrado !!");
    }else if(h == 0){
        p.push_back(new Produto(nome,q,n));
        printaLista();
        ui->lbR->setText("Cadastrado com Sucesso !!");
    }else if(h == 3){
        ui->lbR->setText("Cadastrado com Sucesso !!");
    }
}

void MainWindow::on_actionExcluir_triggered()
{
    Dialogex *dialogex= new Dialogex(this);
    dialogex->setModal(true);
    dialogex->show();
    connect(dialogex,SIGNAL(nome(QString)),this,SLOT(recebeNome(QString)));
}

void MainWindow::recebeNome(QString nome){

    int n = 99;

    for(int i = 0;i<p.size();i++){
        if(p.at(i)->getNome() == nome){
            n = i;
            ui->lbR->setText("Excluido !!");
        }
    }
    if(n != 99){
        p.erase(p.begin()+n);
        ui->listNome->clear();
        for(int i = 0;i < p.size();i++){
            ui->listNome->addItem(p.at(i)->getNome());
        }
    }else{
        ui->lbR->setText("Item Não Encontrado !!");
    }

}

void MainWindow::printaLista(){

    ui->listNome->clear();
    for(int i = 0;i < p.size();i++){
        ui->listNome->addItem(p.at(i)->getNome());
    }
}

void MainWindow::on_pushButton_clicked()
{
    p.clear();
    close();
}


void MainWindow::on_actionBuscar_triggered()
{
    Dialogbuscar *dialogbuscar = new Dialogbuscar(this);
    dialogbuscar->setModal(true);
    dialogbuscar->show();
    connect(dialogbuscar,SIGNAL(mandaBusca(QString)),this,SLOT(recebeBusca(QString)));

}

void MainWindow::recebeBusca(QString nome){

    for(int i = 0;i<p.size();i++){
        if(p.at(i)->getNome() == nome){
            t = i;
            Mostrar *mostrar = new Mostrar(this);
            mostrar->setModal(true);
            mostrar->show();
            connect(this,SIGNAL(manda(QString,QString,QString)),mostrar,SLOT(recebe(QString,QString,QString)));
            emit manda(p.at(i)->getNome(),p.at(i)->getQuant(),p.at(i)->getCodigo());

        }else{
            ui->lbR->setText("Produto Nao Encotrado !!");
        }
    }

}
