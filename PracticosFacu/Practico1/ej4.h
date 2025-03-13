#include <ej4.cpp>
#include <cmath>

class String {
    private:

        char *cadena;
        int largo;
    
    public:

        String();
        
        String(char);

        String operator=(String);

        String operator=(char);

        String operator+(char);

        String operator+(String);

        bool operator==(char);

        bool operator==(String);

        char operator[](int);

        int getLargo();

        char getCadena();
        
        String substring(int, int);
}