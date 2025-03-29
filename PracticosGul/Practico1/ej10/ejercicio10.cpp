#include <iostream>
#include <vector>
using namespace std;

// Clase base
class Empleado {
protected:
    string nombre;
public:
    Empleado(string n) : nombre(n) {}
    virtual ~Empleado() {} // Destructor virtual para evitar fugas de memoria
    string obtenerNombre() { return nombre; }
    virtual float calcularSueldo() = 0; // Método abstracto
};

// Subclase para empleados comunes
class EmpleadoComun : public Empleado {
private:
    float sueldo;
public:
    EmpleadoComun(string n, float s) : Empleado(n), sueldo(s) {}
    float calcularSueldo() override { return sueldo; }
};

// Subclase para empleados jornaleros
class EmpleadoJornalero : public Empleado {
private:
    int horasTrabajadas;
    float valorHora;
public:
    EmpleadoJornalero(string n, int horas, float valor)
        : Empleado(n), horasTrabajadas(horas), valorHora(valor) {}
    
    float calcularSueldo() override { return horasTrabajadas * valorHora; }
};

// Clase Empresa que gestiona a los empleados
class Empresa {
private:
    vector<Empleado*> empleados;
public:
    void agregarEmpleado(Empleado* e) { empleados.push_back(e); }
    
    float calcularTotalSueldos() {
        float total = 0;
        for (Empleado* e : empleados) {
            total += e->calcularSueldo();
        }
        return total;
    }

    ~Empresa() { // Liberar memoria
        for (Empleado* e : empleados) delete e;
    }
};

int main() {
    Empresa miEmpresa;
    miEmpresa.agregarEmpleado(new EmpleadoComun("Ana", 1500));
    miEmpresa.agregarEmpleado(new EmpleadoJornalero("Juan", 40, 15));

    cout << "Total de sueldos: " << miEmpresa.calcularTotalSueldos() << endl;
    
    return 0;
}
