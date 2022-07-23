//Algortimo
//Autor: Caroline Vargas da Silva Costa   Data: 20/07/2021

#include <stdio.h>
 
 int main() { 
 int numero, SOMA=0 , a; 

   printf("Informe um número para a soma de cada dígito:\n");
   scanf("%d", &numero); 
a = numero ;

if (numero > 0) { 

while (numero > 0) { 

SOMA = SOMA + numero % 10; 

numero = numero / 10; 
} 

printf("%d\n", SOMA);
} 



return 0; 
}