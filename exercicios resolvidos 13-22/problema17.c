//Algoritmo
//Autor: Caroline Vargas da Silva Costa      Data:13/07/2021

#include <stdio.h>

int main () {
    int i, numero;
    for (i=0; i<=1000; i++) {
        numero= i%2;
        if (numero%2 ==0)
            printf ("Numero par: %d\n",i); 
    }
}