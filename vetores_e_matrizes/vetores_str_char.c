#include <stdio.h>

int main(){
	//vetores e strings
	char nome[50];
	printf("Qual seu nome? ");
	fgets(nome, sizeof(nome), stdin);
	printf("Ola %s", nome);

	//vetores e caracteres
	char letras[5] = {'a', 'b', 'c', 'd', 'e'};

	// Imprimir as letras
	for (int i = 0; i < 5; i++) {
		printf("Letra %d: %c\n", i + 1, letras[i]);
	    }

}
