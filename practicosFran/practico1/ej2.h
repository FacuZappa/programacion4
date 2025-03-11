#include <cmath>
#include <iostream>

/*Ejercicio 2 *
Implementar en C++ una clase que represente un punto en un plano utilizando coordenadas
cartesianas. Proveer operaciones para obtener y modificar la posición del punto en el plano.

A su vez, implementar en C++ una clase que represente un segmento en un plano. Proveer
una operación que calcule el largo del segmento.*/

class Punto {
    private:
        float x, y;
    public:
        Punto();
        Punto(float, float);
        float obtenerPosicionX();
        float obtenerPosicionY();
        void modificarPosicion(float, float);
};

class Segmento {
    private:
        Punto punto1, punto2;
    public:
        Segmento();
        Segmento(Punto, Punto);
        Punto obtenerPunto1(Segmento);
        Punto obtenerPunto2(Segmento);
        float largoSegmento(Segmento);
};

