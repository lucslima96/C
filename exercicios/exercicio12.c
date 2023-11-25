/*ler um vetor de 10 posicoes e atribuir um valor 0
para todos elementos com valores negativos*/

#include <stdio.h>

int main(){
	int vetor[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

	for(int i = 0; i < 10; i++){
		printf("Digite o valor %d: ", i+1);
		scanf("%d", &vetor[i]);
		if(vetor[i] < 0){
			vetor[i] = 0;
		}
	}
	for(int i = 0; i < 10; i++){
		printf("O valor do vetor[%d] é : %d \n", i , vetor[i]);
	}
}
