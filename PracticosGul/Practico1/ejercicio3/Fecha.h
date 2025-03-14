#ifndef FECHA_H
#define FECHA_H

#include <iostream>
#include <iomanip>

class Fecha {
    private:
        int dia;
        int mes;
        int anio;
    public:
        //operaciones
        Fecha avanzar(int dias);
        Fecha retroceder(int dias);
        int diferencia(Fecha otra);
        bool igual(Fecha otra);
        void imprimir();
        // Sobrecarga del operador de inserción de flujo <<
        friend std::ostream& operator<<(std::ostream& os, const Fecha& f) {
        os << f.anio << "/" << std::setw(2) << std::setfill('0') << f.mes << "/" << std::setw(2) << std::setfill('0') << f.dia;
        return os;
        }
        //constructores
        Fecha();
        Fecha(int d, int m, int a);
        Fecha(int d, int m);
        Fecha(int d);
        //destructor
        ~Fecha();
        //getters
        int getDia();
        int getMes();
        int getAnio();
        //setters
        void setDia(int d);
        void setMes(int m);
        void setAnio(int a);
};

#endif
