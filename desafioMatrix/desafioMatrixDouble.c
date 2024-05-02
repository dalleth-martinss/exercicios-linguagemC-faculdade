#include<stdio.h>
#include<stdlib.h>

int main(){
// Desafio Fazer 1 matriz, solicitando o preenchimento  para o usuario, elevar os valores ao quadrado,
// imprimir na tela a matriz digitada pelo usuario e imprimir na tela valores da matriz ao quadrado.

   int i, j, matrix[3][3], matrixMult[3][3];
  
   for(int i = 0; i < 3; i++){
      for (int j = 0; j < 3; j++){
      printf("Digite os numeros %d %d :", i, j);
      scanf("%d", &matrix[i] [j]);
      printf("\n");
      }
      
   }

   for(int i = 0; i < 3; i++){
      for (int j = 0; j < 3; j++)
       matrixMult[i][j] = matrix[i][j] * matrix[i][j];
   }
   
   printf("Matriz 1 ********************\n");
      for(i = 0; i < 3; i++){
      for ( j = 0; j < 3; j++)
      printf("%d ", matrix[i][j]);
      printf("\n");
   }
   printf("Matriz 2: ********************\n");
   for(i = 0; i < 3; i++){
      for ( j = 0; j < 3; j++)
      printf("%2d ", matrixMult[i][j]);
      printf("\n");
   }
     return 0;
}