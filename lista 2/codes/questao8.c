/*
 * Arquivo: questao8.c
 * Compilação: gcc -std=c99 questao8.c -o questao8
 * Autor: Matheus Souza Da Costa 12021EEL021
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    #if defined(_WIN32) || defined(_WIN64)
        system("chcp 65001"); // troca para UTF-8
    #endif

    int n, numero, soma = 0;

    // Solicita ao usuário que insira a quantidade de números (n)
    do{

        printf("Digite a quantidade de números a serem somados: ");
        
        scanf("%d", &n);
        
        // Verifica se n é um número positivo
        
        if (n <= 0) {
            printf("Digite um número positivo para a quantidade de números.\n");
        }
    } /* se caso o numero não for maior que 0
    entra em um loop ate que a condição seja satisfeita*/
    while (n <= 0);

    // Solicita ao usuário que insira os números e calcula a soma
    printf("Digite os %d números:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numero);
        soma += numero;
    }

    // Imprime a soma dos números
    printf("A soma dos %d números é: %d\n", n, soma);

    return EXIT_SUCCESS;
}