/*
 * Arquivo: questao10.c
 * Compilação: gcc -std=c99 questao10.c -o questao10
 * Autor: Matheus Souza Da Costa 12021EEL021
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    #if defined(_WIN32) || defined(_WIN64)
        system("chcp 65001"); // troca para UTF-8
    #endif

    /*Faça um programa que troque
     os valores inteiros de duas 
     variáveis x e y. 
     Refaça este problema sem o 
     uso de outras variáveis que não x e y.*/

    int x, y;

    printf("Digite o valor de x: ");
    scanf("%d", &x);

    printf("Digite o valor de y: ");
    scanf("%d", &y);

    printf("Valores originais: x = %d, y = %d\n", x, y);

    x = x + y;
    y = x - y;
    x = x - y;

    printf("Valores trocados: x = %d, y = %d\n", x, y);

    return EXIT_SUCCESS;
}
