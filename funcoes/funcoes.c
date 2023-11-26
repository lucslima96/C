#include <stdio.h>

// Declarando funções antes de usá-las (protótipos)

// Protótipo da função para imprimir mensagem de boas-vindas
void mensagem(){
	printf("Bem-Vindo\n");
}
// Protótipo da função para calcular a soma de dois inteiros
int soma(int num1, int num2){
	int res = num1 + num2;
	return res;
}
// Protótipo da função para imprimir o próximo caractere na tabela ASCII
void proximo_char(char caractere){
	printf("%c", caractere+1);
}

int main(){
	// Declarando e inicializando uma variável do tipo char com o valor 'a'
	char letra = 'a';

	printf("Olá...\n");
	// Chamando a função mensagem para imprimir uma mensagem de boas-vindas
	mensagem();

	// Chamando a função soma com os argumentos 4 e 6, e imprimindo o resultado
	int retorno = soma(4, 6);
	printf("%d\n", retorno);
	// Chamando a função proximo_char com a letra 'a' e imprimindo o próximo caractere
	proximo_char(letra);
	return 0;
}
