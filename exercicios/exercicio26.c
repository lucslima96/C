/*Faça um programa aloque inicialmente um vetor com 3 inteiros, pergunte ao usuário quantos valores ele
quer informar, use REALLOC caso seja mais que 3 valores, leia e apresente os valores.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int *vetor;
	int tamanhoinicial = 3;
	int tamanhoatual;

	vetor = (int*)malloc(tamanhoinicial * sizeof(int));

	tamanhoatual = tamanhoinicial;

	printf("Quantos valores deseja informar: ");
	scanf("%d", &tamanhoatual);

	if(tamanhoatual > tamanhoinicial){
		vetor = (int*)realloc(vetor, tamanhoatual *sizeof(int));
	}
	for(int i = 0; i < tamanhoatual; i++){
		printf("Informe o valor do vetor na posicao %d: ", i);
		scanf("%d", &vetor[i]);
	}
	for(int i = 0; i < tamanhoatual; i++){
		printf("vetor[%d] = %d\n", i, vetor[i]);
	}
}
