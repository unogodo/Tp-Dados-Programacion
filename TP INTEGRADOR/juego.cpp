#include <iostream>
#include "juego.h"
#include "funciones.h"

using namespace std;

void juego()
{
    system("cls");

    /// TIRADA
    int dados[6];

    /// LANZAMIENTO
    lanzamiento(dados);

    /// MOSTRAR TIRADA
    mostrarTirada(dados);

    system("pause");
}
