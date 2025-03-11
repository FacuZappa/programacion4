/*Ejercicio 5
a) Implementar en C++ una clase llamada Racional que permita definir y manipular
números racionales, representados como un par de enteros. La clase deberá proveer las
siguientes operaciones.
suma : Racional x Racional -> Racional
diferencia : Racional x Racional -> Racional
producto : Racional x Racional -> Racional
cociente : Racional x Racional -> Racional
igualdad : Racional x Racional -> bool

b) Agregar a la implementación de la clase Racional las operaciones habituales entre
racionales y enteros. Sobrecargar los operadores que se consideren necesarios. Como
ejemplo, la clase Racional debería soportar la siguiente aplicación:

void main() {
Racional r1(2,3), r2;
Racional r3(4), r4 = r1;
if (r1 == r2)
r1 = r1 + r2;
else
r1 = r1 - r2;
if (r3 != r4)
r3 = r3 * r4;
else
r3 = r3 / r4;
if (r1 == 2)
r1 = r1 + 1;
else
r1 = r1 - 1;
if (r3 != 3)
r3 = r3 * 2;
else
r3 = r3 / 2;
}

c) ¿Qué modificaciones habría que realizarle a la implementación para que soporte además
la siguiente aplicación?
r3 = 3 * r2;
if (4 == (2 + r2))
r3 = 1 / r2;*/

class Racional {
    private:
        int num, den;
    public:
        Racional();
        Racional(int, int);
        void setNum(int);
        void setDen(int);
        int getNum();
        int getDen();
        Racional suma(Racional);
        Racional diferencia(Racional);
        Racional producto(Racional);
        Racional cociente(Racional);
        bool igualdad(Racional);
        ~Racional();

        Racional operator+(Racional);
        Racional operator-(Racional);
        Racional operator*(Racional);
        Racional operator/(Racional);
        Racional operator=(Racional);
        bool operator==(Racional);
        bool operator!=(Racional);
};