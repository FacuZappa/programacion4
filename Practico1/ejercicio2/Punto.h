#ifndef PUNTO
#define PUNTO

//Declaración
class Punto {
    private:
        float x, y; // los atributos son privados
    public:
        //Constructor por defecto
        Punto();
        //Constructor por parametros
        Punto(float, float);
        // Constructor de copia
        Punto(const Punto &p) : x(p.x), y(p.y) {} 
        void setX(float);
        void setY(float);
        float getX();
        float getY();
};

#endif
