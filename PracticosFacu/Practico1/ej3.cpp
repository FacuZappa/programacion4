#include <iostream>
#include <cmath>




//asumimos meses de 30 dias y años de 365 dias

class Fecha{

    private:

        int dia, mes, anio;


    public:

    Fecha avanzar(Fecha fecha, int cantidad){
        int anio = fecha->anio;
        int mes = fecha->mes;
        int dia = fecha->dia;
        /*if ((anio % 4 == 0) && (anio % 100 != 0) || (anio % 400 == 0)){
            if (mes == 2){

            }

        }*/
    }

    bool comparacion(Fecha f1, Fecha f2){
        return ( (f1->anio == f2->anio) && (f1->mes == f2->mes) && (f1->dia == f2->dia) );
    }

    int diferencia(Fecha f1, Fecha f2){
        int dif = 0;
        dif += abs(f1->anio - f2->anio)*365;
        dif += abs(f1->mes - f2->mes)*30;
        dif += abs(f1->dia - f2->dia);
        return dif;
    }

    Fecha retroceder(int cantidad){
        int anio = this->anio;
        int mes = this->mes;
        int dia = this->dia;

    }

    Fecha setFecha(int dia, int mes, int año){
        this->dia = dia;
        this->mes = mes;
        this->anio = año;
    }
}

