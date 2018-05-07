#ifndef DIALOGBUSCAR_H
#define DIALOGBUSCAR_H
#include "produto.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"
#include "dialogex.h"
#include "dialogbuscar.h"

#include <QDialog>

namespace Ui {
class Dialogbuscar;
}

class Dialogbuscar : public QDialog
{
    Q_OBJECT

public:
    explicit Dialogbuscar(QWidget *parent = 0);
    ~Dialogbuscar();

private slots:
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();

signals:
    void mandaBusca(QString);


private:
    Ui::Dialogbuscar *ui;

};

#endif // DIALOGBUSCAR_H
