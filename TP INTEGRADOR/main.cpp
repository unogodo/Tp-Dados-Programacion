#include <iostream>
#include <ctime>
#include "menu.h"
using namespace std;

int tirada();

int main()
{
    srand(time(0));

    menu();

    return 0;

    }
-----------------------------------------------------------------------


//variables dale tirada//
int dado[6]; int x; int y; int puntajeJuego = 0;

//variables de usuarios//
string jugadorA;

//Variable de contador de rondas//
 int conrondas = 0;

//--------------------------------------------------------------------//

//Solicitud del nombre de usuario//
cout << "Ingrese el nombre del jugador: ";
cin >> jugadorA;
cout << "Bienvenido " << jugadorA << "." << endl;

system("pause");
system("cls");
//--------------------------------------------------------------------//
while(puntajeJuego < 100){

//variables de tirada//
int tiradaA = 0; int tiradaB = 0; int tiradaC = 0; int puntajeRonda = 0;


//-------------------------------------------------------------------/

//numero de rondas//
conrondas++;
cout << "Ronda Nº: " << conrondas << endl;
cout << endl;

//tirada 1//
for(x=0; x<6; x++){
    dado[x] = tirada();
}

for(y=0; y<6; y++){
    cout << dado[y] << endl;
    tiradaA += dado[y];
}
cout << endl;
cout << "Obtuvo: " << tiradaA << " puntos." << endl;

system("pause");

//tirada 2//
for(x=0; x<6; x++){
    dado[x] = tirada();
}
for(y=0; y<6; y++){
    cout << dado[y] << endl;
    tiradaB += dado[y];
}
cout << endl;
cout << "Obtuvo: " << tiradaB << " puntos." << endl;

system("pause");

//tirada 3//
for(x=0; x<6; x++){
    dado[x] = tirada();
}
for(y=0; y<6; y++){
    cout << dado[y] << endl;
    tiradaC += dado[y];
}
cout << endl;
cout << "Obtuvo: " << tiradaC << " puntos." << endl;


cout << endl;

//Puntaje de la ronda//
if(tiradaA > tiradaB && tiradaA > tiradaC){
    puntajeRonda = tiradaA;
}
else if(tiradaB > tiradaA && tiradaB > tiradaC){
    puntajeRonda = tiradaB;
}
else {
    puntajeRonda = tiradaC;
}
cout << "El puntaje maximo de la ronda " << conrondas << " es: "  << puntajeRonda << "." << endl;

//---------------------------------------------------------------------//

cout << endl;
system("pause");
system("cls");

//--------------------------------------------------------------------/

//Suma a puntaje de Juego//
puntajeJuego += puntajeRonda;
cout << "Puntaje total de juego: " << puntajeJuego << "." << endl;

}
return 0;
}


