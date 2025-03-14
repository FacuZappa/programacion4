# include <ostream>
# include <stdexcept>
# include "ej4.h"

String::String() : largo (0){
    cadena = new char[1];
    cadena[0] = '\0';
} 

String::String(int largo){
    this->largo = largo;
    cadena = new char[largo +1];
    for (int i = 0; i < largo; i++)
       cadena[i] = ' ';

    cadena[largo] = '\0';   
}

String::String(const char* aCopiar){
    largo = 0;
    while (aCopiar[largo]!= '\0'){
       largo++;
    }
    cadena = new char[largo+1];
    for(int i = 0; i <= largo; i++){
        cadena[i] = aCopiar[i];
    }
}

String::String(const String& aCopiar){
    largo = aCopiar.largo;
    cadena = new char[largo+1];
    for(int i = 0; i <= largo; i++)
       cadena[i] = aCopiar.cadena[i];
}

String& String::operator=(const String& aAsignar){
    if(this != &aAsignar){
      delete[] cadena;
      cadena = new char[aAsignar.largo + 1];
      largo = aAsignar.largo;
      for( int i = 0; i <= largo; i++)
        cadena[i] = aAsignar.cadena[i];
    }

    return *this;
}

String String::operator+(const String& sumando){
    String suma(largo + sumando.largo);

    for (int i = 0; i < largo; i++)
       suma.cadena[i] = cadena[i];
    
    for(int i = largo; i <= suma.largo; i++)
       suma.cadena[i] = sumando.cadena[i - largo];
    
    return suma;
}

bool String::operator==(const String& aComparar){
    if (aComparar.largo != largo)
      return false;
    
    else{
        int i = 0;
        while(i <= largo && cadena[i] == aComparar.cadena[i])
           i++;
           
        return i > largo;
    }
}

const char& String::operator[](int a) const{
    if (a < 0 || a >= largo) 
         throw std::out_of_range("");
    return cadena[a];
}

const char* String::getCadena() const{
    return cadena;
}

void String::setCadena(const std::string& nuevaCadena){
    delete[] cadena;
    largo = nuevaCadena.size();
    cadena = new char[largo + 1];
    for (unsigned int i = 0; i < largo; i++) {
        cadena[i] = nuevaCadena[i];
    }
    cadena[largo] = '\0';
}

int String::totalcaracteres(){
    return largo;
}

String String::substring(int ini, int fin) const{
    if(ini < 0 || fin < ini || fin > largo)
       throw std::invalid_argument("");

    String sub(fin - ini + 1);
    for(int i = ini; i <= fin; i++)
       sub.cadena[i - ini] = cadena [i];

    return sub;
}

std::istream& operator>>(std::istream& is, String& pri){
    std::string entrada;
    std::getline(is, entrada);
    pri.setCadena(entrada);
    return is;
}

std::ostream& operator<<(std::ostream& os, const String& pri){
    os << pri.getCadena();

    return os;
}

String::~String(){
    delete[] cadena; 
}

