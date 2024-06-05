#pragma once
#include "Cama.h"
#include <iostream>
#include <cstring>
using namespace std;

class Habitacion {
private:
    int piso;
    int _num;
    float _precio;
    int _tipo; //1-economico 2-medio 3-vip
    Cama _cama[5];
    int _capacidadTotal;
    bool _vista;
    bool _disponible;
public:
    Habitacion();

    void mostrar();
    void cargar();

    void setPiso(int piso);
    int getPiso() const;

    void setNum(int num);
    int getNum() const;

    void setPrecio(float precio);
    float getPrecio() const;

    void setTipo(int tipo);
    int getTipo() const;

    void setCamas(int, int, int, int, int);
    void getCamas();

    void setCapacidadTotal(int capacidadTotal);
    int getCapacidadTotal() const;

    void setVista(bool vista);
    bool getVista() const;

    void setDisponible(bool disponible);
    bool isDisponible() const;

};


