/*
 * Arquivo: questao6.c
 * Compilação: gcc -std=c99 questao6.c -o questao6
 * Autor: Matheus Souza Da Costa 12021EEL021
 */

#include <stdio.h>
#include <stdlib.h>

// Função para calcular a média aritmética de um vetor de números reais
float media(float F[], int n) {
    if (n == 0) {
        return 0.0;  // Retorna 0 se o vetor estiver vazio para evitar divisão por zero
    }

    float soma = 0.0;

    // Calcula a soma de todos os elementos no vetor
    for (int i = 0; i < n; i++) {
        soma += F[i];
    }

    // Calcula a média aritmética dividindo a soma pelo número de elementos
    return soma / n;
}

int main(void) {
    #if defined(_WIN32) || defined(_WIN64)
        system("chcp 65001"); // troca para UTF-8
    #endif

    int n;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    float vetor[n];

    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < n; i++) {
        scanf("%f", &vetor[i]);
    }

    float resultado = media(vetor, n);

    printf("A média aritmética dos elementos do vetor é: %.2f\n", resultado);



    return EXIT_SUCCESS;
}
