/*
 * Arquivo: questao1.c
 * Compilação: gcc -std=c99 questao1.c -o questao1
 * Autor: Matheus Souza Da Costa 12021EEL021
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    #if defined(_WIN32) || defined(_WIN64)
        system("chcp 65001"); // troca para UTF-8
    #endif

    int numeros[10];
    int maior = 0;
    int posicao = 0;

    // Leitura dos números
    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
        
        // Verifica se o número lido é maior do que o maior número atual
        if (numeros[i] > maior) {
            maior = numeros[i];
            posicao = i;
        }
    }

    // Imprime a posição do maior número
    printf("A posição do maior número (%d) é: %d\n", maior, posicao);

    return EXIT_SUCCESS;
}
