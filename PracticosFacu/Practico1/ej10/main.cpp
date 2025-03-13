#include <empleado.h>
#include <comun.h>
#include <jornalero.h>

float getTotal(Empleado *emp, int largo){
    float res = 0;
    for(int i = 0; i < largo; i++){
        res += emp[i].getSueldo();
    }
    return res;
}


void main(){;}