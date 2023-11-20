//Do.. while

#include <stdio.h>

int main(){
	int numero, soma = 0;

	do{
		printf("Informe um número: ");
		scanf("%d", &numero);
		soma = soma + numero;
	}
	while(numero !=0);
	printf("A soma é %d", soma);
}
