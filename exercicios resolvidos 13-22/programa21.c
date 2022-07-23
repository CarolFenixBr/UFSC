//algoritmo
//Autor: Caroline Vargas da Silva Costa     Data: 14/07/2021

#include<stdio.h>

    int num , resp , cont = 0 ;
    int main (int argc , char * argv[] )
{

    printf("TABUADA\n\n");
    printf("Digite o número da tabuada a qual deseja multiplicação: ");
    scanf("%d", &num);
    for(cont = 0;cont<= 10; cont++)
{
        printf("\n%d x %d = %d\n", cont,num,cont*num);
    }
    scanf("%d", &resp);

}





