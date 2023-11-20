#include <stdio.h>
/*receber e somar numeros inteiros até que o numero de entrada
seja 0 e apresente a soma final
*/
int main(){
	int numero, soma = 0;
	printf("Informe um numero: ");
	scanf("%d", &numero);

	while(numero != 0){
		soma = soma + numero;
		printf("Informe um numero: ");
		scanf("%d", &numero);
	}
	printf("A soma é %d", soma);
	return 0;
}
