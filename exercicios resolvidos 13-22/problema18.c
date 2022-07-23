//Algoritmo
//Autor: Caroline Vargas da Silva Costa      Data:13/07/2021

#include <stdio.h>

int main () {
    int numero,impar=0;
    for (numero=1000; numero>=0; numero--) {
        impar= numero%2;
        if (impar)
            printf ("Numero impar: %d\n",numero); 
    }
}