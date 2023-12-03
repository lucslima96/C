/*Crie um programa que leia o nome, a idade e o endereço de uma pessoa e armazene os dados em uma
struct.*/
#include <stdio.h>

struct st_dados{
	char nome[100];
	int idade;
	char endereco[200];
}dados;

int main(){

	printf("Digite seu nome: ");
	fgets(dados.nome, sizeof(dados.nome), stdin);

	printf("Digite sua idade: ");
	scanf("%d", &dados.idade);
	getchar();

	printf("Digite seu endereco: ");
	fgets(dados.endereco, sizeof(dados.endereco), stdin);

	printf("=====dados do usuario====\n");
	printf("Nome: %s", dados.nome);
	printf("Idade: %d\n", dados.idade);
	printf("Endereco: %s\n", dados.endereco);
	return 0;
}
