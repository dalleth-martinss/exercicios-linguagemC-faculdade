#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
{
   char nome[100];
   int idade;
   char genero;

}Pessoa;

int main(){

Pessoa pessoa;

printf("Digite seu nome: ");
fgets(pessoa.nome, 100, stdin);

printf("Digite sua idade: ");
scanf("%d", &pessoa.idade);

printf("Digite f ou m para informar seu genero: ");
scanf("%c", &pessoa.genero);


printf("Nome: %s\nIdade: %d\nGenero: %c\n", pessoa.nome, pessoa.idade, pessoa.genero);

   
   return 0;
}
