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
<<<<<<< HEAD

    /* -- seu código aqui -- */
=======
    
    int numero;
    unsigned long long int fatorial = 1;
    
    do{
        printf("Entre com um número maior do que 1: ");
        
        scanf("%d", &numero);
        
        // Verifica se n é maior que 1
        if (numero <= 1) {
            printf("Por favor, insira um número maior que 1.\n");
        }
    } /* se caso o numero não for maior que 1
    entra em um loop ate que a condição seja satisfeita*/
    while (numero <= 1);
    
    printf("%d! = ", numero);

    while(numero > 1) {
        fatorial *= numero;
        numero--;
    }

    printf("%llu\n", fatorial);
 
>>>>>>> f69c5bc17d470561ff8dc1bc33a9cf65be427e70

    return EXIT_SUCCESS;
}
