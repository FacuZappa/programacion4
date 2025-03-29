#include "Fecha.h"

#include <iostream>
#include <cmath>

//constructores

Fecha::Fecha() : dia(1), mes(1), anio(2000) {}

Fecha::Fecha(int d, int m, int a) : dia(d), mes(m), anio(a) {}

Fecha::Fecha(int d, int m) : dia(d), mes(m) , anio(2000) {}

Fecha::Fecha(int d) : dia(d) , mes(1), anio(2000) {}

Fecha::~Fecha() {}

//metodos

bool Fecha::igual(Fecha otra) {
    return this->dia == otra.dia && this->mes == otra.mes && this->anio == otra.anio;
}

Fecha Fecha::avanzar(int dias) {
    int nDia = (this->dia + dias) % 30;
    int nMes = (this->mes + (this->dia + dias) / 30) % 12;
    int nAnio = this->anio + (this->mes + (this->dia + dias) / 30) / 12;
    return Fecha(nDia, nMes, nAnio);
}

Fecha Fecha::retroceder(int dias) {
    int nDia = (this->dia - dias) % 30;
    int nMes = (this->mes - (this->dia - dias) / 30) % 12;
    int nAnio = this->anio - (this->mes - (this->dia - dias) / 30) / 12;
    return Fecha(nDia, nMes, nAnio);   
}

int Fecha::diferencia(Fecha otra) {
    long int f1 = otra.dia + otra.mes*30 + otra.anio*360;
    long int f2 = this->dia + this->mes*30 + this->anio*360;
    return std::abs(f1 - f2);
}

void Fecha::imprimir() {
    std::cout << dia << "/" << mes << "/" << anio << std::endl;
}

//getters y setters

int Fecha::getDia() {
    return dia;
}

int Fecha::getMes() {
    return mes;
}

int Fecha::getAnio() {
    return anio;
}  

void Fecha::setDia(int d) {
    dia = d;
}

void Fecha::setMes(int m) {
    mes = m;
}

void Fecha::setAnio(int a) {
    anio = a;
}