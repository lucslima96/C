/*Faça um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real e char. Associe
as variáveis aos ponteiros (use &). Modifique os valores de cada variável usando os ponteiros. Imprima os
valores das variáveis antes e após a modificação.*/

#include <stdio.h>

//funcoes
void incrementa(int* inteiro){
	(*inteiro)++;
	printf("Valor após incrementar: %d\n", (*inteiro));
}


//principal
int main(){
	int inteiro = 10;
	float real = 5.50;
	char caractere = 'l';

	printf("Valor antes de incrementar: %d\n", inteiro);
	//utilizando funcao com ponteiro para mudar variavel inteiro
	incrementa(&inteiro);
	// testando se modificou o valor da variavel inteiro
	printf("Testar se ponteiro funcionou, valor = %d\n", inteiro);
	//declarando ponteiro
	float* ponteiro_real;
	char* ponteiro_char;
	ponteiro_real = &real;
	ponteiro_char = &caractere;

	printf("O valor real é: %.2f\n", real);
	printf("O caractere é: %c", caractere);


	return 0;
}
