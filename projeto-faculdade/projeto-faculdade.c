#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CARROS 10
#define TAM_PLACA 8

//As estruturas servem para armazenar diferentes tipos de dados em um unico "pacote" 
typedef struct {
    char placa[TAM_PLACA];
} Carro;

// estruturas de dados criada para 
typedef struct {
    Carro carros[MAX_CARROS];
    int frente, fundo;
    int tamanho;
} Estacionamento;

void inicializarFilaEstacionamento(Estacionamento *fila) {
    fila->frente = 0;
    fila->fundo = -1; // é atribuido -1 ao fundo para indicar q a fila está vazia.
    fila->tamanho = 0;
}

int filaVazia(Estacionamento *fila) {
    return (fila->tamanho == 0);
}

int filaCheia(Estacionamento *fila) {
    return (fila->tamanho == MAX_CARROS);
}

void entrarNaFila(Estacionamento *fila, char *placa) {
    if (filaCheia(fila)) {
        printf("Estacionamento lotado. O carro com placa %s nao pode entrar.\n", placa);
    } else {
        fila->fundo = (fila->fundo + 1) % MAX_CARROS;
        strcpy(fila->carros[fila->fundo].placa, placa);
        fila->tamanho++;
        printf("Carro com placa %s estacionado.\n", placa);
    }
}

void sairDaFila(Estacionamento *fila) {
    if (filaVazia(fila)) {
        printf("O estacionamento esta vazio.\n");
    } else {
        printf("Carro com placa %s saindo do estacionamento.\n", fila->carros[fila->frente].placa);
        fila->frente = (fila->frente + 1) % MAX_CARROS;
        fila->tamanho--;
    }
}

void listarEstacionamento(Estacionamento *fila) {
    printf("Vagas ocupadas: %d\n", fila->tamanho);
    printf("Vagas disponiveis: %d\n", MAX_CARROS - fila->tamanho);
    if (filaVazia(fila)) {
        printf("O estacionamento esta vazio.\n");
    } else {
        printf("Carros estacionados:\n");
        int i;
        int posicao = fila->frente;
        for (i = 0; i < fila->tamanho; i++) {
            printf("%d: %s\n", i + 1, fila->carros[posicao].placa);
            posicao = (posicao + 1) % MAX_CARROS;
        }
    }
}

int main() {
    Estacionamento fila;
    inicializarFilaEstacionamento(&fila);

    char placa[TAM_PLACA];
    int operacao;

    printf("Menu:\n");
    printf("1 - Entrada de carro\n");
    printf("2 - Saida de carro\n");
    printf("3 - Listar carros estacionados\n");
    printf("0 - Encerrar\n");

    do {
        printf("\nDigite o numero do menu: ");
        scanf("%d", &operacao);

        switch (operacao) {
            case 1:
                printf("Digite a placa do carro: ");
                scanf("%s", placa);
                entrarNaFila(&fila, placa);
                break;
            case 2:
                sairDaFila(&fila);
                break;
            case 3:
                listarEstacionamento(&fila);
                break;
            case 0:
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("Operacao invalida.\n");
        }
    } while (operacao != 0);

    return 0;
}
