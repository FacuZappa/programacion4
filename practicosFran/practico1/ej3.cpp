#include <ej3.h>

Fecha::Fecha() {
    this->dia = 0;
    this->mes = 0;
    this->anio = 0;
};

Fecha::Fecha(int dia, int mes, int anio) {
    this->dia = dia;
    this->mes = mes;
    this->anio = anio;
};

int Fecha::obtenerDia(Fecha fecha){
    return this->dia;
};

int Fecha::obtenerMes(Fecha fecha){
    return this->mes;
};

int Fecha::obtenerAnio(Fecha fecha){
    return this->anio;
};

//Todos los meses tienen 30 días - el año 360 dias
Fecha Fecha::avanzar(Fecha fecha, int dias) {
    int nuevoDia = obtenerDia(fecha);
    int nuevoMes = obtenerMes(fecha);
    int nuevoAnio = obtenerAnio(fecha);

    nuevoDia += dias;

    while (nuevoDia > 30) {
        nuevoMes += 1;
        nuevoDia -= 30;
    }

    while (nuevoMes > 12) {
        nuevoAnio += 1;
        nuevoMes -= 12;
    }

    return Fecha(nuevoDia, nuevoMes, nuevoAnio);
};

Fecha Fecha::retroceder(Fecha fecha, int dias) {
    int nuevoDia = obtenerDia(fecha);
    int nuevoMes = obtenerMes(fecha);
    int nuevoAnio = obtenerAnio(fecha);

    nuevoDia -= dias;

    while (nuevoDia < 1) {
        nuevoMes -= 1;
        nuevoDia += 30;
    }

    //Puede presentar errores
    while (nuevoMes < 1) {
        nuevoAnio -= 1;
        nuevoMes += 12;
    }

    return Fecha(nuevoDia, nuevoMes, nuevoAnio);
};

int Fecha::diferencia(Fecha fecha1, Fecha fecha2) {
   
};

bool Fecha::comparacion(Fecha fecha1, Fecha fecha2) {
    return ((obtenerAnio(fecha1) == obtenerAnio(fecha2)) && (obtenerMes(fecha1) == obtenerMes(fecha2))
    && (obtenerDia(fecha1) == obtenerDia(fecha2)));
};