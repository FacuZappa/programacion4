#include <iostream>
#include <cmath>
#include <string>

using namespace std;

class Fecha {
    private: 
       int dia, mes, anio;
       bool esBisiesto();
       int diasMes();
    public:
       Fecha(int =1, int =1, int =2000);
       void avanzar(int);
       void retroceder(int);
       int diferencia(Fecha);
       bool comparacion(Fecha);
       void setDia(int);
       void setMes(int);
       void setAnio(int);
       int getDia() const;
       int getMes() const;
       int getAnio() const;
       Fecha operator+(const Fecha&);
       std::ostream& operator<<(std::ostream&) const;
};