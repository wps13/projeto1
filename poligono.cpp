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
     * caso seja maior, sai da função
    */
    if(n>tam)
        return;

    //preenche o vetor de pontos à partir do vetor dado
    for(i=0;i<n;i++){
        vp[i].x = vtp[i].x;
        vp[i].y = vtp[i].y;
    }

}

//define um novo vertice do poligono, inserindo no final do vetor de poligonos
void poligono::setVertice(ponto pontoNovo)
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
    float sum=0;

    for (i=0;i<(n-1);i++)
    {
        sum += ((vp[i].x * vp[i+1].y) - (vp[i+1].x * vp[i].y));
    }

    return ((1/2)*(sum + (vp[n-1]*vp[0].y) - (vp[0].x * vp[n-1])));
}

//muda o polígono de posição
void poligono::transladaPoligono(int pos1X, int pos1Y)
{
    for(i=0;i<n;i++){
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

void poligono::rotaciona(float angulo,ponto pontoPos)
{

}

//destrutor default da classe
poligono::~poligono()
{}



