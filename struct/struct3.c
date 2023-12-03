#include <stdio.h>
#include <string.h>

// Definição da estrutura para armazenar informações do aluno
struct st_contato {
    char nome[100];
    int ano_nascimento;
    char email[100];
    char telefone[20];
};

// Definição da estrutura para a agenda que armazenará contatos
struct st_agenda {
    struct st_contato contatos[100];
} agenda;

// Função principal
int main() {
    // Loop para coletar informações de 3 contatos
    for (int i = 0; i < 3; i++) {
        printf("Informe o nome do contato %d: ", i + 1);
        fgets(agenda.contatos[i].nome, 100, stdin);

        printf("Informe o ano de nascimento do contato %d: ", i + 1);
        scanf("%d", &agenda.contatos[i].ano_nascimento);
        getchar();  // Limpar o caractere de nova linha pendente no buffer

        printf("Informe o email do contato: ");
        fgets(agenda.contatos[i].email, 100, stdin);

        printf("Informe o telefone do contato: ");
        fgets(agenda.contatos[i].telefone, 20, stdin);
    }

    // Exibição dos dados dos contatos
    for (int i = 0; i < 3; i++) {
        printf("=============Dados do contato=============\n");
        printf("Nome: %s", agenda.contatos[i].nome);
        printf("Ano de nascimento: %d\n", agenda.contatos[i].ano_nascimento);
        printf("Email: %s", agenda.contatos[i].email);
        printf("Telefone: %s", agenda.contatos[i].telefone);
    }

    return 0;  // Indica que o programa foi executado com sucesso
}
