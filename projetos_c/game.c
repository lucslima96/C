#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int dificuldade;
	int valor1;
	int valor2;
	int operacao;
	int resultado;
}calcular;

void jogar();
void mostrarinfo(calcular calc);

int pontos = 0;

int main(){

	srand(time(NULL));
	jogar();

	return 0;
}

void jogar(){

}

void mostrarinfo(calcular calc){

}

int somar(int resposta, calcular calc){

}

int diminuir(int resposta, calcular calc){

}

int multiplicar(int resposta, calcular calc){

}

