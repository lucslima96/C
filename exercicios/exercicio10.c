#include <stdio.h>

int main(){
	int A[6], soma = 0;
	// atribuindo os valores
	A[0] = 1;
	A[1] = 0;
	A[2] = 5;
	A[3] = -2;
	A[4] = -5;
	A[5] = 7;
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
