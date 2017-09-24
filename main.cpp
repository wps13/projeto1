#include <iostream>
#include "ponto.h"
#include "poligono.h"
#include "retangulo.h"

using namespace std;

int main()
{ 

    retangulo ret1(0.0,0.0,3.0,4.0);

    ponto centroMassa;

    float x,y;


    x=(ret1.getAltura())/2;
    y=(ret1.getLargura())/2;

    centroMassa.setXY(x,y);

    ret1.area();

    ret1.transladaPoligono(-3,4);

    ret1.rotaciona(30, centroMassa);

    return 0;
}

