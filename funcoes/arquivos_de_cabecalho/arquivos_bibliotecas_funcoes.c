#include <stdio.h>
#include "ajuda.h"

int main(){
	int n1, n2, ret_s, ret_m;

	mensagem();
	printf("Informe o primeiro numero: ");
	scanf("%d", &n1);

	printf("Informe o segundo numero: ");
	scanf("%d", &n2);

	ret_s = soma(n1, n2);
	printf("A soma de %d com %d é %d\n", n1, n2, ret_s);

	ret_m = multiplicacao(n1, n2);
	printf("O resultado da multiplicacao de %d com %d é %d", n1, n2, ret_m);

	return 0;
}
