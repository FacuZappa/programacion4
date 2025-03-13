#include <empleado.h>


class Comun : public Empleado{
    private:
        float sueldo;
    public:

    float getSueldo();
    void setSueldo(float);
};