/*
 * Arquivo: questao7.c
 * Compilação: gcc -std=c99 questao7.c -o questao7
 * Autor: Matheus Souza Da Costa 12021EEL021
 */

#include <stdio.h>
#include <stdlib.h>

double pow(double base, double exponent);

int main(void) {
    #if defined(_WIN32) || defined(_WIN64)
        system("chcp 65001"); // troca para UTF-8
    #endif
    /*Escreva um programa que 
    leia um número inteiro e 
    mostre o seu quadrado e seucubo. 
    Por exemplo, se o número de 
    entrada é 3, a saída deve ser 9 e 27.*/
    printf("Digite um numero inteiro:\n");
    int num;
    scanf("%d", &num);
    int sqrt = pow(num, 2);
    int cube = pow(num, 3);
    printf("Quadrado de %d = %d\nCubo de %d = %d", num, sqrt, num, cube);
    return EXIT_SUCCESS;
}

double pow(double base, double exponent) {
    double result = 1.0;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}