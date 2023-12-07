#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int size = 5;

    // Alocar dinamicamente um array de inteiros com tamanho 'size'
    arr = (int*)malloc(size * sizeof(int));

    if (arr == NULL) {
        printf("Falha na alocação de memória.\n");
        return 1; // Sair do programa com código de erro
    }

    // Imprimir os valores do array
    printf("Array original:\n");
    for (int i = 0; i < size; ++i) {
        arr[i] = i * 2;
        printf("%d ", arr[i]);
    }

    // Redimensionar o array para um novo tamanho
    int newSize = 8;
    arr = (int*)realloc(arr, newSize * sizeof(int));

    if (arr == NULL) {
        printf("Falha na realocação de memória.\n");
        return 1; // Sair do programa com código de erro
    }

    // Imprimir os valores do array após a realocação
    printf("\nArray realocado:\n");
    for (int i = 0; i < newSize; ++i) {
        printf("%d ", arr[i]);
    }

    // Liberar a memória alocada quando não for mais necessária
    free(arr);

    return 0;
}
