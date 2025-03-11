#include <ej3.cpp>
#include <cmath>

class Fecha{

    private:

        int dia, mes, anio;

    public:

    Fecha();

    Fecha avanzar(int cantidad);

    bool comparacion(Fecha f2);

    int diferencia(Fecha f2);

    Fecha retroceder(int cantidad);

    Fecha setFecha(int dia, int mes, int año);

    int getAnio();
    
    int getMes();

    int getDia();

    
}
