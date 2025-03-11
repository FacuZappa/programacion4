/*Ejercicio 3 *

a) Implementar en C++ una clase llamada Fecha que permita definir y manipular
fechas, incluyendo datos de día, mes y año. La clase deberá proveer las siguientes
operaciones.
avanzar : Fecha x Entero -> Fecha
// Devuelve una fecha resultante de sumar una cantidad dada de días
retroceder : Fecha x Entero -> Fecha
// Devuelve una fecha resultante de restar una cantidad dada de días
diferencia : Fecha x Fecha -> Entero
// Devuelve la cantidad de días entre dos fechas
comparación : Fecha x Fecha -> Boolean
// Compara dos fechas (==, !=, <, >, <=, >=)

b) Agregar constructores, destructor y operador de asignación, según considere
necesario.

c) Agregar la sobrecarga del operador de inserción de flujo (<<) en un objeto de tipo
std::ostream. El mismo debe imprimir en el flujo de salida la fecha en el siguiente
formato: AAAA/MM/DD.*/

#include <cmath>
#include <iostream>

class Fecha {
    private:
        int dia, mes, anio;
    public:
        Fecha();
        Fecha(int, int, int);
        int obtenerDia(Fecha);
        int obtenerMes(Fecha);
        int obtenerAnio(Fecha);

        Fecha avanzar(Fecha, int);
        Fecha retroceder(Fecha, int);
        int diferencia(Fecha, Fecha);
        bool comparacion(Fecha, Fecha);

        
};