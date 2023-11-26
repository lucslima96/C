#include <stdio.h>

// Declarando funções antes de usá-las (protótipos)
void mensagem();                      // Protótipo da função para imprimir mensagem de boas-vindas
int soma(int num1, int num2);         // Protótipo da função para calcular a soma de dois inteiros
void proximo_char(char caractere);    // Protótipo da função para imprimir o próximo caractere na tabela ASCII

int main() {
    // Declarando e inicializando uma variável do tipo char com o valor 'a'
    char letra = 'a';

    // Imprimindo uma mensagem inicial
    printf("Olá...\n");

    // Chamando a função mensagem para imprimir uma mensagem de boas-vindas
    mensagem(); // Bloco de comandos da função mensagem

    // Chamando a função soma com os argumentos 4 e 6, e imprimindo o resultado
    int retorno = soma(4, 6);
    printf("%d\n", retorno); // Bloco de comandos da função soma

    // Chamando a função proximo_char com a letra 'a' e imprimindo o próximo caractere
    proximo_char(letra); // Bloco de comandos da função proximo_char

    // Indicando que o programa foi executado com sucesso
    return 0;
}

// Definindo a função mensagem que imprime uma mensagem de boas-vindas
void mensagem() {
    printf("Bem-Vindo\n"); // Bloco de comandos da função mensagem
}

// Definindo a função soma que retorna a soma de dois inteiros
int soma(int num1, int num2) {
    int res = num1 + num2;
    return res; // Bloco de comandos da função soma
}

// Definindo a função proximo_char que imprime o próximo caractere na tabela ASCII
void proximo_char(char caractere) {
    printf("%c", caractere + 1); // Bloco de comandos da função proximo_char
}
