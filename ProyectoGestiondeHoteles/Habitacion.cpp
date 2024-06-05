#include "Habitacion.h"

Habitacion::Habitacion() {
cargar();
}

void Habitacion::mostrar() {
    cout<<"piso: "<<getPiso()<<endl;
    cout<<"numero de habitacion: "<<getNum()<<endl;
    cout<<"precio: $"<<getPrecio()<<endl;
    cout<<"tipo de servicio: ";
    switch (getTipo()) {
    case 1:
        cout<<"economico"<<endl;
        break;
    case 2:
        cout<<"medio"<<endl;
        break;
    case 3:
        cout<<"vip"<<endl;
        break;
    }
    getCamas();
    cout<<"capacidad total de la habitacion: "<<getCapacidadTotal()<<" personas"<<endl;
    getVista() ? cout<<"posee vista al exterior"<<endl : cout<<"no posee vista al exterior"<<endl;
    isDisponible() ? cout<<"habitacion disponible"<<endl : cout<<"no disponible"<<endl;
}

void Habitacion::cargar() {
    int piso, num, tipo, capacidadTotal, solicitudes;
    float precio;
    int tam1, tam2, tam3, tam4, tam5;
    bool vista, disponible;

    cout << "Ingrese el número del piso: ";
    cin >> piso;
    setPiso(piso);

    cout << "Ingrese el número de la habitación: ";
    cin >> num;
    setNum(num);

    cout << "Ingrese el precio: ";
    cin >> precio;
    setPrecio(precio);

    cout << "Ingrese el tipo de habitación (1-economico 2-medio 3-vip):";
    cin >> tipo;
    setTipo(tipo);

    cout << "Ingrese el tamaño de las camas (5 valores, valor 0 en caso de no haber cama): ";
    cin >> tam1 >> tam2 >> tam3 >> tam4 >> tam5;
    setCamas(tam1,tam2,tam3,tam4,tam5);

    cout << "Ingrese la capacidad total: ";
    cin >> capacidadTotal;
    setCapacidadTotal(capacidadTotal);

    cout << "¿Tiene vista? (1 para sí, 0 para no): ";
    cin >> vista;
    setVista(vista);

    cout << "¿Está disponible? (1 para sí, 0 para no): ";
    cin >> disponible;
    setDisponible(disponible);

}


void Habitacion::setPiso(int piso) {
    piso = piso;
}
int Habitacion::getPiso() const {
    return piso;
}


void Habitacion::setNum(int num) {
    _num = num;
}
int Habitacion::getNum() const {
    return _num;
}

void Habitacion::setPrecio(float precio) {
    _precio = precio;
}
float Habitacion::getPrecio() const {
    return _precio;
}

void Habitacion::setTipo(int tipo) {
    _tipo = tipo;
}
int Habitacion::getTipo() const {
    return _tipo;
}

void Habitacion::setCamas(int tam1, int tam2, int tam3, int tam4, int tam5) {

    _cama[0].setTamanio(tam1);
    _cama[1].setTamanio(tam2);
    _cama[2].setTamanio(tam3);
    _cama[3].setTamanio(tam4);
    _cama[4].setTamanio(tam5);

}
void Habitacion::getCamas() {
    for (int i = 0; i < 5; ++i) {
        if (_cama[i].getTamanio()!=0) {
            cout<<"cama n."<<i<<" :"<<_cama[i].getTamanio()<<endl;
        }
    }
}

void Habitacion::setCapacidadTotal(int capacidadTotal) {
    _capacidadTotal = capacidadTotal;
}
int Habitacion::getCapacidadTotal() const {
    return _capacidadTotal;
}

void Habitacion::setVista(bool vista) {
    _vista = vista;
}
bool Habitacion::getVista() const {
    return _vista;
}


void Habitacion::setDisponible(bool disponible) {
    _disponible = disponible;
}
bool Habitacion::isDisponible() const {
    return _disponible;
}



