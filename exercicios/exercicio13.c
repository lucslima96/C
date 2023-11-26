#include <stdio.h>
/*Faça um programa que tenha uma função que receba um vetor de inteiros como parâmetro e retorne o
maior valor.*/

int maior_valor(int vetor[], int qtd){
	int maior = 0;

	for(int i = 0; i < qtd; i++){
		if (i == 0){
			maior = vetor[i];
		}
		if(vetor[i] > maior){
			maior = vetor[i];
		}
	}

	return maior;
}

int main(){

	int vetor[] = {1, 5 ,6 ,7 ,8 ,11, 23, 25 ,92, 290};

	int maior = maior_valor(vetor, 10);
	printf("O maior valor do vetor é %d", maior);
	return 0;
}
