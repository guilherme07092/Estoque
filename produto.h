#ifndef PRODUTO_H
#define PRODUTO_H
#include <QApplication>



class Produto
{
public:
    Produto();
    Produto(QString nome,QString quant,QString codigo);
    void setNome(QString nome);
    void setQuant(QString n);
    void setCodigo(QString n);
    QString getNome();
    QString getQuant();
    QString getCodigo();

private:
    QString nome;
    QString quantidade;
    QString codigo;
};

#endif // PRODUTO_H
