#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
   int i, vect1[25], vect2[25], vect3[25];
   srand(time(NULL)); // inicializa a função para gerar numeros aleatorios a partir dos minutos da hr do pc

   for (int i = 0; i < 25; i++){
      vect1[i] = rand() % 100;
      vect2[i] = rand() % 100;
   }

   printf("\n\n ");
   for ( int i = 0; i < 25; i++){
      vect3[i] = vect1[i] + vect2[i];

   }
   
   printf("\n\n");
   printf("Imprimindo vertor 1: \n ");
   for ( i = 0; i < 25; i++){
      printf("%d ", vect1[i]);
   }

   printf("\n\n");
   printf("Imprimindo vertor 2: \n ");
      for ( i = 0; i < 25; i++){
      printf("%d ", vect2[i]);
   }

   printf("\n\n");
   printf("Imprimindo vertor 3: \n ");
      for ( i = 0; i < 25; i++){
      printf("%d ", vect3[i]);
   }
}