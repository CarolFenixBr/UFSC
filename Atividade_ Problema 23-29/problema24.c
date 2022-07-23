//algoritmo
//Caroline Vargas da Silva Costa    Data:20/07/2021

#include <stdio.h>

int main()
{
int fat, n;
   printf("Informe um número para obter o fatorial:\n");
   scanf("%d", &n);

for(fat = 1; n > 1; n = n - 1)
    fat = fat * n;
    
    printf("\n%d", fat);
    
  return 0;
}