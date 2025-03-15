#include <iostream>
#include <string>

class DTFecha {

    private:

    int Dia, Mes, Año;

    public:

    DTFecha();

    DTFecha(int,int,int);

    int getDia();

    int getAño();

    int getMes();

    int comparar(DTFecha f2); //Devuelve 1 si fecha es > f2, 0 si fecha == f2 o -1 si fecha < f2

    string imprimir(); //devuelve un string de fecha en el formato XX/XX/XXXX
};