/*
 * Arquivo: questao4.c
 * Compilação: gcc -std=c99 questao4.c -o questao4
 * Autor: Matheus Souza Da Costa 12021EEL021
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    #if defined(_WIN32) || defined(_WIN64)
        system("chcp 65001"); // troca para UTF-8
    #endif

/*Neste code encontramos um problema meio parecido 
com o anterior a falta do int(main) e os '{}'
mas não considerando esses erros o comando 4 só é execudado se a condição 1 e condição 3 não forem satisfeitas*/
    if (cond1){
        if (cond2)
            comando1;
        else
            comando2;
    }
    else{
        if(cond3)
            comando3;
        else
            comando4;
    }
    return EXIT_SUCCESS;
}
