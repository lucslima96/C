/* Faça um programa que determine e mostre os cinco primeiros múltiplos de 3, considerando números
maiores que 0.*/

#include <stdio.h>

int main(){
	int numero = 1;
	int contador = 0;

	while(contador < 5){
		if (numero % 3 == 0){
			printf("o numero é multiplo de tres: %d\n", numero);
			contador += 1;
		}
		numero += 1;
	}
}
