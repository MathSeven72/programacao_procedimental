/*
 * Arquivo: questao10.c
 * Compilação: gcc -std=c99 questao10.c -o questao10
 * Autor: Matheus Souza Da Costa 12021EEL021
 */

#include <stdio.h>
#include <stdlib.h>

double pot(int a, int b) {
    if (b == 0) {
        return 1.0; // Qualquer número elevado a 0 é 1
    } else if (b > 0) {
        return a * pot(a, b - 1); // Caso positivo: a * a^(b-1)
    } else {
        return 1.0 / (a * pot(a, -b - 1)); // Caso negativo: 1 / (a * a^(-b-1))
    }
}

int main(void) {
    #if defined(_WIN32) || defined(_WIN64)
        system("chcp 65001"); // troca para UTF-8
    #endif

    int base, expoente;

    printf("Digite a base: ");
    scanf("%d", &base);

    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    double resultado = pot(base, expoente);
    printf("%d^%d = %lf\n", base, expoente, resultado);

    return EXIT_SUCCESS;
}
