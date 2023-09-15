/*
 * Arquivo: questao7.c
 * Compilação: gcc -std=c99 questao7.c -o questao7
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
    int i, n;
    
    scanf("%d", &n);
    i=1;
    do{
        printf("%d\n",i);
        i = i+1;
    } while(i <= n);
    /* se o usuario digitar 0 a saida será 1
    justamente porque o programa é um contador que
    inicia em 1 e vai ate n que no caso foi o numero
    que o usuario colocou*/
>>>>>>> f69c5bc17d470561ff8dc1bc33a9cf65be427e70
    return EXIT_SUCCESS;
}
