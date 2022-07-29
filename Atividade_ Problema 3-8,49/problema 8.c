// Programa que apresenta se o segundo numero informado é maior, menor ou igual 
// ao primeiro número informado.
//
// Autor:  Caroline Vargas da Silva Costa                                  Data: 12/07/2021

#include <stdio.h>
#include<math.h>

int main(){
	int n;
    int maior;
	int menor;
	int contador;
    
    for (contador=0; contador<5;contador++){
    	printf("\nInforme um numero");
    	scanf("%d",&n);
    	
    	if (n>maior && n < menor ){
    		maior=n;
    		menor=n;
    		
    	}
		if (n < menor & n!=0){
			menor=n;
		}
		if( n>maior && n!=0){
			maior=n;
		}
		
	}
	printf("maior numero &d", maior);
	printf("menor numero %d", menor);
	system("Pause");
	
    
        


