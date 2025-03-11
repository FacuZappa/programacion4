#include <ej5.h>

Racional::Racional(){
    this->num = 0; 
    this->den = 1;
};

Racional::Racional(int num, int den){
    this->num = num;
    this->den = den;

};

void Racional::setNum(int num){
    this->num = num;
};

void Racional::setDen(int){
    this->den = den;
};

int Racional::getNum(){
    return this->num;
};

int Racional::getDen(){
    return this->den;
};

Racional Racional::suma(Racional r){
    int numSuma = this->num*(r.getDen()) + this->den*(r.getNum());
    int denSuma = this->den*(r.getDen());
    Racional suma(numSuma, denSuma);
    return suma;
};

Racional Racional::diferencia(Racional r){
    int numResta = this->num*(r.getDen()) - this->den*(r.getNum());
    int denResta = this->den*(r.getDen());
    Racional resta(numResta, denResta);
    return resta;
};

Racional Racional::producto(Racional r){
    int numProd = this->num*(r.getNum());
    int denProd = this->den*(r.getDen());
    Racional producto(numProd, denProd);
    return producto;
};

Racional Racional::cociente(Racional r){
    int numCoc = this->num*(r.getDen());
    int denCoc = this->den*(r.getNum());
    Racional cociente(numCoc, denCoc);
    return cociente;
};


bool Racional::igualdad(Racional r){
    float div1 = this->num/this->den;
    float div2 = r.getNum()/r.getDen();
    return (div1 == div2);
};

Racional::~Racional(){

};

//Parte B: sobrecarga de operadores

Racional Racional::operator+(Racional r){
    return this->suma(r);
};

Racional Racional::operator-(Racional r){
    return this->diferencia(r);
};

Racional Racional::operator*(Racional r){
    return this->producto(r);
};

Racional Racional::operator/(Racional r){
    return this->cociente(r);
};

Racional Racional::operator=(Racional r){
    this->num = r.getNum();
    this->den = r.getDen();
};

bool Racional::operator==(Racional r){
    return this->igualdad(r);
};

bool Racional::operator!=(Racional r){
    return !this->igualdad(r);
};