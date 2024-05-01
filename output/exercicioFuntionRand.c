#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){

   int num3[5];

   printf("\n\n");
   printf("Gerando números aleatórios: ");
   printf("\n\n");

/* gera números aleatórios a partir dos milisegundos/segundos das horas do computador, pois
   não dá pra gerar números aleatórios do nada, portanto usamos a hr do pc.
*/
   srand(time(NULL)); 

   for (int i = 0; i < 5; i++)
   num3[i] = rand(); // rand é uma função que gera numeros aleatorios.

   for (int i = 0; i < 5; i++)
   {
      printf(" %d ", num3[i]);
      printf("\n\n");
   }
   
   return 0;
}