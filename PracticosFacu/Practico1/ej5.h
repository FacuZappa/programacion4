#include <ej5.cpp>


class Racional{
    private:
        int num,den;
    public:

    Racional();

    Racional(int,int);

    Racional suma(Racional);

    Racional diferencia(Racional);

    Racional producto(Racional);

    Racional cociente(Racional);

    bool igualdad(Racional);

    int getNum();

    int getDen();

    Racional operator+(Racional);

    Racional operator-(Racional);

    Racional operator*(Racional);

    Racional operator/(Racional);

    bool operator==(Racional);

    bool operator!=(Racional);

};