#include <racional.h>

racional::racional(){
    this->num = 0;
    this->dem = 1;
}

racional::racional(int x, int y){
    this->num = x;
    this->dem = y;
}

racional::setNum(int num){
    this->num = num;
}

racional::setDem(int dem){
    this->dem = dem;
}

int racional::getNum(){
    return this->num;
}

int racional::getDem(){
    return this->dem;
}

racional racional::suma(racional r){
    int x = this->num*(r.getDem()) + this->dem*(r.getNum());
    int y = this->dem*(r.getDem());

    racional res(x,y);
    return res;
}

racional racional::diferencia(racional r){
    int x = this->num*(r.getDem()) - this->dem*(r.getNum());
    int y = this->dem*(r.getDem());

    racional res(x,y);
    return res;
}

racional racional::producto{
    int x = this->num*(r.getNum());
    int y = this->dem*(r.getDem());

    racional res(x,y);
    return res;
}

racional racional::cociente{
    int x = this->num*(r.getDem());
    int y = this->dem*(r.getNum());

    racional res(x,y);
    return res;
}

racional bool::igualdad{
    float x = this->num / this->dem;
    float y = r.getNum() / r.getDem();

    return (x == y);
}

racional racional::operator+(racional r){
    return this->suma(r);
}

racional racional::operator-(racional r){
    return this->diferencia(r);
}

racional racional::operator/(racional r){
    return this->cociente(r);
}

racional racional::operator*(racional r){
    return this->producto(r);
}

racional racional::operator==(racional r){
    return this->igualdad(r);
}

racional racional::operator!=(racional r){
    return !this->igualdad(r);
}


