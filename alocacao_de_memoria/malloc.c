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

    // Inicializar o array
    for (int i = 0; i < size; ++i) {
        arr[i] = i * 2;
    }

    // Imprimir os valores do array
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }

    // Liberar a memória alocada quando não for mais necessária
    free(arr);

    return 0;
}
