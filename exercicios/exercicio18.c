/*Faça um programa que contenha um array de inteiros contendo 5 elementos. Utilizando apenas aritmética
de ponteiros, leia este array do teclado e imprima o dobro de cada valor lido.*/

#include <stdio.h>

int main(){
	int var[5];

	for(int i = 0; i < 5; i++){
		printf("Digite o valor %d: ", i);
		scanf("%d", &var[i]);
	}
	for(int i = 0; i < 5; i++){
		printf("var[%d] = %d\n", i, *(var + i) * 2);
	}
}
