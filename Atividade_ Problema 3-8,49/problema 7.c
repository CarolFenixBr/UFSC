//Problema 7: Calcular a média de números que foram informados até se digitar -1. A cada número informado mostrar a quantidade de números já informados.

// Algoritmo informal:
//1o) Receber comandos de ponto flutuante
//2o) Ditige numeros aleatorios; 
//3o)Quando digitar -1 o programa ira parar
//4o)Mostra a media e quantidade 
//5o)Programa finalizado


//teste de mesa 
// linha   valor      media        saida
// 1 ←     6
// 2 ←     8    
// 3 ←     5        
// 4 ←    -1          
// 5 ←                 4.5       Quantidade de numeros 4 
//                                  media 4.5
// 6 ←                            Programa finalizado...                                                          
                  
                              

//Programa em C
#include <stdio.h>

float main(void){
    //iniciando as variáveis
    float numero=0, media=0,soma_Numero=0,quantidade_Numero=0;
    while (numero != -1 ){
    //Entrada de dados
    printf("Digite um numero : ");
    scanf ("%f",&numero);
    //Processamento
    
    media = soma_Numero\quantidade_Numero;

   
    }
    //Saída
    
    printf("%.1f: ", media);
    printf("a media dos numeros digitados e = %f\n", media);
    printf("\nPrograma finalizado... \n");

}
