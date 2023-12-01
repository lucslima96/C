#include <stdio.h>
#include <string.h>

// Definição da estrutura para armazenar informações do aluno
struct st_aluno {
    char matricula[10];     // Número de matrícula, até 10 caracteres
    char nome[100];         // Nome do aluno, até 100 caracteres
    char curso[50];         // Nome do curso, até 50 caracteres
    int ano_nascimento;      // Ano de nascimento do aluno
}aluno[5]; //declarando fora do main

// Função principal
int main() {
	for(int i = 0; i < 5; i++){
	    // Solicitação e leitura da matrícula do aluno
	    printf("Informe a matricula do aluno %d: ", i+1);
	    fgets(aluno[i].matricula, 10, stdin);

	    // Solicitação e leitura do nome do aluno
	    printf("Informe o nome do aluno %d: ", i+1);
	    fgets(aluno[i].nome, 100, stdin);

	    // Solicitação e leitura do curso do aluno
	    printf("Informe o curso do aluno %d: ", i+1);
	    fgets(aluno[i].curso, 50, stdin);

	    // Solicitação e leitura do ano de nascimento do aluno
	    printf("Informe o ano de nascimento do aluno %d: ", i+1);
	    scanf("%d", &aluno[i].ano_nascimento);
	    getchar();
	}

    // Exibição dos dados do aluno
	for(int i = 0; i < 5; i++){
	    printf("=============Dados do aluno=============\n");
	    printf("Matricula: %s", aluno[i].matricula);
	    printf("Nome: %s", aluno[i].nome);
	    printf("Curso: %s", aluno[i].curso);
	    printf("Ano de nascimento: %d\n", aluno[i].ano_nascimento);
	}
}
