#ifndef POLIGONO_H
#define POLIGONO_H
#include "ponto.h"
#define tam 100

class poligono{

private:
    //vetor do tipo ponto para armazenar os vertices
    ponto vp[tam];
    //variável utilizada no laço do preenchimento do vetor
    int i=0,n=0;

public:
    //construtor default
    poligono();

    //construtor com argumentos da classe
    poligono(ponto vetp[], int t);

    //define vertices
    void setVertice(ponto p);

    //retorna vertices
    int getVertices();

    //calcula área do poligono
    float area();

    //translada o poligono para nova posição
    void transladaPoligono(int a, int b);

    //imprime polígono
    void imprime();

    //rotaciona o poligono de acordo com angulo dado
    void rotaciona(float angulo);

    //destrutor
    ~poligono();

};

#endif // POLIGONO_H
