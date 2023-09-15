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

<<<<<<< HEAD
    /* -- seu código aqui -- */
=======
    int a, result = 0;
    
    scanf("%d", &a);
    
    for (int i = 1; i <= a ; i++) {
        result += i;
    }
    printf("a somatoria dos numeros de 1 até %d é = %d", a, result);
>>>>>>> f69c5bc17d470561ff8dc1bc33a9cf65be427e70

    return EXIT_SUCCESS;
}
