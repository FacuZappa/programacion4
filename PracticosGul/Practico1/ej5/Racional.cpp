#include "Racional.h"

#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>

Racional::Racional() : denominador(1), numerador(1) {}

Racional::Racional(int n, int d) : numerador(n), denominador(d) {}

Racional::Racional(int n) : numerador(n) , denominador(1) {}

Racional Racional::suma(Racional r) {
    int n = this->numerador*r.denominador + this->denominador*r.numerador;
    int d = this->denominador*r.denominador;
    return Racional(n, d);
}

Racional Racional::diferencia(Racional r) {
    int n = this->numerador*r.denominador - this->denominador*r.numerador;
    int d = this->denominador*r.denominador;
    return Racional(n, d);
}

Racional Racional::producto(Racional r) {
    int n = this->numerador*r.numerador;
    int d = this->denominador*r.denominador;
    return Racional(n,d);
}

Racional Racional::cociente(Racional r) {
    int n = this->numerador * r.denominador;
    int d = this->denominador*r.numerador;
    return Racional(n,d);
}

Racional Racional::simplificar(){
    int mcd = std::__gcd(this->numerador, this->denominador);
    return Racional(this->numerador/mcd, this->denominador/mcd);
}

bool Racional::igualdad(Racional r) {
    Racional a = this->simplificar();
    Racional b = r.simplificar();
    return a.numerador == b.numerador && a.denominador == b.denominador;
}
