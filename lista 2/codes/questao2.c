/*
 * Arquivo: questao2.c
 * Compilação: gcc -std=c99 questao2.c -o questao2
 * Autor: Matheus Souza Da Costa 12021EEL021
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    #if defined(_WIN32) || defined(_WIN64)
        system("chcp 65001"); // troca para UTF-8
    #endif

    int a;
    
    scanf("%d", &a);
    /*oque acontece aqui é que a conta solicitada 
    esta sendo feita mas não existe um comparativo
    para verificar se esta correto, o correto seria:
    
    if(a % 2 == 0){
        printf("O valor é par.\n");
        }
    
    Do jeito que se encontra o programa ele sempre
    irá trazer o print especificado abaixo 
    idepentente de ser par ou não*/
    if (a % 2) printf ("O valor é par.\n"); 

    return EXIT_SUCCESS;
}
