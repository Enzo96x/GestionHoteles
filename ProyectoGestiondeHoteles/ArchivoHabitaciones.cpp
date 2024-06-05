#include "ArchivoHabitaciones.h"

void ArchivoHabitaciones::cargarHabitacion() {
    Habitacion habitacion;
    habitacion.cargar();
    guardar(habitacion);
}

bool ArchivoHabitaciones::guardar(Habitacion reg) {
    FILE *pFile;

    pFile = fopen("archivoHabitaciones.dat","ab");

    if (pFile==nullptr) {
        return false;
    }

    fclose(pFile);
    return fwrite(&reg, sizeof(Habitacion), 1,pFile);
}


Habitacion ArchivoHabitaciones::leer(int indice) {
    Habitacion reg;
    FILE *pFile;

    pFile = fopen("archivoHabitaciones.dat","rb");

    if (pFile==nullptr) {
        return reg;
    }

    fseek(pFile, (indice) * sizeof (Habitacion),SEEK_SET);

    fread(&reg, sizeof(Habitacion), 1,pFile);
    fclose(pFile);
    return reg;

}


int ArchivoHabitaciones::getcantidadRegistros() {
    FILE *pFile;
    int cant;

    pFile = fopen("archivoHabitaciones.dat","rb");

    if (pFile==nullptr) {
        return 0;
    }
    fseek(pFile, 0,SEEK_END);
    cant = ftell(pFile)/sizeof(Habitacion);

    fclose(pFile);
    return cant;
}

void ArchivoHabitaciones::listarHabitacionesDisponibles() {
    int cantidad = getcantidadRegistros();
    Habitacion habitacion;

    for (int i = 0; i < cantidad; ++i) {
        habitacion = leer(i);
        if (habitacion.isDisponible()) {
            habitacion.mostrar();
        }
    }
}
