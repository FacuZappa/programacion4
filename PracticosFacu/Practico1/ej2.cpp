#include <iostream>
#include <cmath>

class punto{
    private:

        float puntox,puntoy;

    public:

    void modificarPosicion(float x, float y){
        this->puntox += x;
        this->puntoy = this->puntoy + y;  
    }

    float obtenerPosicionX(){
        return this->puntox;
    }

    float obtenerPosicionY(){
        return this->puntoy;
    }
};


// Declaración 
/*
class Punto { 
    private: 
    float x, y; 
    public: 
    void setX(float); // Análogo setY 
    float getX(); // Análogo getY 
    }; 
    // Implementación 
    void Punto::setX(float x) { 
    this->x = x; 
    } 
    float Punto::getX() { 
    return this->x: 
    }
*/

class segmento{
    private:

        punto punto1,punto2;
    
    public:

     float longitudSegmento(){
        return sqrt( (pow(this->punto1.obtenerPosicionX() - this->punto2.obtenerPosicionX())) + (pow(this->punto1.obtenerPosicionY() - this->punto2.obtenerPosicionY())) );
     }
};