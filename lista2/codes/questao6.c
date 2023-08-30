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

    int a, result = 0;
    
    scanf("%d", &a);
    
    for (int i = 1; i <= a ; i++) {
        result += i;
    }
    printf("a somatoria dos numeros de 1 até %d é = %d", a, result);

    return EXIT_SUCCESS;
}
