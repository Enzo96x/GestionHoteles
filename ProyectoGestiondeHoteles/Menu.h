#pragma once
#include "ArchivoReservas.h"
#include <cstdlib>
#include <iostream>
using namespace std;

class Menu {
private:
    int _opcion;
    ArchivoReservas _archivoReservas;

public:
    void menuPrincipal();

    void realizarReserva();
    void modificarReserva();

    void agregarHabitacion();
    void modificarHabitacion();

    void subMenuListados();
    void subMenuInformes();

    void OpcionNoValida();
};
