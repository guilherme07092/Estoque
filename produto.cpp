#include "produto.h"

Produto::Produto()
{ 
}

Produto::Produto(QString nome,QString quant,QString codigo){
    this->nome = nome;
    quantidade = quant;
    this->codigo = codigo;
}

void Produto::setNome(QString nome){
    this->nome=nome;
}

void Produto::setCodigo(QString n){
    this->codigo=codigo;
}

void Produto::setQuant(QString n){
    quantidade = n;
}

QString Produto::getNome(){
    return nome;
}

QString Produto::getQuant(){
    return quantidade;
}

QString Produto::getCodigo(){
    return codigo;
}
