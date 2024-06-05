#pragma once
#include <cstdio>
#include <iostream>
#include <cstring>
#include "Hora.h"
using namespace std;

class Fecha {
private:
    int _dia;
    int _mes;
    int _anio;
    void AgregarDia();
    void RestarDia();
    bool esBisiesto(int anio);
    int diasEnMes(int mes, int anio);
    Hora _hora;


public:

    Fecha(int dia, int mes, int anio, int hora, int minutos);
    Fecha();

    int getDia()const;
    int getMes() const;
    int getAnio() const;

    void setDia(int);
    void setMes(int);
    void setAnio(int);

    void setearFecha();
    void setarHora();

    void AgregarDias(int );
    void mostrarFecha();
};

