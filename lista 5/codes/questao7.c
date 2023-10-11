/*
 * Arquivo: questao7.c
 * Compilação: gcc -std=c99 questao7.c -o questao7
 * Autor: Matheus Souza Da Costa 12021EEL021
 */

#include <stdio.h>
#include <stdlib.h>

void imprime_alguma_coisa(int n){
    if (n != 0) {
        imprime_alguma_coisa(n / 2);
        printf("%c", '0' + n % 2);
    }
}

int main(void) {
    #if defined(_WIN32) || defined(_WIN64)
        system("chcp 65001"); // troca para UTF-8
    #endif

    int numero;

    printf("Digite um número inteiro não negativo: ");
    scanf("%d", &numero);

    printf("A representação binária de %d é: ", numero);
    if (numero == 0) {
        printf("0"); // Caso especial: 0 em binário é apenas "0".
    } else {
        imprime_alguma_coisa(numero);
    }
    printf("\n");

    return EXIT_SUCCESS;
}

