#include <stdio.h>

int main() {
    // Declarando ponteiros de arquivo
    FILE *arq, *arq1;
    // Inicializando uma variável de caractere
    char caractere = 'A';

    // Abrindo o arquivo "arq.txt" para escrita (w)
    arq1 = fopen("arq.txt", "w");
    // Verificando se o arquivo foi aberto com sucesso
    if (arq1) {
        // Loop para obter caracteres do usuário até '0'
        while (caractere != '0') {
            // Solicitando um caractere ao usuário
            printf("Informe um caractere, ou 0 para sair:");
            // Lendo um caractere do usuário
            scanf(" %c", &caractere);

            // Verificando se o caractere não é '0' para evitar gravá-lo no arquivo
            if (caractere != '0') {
                // Gravando o caractere no arquivo
                fputc(caractere, arq1);
            }
        }
        // Fechando o arquivo após o loop
        fclose(arq1);
    } else {
        // Imprimindo uma mensagem se o arquivo não pôde ser criado
        printf("Nao foi possivel criar o arquivo");
    }

    // Abrindo o arquivo "arq.txt" para leitura (r)
    arq = fopen("arq.txt", "r");

    // Verificando se o arquivo foi aberto com sucesso
    if (arq) {
        // Loop para ler e imprimir caracteres do arquivo até o final (EOF)
        while ((caractere = getc(arq)) != EOF) {
            // Imprimindo cada caractere
            printf("%c\n", caractere);
        }
        // Fechando o arquivo após o loop
        fclose(arq);
    } else {
        // Imprimindo uma mensagem se o arquivo não pôde ser aberto
        printf("O arquivo nao existe ou nao foi possivel abrir");
    }

    // Retornando 0 para indicar que o programa foi executado com sucesso
    return 0;
}
