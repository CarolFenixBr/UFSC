//Algoritmo
//Autor : Caroline Vargas da Silva Costa  Data: 20/07/2021

#include <stdio.h>

int main()
{
    int n,m,resto;
    printf("Informe dois números para determinar o MDC:\n");
    scanf("%d%d", &n, &m);
    resto=n%m;
    
 while(resto!=0)
{
 n    = m;
 m    = resto;
 resto = n%m;         
    
}
    printf("%d\n", m);
    
    return 0;
}