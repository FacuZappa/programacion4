#include <iostream>
#include "Fecha.h"

int main() {
    // Crear dos fechas
    Fecha fecha1(10, 3, 2024);  // 10 de marzo de 2024
    Fecha fecha2(25, 12, 2023); // 25 de diciembre de 2023

    // Imprimir fechas iniciales
    std::cout << "Fecha 1: " << fecha1 << std::endl;
    std::cout << "Fecha 2: " << fecha2 << std::endl;

    // Calcular diferencia en días entre las dos fechas
    std::cout << "Diferencia en días: " << fecha1.diferencia(fecha2) << " días" << std::endl;

    // Avanzar y retroceder días en fecha1
    fecha1.avanzar(50);
    std::cout << "Fecha 1 después de avanzar 50 días: " << fecha1 << std::endl;

    fecha2.retroceder(15);
    std::cout << "Fecha 2 después de retroceder 15 días: " << fecha2 << std::endl;

    // Comparación de fechas
    if (fecha1.igual(fecha2)) {
        std::cout << "Fecha 1 es igual a Fecha 2" << std::endl;
    } else {
        std::cout << "Fecha 1 no es igual a Fecha 2" << std::endl;
    }

    return 0;
}
