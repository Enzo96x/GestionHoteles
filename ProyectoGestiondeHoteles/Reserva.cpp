#include "Reserva.h"

void Reserva::cargar(){
    _cliente.cargar();
    _cuarto.cargar();
    cout<<"ingrese numero de reserva: "<<endl;
    cin>>_numeroReserva;
    cout<<"ingrese la cantidad total de dias a reservar: "<<endl;
    cin>>_diasDeReserva;
    _checkIn.setearFecha();
    _checkOut.setearFecha();
}


void Reserva::setCliente(){_cliente.cargar();}
void Reserva::getCliente(){_cliente.mostrar();}

void Reserva::setCuarto(){_cuarto.cargar();}
void Reserva::getCuarto(){_cuarto.mostrar();}

void Reserva::setCheckIn(){_checkIn.setearFecha();}
void Reserva::getCheckIn(){_checkIn.mostrarFecha();}

void Reserva::setCheckOut(){_checkOut.setearFecha();}
void Reserva::getCheckOut(){_checkOut.mostrarFecha();}


void Reserva::setNumeroReserva(int numeroReserva) {
    _numeroReserva = numeroReserva;
}
int Reserva::getNumeroReserva() {
    return _numeroReserva;
}


void Reserva::setDiasDeReserva(int diasDeReserva) {
    _diasDeReserva = diasDeReserva;
}
int Reserva::getDiasDeReserva() {
    return _diasDeReserva;
}
