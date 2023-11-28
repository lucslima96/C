/*Faça um programa que contenha duas variáveis inteiras. Leia estas variáveis do teclado. Em seguida,
compare seus endereços e exiba o conteúdo do maior endereço*/

#include <stdio.h>

int main(){
	int var1, var2;

	printf("Insira o valor da variavel 1: ");
	scanf("%d", &var1);
	printf("Insira o valor da variavel 2: ");
	scanf("%d", &var2);

	printf("Comparando: endereco var1: %p, endereco var2: %p\n", &var1, &var2);

	if(&var1 > &var2){
		printf("O endereco da variavel 1 é o maior: %d", var1);
	}else{
		printf("O endereco da variavel 2 é o maior: %d", var2);
	}
}

