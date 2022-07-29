//Problema 3: mostrar a média de três números informados com uma casa após a vírgula e informar aprovado se a média for maior que 6.

// Algoritmo informal:
//1o) receber três números de ponto flutuante
//2o) calcule resultado com a soma dos três número e divida por 3.
//3o) mostre o resultado;
//4o) se o resultado for maior que 6 mostre “aprovado”; menor que 6 mostre "reprovado".

//Fluxograma enviado em anexo no arquivo fluxograma1.png
//
//teste de mesa
//linha |n1   |n2 | n3 |  media | saída
//1     |5.5  |
//2     |     |7.8|
//3     |          |9.3|
//4     |              | 7.5
//5     |                       |7.5
//6     |                       |Aprovado

//Programa em C
#include <stdio.h>
float main()
 {
    	//inicializando as variáveis
    float nota1, nota2, nota3, media;
    nota1 = nota2 = nota3 = media =0;
    
    //agora vamos pedir para o usuário digitar as suas nota
    
    printf("digite a sua nota 1: \n");
	scanf( "%f", &nota1 );
	
	printf("digite a sua nota 2:\n");
    scanf("%f", &nota2);
    
    printf("digite a sua nota 3:\n");
    scanf("%f", &nota3);
    //por fim, basta somarmos todos as notas e dividirmos por 3
    
    media = (nota1+nota2+nota3) / 3;
    //Dessa forma conseguimos calcular a média, 
    //agora, basta somente verificarmos se o valor da média é:
   // maior, igual ou menor do que 6

    printf("%.1f: ", media);
    printf("a sua média foi de: %\n\n" ,media);
if (media >= 6)
{
printf("Voc� foi aprovado. \n\\");
}else{
printf("Voc� foi reprovado!\n\n");
}
}
