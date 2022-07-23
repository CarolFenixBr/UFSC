//algoritimo 
//Autor : Caroline Vargas da Silva Costa       Data: 13/07/2021

#include <stdio.h>

int main() {
    //um programa que mostra na tela os numeros 5 ao 100
  int x = 5;

  do {
    printf("%d", x);

    if(x < 100) {
      printf(", ");
    }
  } while(++x <= 100);

  
}
