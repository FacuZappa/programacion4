#include <ej5.h>

Racional::Racional(){
    this->num = 0;
    this->den = 1;
}

Racional::Racional(int x,int y){
    this->num = x;
    this->den = y;
}

Racional Racional::suma(Racional ras){
    int x = this->num*ras.getDen() + ras.getNum()*this->den;
    int y = this->den*ras.getDen();
    Racional res = Racional(x,y);
    return res;
}

Racional Racional::diferencia(Racional ras){
    int x = this->num*ras.getDen() - ras.getNum()*this->den;
    int y = this->den*ras.getDen();
    Racional res = Racional(x,y);
    return res;
}

Racional Racional::producto(Racional ras){
    int x = this->num*ras.getNum();
    int y = this->den*ras.getDen();
    Racional res = Racional(x,y);
    return res;
}

Racional Racional::cociente(Racional ras){
    int x = this->num*ras.getDen();
    int y = ras.getNum()*this->den;
    Racional res = Racional(x,y);
    return res;
}

bool Racional::igualdad(Racional ras){
    float x = this->num / this->den;
    float y = ras.getNum() / ras.getDen();
    return x == y;
}

int Racional::getNum(){
    return this->num;
}

int Racional::getDen(){
    return this->den;
}

Racional Racional::operator+(Racional ras){
    Racional res = this->suma(ras);
    return res;
}

Racional Racional::operator-(Racional ras2){
    Racional res = this->diferencia(ras2);
    return res;
}

Racional Racional::operator*(Racional ras2){
    Racional res = this->producto(ras2);
    return res;
}
Racional Racional::operator/(Racional ras2){
    Racional res =this->cociente(ras2);
    return res;
}

bool Racional::operator==(Racional ras2){
    return this->igualdad(ras2);
}

bool Racional::operator!=(Racional ras2){
    return !this->igualdad(ras2);
}
