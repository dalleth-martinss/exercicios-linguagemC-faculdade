#include<stdio.h>
#include<stdlib.h>

//ESTRUTURAS DE DADOS NA LINGUAGEM C;

int main(){
                   // Linh  Col
   int i, j, matriz1[3]  [3] = {1,2,3,4,5,6,7,8,9};
   char matriz2[4] [4] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p'};
   int t, s, matriz3[3]  [3] = {1,2,3,4,5,6,7,8,9};
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
      
   //MATRIZ DE NUMEROS DIGITADOS PELO USUARIO;
      for( t = 0; t <3; t++){
         for( s = 0; s < 3; s++){
            printf("Digite o valor %d %d: ", t, s);
            
            scanf("%d", &matriz3[t][s]);
         }
      }
      printf("\n");
      for(t = 0; t < 3; t++){
         for (s = 0; s < 3; s++)
            printf("%d ", matriz3[t] [s]);
            printf("\n");
         
      }
          

   return 0;

}