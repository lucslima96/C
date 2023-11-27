/*Faça um programa que tenha uma função que dado um valor numérico de entrada, gere e imprima como
saída o número de linhas com pontos de exclamação, conforme exemplo abaixo (para n = 5):
!
!!
!!!
!!!!
!!!!!
*/

#include <stdio.h>

void imprime_pontos(int num){
	for(int i = 1; i <= num; i++){
		for(int j = 0; j < i; j++){
			printf("!");
		}
	printf("\n");
	}
}

int main(){
	imprime_pontos(10);

}
