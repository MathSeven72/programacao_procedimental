/*
 * Arquivo: questao5.c
 * Compilação: gcc -std=c99 questao5.c -o questao5
 * Autor: Matheus Souza Da Costa 12021EEL021
 */

#include <stdio.h>
#include <stdlib.h>

// Função para verificar se B está contido em A
int compara(int A[], int tamA, int B[], int tamB) {
    // Para cada elemento de B
    for (int i = 0; i < tamB; i++) {
        int encontrado = 0;

        // Verifica se o elemento está em A
        for (int j = 0; j < tamA; j++) {
            if (B[i] == A[j]) {
                encontrado = 1;
                break;
            }
        }

        // Se o elemento não foi encontrado em A, retorna 0
        if (!encontrado) {
            return 0;
        }
    }

    // Se todos os elementos de B foram encontrados em A, retorna 1
    return 1;
}

int main(void) {

    #if defined(_WIN32) || defined(_WIN64)
        system("chcp 65001"); // troca para UTF-8
    #endif

    int tamA, tamB;

    printf("Digite o tamanho do vetor A: ");
    scanf("%d", &tamA);

    int vetorA[tamA];

    printf("Digite os elementos do vetor A:\n");
    for (int i = 0; i < tamA; i++) {
        scanf("%d", &vetorA[i]);
    }

    printf("Digite o tamanho do vetor B: ");
    scanf("%d", &tamB);

    int vetorB[tamB];

    printf("Digite os elementos do vetor B:\n");
    for (int i = 0; i < tamB; i++) {
        scanf("%d", &vetorB[i]);
    }

    int resultado = compara(vetorA, tamA, vetorB, tamB);

    if (resultado) {
        printf("B está contido em A.\n");
    } else {
        printf("B NÃO está contido em A.\n");
    }

    return EXIT_SUCCESS;
}
