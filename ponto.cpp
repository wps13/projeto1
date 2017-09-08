#include "ponto.h"
#include <cmath>

ponto::ponto()
{

}


void setX(float _x) //define a coordenada x do ponto
{
    x=_x;

}

void setY(float _y)//define a coordenada y do ponto
{
    y=_y;
}

void setXY(float _x, float _y)  //define x e y do ponto
{
    x=_x;
    y=_y;
}

float getX() //retorna a coordenada x do ponto
{
    return x;
}

float getY() //retorna a coordenada y do ponto
{
    return y;
}

ponto add(ponto p1)//soma x e y atual com as fornecidas, gerando novo ponto
{
    ponto p2;
    p2.x=x+p1.x;
    p2.y=y+p1.y;

    return p2;
}

ponto sub(ponto p1)//subtrai x e y atual com as fornecidas, gerando novo ponto
{
    ponto p2;
    p2.x=x-p1.x;
    p2.y=y-p1.y;

    return p2;
}

float norma()//Calcula a distância do ponto para a origem do sistema de coordenadas
{
    //n é a norma, foi considera a origem como (0,0)
    float n;
    n=sqrt(pwd(x,2)+pwd(y,2));

}

void translada(float a, float b)//Translada o ponto (x,y) de (+a,+b)
{

}

void imprime()
{
    cout<<"Coordenada X: "<<x<<", coordenada Y: "<<y<<endl;
}
