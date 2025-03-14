# include <ostream>
# include <stdexcept>

class String {
    private:
      char* cadena;
      unsigned int largo;
    public:
      String();
      String(int);
      String(const char*);
      String(const String&);
      String& operator=(const String&);
      String operator+(const String&);
      bool operator==(const String&);
      const char& operator[](int) const;
      const char* getCadena() const;
      void setCadena(const std::string& nuevaCadena);
      int totalcaracteres();
      String substring(int, int) const;
      ~String();
};