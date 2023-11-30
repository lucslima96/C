/*Faça um programa que receba do usuário o nome de um arquivo texto e um caractere. Mostre na tela
quantas vezes aquele caractere aparece dentro do arquivo.*/

#include <stdio.h>

int main(){
	FILE *arq;
	int contador = 0;
	char arquivo_abrir[12], c;

	printf("Digite o nome do arquivo que deseja abrir: ");
	fgets(arquivo_abrir, 12, stdin);

	arq = fopen(arquivo_abrir, "r");

	if(arq){
		printf("Digite o caractere que deseja contar: ");
		scanf(" %c", &c);
		for(char ch = getc(arq); ch != EOF; ch = getc(arq)){
			if(ch == c){
				contador += 1;
			}
		}
		printf("A letra %c apareceu %d vezes", c, contador);
		fclose(arq);
	}else{
		printf("Arquivo nao encontrado");
	}
}
