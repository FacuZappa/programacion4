#include <iostream>
#include <cmath>

#include "Punto.h"

//Implemantacion para constructores

Punto::Punto(){
    x = 0.0;
    y = 0.0;
}

Punto::Punto(float x, float y){
    this->x = x;
    this->y = y;
}

//Implementación para setear un punto
void Punto::setX(float x){
    this->x = x;
}

void Punto::setY(float y){
    this->y = y;
}

//Implementación para obtener un punto
float Punto::getX(){
    return this->x;
}

float Punto::getY(){
    return this->y;
}