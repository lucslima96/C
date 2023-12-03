/*Considerando a estrutura que representa um vetor R3:
struct Vetor{
float x;
float y;
float z;
};
Implemente um programa que receba, calcule e apresente a soma de dois vetores.*/
#include <stdio.h>

struct st_vetor{
	float x;
	float y;
	float z;
}vetores[3];

int main(){
	for(int i = 0; i < 2; i++){
		printf("Digite o valor de x: ");
		scanf("%f", &vetores[i].x);

		printf("Digite o valor de y: ");
		scanf("%f", &vetores[i].y);

		printf("Digite o valor de z: ");
		scanf("%f", &vetores[i].z);

	}
	vetores[2].x = vetores[0].x + vetores[1].x;
	vetores[2].y = vetores[0].y + vetores[1].y;
	vetores[2].z = vetores[0].z + vetores[1].z;

	printf("A soma dos vetores x: %.2f, y: %.2f, z: %.2f", vetores[2].x, vetores[2].y, vetores[2].z);

}
