#include <empleado.h>




Empleado::Empleado(){
    this->nombre = ´\0´;
}

Empleado::Empleado(char *nom){
    int i = 0; 
    while (nom[i] != ´\0´) 
    i++; 
    this->nombre = new char [i + 1]; 
    for (j=0; j<= i; j++) 
    this->nombre[i] = nom[i]; 
}

char Empleado::getNombre(){
    return this->nombre;
}

float Empleado::getSueldo(){;}