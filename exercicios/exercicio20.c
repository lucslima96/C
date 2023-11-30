/*Faça um programa que receba do usuário o nome de um arquivo texto e mostre na tela quantas linhas
este arquivo possui.*/

#include <stdio.h>

int main(){
	FILE *arq;
	char nome_arquivo[12]; //arquivo.txt\o <- 12 caracteres
	int contador = 0;

	printf("Digite o nome do arquivo que deseja abrir: ");
	fgets(nome_arquivo, 12, stdin);

	arq = fopen(nome_arquivo, "r");

	if(arq){
		for(char c = getc(arq); c!= EOF; c = getc(arq)){
			if( c == '\n'){
				contador += 1;
			}
		}
		printf("O arquivo possui %d linhas", contador);
	}else{
		printf("Nao foi possivel abrir o arquivo");
	}

}
