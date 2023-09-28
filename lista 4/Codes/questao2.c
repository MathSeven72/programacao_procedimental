/*
 * Arquivo: questao2.c
 * Compilação: gcc -std=c99 questao2.c -o questao2
 * Autor: Matheus Souza Da Costa 12021EEL021
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    #if defined(_WIN32) || defined(_WIN64)
        system("chcp 65001"); // troca para UTF-8
    #endif

    char input[81], output[81];
    
    printf("Digite uma string (até 80 caracteres): ");
    fgets(input, sizeof(input), stdin);
    
    int input_len = strlen(input);
    int output_len = 0;
    int space_count = 0;
    
    for (int i = 0; i < input_len; i++) {
        if (input[i] != ' ') {
            // Se o caractere não for um espaço, copie-o para a string de saída
            output[output_len] = input[i];
            output_len++;
            space_count = 0; // Zera a contagem de espaços consecutivos
        } else {
            // Se for um espaço, conte-o apenas se não houver muitos espaços consecutivos
            if (space_count < 1) {
                output[output_len] = input[i];
                output_len++;
                space_count++;
            }
        }
    }
    
    // Adicione o caractere nulo de terminação da string
    output[output_len] = '\0';
    
    printf("String sem espaços extras: %s\n", output);

    return EXIT_SUCCESS;
}
