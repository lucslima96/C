/*1. Crie um programa que:
a) Aloque dinamicamente um array de 5 números inteiros;
b) Peça para o usuário informar os 5 números no espaço alocado;
c) Mostre na tela os 5 valores;
d) Libere a memória alocada;*/

#include <stdio.h>
#include <stdlib.h>

int main(){

	int array[5], *p;

	p = (int*)malloc(sizeof(array));

	for(int i = 0; i < 5; i++){
		printf("Informe o numero na posicao %d: ", i);
		scanf("%d", &p[i]);
	}
	for(int i = 0; i < 5; i++){
		printf("Valor na posicao %d do vetor: %d\n", i, p[i]);
	}
	free(p);

	return 0;
}
