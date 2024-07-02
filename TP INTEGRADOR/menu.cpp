#include <iostream>
#include "menu.h"
#include "juego.h"

using namespace std;

void menu(){
    int seleccion;

    do{
        system("cls");
        cout << "--------------------" << endl;
        cout << "1. Jugar " << endl;
        cout << "2. Estadisticas " << endl;
        cout << "3. Creditos " << endl;
        cout << "--------------------" << endl;
        cout << "0. Salir del juego " << endl;
        cout << "Opcion para seleccionar: ";
        cin >> seleccion;

        switch(seleccion)
        {
            case 0:
            return;
            break;

            case 1:
                juego();
                break;

            case 2:

                break;

            case 3:

                break;
        }



    }
    while(true);


}


