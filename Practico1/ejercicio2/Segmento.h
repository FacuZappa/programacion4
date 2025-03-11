#ifndef SEGMENTO
#define SEGMENTO

#include "Punto.h"

//Declaración clase segmento

class Segmento {
    private:
        Punto p1, p2;
    public:
        Segmento(); //inicialización por defectos
        Segmento(Punto, Punto); //segmento dado por dos puntos
        Segmento(float, float, float, float); // Segmento dado por las coordenadas de dos puntos
        Segmento(Punto); //segmento dado por un punto pasado por parametro y el origen (0.0, 0.0)
        float largo();
};
#endif
