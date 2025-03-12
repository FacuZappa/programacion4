#include <iostream>
#include <cmath>
#include <ej5.cpp>

class racional {
    private:
        int num, dem;
    public:
        //funciones
        racional (int, int);
        racional();
        ~racional();
        int setNum(int);
        int setDem(int);
        int getNum();
        int getDem();
        racional suma(racional);
        racional diferencia(racional);
        racional producto(racional);
        racional cociente(racional);
        bool igualdad (racional);
        //operadores
        racional operator+(racional);
        racional operator-(racional);
        racional operator/(racional);
        racional operator==(racional);
        racional operator!=(racional);
        racional operator*(racional);
}