/*
 * Arquivo: questao3.c
 * Compilação: gcc -std=c99 questao3.c -o questao3
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
/* Primeiro que existem muitos erros neste programa 
sendo que no enunciado não tem o int(main) e tambem
a falta de "{}", então não seria execudado nada,
entretando se ele estivesse correto o comando 2 só seria executado se a condição 1 fosse satisfeita.*/
    if (cond1)
        if (cond2)
            comando1;
    else
        comando2;
>>>>>>> f69c5bc17d470561ff8dc1bc33a9cf65be427e70

    return EXIT_SUCCESS;
}
