//algoritmo
//Autora: Caroline Vargas da Silva Costa    Data: 26/07/2021

#include  <stdio.h>
int main () {
int i, a, cont=1, num;
 printf("Informe um número para o tamanho da árvore:\n");
 scanf ("%d", &num);
 for (i=1; i<=num; i++){
  for (a=num; a>=i; a--)
	printf (" ");
	 
  for (cont=1; cont<=i*2-1; cont++)
  	printf("*");
  	printf ("\n");
 }
return 0;
}

