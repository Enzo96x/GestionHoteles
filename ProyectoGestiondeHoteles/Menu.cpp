#include "Menu.h"

void Menu::menuPrincipal() { // Despliega un menu desde donde podemos acceder a las multiples opciones

    do {
        system("cls");
        cout << "+======================+" << endl;
        cout << "|-------BIENVENIDO-----|" << endl;
        cout << "|                      |" << endl;
        cout << "| 1 - RESERVAS         |" << endl;
        cout << "| 2 - HABITACIONES     |" << endl;
        cout << "|                      |" << endl;
        cout << "| 3 - LISTADOS         |" << endl;
        cout << "| 4 - INFORMES         |" << endl;
        cout << "|                      |" << endl;
        cout << "| 0 - SALIR            |" << endl;
        cout << "+======================+" << endl;

        cout << "QUE OPCION DESEA SELECCIONAR?: ";
        cin>>_opcion;
        if (_opcion<0 && _opcion>4) {
            OpcionNoValida();
        }

        switch(_opcion) {

        case 1:
            realizarReserva();
            break;

        case 2:
            subMenuListados();
            break;

        case 3:
            subMenuConsultas();

            break;

        case 4:
            subMenuInformes();
            break;

        case 0:
            break;

        default:
            OpcionNoValida();
            break;
        }
    } while(_opcion != 0);
}


void Menu::realizarReserva() {
    Reserva reserva;
    reserva.cargar();
    _archivoReservas.guardar(reserva);
}


void Menu::subMenuListados() {
    do {
        system("cls");

        cout << "+=====================+" << endl;
        cout << "|      LISTADOS       |" << endl;
        cout << "|                     |" << endl;
        cout << "| 1 - Reservas        |" << endl;
        cout << "| 2 - Clientes        |" << endl;
        cout << "| 3 - Habitaciones    |" << endl;
        cout << "|                     |" << endl;
        cout << "| 0 - Volver          |" << endl;
        cout << "+=====================+" << endl;

        cin>>_opcion;
        switch(_opcion) {

        case 1:
            cout << "|    Ordenadas por    |" << endl;
//fecha del check in
//fecha del check out
//apellido de quien reserva

            break;

        case 2:
            cout << "|    Ordenadas por    |" << endl;
//nombre
//apellido

            break;
        case 3:
            cout << "|    Ordenadas por    |" << endl;
//precio
//disponibles
//ocupadas
//todas

            break;
        case 0:
            break;
        }
    } while(_opcion != 0);
}


void Menu::subMenuInformes() {
    do {
        system("cls");

        cout << "+==========================================+" << endl;
        cout << "|          INFORMES                        |" << endl;
        cout << "|                                          |" << endl;
        cout << "| 1 - Recaudación anual                    |" << endl;
        cout << "| 2 - Precio total a pagar por el cliente  |" << endl;
        cout << "| 3 - Habitaciones más solicitadas         |" << endl;
        cout << "|                                          |" << endl;
        cout << "| 0 - Volver                               |" << endl;
        cout << "+==========================================+" << endl;

        cin>>_opcion;
        switch(_opcion) {

        case 1:
//El usuario deberá ingresar un año para calcular e imprimir en pantalla
//la facturación del año detallada por mes.


            break;

        case 2:
//Al ingresar el DNI del cliente o el número de reserva,
//se mostrará un reporte con el total a pagar por la estadía.


            break;
        case 3:
//En este reporte se mostrarán las cinco habitaciones más
//solicitadas del año ingresado por el usuario.
//Además, podrá filtrar el reporte por tipo de habitación.
            break;

        case 0:
            break;
        }
    } while(_opcion != 0);
}




void Menu::OpcionNoValida() {
    cout<< "Opcion no valida, por favor seleccione un valor permitido. ";
}
