#include "Fecha.h"

bool Fecha::esBisiesto(int anio) {
    return (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0);
}

int Fecha::diasEnMes(int mes, int anio) {
    switch (mes) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        return 31;
    case 4:
    case 6:
    case 9:
    case 11:
        return 30;
    case 2:
        return esBisiesto(anio) ? 29 : 28;
    default:
        return -1;
    }
}
Fecha::Fecha(int dia, int mes, int anio, int hora, int minutos) {

    if (anio < 1 || mes < 1 || mes > 12 || dia < 1 || dia > diasEnMes(mes, anio)) {
        _dia = 1;
        _mes = 1;
        _anio = 2000;
        _hora.cargar(0,0);
    } else {
        _dia = dia;
        _mes = mes;
        _anio = anio;
        _hora.cargar(hora, minutos);
    }
}

Fecha::Fecha() {
    _dia = 1;
    _mes = 1;
    _anio = 2023;
    _hora.cargar(0,0);
}


int Fecha::getDia() const {
    return _dia;
}

int Fecha::getMes() const {
    return _mes;
}

int Fecha::getAnio() const {
    return _anio;
}


void Fecha::setDia(int dia) {
    _dia = dia;
}

void Fecha::setMes(int mes) {
    _mes = mes;
}

void Fecha::setAnio(int anio) {
    _anio = anio;
}


void Fecha::AgregarDia() {
    _dia++;
    if(_dia>diasEnMes(_mes, _anio)) {
        _dia=1;
        _mes++;
    }
    if(_mes>12) {
        _mes=1;
        _anio++;
    }
};


void Fecha::RestarDia() {
    _dia--;
    if(_dia<=0) {

        if(_mes==1) {
            _mes=12;
            _anio--;
            _dia=diasEnMes(_mes,_anio);
        } else {
            _mes--;
            _dia=diasEnMes(_mes,_anio);
        }
    }
};


void Fecha::AgregarDias(int cantidad) {
    if (cantidad == 0) {
        return;
    }
    if(cantidad > 0) {
        for(int x=0; x<cantidad; x++) {
            AgregarDia();
        }
    }
    if(cantidad < 0) {
        for(int x=0; x<(cantidad*1); x++) {
            RestarDia();
        }
    }
};


void  Fecha::mostrarFecha() {
    if(_dia<10&&_mes<10) {
        cout<<"0"<<_dia<<"/"<<"0"<<_mes<<"/"<<_anio<<endl;
    }
    if(_dia<10&&_mes>=10) {
        cout<<"0"<<_dia<<"/"<<_mes<<"/"<<_anio<<endl;
    }
    if(_dia>=10&&_mes<10) {
        cout<<_dia<<"/"<<"0"<<_mes<<"/"<<_anio<<endl;
    }
    _hora.mostrar();
}

void Fecha::setearFecha() {
    int dia, mes, anio, hora, minutos;
    cout<<"Ingrese dia: "<<endl;
    cin>>dia;
    cout<<"Ingrese mes: "<<endl;
    cin>>mes;
    cout<<"Ingrese anio: "<<endl;
    cin>>anio;

    cout<<"Ingrese hora: "<<endl;
    cin>>hora;
    cout<<"Ingrese minutos: "<<endl;
    cin>>minutos;


    Fecha(dia,mes,anio, hora, minutos);
}
