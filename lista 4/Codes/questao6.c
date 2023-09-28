/*
 * Arquivo: questao6.c
 * Compilação: gcc -std=c99 questao6.c -o questao6
 * Autor: Matheus Souza Da Costa 12021EEL021
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    #if defined(_WIN32) || defined(_WIN64)
        system("chcp 65001"); // troca para UTF-8
    #endif

    char str1[100], str2[100];
    
    printf("Digite a primeira string: ");
    gets(str1); // Leitura da primeira string
    
    printf("Digite a segunda string: ");
    gets(str2); // Leitura da segunda string
    
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    
    // Cria um array para marcar quais caracteres da primeira string estão presentes
    int charSet[256] = {0};
    
    // Marca os caracteres da primeira string no array charSet
    for (int i = 0; i < len1; i++) {
        charSet[(int)str1[i]] = 1;
    }
    
    // Cria um índice para a string resultante
    int resultIndex = 0;
    
    // Remove os caracteres da primeira string da segunda string
    for (int i = 0; i < len2; i++) {
        if (charSet[(int)str2[i]] == 0) {
            // Se o caractere não estiver na primeira string, copia-o para a string resultante
            str2[resultIndex] = str2[i];
            resultIndex++;
        }
    }
    
    // Adiciona o caractere nulo de término de string
    str2[resultIndex] = '\0';
    
    printf("String resultante: %s\n", str2);


    return EXIT_SUCCESS;
}
