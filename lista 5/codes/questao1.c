/*
 * Arquivo: questao1.c
 * Compilação: gcc -std=c99 questao1.c -o questao1
 * Autor: Matheus Souza Da Costa 12021EEL021
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    #if defined(_WIN32) || defined(_WIN64)
        system("chcp 65001"); // troca para UTF-8
    #endif

float distancia(int x1, int y1, int x2, int y2) {
    float dx = x2 - x1;
    float dy = y2 - y1;
    return sqrt(dx * dx + dy * dy);
}

int main() {
    int x1, y1, x2, y2;

    printf("Digite as coordenadas do primeiro ponto (x1 y1): ");
    scanf("%d %d", &x1, &y1);

    printf("Digite as coordenadas do segundo ponto (x2 y2): ");
    scanf("%d %d", &x2, &y2);

    float dist = distancia(x1, y1, x2, y2);

    printf("A distância entre os pontos P1 e P2 é: %.2f\n", dist);

    return EXIT_SUCCESS;
}
