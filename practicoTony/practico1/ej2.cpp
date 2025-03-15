#include <iostream>
#include <cmath>
using namespace std;

class segmento {
    public:
        punto p1, p2;
        
    private:
        segmento(punto, punto);
};

//lol

class punto {
    private:
        float puntox, puntoy;
    
    public:
        float getX();
        float getY();
        void modificarPuntoX(float);
        void modificarPuntoY(float);
        void segmento(float, float);
};

void punto::modificarPuntoX(float x){
    this->puntox = x;
}
void punto::modificarPuntoY(float y){
    this->puntoy = y;
}
float punto::getX(){
    return this->puntox;
}
float punto::getY(){
    return this->puntoy;
}
