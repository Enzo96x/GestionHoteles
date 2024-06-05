#pragma once
#include <iostream>
#include <cstring>

using namespace std;

class Persona {
private:
    char _apellido[25];
    char _nombre[25];
    int _dni;

public:
    Persona();

    void cargar();
    void mostrar();

    void setApellido(const char*);
    const char* getApellido() const;

    void setNombre(const char*);
    const char* getNombre() const;

    void setdni(int);
    int getdni();

};

