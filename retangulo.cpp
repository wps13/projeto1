#include "retangulo.h"


retangulo::retangulo(float x_, float y_, float altura, float largura) : poligono()
{
    x=x_;
    y=y_;
    larg=largura;
    alt = altura;

    ponto pr1(x,y),pr2(x-lar,y),pr3(x,y-alt), pr4(x-lar,y-alt);

    setVertice(pr1);
    setVertice(pr2);
    setVertice(pr3);
    setVertice(pr4);

}

void retangulo::setXR(float _x)
{

}

void retangulo::setYR(float _y)
{

}

//define um valor dado para a largura do retângulo
void retangulo::setLargura(float largura)
{
    larg=largura;
}

//define um valor para altura do retângulo
void retangulo::setAltura(float altura)
{
    alt=altura;
}

float retangulo::getXR()
{
    return x;
}

float retangulo::getYR()
{
    return y;
}

//retorna o valor da largura do retângulo
float retangulo::getLargura()
{
    return lar;
}

//retorna o valor da altura
float retangulo::getAltura()
{
    return alt;
}

