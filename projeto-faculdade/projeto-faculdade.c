#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define MAX_CARROS 10

// Estrutura para representar o estacionamento
typedef struct {
    char placas[MAX_CARROS][8]; // arrays de strings "placas"
    int topo; // é o topo => indica a posição do ultimo carro no estacionamento.
} Estacionamento;

// Função para inicializar o estacionamento
void inicializarEstacionamento(Estacionamento *e) {
    e->topo = -1;
}

// Função para verificar se o estacionamento está cheio
bool estacionamentoCheio(Estacionamento *e) {
    return e->topo == MAX_CARROS - 1;
}

// Função para verificar se o estacionamento está vazio
bool estacionamentoVazio(Estacionamento *e) {
    return e->topo == -1;
}

// Função para adicionar um carro ao estacionamento
bool entrarEstacionamento(Estacionamento *e, char placa[]) {
    if (!estacionamentoCheio(e)) {
        strcpy(e->placas[++e->topo], placa);
        printf("Carro com placa %s entrou. Vagas disponíveis: %d\n", placa, MAX_CARROS - e->topo - 1);
        return true;
    } else {
        printf("Não há vagas para o carro com placa %s. Carro foi embora.\n", placa);
        return false;
    }
}

// Função para remover um carro do estacionamento
void sairEstacionamento(Estacionamento *e, char placa[]) {
    if (!estacionamentoVazio(e)) {
        int i;
        for (i = 0; i <= e->topo; i++) {
            if (strcmp(e->placas[i], placa) == 0) {
                printf("Carro com placa %s saiu.\n", placa);
                for (int j = i; j < e->topo; j++) {
                    strcpy(e->placas[j], e->placas[j + 1]);
                }
                e->topo--;
                break;
            }
        }
        if (i > e->topo) {
            printf("Carro com placa %s não encontrado.\n", placa);
        }
    } else {
        printf("Estacionamento vazio. Não há carros para sair.\n");
    }
}

int main() {
    Estacionamento estacionamento;
    inicializarEstacionamento(&estacionamento);

    // Simulação de entrada e saída de carros
    entrarEstacionamento(&estacionamento, "ABC1234");
    entrarEstacionamento(&estacionamento, "DEF5678");
    sairEstacionamento(&estacionamento, "ABC1234");
    entrarEstacionamento(&estacionamento, "GHI9012");
    // Continue com a simulação conforme necessário...

    return 0;
}
