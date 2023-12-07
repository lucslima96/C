#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int size = 5;

    // Alocar dinamicamente um array de inteiros com tamanho 'size' e inicializar com zero
    arr = (int*)calloc(size, sizeof(int)); //diferenca pro malloc esta nessa linha, aqui pede os dois parametros para multiplicar

    if (arr == NULL) {
        printf("Falha na alocação de memória.\n");
        return 1; // Sair do programa com código de erro
    }

    // Imprimir os valores do array (todos os elementos devem ser zero)
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }

    // Liberar a memória alocada quando não for mais necessária
    free(arr);

    return 0;
}
