#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){

   int num3[30];

   printf("\n\n");
   printf("Gerando números aleatórios: ");
   printf("\n\n");

/* gera números aleatórios a partir dos milisegundos/segundos das horas do computador, pois
   não dá pra gerar números aleatórios do nada, portanto usamos a hr do pc.
*/
   srand(time(NULL)); 

   for (int i = 0; i < 30; i++)
   /* rand é uma função que gera numeros aleatorios.  
   "% 100" é a forma de fazer com que os numeros aleatorios sejam gerados somente de 0 a 99
   " 1+ " serve para que não gere numero 0 e sim a partir do 1.
   */ 
   num3[i] = 1 + rand() % 100; 

   for (int i = 0; i < 30; i++)
   {
      printf(" %d ", num3[i]);
      printf("\n\n");
   }
   
   return 0;
}