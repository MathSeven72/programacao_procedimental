/*
 * Arquivo: questao6.c
 * Compilação: gcc -std=c99 questao6.c -o questao6
 * Autor: Matheus Souza Da Costa 12021EEL021
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    #if defined(_WIN32) || defined(_WIN64)
        system("chcp 65001"); // troca para UTF-8
    #endif

    /*Escreva um programa que leia três 
    números inteiros e mostre
    como resultado a somadesses
    três números e também a multiplicação
    desses três números.*/
    int a, b, c;

    printf("Digite 3 numeros inteiros:\n");

    scanf("%d %d %d", &a, &b, &c);

    int soma = a + b + c;
    int multiplicacao = a * b * c;
    printf("SOMA = %d\n", soma);
    printf("MULTIPLICAÇÃO = %d", multiplicacao);

    return EXIT_SUCCESS;
}
