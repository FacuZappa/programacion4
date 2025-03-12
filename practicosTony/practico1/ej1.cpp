#include <iostream>
#include <cmath>
using namespace std;

class segmento {
    public:
        punto p1, p2;
        
    private:
        segmento(punto, punto);
};



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


int main() {
    punto p;
    float x, y;

    cout << "Ingrese x: ";
    cin >> x;
    cout << "Ingrese y: ";
    cin >> y;

    p.modificarPuntoX(x);
    p.modificarPuntoY(y);

    cout << "Tu punto es: (" << p.getX() << "," << p.getY() << ")" << endl;

    return 0;
}