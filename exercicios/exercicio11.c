#include <stdio.h>
// contar quantos valores pares tem em um vetor de 10 posicoes
int main(){
	int vetor[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int	contador = 0;

	for(int i = 0; i < 10; i++){
		printf("Informe um valor inteiro: ");
		scanf("%d", &vetor[i]);
	}

	for(int i = 0; i < 10; i++){
		if(vetor[i] % 2 == 0){
			contador += 1;
		}
	}
	printf("O vetor possui %d valores pares\n", contador);
}
