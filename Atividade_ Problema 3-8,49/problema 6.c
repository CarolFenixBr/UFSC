//Problema 6: Calcular a média de 50 números informados e mostrar a média.
// Algoritmo informal:
//1o) receber cinquenta números de ponto flutuante
//2o) calcule resultado com a soma dos cinco números e divida por 50.
//3o) mostre o resultado;
  
  
 //teste de mesa 
//linha  n1   n2   n3,... , n50    media 
//1 ←    7
//2 ←         7
//3 ←             7
//n                   7
//50                        7
//51                               7


//Programa em C
 #include<stdio.h>
  #include<stdlib.h>
  #define tamanho 50 
  
  int main()
  {
    int  cont = 0, cont2=0, numero = 0;
    float  media = 0, soma = 0, vetor[tamanho];

    //Inicializando o vetor

   for (int i=0; i<tamanho;i++)
  {
    vetor[i]=0.0;
  }
   do
  {
     printf("Digite um numero:");
     scanf("%d", &numero);
     printf("\n");

    if (numero >=0)
  {
    cont++; //CONTADOR PARA CALCULAR A MÉDIA

   vetor[cont2] = numero; //ARMAZENAMENRO DOS NÚMEROS NO VETOR
   soma += vetor[cont2]; //CALCULO DA SOMA TOTAL DOS NÚMEROS POSITIVOS
   cont2++; // INDÍCE DO VETOR.
  }

  }while (numero >= 0 && cont < tamanho);

  media = soma / cont; //CALCULO DA MÉDIA FINAL

  printf("\n");
  printf("A media dos numeros digitados e %.2f\n", media);
  printf("\n");

  system("pause");

  return 0;
  }