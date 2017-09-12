#include "ponto.h"
#include <cmath>

ponto::ponto()
{

}

//define a coordenada x do ponto
void setX(float _x)
{
    x=_x;

}

//define a coordenada y do ponto
void setY(float _y)
{
    y=_y;
}

//define as coordenadas x e y do ponto
void setXY(float _x, float _y)
{
    x=_x;
    y=_y;
}

//retorna a coordenada x do ponto
float getX()
{
    return x;
}

//retorna a coordenada y do ponto
float getY()
{
    return y;
}

//soma as coordenadas x e y atual com as coordenadas fornecidas, gerando novo ponto
ponto add(ponto p1)
{
    ponto p2;
    p2.x=x+p1.x;
    p2.y=y+p1.y;

    return p2;
}

//subtrai as coordenas x e y atual com as coordenadas fornecidas, gerando novo ponto
ponto sub(ponto p1)
{
    ponto p2;
    p2.x=x-p1.x;
    p2.y=y-p1.y;

    return p2;
}

//Calcula a distância do ponto para a origem(0,0) do sistema de coordenadas
float norma()
{
    //n é a norma
    float n;
    n=sqrt(pwd(x,2)+pwd(y,2));

}

//Translada o ponto na posição (x,y) para a posição (x+a,y+b)
void translada(float a, float b)
{
    x+=a;
    y+=b;
}

//Imprime no console os valores das coordenadas x e y
void imprime()
{
    cout<<"Coordenada X: "<<x<<", coordenada Y: "<<y<<endl;
}
