#include "poligono.h"
#include <iostream>

using namespace std;

poligono::poligono()
{
}

poligono::poligono(ponto vtp[], int tm)
{
    n=tm;
    /*checa se o tamanho inserido é maior que o máximo permitido
     * caso seja sai da função
    */
    if(n>tam)
        return;

    //preenche o vetor de pontos à partir do vetor dado
    for(i=0;i<(n-1);i++){
        vp[i].x=vtp[i].x;
        vp[i].y=vtp[i].y;
    }

}

//define um novo vertice do poligono, inserindo no final do vetor de poligonos
void poligono::setVertice(ponto p)
{
    vp.x[n]=p.x;
    vp.y[n]=p.y;
    n+=1;
}

//retorna a quantidade de vértices
int poligono::getVertices()
{
    return n;
}

//calcula e retorna a área do polígono usando a fórmula de shoelace
float poligono::area()
{

}

//muda o polígono de posição
void poligono::transladaPoligono(int a, int b)
{
    for(i=0;i<(n);i++){
        vp[i].x += a;
        vp[i].y += b;
    }
}

//imprime o poligono na tela no formato (xn,yn)
void poligono::imprime()
{

    for(i=0;i<n;i++){
        cout<<"("<<vp[i].x<<","<<vp[i].y<<")"<<endl;
    }
}

//destrutor default da classe
poligono::~poligono()
{}



