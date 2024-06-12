#include <iostream>
#include <CTime>

using namespace std;

int tirada();

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
int tiradaA = 0; int tiradaB = 0; int tiradaC = 0; int puntajeronda = 0; int rep; int numRep;


//-------------------------------------------------------------------/

//numero de rondas//
conrondas++;
cout << "Ronda Nº: " << conrondas << endl;

//tirada 1//
for(x=0; x<6; x++){
    dado[x] = tirada();
    while(r < 7){
        r++;
        for(n=1; n<7; n++){
           if(r == dado[r]){
            rep++;
           }
        }
        if(rep == 6){
            numRep = r;
        }
    }
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
int puntajeRonda()
cout << "El puntaje total de la ronda " << conrondas << " es: "  << puntajeRonda << "." << endl;

//---------------------------------------------------------------------//

cout << endl;
system("pause");
system("cls");

//--------------------------------------------------------------------/

//Suma a puntaje de Juego//
puntajeJuego += puntajeRonda;
cout << "Puntaje total de juego: " << puntajeJuego << "." << endl;

return 0;
}
int tirada(){
    return rand ()% 6+1;
}
;
