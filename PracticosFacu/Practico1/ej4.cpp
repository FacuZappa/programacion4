#include <ej4.h>
#include <cmath>



String::String(){ 
    this->cadena = char [1]; 
    this->cadena[0] = ´\0´; 
    this->largo = 0; 
    }
    
String::String(char *s){ // constructor por parámetros 
    int i = 0; 
    while (s[i] != ´\0´) 
    i++; 
    this->largo = i; 
    this->cadena = new char [largo + 1]; 
    for (i=0; i<= this->largo; i++) // copio hasta el ´\0´ inclusive 
    this->cadena[i] = s[i]; 
}    

String String::operator=(String s){
    String res = new String(s.getCadena());
    return res;
}

String String::operator=(char *s){
   String res = new String(s);
    return res;
}

String String::operator+(char *s){
    String res = new String(this->cadena + s);
    return res;    
}

String String::operator+(String s){
    String res = new String(this->cadena + s.getCadena());
}

bool String::operator==(char *s){
    return (s == this->cadena);
}

bool String::operator==(String s){
    return this->cadena == s.getCadena();
}

char String::operator[](int i){
    return this->cadena[i];
}

int String::getLargo(){
    return this->largo;
}

char String::getCadena(){
    return this->cadena;
}

String String::substring(int ini, int fin){
    char *c = new char[fin - ini + 2];
    for (i = 0; fin - ini; i++){
        c[i] = this->cadena[i + ini];
    }
    c[fin - ini + 1] = ´\0´;
    String res = new String(c);
    return res;
}