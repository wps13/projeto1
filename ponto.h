#ifndef PONTO_H
#define PONTO_H


class ponto
{
public:
    ponto();
private :
    float x,y;
};

void setX(float _x);
void setY(float _y);
void setXY(float _x,float _y);
float getX();
float getY();
ponto add(ponto p1);
ponto sub(ponto p1);
float norma();
void translada(float a,float b);
void imprime();


#endif // PONTO_H
