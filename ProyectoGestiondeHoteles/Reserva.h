#pragma once
#include "Habitacion.h"
#include "Fecha.h"
#include "Persona.h"

class Reserva {
private:
    Persona _cliente;
    Habitacion _cuarto;
    int _numeroReserva;
    int _diasDeReserva;
    Fecha _checkIn;
    Fecha _checkOut;


public:

    void cargar();

    void setCliente();
    void getCliente();

    void setCuarto();
    void getCuarto();

    void setCheckIn();
    void getCheckIn();

    void setCheckOut();
    void getCheckOut();

    void setDiasDeReserva(int diasDeReserva);
    int getDiasDeReserva();

    void setNumeroReserva(int numeroReserva);
    int getNumeroReserva();
};

