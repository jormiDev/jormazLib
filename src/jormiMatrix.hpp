/*
jormiMatrix_h
Librería para la matriz de led del UNO r4 WIFI
v.01        20240314        versión inicial



Tamaño de la pantalla LED   12 ancho * 8 alto

Posición    0,0     Esq superior derecha

Velocidad   0
            100

Scroll:     -1      scroll a izquierda
            0       sin scroll
            +1      scroll a derecha




*/

#ifndef __jormiMatrix_HPP__
#define __jormiMatrix_HPP__

#include "Arduino.h"

class jormiMatrix
{
    public:

    /*
        Constructor
    */
jormiMatrix::jormiMatrix();


    /*
        Mostrar codigo
    */
void jormiMatrix::matrixCodigo(DEFINE_DEL_CODIGO);


/*
     Mostrar texto
 */
void jormiMatrix::matrixTexto(int x, int y, String texto, int velocidad, int direccionScroll);

}

#endif