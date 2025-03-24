#include "string.h"

#include <iostream>
#include <stdexcept> // para manejar excepciones

#include <cstring>
//strlen(cadena)	Devuelve la longitud de la cadena (sin contar el carácter nulo \0).
//memcpy(dest, src, n)	Copia n bytes desde src hacia dest.
//strncpy(dest, src, n)	Copia como máximo n caracteres de src a dest (puede no terminar en \0 si n es menor a la longitud).

//Parte a
String::String() {
    str = new char[1];
    str[0] = '\0';
}

String::String(const char* s){
    if (s == nullptr) {
        throw std::invalid_argument("Se intento crear un String con puntero nulo");
    }
    str = new char[strlen(s) + 1];
    strcpy(str, s);//copia la cadena s en str
}

String::String(const String& s){
    str = new char[strlen(s.str) + 1];
    strcpy(str, s.str);
}

String::~String(){
    delete[] str;
}

//Parte b
String& String::operator=(const String& s){
    if(this != &s) {
        delete[] str;
        str = new char[strlen(s.str) + 1];

        strcpy(str, s);
    }
    return *this;
}

String& String::operator+(const String& s){
    char* newStr = new char[strlen(str) + strlen(s.str) + 1];
    strcpy(newStr, str); //copio el contenido de str a newStr
    strcat(newStr, s.str); //agrega el contenido de s.str al final de str
    delete[] str;
    str = newStr;
    return *this;
}

bool String::operator==(const String& s){
    return strcmp(str, s.str) == 0; //devuelve 0 si son iguales
}

bool String::operator!=(const String& s){
    return strcmp(str, s.str) != 0; //devuelve 0 si son iguales
}

bool String::operator<(const String& s){
    return strcmp(str, s.str) < 0; //devuelve -1 si str es menor que s.str
}

bool String::operator>(const String& s){
    return strcmp(str, s.str) > 0; //devuelve 1 si str es mayor que s.str
}

char& String::operator[](int i){
    if(i < 0 || i >= strlen(str)){
        throw std::out_of_range("Índice fuera de rango");
    }
    
    return str[i];
}

//Parte c
std::ostream& operator<<(std::ostream& os, const String& s){
    os << s.str;
    return os; //devuelve el flujo de salida
}

std::istream& operator>>(std::istream& is, String& s){
    char buffer[1000];
    is >> buffer;
    delete[] s.str;
    s.str = new char[strlen(buffer) + 1];
    strcpy(s.str, buffer);
    return is; //devuelve el flujo de entrada
}

//Parte d

int String::largo(){
    return strlen(str);
}


String& String::substring(int desde, int hasta){
    if (desde < 0 || hasta < 0 || desde > hasta || hasta > largo()) {
        throw std::invalid_argument("Parámetros inválidos para substring");
    }

    char* newStr = new char[hasta - desde + 2];
    strncpy(newStr, str + desde, hasta - desde + 1);
    delete[] str;
    str = newStr;
    return *this;
}