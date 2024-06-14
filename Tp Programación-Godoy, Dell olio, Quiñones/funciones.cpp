#include <iostream>
#include <ctime>
#include <funciones.h>
using namespace std;

int puntajeR;

int resultadoRonda(int tirA, int tirB, int tirC){
    if(tirA > tirB && tirA > tirC){
        puntajeR = tirA;
        }
    else if(tirB > tirA && tirB > tirC){
        puntajeR = tirB;
        }
        else{
            puntajeR = tirC;
        }
        return(puntajeR);
    }

