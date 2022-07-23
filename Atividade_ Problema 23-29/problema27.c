//Algoritmo
//Autora: Caroline Vargas da Silva Costa    Data:22/07/2021

#include <stdio.h>
int main () {
 int n,i,c;
     
     printf("Informe um número para o tamanho do quadrado:\n");
     scanf("%i", &n);


 for(i=0; i<n;i++) {
       for (c=0; c<n;c++){
           printf("*");
     }
    printf("\n");
}
}
