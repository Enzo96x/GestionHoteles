#pragma once
#include "Reserva.h"

class ArchivoReservas {
private:

public:
    bool guardar(Reserva reg);
    Reserva leer(int indice);
    int getcantidadRegistros();
};

