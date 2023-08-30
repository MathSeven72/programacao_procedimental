/*
 * Arquivo: questao5.c
 * Compilação: gcc -std=c99 questao5.c -o questao5
 * Autor: Matheus Souza Da Costa 12021EEL021
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    #if defined(_WIN32) || defined(_WIN64)
        system("chcp 65001"); // troca para UTF-8
    #endif


    int a, rest;
    
    printf("Digite um número inteiro:");
    
    scanf("%d", &a);
    
    rest = a % 2;
    
    if( rest == 0 && a < 100){
        printf("O numero é par e menor que 100\n");
    }
    else if(rest == 0 && a >= 100){
            printf("O numero é par e maior ou igual a 100\n");
        } 
    
    else if(rest != 0 && a < 100){
            printf("O numero é impar e menor que 100\n");
        
        }
    else {
        printf("O numero é impar e maior que 100\n");
    }
    
     
    return EXIT_SUCCESS;
}
