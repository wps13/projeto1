#ifndef PONTO_H
#define PONTO_H


class ponto{

public:
    float x,y;

public:

    //construtor default
    ponto();

    //construtor que inicializa as posições em zero
    ponto(float _x,float _y);

    //define o valor de x para o valor dado
    void setX(float _x);

    //define o valor de y para o valor dado
    void setY(float _y);

    //define as posições x e y para os valores dados
    void setXY(float _x,float _y);

    //retorna o valor de x
    float getX();

    //retorna o valor de y
    float getY();

    //soma dois pontos
    ponto add(ponto p1);

    //subtrai o ponto atual do ponto dado
    ponto sub(ponto ponto1);

    //retorna a norma do ponto
    float norma();

    //muda o ponto para uma nova posição
    void translada(float a,float b);

    //imprime o ponto na tela
    void imprime();

    //destrutor default da classe
    ~ponto();


};




#endif // PONTO_H
