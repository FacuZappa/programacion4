#ifndef "STRING_H"
#define "STRING_H"

#include <iostream>
#include <cstring>

class String {
    private:
        char* str;
    public:
        String();
        String(const char* s);
        String(const String& s);
        ~String();
        String& operator=(const String& s);
        String& operator+(const String& s);
        bool operator==(const String& s);
        bool operator!=(const String& s);
        bool operator<(const String& s);
        bool operator>(const String& s);
        //operador de inserción de flujo
        friend std::ostream& operator<<(std::ostream& os, const String& s);
        //operador de extracción de flujo
        friend std::istream& operator>>(std::istream& is, String& s);
        char& operator[](int);
        int largo();
        String& substring(int, int);
};

#endif