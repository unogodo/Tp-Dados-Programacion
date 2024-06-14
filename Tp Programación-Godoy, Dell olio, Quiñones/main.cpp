#include <iostream>
#include <CTime>
#include <funciones.h>

using namespace std;

int tirada();int puntajeR();

int main(){
srand(time(0));

//variables de tirada//
int dado[6];int time; int x; int k; int y; int puntajeJuego = 0; int r = 0; int n;

//variables de usuarios//
string jugadorA;

//Variable de contador de rondas//
 int conrondas = 0;

//--------------------------------------------------------------------//

//Solicitud del nombre de usuario//
cout << "Ingrese el nombre del jugador: ";
cin >> jugadorA;
cin.ignore();
getline(cin, jugadorA);
cout << endl;
cout << "Bienvenido " << jugadorA << "." << endl;

system("pause");
system("cls");
//--------------------------------------------------------------------//
while(puntajeJuego < 100){

//variables de tirada//
int tiradaA = 0; int tiradaB = 0; int tiradaC = 0; int puntajeRonda = 0; int rep; int numRep;


//-------------------------------------------------------------------/

//numero de rondas//
conrondas++;
cout << "Ronda Nº: " << conrondas << endl;

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
}

//Puntaje de la ronda//
int puntajeR(int tiradaA, int tiradaB, int tiradaC);

cout << "El puntaje total de la ronda " << conrondas << " es: "  << resultadoRonda << "." << endl;

//---------------------------------------------------------------------//

cout << endl;
system("pause");
system("cls");

//--------------------------------------------------------------------/

//Suma a puntaje de Juego//
int puntajeRonda = 0;

puntajeJuego += puntajeRonda;
cout << "Puntaje total de juego: " << puntajeJuego << "." << endl;

return 0;
}
int tirada(){
    return rand ()% 6+1;
}
;
