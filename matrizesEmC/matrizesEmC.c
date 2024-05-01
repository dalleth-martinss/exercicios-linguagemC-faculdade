#include<stdio.h>
#include<stdlib.h>

//ESTRUTURAS DE DADOS NA LINGUAGEM C;

int main(){
                   // Linh  Col
   int i, j, matriz1[3]  [3] = {1,2,3,4,5,6,7,8,9};
   char matriz2[4] [4] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p'};
   printf("\n");

   //MATRIZ DE NUMEROS;
   for(int i = 0; i < 3; i++){
      for(int j = 0; j < 3; j++)
         printf("%d ", matriz1[i] [j]);
      printf("\n");
   }
      printf("\n");
   // MATRIZ DE ABC;
   for(char z = 0; z < 4; z++){
      for(char y = 0; y < 4; y++)
   printf ("%c ", matriz2[z] [y]);
   printf("\n");

   }

   return 0;

}