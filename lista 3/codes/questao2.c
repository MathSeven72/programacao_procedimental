/*
 * Arquivo: questao2.c
 * Compilação: gcc -std=c99 questao2.c -o questao2
 * Autor: Matheus Souza Da Costa 12021EEL021
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    #if defined(_WIN32) || defined(_WIN64)
        system("chcp 65001"); // troca para UTF-8
    #endif

    float numeros[10];
    float soma = 0.0;
    float media;

    // Leitura dos números
    printf("Digite 10 números de ponto flutuante:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%f", &numeros[i]);
        soma += numeros[i];
    }

    // Cálculo da média
    media = soma / 10.0;

    // Imprime a média
    printf("A média dos números é: %.2f\n", media);
    

    return EXIT_SUCCESS;
}
