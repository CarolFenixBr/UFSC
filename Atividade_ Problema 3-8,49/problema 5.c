//Problema 5: Calcular a média de 5 números informados e mostre a média.

// Algoritmo informal:
//1o) receber cinco números de ponto flutuante
//2o) calcule resultado com a soma dos cinco números e divida por 5.
//3o) mostre o resultado;
  
  
 //teste de mesa 
//linha  n1   n2   n3  n4  n5    media 
//1 ←    6
//2 ←         8
//3 ←             9
//4                   7
//5                        7
//6                               7.4




//programa em C 

#include <stdio.h>
float main()
{
//inicializando as variáveis
    float nota1, nota2, nota3, nota4, nota5 , media;
//agora vamos pedir para o usuário digitar as suas notas
  printf("informe a sua primeira nota:");
  scanf("%f",&nota1);
  printf("informe a sua segunda nota:");
  scanf("%f",&nota2);
  printf("informe a sua terceira nota:");
  scanf("%f",&nota3);
  printf("informe a sua quarta nota:");
  scanf("%f",&nota4);
  printf("informe a sua quinta nota:");
  scanf("%f",&nota5);
//por fim, basta somarmos todos as notas e dividirmos por 5
media = (nota1+nota2+nota3+nota4+nota5)/5;
//Dessa forma conseguimos calcular a média, 
printf("A sua media e %f\n",media);
}