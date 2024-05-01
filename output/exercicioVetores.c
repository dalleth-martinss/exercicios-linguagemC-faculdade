#include <stdio.h>
#include <stdlib.h>

//ESTRUTURAS DE DADOS -> com vetores.

int main (){

   int num2[5];

   printf("\n\n");
   for(int i = 0; i < 5; i++){  // esse "for" solicita o valor ao usuario, 
      printf("Digite o elemento da posicao %d: ", i);
      scanf("%d", &num2[i]);
   } 
   for (int i = 0; i < 5; i++){ // esse "for" multipl o valor de cada "i" -> por 3 e salva o result na mesma posição "i"  
      num2[i] = num2[i] * 3;
   }
   
    printf("\n\n");
   for(int i = 0; i < 5; i++){ // esse "for" imprime os valores no console.
      printf("%d ", num2[i]);
      printf("\n\n");
   }

return 0;

}