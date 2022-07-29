#include<stdio.h>
#define TAM_STR 100

void read_string(char str[TAM_STR]){
    // no print o tamanho deve ser carregado para uma variável
    int tamanho = TAM_STR - 1;
    printf("Digite uma frase. %i\n", tamanho);
    // scanf para char em vetor, ou seja, strings devem ser sem o &. 
    scanf("%s", str);
   
}

int main(){
    char str[TAM_STR];
    int frase = 0;
    // TRAZER A FUNÇÃO read_string para cima.
    read_string(str);
    // no início do loop, inicializá-lo com int i = 0
    for(int i= 0 ; str[i] != '\0' ; i++)    {
       frase++;
       
    }
    
    printf("A quantidade de caracteres é: %i",frase);
   
    return 0;
    
}