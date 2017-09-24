#ifndef RETANGULO_H
#define RETANGULO_H
#include "poligono.h"
#include "ponto.h"

class retangulo : public poligono
{

public:
    //variáveis que serão usadas para armazenar os parâmetros do construtor
    float x1,y1,larg,alt;

public:
    retangulo(float x_, float y_,  float altura, float largura);
    void setXR(float _x);
    void setYR(float _y);
    void setLargura(float largura);
    void setAltura(float altura);
    float getXR();
    float getYR();
    float getLargura();
    float getAltura();
};

#endif // RETANGULO_H
