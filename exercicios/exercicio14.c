#include <stdio.h>

// Função que recebe um caractere como entrada e retorna o mesmo caractere em maiúsculo
char get_maiusculo(char caractere) {
    // Converte o caractere para maiúsculo subtraindo 32 (de acordo com a tabela ASCII)
    char maiusculo = (int)caractere - 32;
    return maiusculo; // Retorna o caractere em maiúsculo
}

// Função principal
int main() {
    // Declaração de variáveis
    char maiusculo;
    char caractere = 'j';

    // Chamando a função get_maiusculo para obter o caractere em maiúsculo
    maiusculo = get_maiusculo(caractere);

    // Imprimindo o resultado
    printf("O caractere %c em maiusculo é %c", caractere, maiusculo);

    // Indicando que o programa foi executado com sucesso
    return 0;
}
