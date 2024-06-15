#include <iostream>
#include <cTime>
#include "funciones.h"

using namespace std;

int main(){

srand(time(0));

//variables de tirada//
int dado[6]; int time; int x; int y; int puntajeJuego = 0; int conrondas = 0; int z;

//variables de usuarios//
string jugadorA;

//solicitud del nombre del usuario//

cout << "ingrese el nombre del jugador: ";
cin >> jugadorA;

cout <<"bienvenido "<< jugadorA << "." << endl;

system("pause");
system("cls");

while(puntajeJuego < 100){

    //variables de tirada//
    int tiradaA = 0; int tiradaB = 0; int tiradaC = 0; int puntajeRonda = 0; int rep = 0; int numRep;

    //numero de rondas//
    conrondas++;
    cout << "Ronda n°: "<< conrondas << endl;

    //tirada 1//
    for(x=0; x<6; x++){
        dado[x] = tirada();

//funcion si hay sexteto//

   for(z=0; z<6; z++){

        if(z == dado[x]){
            rep++;
        }
        if(rep == 6){
            numRep = z;
        }
    }
}
    for (y=0; y<6; y++){
    cout << dado[y] << endl;
    tiradaA += dado[y];
}
cout<< endl;
cout << "obtuvo: " << tiradaA << "puntos. " << endl;

system("pause");
system("cls");

cout << endl;

//tirada 2//
for(x=0; x<6; x++){
    dado[x] = tirada();

//funcion si hay sexteto//

    for (x=0; x<6; x++){
        dado[x] = tirada();

        if(x == dado[x]){
            rep++;
        }
        if(rep == 6){
            numRep = x;
        }
}
for (y=0; y<6; y++){
    cout << dado[y] << endl;
    tiradaB += dado[y];
}
cout<< endl;
cout << "obtuvo: " << tiradaB << "puntos."<< endl;
}
system("pause");
system("cls");

cout << endl;

//tirada 3//
for (x=0; x<6; x++){
    dado[x] = tirada ();

//funcion si hay sexteto//

    for (x=0; x<6; x++){
        dado[x] = tirada();

        if(x == dado[x]){
            rep++;
        }
        if(rep == 6){
            numRep = x;
        }
}
for (y=0; y<6; y++){
    cout << dado[y] << endl;
    tiradaC += dado[y];
}
cout << endl;
cout << "obtuvo: "<< tiradaC << " puntos." << endl;
cout << endl;
}
system("pause");
system("cls");

cout << endl;

//puntaje de la ronda//

if(tiradaA > tiradaB && tiradaA > tiradaC){
    puntajeRonda = tiradaA;
}
else if (tiradaB > tiradaA && tiradaB > tiradaC){
    puntajeRonda = tiradaB;
}
else {
    puntajeRonda = tiradaC;
}
cout << "el puntaje total de la ronda es: " << puntajeRonda <<endl;
cout << endl;
system("pause");
system("cls");


//suma a puntaje de juego//
puntajeJuego += puntajeRonda;
cout << "puntaje total de juego:" << puntajeJuego << "." << endl;
}

return 0;
}

