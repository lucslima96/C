#include <stdio.h>
#include <string.h>

// Definição da estrutura para armazenar informações do aluno
struct st_aluno {
    char matricula[10];     // Número de matrícula, até 10 caracteres
    char nome[100];         // Nome do aluno, até 100 caracteres
    char curso[50];         // Nome do curso, até 50 caracteres
    int ano_nascimento;      // Ano de nascimento do aluno
};

// Função principal
int main() {
    // Declaração da variável para armazenar informações do aluno
    struct st_aluno aluno1;

    // Solicitação e leitura da matrícula do aluno
    printf("Informe a matricula do aluno 1: ");
    fgets(aluno1.matricula, 10, stdin);

    // Solicitação e leitura do nome do aluno
    printf("Informe o nome do aluno 1: ");
    fgets(aluno1.nome, 100, stdin);

    // Solicitação e leitura do curso do aluno
    printf("Informe o curso do aluno 1: ");
    fgets(aluno1.curso, 50, stdin);

    // Solicitação e leitura do ano de nascimento do aluno
    printf("Informe o ano de nascimento do aluno 1: ");
    scanf("%d", &aluno1.ano_nascimento);

    // Exibição dos dados do aluno
    printf("=============Dados do aluno=============\n");
    printf("Matricula: %s", aluno1.matricula);
    printf("Nome: %s", aluno1.nome);
    printf("Curso: %s", aluno1.curso);
    printf("Ano de nascimento: %d", aluno1.ano_nascimento);
}
