#include <stdio.h>

int main(){
	//atribuindo valores ao vetor
	int A[6] = {1, 0, 5, -2, -5, 7};
	int soma = 0;

	//somando os valores das posicões A[0] A[1] A[5]
	soma = A[0] + A[1] + A[5];
	printf("A soma das posicões A[0] A[1] e A[5] é %d \n", soma);
	// modificar vetor na posicao 4, atribuir valor 100
	A[4] = 100;
	//mostrar an tela cada valor do vetor A
	for(int i = 0; i < 6; i++){
		printf("A[%d] = %d \n", i, A[i]);
	}

}
