#include "Hora.h"

void Hora::cargar(int hora, int minutos) {
    _hora = hora;
    _minutos = minutos;
}

void Hora::mostrar() {
    if (_hora<12) {
        cout<<_hora<<" : "<<_minutos<<" AM"<<endl;
    } else {
        cout<<_hora<<" : "<<_minutos<<" PM"<<endl;
    }


}

void Hora::setHoras(int hora) {
    _hora = hora;
}
int Hora::getHoras() const {
    return _hora;
}

void Hora::setMinutos(int minutos) {
    _minutos = minutos;
}
int Hora::getMinutos() const {
    return _minutos;
}




