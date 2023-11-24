#include <stdio.h>

int main() {
    // Exemplo 1: Declaração de Matrizes
    int matriz1[3][3];

    // Inicializando a matriz
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matriz1[i][j] = i * 3 + j + 1;
        }
    }

    // Imprimindo a matriz
    printf("Matriz de Inteiros:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", matriz1[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    // Exemplo 2: Manipulação de Elementos
    int matriz2[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    // Modificando um elemento da matriz
    matriz2[0][1] = 10;

    // Imprimindo a matriz modificada
    printf("Matriz Modificada:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", matriz2[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    // Exemplo 3: Soma de Matrizes
    int matriz3[2][3] = {
        {7, 8, 9},
        {10, 11, 12}
    };

    int soma[2][3];

    // Soma das matrizes
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            soma[i][j] = matriz2[i][j] + matriz3[i][j];
        }
    }

    // Imprimindo a matriz resultante
    printf("Soma de Matrizes:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", soma[i][j]);
        }
        printf("\n");
    }

    return 0;
}
