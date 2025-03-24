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

Racional Racional::operator+(Racional r) {
    return this->suma(r);
}

Racional Racional::operator-(Racional r) {
    return this->diferencia(r);
}

Racional Racional::operator*(Racional r) {
    return this->producto(r);
}

Racional Racional::operator/(Racional r) {
    return this->cociente(r);
}

Racional Racional::operator+(int n) {
    return this->suma(Racional(n));
}

Racional Racional::operator-(int n) {
    return this->diferencia(Racional(n));
}

Racional Racional::operator*(int n) {
    return this->producto(Racional(n));
}

Racional Racional::operator/(int n) {
    return this->cociente(Racional(n));
}

bool Racional::operator==(Racional r) {
    return this->igualdad(r);
}

bool Racional::operator!=(Racional r) {
    return !this->igualdad(r);
}

bool Racional::operator==(int n) {
    return this->igualdad(Racional(n));
}

bool Racional::operator!=(int n) {
    return !this->igualdad(Racional(n));
}

std::ostream& operator<<(std::ostream& os, Racional r) {
    os << r.numerador << "/" << r.denominador;
    return os;
}

std::istream& operator>>(std::istream& is, Racional& r) {
    is >> r.numerador >> r.denominador;
    return is;
}