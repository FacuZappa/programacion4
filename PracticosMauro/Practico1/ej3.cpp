#include "ej3.h"

bool Fecha::esBisiesto(){
    return (anio % 400 == 0 || (anio % 4 == 0 && anio % 100 != 0));
}

int Fecha::diasMes(){
    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
        return 31;
    }
    else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        return 30;
    }
    else {
        return esBisiesto() ? 29 : 28;
    }  
} 

Fecha::Fecha(int dia, int mes, int anio){
    this->dia = dia;
    this->mes = mes;
    this->anio = anio;
}

void Fecha::avanzar(int cant){
        dia += cant;
        while (dia > diasMes()) {
          dia -= diasMes();
          mes++;
          if (mes > 12) {
            mes = 1;
            anio++;
          }
        }  
}

void  Fecha::retroceder(int cant){ 
        while (cant >= dia){
          mes--;
          cant-= dia; 
          if (mes == 0) {
            mes = 12;
            anio--;
          }

          dia = diasMes();  
        } 

        if(cant < dia){
          dia-= cant;
        }
        
}

int Fecha::diferencia(Fecha f1){
    int dif = 0;
    Fecha f2;
    //f2 es la mas grande
    if(f1.anio < anio || f1.anio == anio && f1.mes < mes || f1.anio == anio && f1.mes == mes && f1.dia <= dia){
        f2.dia = dia;
        f2.mes = mes;
        f2.anio = anio;
    }else{
        f2.dia = f1.dia;
        f2.mes = f1.mes;
        f2.anio = f1.anio;
        f1.dia = dia;
        f1.mes = mes;
        f1.anio = anio;
    }
    while(f2.anio > f1.anio + 1){
        dif+= f2.esBisiesto() ? 366 : 365;
        f2.anio--;
    }
    while(f2.mes > f1.mes + 1 && f2.anio == f1.anio || f2.anio > f1.anio){
        dif+= f2.diasMes();
        f2.mes--;
        if(f2.mes == 0){
           f2.mes = 12;
           f2.anio--;
        }
    }
    if(f2.mes > f1.mes)
        dif+= f2.dia + f1.diasMes() - f1.dia; 
    else 
        dif+= f2.dia-f1.dia;
    
    return dif;
}

bool Fecha::comparacion(Fecha f){
    return f.dia == dia && f.mes == mes && f.anio == anio;
}

void Fecha::setDia(int x){
     dia = x;
}

void Fecha::setMes(int x){
    mes = x;
}

void Fecha::setAnio(int x){
    anio = x;
}

int Fecha::getDia() const{
    return dia;
}

int Fecha::getMes() const{
    return mes;
}

int Fecha::getAnio() const{
    return anio;
}

Fecha Fecha::operator+(const Fecha& otra){
    //supongo que sumo fechas de años D.C.
    Fecha aux(01, 01, 01);
    Fecha aux2(otra.getDia(), otra.getMes(), otra.getAnio());
    int dif = aux2.diferencia(aux);
    aux.setDia(this->getDia());
    aux.setMes(this->getMes());
    aux.setAnio(this->getAnio());
    aux.avanzar(dif);
    return aux;   
}

std::ostream& Fecha::operator<<(std::ostream& os) const{
    os << anio << "/" 
       << (mes < 10 ? "0" : "") << mes << "/"
       << (dia < 10 ? "0" : "") << dia;
    return os;
}