#include <stdio.h>  // Inclusão da biblioteca padrão de entrada e saída

int main() {
    // Tipos de Dados Numéricos

    // Inteiro
    int inteiro = 10;
    printf("Inteiro: %d\n", inteiro);

    // Float
    float pontoFlutuante = 3.14;
    printf("Ponto Flutuante: %f\n", pontoFlutuante);

    // Double
    double duploPontoFlutuante = 2.71828;
    printf("Duplo Ponto Flutuante: %lf\n", duploPontoFlutuante);

    // Tipos de Dados Alfanuméricos

    // Caractere
    char caractere = 'A';
    printf("Caractere: %c\n", caractere);

    // String
    char string[] = "Hello, World!";
    printf("String: %s\n", string);

    // Tipos de Dados Booleanos

    // Booleano
    _Bool booleano = 1;  // 1 representa verdadeiro, 0 representa falso
    printf("Booleano: %d\n", booleano);

    // Operações Matemáticas Básicas

    // Soma
    int soma = 5 + 3;
    printf("Soma: %d\n", soma);

    // Subtração
    int subtracao = 5 - 3;
    printf("Subtracao: %d\n", subtracao);

    // Multiplicação
    int multiplicacao = 5 * 3;
    printf("Multiplicacao: %d\n", multiplicacao);

    // Divisão
    int divisaoInteira = 5 / 3;
    float divisaoPontoFlutuante = 5.0 / 3.0;
    printf("Divisao Inteira: %d\n", divisaoInteira);
    printf("Divisao Ponto Flutuante: %f\n", divisaoPontoFlutuante);

    // Resto da Divisão
    int resto = 5 % 3;
    printf("Resto da Divisao: %d\n", resto);

    return 0;  // Indica que o programa foi executado com sucesso
}
