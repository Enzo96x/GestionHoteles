#include "Persona.h"

Persona::Persona() {
    cargar();
}

void Persona::cargar() {
    char apellido[25];
    char nombre[25];
    int dni;

    cout<< "Ingrese el apellido: ";
    cin.getline(apellido, sizeof(apellido));
    setApellido(apellido);

    cout<< "Ingrese el nombre: ";
    cin.getline(nombre, sizeof(nombre));
    setNombre(nombre);

    cout<< "Ingrese el DNI: ";
    cin>>dni;
    setdni(dni);
    cin.ignore(25, '\n');
}

void Persona::mostrar() {

    cout<<"Apellido: "<<getApellido()<<endl;
    cout<<"Nombre: "<<getNombre()<<endl;
    cout<<"DNI : "<<getdni()<<endl;
}


void Persona::setApellido(const char* apellido) {
    strcpy(_apellido, apellido);
}

const char* Persona::getApellido() const {
    return _apellido;
}

void Persona::setNombre(const char* nombre) {
    strcpy(_nombre, nombre);
}

const char* Persona::getNombre() const {
    return _nombre;
}

void Persona::setdni(int dni) {
    _dni=dni;
}
int Persona::getdni() {
    return _dni;
}
