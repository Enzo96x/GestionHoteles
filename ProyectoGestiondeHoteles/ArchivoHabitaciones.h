#pragma once
#include "Habitacion.h"

class ArchivoHabitaciones {
private:

public:
    void cargarHabitacion();
    bool guardar(Habitacion reg);
    Habitacion leer(int indice);
    int getcantidadRegistros();

    void listarHabitacionesDisponibles();
};

