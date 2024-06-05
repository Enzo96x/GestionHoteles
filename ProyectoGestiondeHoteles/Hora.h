#pragma once
#include <iostream>
using namespace std;


class Hora {
private:
    int _hora;
    int _minutos;


public:

    void cargar(int hora, int minutos);
    void mostrar();

    void setHoras(int hora);
    int getHoras() const;

    void setMinutos(int minutos);
    int getMinutos() const;


};
