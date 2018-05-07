#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "produto.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QVector <Produto*> p;
    void printaLista();


private slots:
    void on_actionAdicionar_triggered();
    void recebeVetor(QString nome,QString q,QString n);
    void on_actionExcluir_triggered();
    void recebeNome(QString);
    void on_pushButton_clicked();
    void on_actionBuscar_triggered();
    void recebeBusca(QString);

signals:
    void manda(QString,QString,QString);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
