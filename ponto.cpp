#include "ponto.h"
#include <iostream>
#include <cmath>

using namespace std;

ponto::ponto(float _x=0, float _y=0)
{
    x=_x;
    y=_y;
}

ponto::~ponto(){

}

//define a coordenada x do ponto
void ponto::setX(float _x)
{
    x=_x;

}

//define a coordenada y do ponto
void ponto::setY(float _y)
{
    y=_y;
}

//define as coordenadas x e y do ponto
void ponto::setXY(float _x, float _y)
{
    x=_x;
    y=_y;
}

//retorna a coordenada x do ponto
float ponto::getX()
{
    return x;
}

//retorna a coordenada y do ponto
float ponto::getY()
{
    return y;
}

//soma as coordenadas x e y atual com as coordenadas fornecidas, gerando novo ponto
ponto ponto::add(ponto p1)
{
    ponto p2;
    p2.x=x+p1.x;
    p2.y=y+p1.y;

    return p2;
}

//subtrai as coordenas x e y atual com as coordenadas fornecidas, gerando novo ponto
ponto ponto::sub(ponto p1)
{
    ponto p2;
    p2.x=x-p1.x;
    p2.y=y-p1.y;

    return p2;
}

//Calcula a distância do ponto para a origem(0,0) do sistema de coordenadas
float ponto::norma()
{
    //n é a norma
    float n;
    n=sqrt(pow(x,2)+pow(y,2));

    return n;

}

//Translada o ponto na posição (x,y) para a posição (x+a,y+b)
void ponto::translada(float a, float b)
{
    x+=a;
    y+=b;
}

//Imprime no console os valores das coordenadas x e y
void ponto::imprime()
{
    cout<<"Coordenada X: "<<x<<", coordenada Y: "<<y<<endl;
}
