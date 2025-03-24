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
        // Constructors
        Racional();
        Racional(int, int);
        Racional(int);
        // Methods
        Racional suma(Racional);
        Racional diferencia(Racional);
        Racional producto(Racional);
        Racional cociente(Racional);
        Racional simplificar();
        bool igualdad(Racional);
        // Overload operators
        Racional operator+(Racional);
        Racional operator-(Racional);
        Racional operator*(Racional);
        Racional operator/(Racional);
        Racional operator+(int);
        Racional operator-(int);
        Racional operator*(int);
        Racional operator/(int);
        bool operator==(Racional);
        bool operator!=(Racional);
        bool operator==(int);
        bool operator!=(int);
        // Friend functions
        friend std::ostream& operator<<(std::ostream&, Racional);
        friend std::istream& operator>>(std::istream&, Racional&);
};

#endif