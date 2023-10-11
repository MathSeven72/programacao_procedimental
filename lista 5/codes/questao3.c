/*
 * Arquivo: questao3.c
 * Compilação: gcc -std=c99 questao3.c -o questao3
 * Autor: Matheus Souza Da Costa 12021EEL021
 */

#include <stdio.h>
#include <stdlib.h>

// Função para calcular a soma dos divisores próprios de um número
int somaDivisores(int num) {
    int soma = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            soma += i;
        }
    }
    return soma;
}

// Função para verificar se dois números são amigos
int amigos(int a, int b) {
    int soma_a = somaDivisores(a);
    int soma_b = somaDivisores(b);

    // Dois números são amigos se a soma dos divisores próprios de um deles é igual ao outro
    return (soma_a == b && soma_b == a);
}

int main(void) {
    #if defined(_WIN32) || defined(_WIN64)
        system("chcp 65001"); // troca para UTF-8
    #endif

    int num1, num2;

    printf("Digite dois números inteiros positivos: ");
    scanf("%d %d", &num1, &num2);

    if (amigos(num1, num2)) {
        printf("%d e %d são números amigos.\n", num1, num2);
    } else {
        printf("%d e %d não são números amigos.\n", num1, num2);
    }

    return EXIT_SUCCESS;
}
