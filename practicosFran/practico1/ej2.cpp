#include <ej2.h>

/*Ejercicio 2 - Implementacion*/

Punto::Punto() {
    this->x = 0.0;
    this->y = 0.0;
};

Punto::Punto(float x, float y) {
    this->x = x;
    this->y = y;
};

float Punto::obtenerPosicionX() {
    return this->x;
};

float Punto::obtenerPosicionY() {
    return this->y;
};

void Punto::modificarPosicion(float x, float y) {
    this->x += x;
    this->y += y;
};

Segmento::Segmento() {
    this->punto1 = Punto();
    this->punto2 = Punto();
};

Segmento::Segmento(Punto punto1, Punto punto2) {
    this->punto1 = punto1;
    this->punto2 = punto2;
};

Punto Segmento::obtenerPunto1(Segmento segmento) {
    return this->punto1;
};

Punto Segmento::obtenerPunto2(Segmento segmento) {
    return this->punto2;
};


float Segmento::largoSegmento(Segmento segmento) {
    return sqrt(pow(obtenerPunto2(segmento).obtenerPosicionX() - obtenerPunto1(segmento).obtenerPosicionX(), 2) +
     pow(obtenerPunto2(segmento).obtenerPosicionY() - obtenerPunto2(segmento).obtenerPosicionY(), 2));
};