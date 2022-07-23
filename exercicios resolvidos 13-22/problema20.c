//algoritmo
//Nome : Caroline Vargas da Silva Costa     data 14/07/2021

#include <stdio.h>
int main(){

    int v;
    int cand1 = 0;
    int cand2 = 0;
    int cand3 = 0;
    int v_nulo = 0;
    int v_branco = 0;
    int TotaldeVotos = 0;
    
    printf("Iniciada a votação");

    scanf("%i", &v);
    while(v != 0){

      if(v == 1){
        cand1++;
      }else if(v == 2){
        cand2++;
      }else if(v == 3){
        cand3++;
        }else if(v == 4){
        v_nulo++;
        }else if(v == 5){
        v_branco++;
      }else if(v == 0){
        break;
      }
        scanf("%i", &v);
    }
    
    TotaldeVotos = cand1 + cand2 + cand3 + v_nulo + v_branco ;

    // as saidas
    printf("Total de votos candidato 1: %d\n", cand1);
    printf("Total de votos candidato 2: %d\n", cand2);
    printf("Total de votos candidato 3: %d\n", cand3);
    printf("Total de votos nulos : %d\n", v_nulo);
    printf("Total de votos brancos: %d\n", v_branco);
    printf("Total de votos: %d \n", TotaldeVotos);
    
   
}





