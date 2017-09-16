#ifndef POLIGONO_H
#define POLIGONO_H


class poligono
{
public:
    //construtor default
    poligono();

    //destrutor
    ~poligono();

    //define vertices
    void setVertice(int x,int y);

    //retorna vertices
    int getVertices();

    //calcula área do poligono
    float area();

    //translada o poligono para nova posição
    void transladaPoligono(int a, int b);

    //imprime polígono
    void imprime();

};

#endif // POLIGONO_H
