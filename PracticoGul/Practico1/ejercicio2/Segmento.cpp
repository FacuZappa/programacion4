#include <iostream>
#include <cmath>

#include "Segmento.h"

//Implementacion

Segmento::Segmento(){}
// Se inicializan los miembros p1 y p2 con el constructor por defecto de
// Punto 


Segmento::Segmento(Punto punto1, Punto punto2): p1(punto1), p2(punto2) {}
// El código después de los : indica la inicialización de los miembros

Segmento::Segmento(float x1, float x2, float y1, float y2) : p1(x1,y1), p2(x2, y2) {}
// Inicializa los miembros p1 y p2 del segmento, invocando al contructor
// por parámetros de Punto 

Segmento::Segmento(Punto p): p1(0.0, 0.0), p2(p){}

float Segmento::largo(){
    return sqrt(pow(p2.getX() - p1.getX(), 2) + pow(p2.getY() - p1.getY(), 2));
}