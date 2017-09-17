#ifndef RETANGULO_H
#define RETANGULO_H
#include "poligono.h"
#include "ponto.h"

class retangulo : public poligono
{
    //variáveis que serão usadas para armazenar os parâmetros do construtor
    float x1,y1,larg,alt;

public:
    retangulo(float x_, float y_, float largura, float altura);
};

#endif // RETANGULO_H
