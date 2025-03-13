#include <empleado.h>

class Jornalero : public Empleado{
    private:
        int horas;
        float valorhora;
    public:

        float getSueldo(); //utilizo el polimorfismo para la funcion getSueldo
        void setHoras(int);
        void setValorHora(float);
        float getValorHora();
        int getHoras();
};