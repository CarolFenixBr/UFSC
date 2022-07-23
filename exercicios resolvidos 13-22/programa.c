//Algoritmo
//Autor : Caroline Vargas da Silva Costa    Data: 14/07/2021


#include <stdio.h>
 
float main()
{
    float c , f,numero ;
    while (f != -1){
    printf("\nInforme a temperatura em Fahrenheit para conversão. Digite -1 para sair.\n");
    
    scanf("%f", &f);
    if(f != -1){
      c = 5 * ((f - 32)/9);
      printf("%f", c);
    }
    
 
  }

}
