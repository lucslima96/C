// Ler quatro notas e calcular a media aritmética
#include <stdio.h>

int main(){
	float nota1, nota2, nota3, nota4, media;

	printf("Digite a primeira nota: ");
	scanf("%f", &nota1);

	printf("Digite a segunda nota: ");
	scanf("%f", &nota2);

	printf("Digite a terceira nota: ");
	scanf("%f", &nota3);

	printf("Digite a quarta nota: ");
	scanf("%f", &nota4);

	media = (nota1 + nota2 + nota3 + nota4) / 4;
	printf("A media final é %.2f", media);

}
