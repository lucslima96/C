// estruturas de decisão if, else, else if
//                       se, entao, entao se
#include <stdio.h>

int main(){
	// Declaracao de variaveis
	int idade;
	//Entrada
	printf("Qual e a sua idade? ");
	scanf("%d", &idade);

	//Processamento
	if (idade < 18){
		printf("Você é menor de idade\n");
	}
	else if (idade > 18 && idade < 60){
		printf("Você é adulto\n");
	}
	else{
		printf("Você é idoso\n");
	}

	//Saida
	printf("Sua idade é %d", idade);

	return 0;
}
