#include <jornalero.h>

float Jornalero::getSueldo(){
    return this->horas * this->valorhora;
}

void Jornalero::setHoras(int hor){
    this->horas = hor;
}

void Jornalero::setValorHora(float val){
    this->valorhora = val;
}

float Jornalero::getValorHora(){
    return this->valorhora;
}

int Jornalero::getHoras(){
    return this->horas;
}