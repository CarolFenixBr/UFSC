//Problema 4: Receber números e escrever na tela até que se digite o número 4890.

// Algoritmo informal:
//1o) Receber comandos de ponto flutuante
//2o) Ditige numeros aleatorios; 
//3o)Quando digitar 4890 o programa ira parar
//4o)Mostra o resultado 
//5o)Programa finalizado


 //teste de mesa 
//linha   valor              saida
//1 ←     6
//2 ←     8    
//3 ←     5        
//4 ←    4890            
//5 ←                  Quantidade de numeros 4                                                         
//6 ←                   Programa finalizado...                                                          
                  
                              

//Programa em C
#include <stdio.h>

float main(){
    //iniciando as variáveis
    float soma=1, numero, quantidade_Numero=0;
    while (numero != 4890 ){
    //agora vamos pedir para o usuário digitar um numero
    printf("Digite um numero : ");
    scanf ("%f",&numero);
    
    quantidade_Numero++;

    }
    printf("\nQuantidade de numeros %.0f", quantidade_Numero);
    printf("\nPrograma finalizado... \n");

}
