#ifndef RACIONAL_H
#define RACIONAL_H

#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>

class Racional {
    private:
        int numerador;
        int denominador;
    public:
        Racional();
        Racional(int, int);
        Racional(int);
        Racional suma(Racional);
        Racional diferencia(Racional);
        Racional producto(Racional);
        Racional cociente(Racional);
        Racional simplificar();
        bool igualdad(Racional);
};

#endif