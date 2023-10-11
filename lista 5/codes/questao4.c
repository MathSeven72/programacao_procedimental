/*
 * Arquivo: questao4.c
 * Compilação: gcc -std=c99 questao4.c -o questao4
 * Autor: Matheus Souza Da Costa 12021EEL021
 */

#include <stdio.h>
#include <stdlib.h>

// Função para inverter um vetor de inteiros
void inverte(int A[], int n) {
    int inicio = 0;
    int fim = n - 1;

    while (inicio < fim) {
        // Troca os elementos nas posições inicio e fim
        int temp = A[inicio];
        A[inicio] = A[fim];
        A[fim] = temp;

        // Move os índices para a próxima posição e a anterior
        inicio++;
        fim--;
    }
}

int main(void) {
    #if defined(_WIN32) || defined(_WIN64)
        system("chcp 65001"); // troca para UTF-8
    #endif

    int n;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int vetor[n];

    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Vetor original:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }

    inverte(vetor, n);

    printf("\nVetor invertido:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }

    return EXIT_SUCCESS;
}
