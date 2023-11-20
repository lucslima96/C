#include <stdio.h>

// Função principal
int main() {
    // Declaração de variáveis
    int numero, soma = 0;

    // Loop for para solicitar cinco números
    for (int i = 0; i < 5; i++) {
        printf("Informe um numero: ");
        scanf("%d", &numero);
        soma = soma + numero;
    }
    printf("A soma dos numeros informados e: %d\n", soma);
    return 0;
}
