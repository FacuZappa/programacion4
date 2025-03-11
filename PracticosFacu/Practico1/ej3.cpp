#include <ej3.h>
#include <cmath>
//asumimos meses de 30 dias y años de 365 dias

    Fecha avanzar(int cantidad){
        int anio = this->anio;
        int mes = this->mes;
        int dia = this->dia;
        int res_dia = ((dia + cantidad)%30);
        int res_mes = ((dia + cantidad)/30 + mes)%12;
        int res_anio = (((dia + cantidad)/30 + mes)/12) + anio;
        this->anio = res_anio;
        this->mes = res_mes;
        this->dia = res_dia;
    }

    bool comparacion(Fecha f2){
        return ((this->anio == f2.getAnio()) && (this->mes == f2.getMes()) && (this->dia == f2.getDia()));
    }

    int diferencia(Fecha f2){
        int dif = 0;
        dif += abs(this->anio - f2.getAnio())*365;
        dif += abs(this->mes - f2.getMes())*30;
        dif += abs(this->dia - f2.getDia());
        return dif;
    }

    Fecha retroceder(int cantidad){
        int anio = this->anio;
        int mes = this->mes;
        int dia = this->dia;
        int res_dia = ((dia - cantidad)%30);
        int res_mes = ((dia - cantidad)/30 + mes)%12;
        int res_anio = (((dia - cantidad)/30 + mes)/12) + anio;
        this->anio = res_anio;
        this->mes = res_mes;
        this->dia = res_dia;

    }

    Fecha setFecha(int dia, int mes, int año){
        this->dia = dia;
        this->mes = mes;
        this->anio = año;
    }


    int getAnio(){
        return this->anio;
    }    
    int getMes(){
        return this->mes;
    }

    int getDia(){
        return this->dia;
    }