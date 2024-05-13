#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// a linguagem C permite nos criarmos novos tipos de Dados.
// com o typedef struct.

//tipo de dados pessoas
typedef struct 
{
   int idade;
   char sexo;
   char nome[100];

}Pessoa;

typedef struct 
{
   int idade;
   char sexo;
   char nome[100];
}Pessoa2;

int main(){

   Pessoa  pessoa;
   Pessoa2 pessoa2;

   pessoa.idade = 28;
   pessoa.sexo = 'M';
   strcpy(pessoa.nome, "Arthur\n");

   pessoa2.idade = 30;
   pessoa2.sexo = 'F';
   strcpy(pessoa2.nome, "Helena\n");



   printf("Nome: %s\nIdade: %d\n Sexo:  %c\n", pessoa.nome, pessoa.idade, pessoa.sexo);
   printf("Nome: %s\nIdade: %d\n Sexo:  %c\n", pessoa2.nome, pessoa2.idade, pessoa2.sexo);


   return 0;
}
