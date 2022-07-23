//Algoritmo
//Autor : Caroline Vargas da Silva Costa    Data:20/07/2021

#include<stdio.h>

int main(){

    int i,numero,var1=0, var2=0;

    for(i=0;i<=9;i++){
        printf("Informe 10 números:\n");
        scanf("%d",&numero);
    if(numero>=10 && numero<=20){
         var1 = var1 +1;
    }else {

        var2 = var2 +1;

    }

    }
printf("Vezes que foram informados números dentro da faixa de [10-20]: %i\n", var1);
printf("Vezes que foram informados números fora da faixa de [10-20]: %i\n", var2);

    return 0;
}