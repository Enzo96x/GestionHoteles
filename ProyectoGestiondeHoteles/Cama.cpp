#include "Cama.h"

Cama::Cama (int tam){
    _tamanio = tam;
}

Cama::Cama (){
    _tamanio = 0;
}

void Cama::setTamanio(int tam) {
    _tamanio = tam;
}

int Cama::getTamanio() {
    return _tamanio;
}
