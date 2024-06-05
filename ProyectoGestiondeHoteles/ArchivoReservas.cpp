#include "ArchivoReservas.h"

bool ArchivoReservas::guardar(Reserva reg) {
    FILE *pFile;

    pFile = fopen("archivoReservas.dat","ab");

    if (pFile==nullptr) {
        return false;
    }

    fclose(pFile);
    return fwrite(&reg, sizeof(Reserva), 1,pFile);
}


Reserva ArchivoReservas::leer(int indice) {
    Reserva reg;
    FILE *pFile;

    pFile = fopen("archivoReservas.dat","rb");

    if (pFile==nullptr) {
        return reg;
    }

    fseek(pFile, (indice) * sizeof (Reserva),SEEK_SET);

    fread(&reg, sizeof(Reserva), 1,pFile);
    fclose(pFile);
    return reg;

}


int ArchivoReservas::getcantidadRegistros() {
    FILE *pFile;
    int cant;

    pFile = fopen("archivoReservas.dat","rb");

    if (pFile==nullptr) {
        return 0;
    }
    fseek(pFile, 0,SEEK_END);
    cant = ftell(pFile)/sizeof(Reserva);

    fclose(pFile);
    return cant;

}
