#include <stdio.h>

// Função que recebe um ponteiro para inteiro e o incrementa
void incrementa(int* valor) {
    // Mensagem antes de incrementar
    printf("Antes de incrementar\n");
    // Imprime o valor atual da variável apontada pelo ponteiro
    printf("O contador vale %d\n", (*valor));
    // Mensagem depois de incrementar.
    printf("Depois de incrementar.\n");
    // Incrementa o valor apontado pelo ponteiro usando o operador ++
    (*valor)++;
    // Imprime o novo valor da variável apontada pelo ponteiro
    printf("O contador vale %d\n", *valor);
}

// Função principal
int main() {
    // Declaração e inicialização de uma variável inteira chamada contador
    int contador = 10;

    // Mensagem antes de incrementar
    printf("Antes de incrementar\n");
    // Imprime o valor atual da variável contador
    printf("O contador vale %d\n", contador);

    // Chama a função incrementa, passando o endereço da variável contador
    incrementa(&contador);

    // Mensagem depois de incrementar
    printf("Depois de incrementar\n");
    // Imprime o novo valor da variável contador
    printf("O contador vale %d\n", contador);

    // Retorna 0 para indicar que o programa foi executado com sucesso
    return 0;
}
