#include <stdio.h>

int main() {
    // Funções de Saída (Output)
    printf("Hello, World!\n");  // Imprime na tela

    // Funções de Entrada (Input)
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);  // Lê um número inteiro do usuário

    // Exibindo o valor lido
    printf("Sua idade é: %d\n", idade);

    // Formatação de Saída
    double salario = 1000.50;
    printf("Seu salário é: R$%.2f\n", salario);  // Exibe um número de ponto flutuante com 2 casas decimais

    // Caracteres e Strings
    char caractere = 'A';
    printf("Caractere: %c\n", caractere);

    char nome[50];
    printf("Digite seu nome: ");
    scanf("%s", nome);  // Lê uma string do usuário
    printf("Seu nome é: %s\n", nome);

    // Leitura de uma linha inteira (string com espaços)
    char frase[100];
    printf("Digite uma frase: ");
    getchar();  // Consumir o caractere de nova linha pendente no buffer
    fgets(frase, sizeof(frase), stdin);  // Lê uma linha da entrada padrão
    printf("Você digitou: %s", frase);

    // fflush: Limpar o buffer de saída corrigindo bugs, principalmente no windows
    printf("Esta mensagem será exibida imediatamente.\n");
    fflush(stdout);  // Garante que a saída seja exibida imediatamente

    // Arquivos: fopen, fclose
    FILE *arquivo;  // Ponteiro para o arquivo
    arquivo = fopen("exemplo.txt", "w");  // Abre o arquivo para escrever

    if (arquivo != NULL) {
        fprintf(arquivo, "Este é um exemplo de escrita em um arquivo.\n");
        fclose(arquivo);  // Fecha o arquivo após a escrita
    } else {
        printf("Erro ao abrir o arquivo.\n");
    }

    return 0;
}
