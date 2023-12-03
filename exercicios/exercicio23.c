/*Crie um programa que tenha uma struct chamada aluno contendo nome, número de matrícula e curso.
Leia do usuário a informação de 5 alunos, armazene em um vetor desta estrutura e imprima os dados na
tela.*/
#include <stdio.h>

struct st_aluno{
	char nome[100];
	char matricula[10];
	char curso[150];
}aluno[5];

int main(){
	for(int i = 0; i < 5; i++){
		printf("Digite o nome do aluno %d: ", i+1);
		fgets(aluno[i].nome, 100, stdin);

		printf("Digite a matricula do aluno %d: ", i+1);
		fgets(aluno[i].matricula, 10, stdin);

		printf("Digite o curso do aluno %d: ", i+1);
		fgets(aluno[i].curso, 150, stdin);
	}
	for(int i = 0; i < 5; i++){
		printf("Dados %d de 5:\n", i+1);
		printf("Nome: %s", aluno[i].nome);
		printf("Matricula: %s", aluno[i].matricula);
		printf("Curso: %s", aluno[i].curso);
		printf("---------------------------\n");

	}
}
