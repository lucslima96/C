/*Três amigos jogaram na loteria. Caso eles ganhem, o prêmio deve ser repartido proporcionalmente ao
valor que cada um deu para a realização da aposta. Faça um programa que leia quanto cada apostador
apostou, o valor do prêmio e imprima quanto cada um ganharia do prêmio com base no valor investido*/

#include <stdio.h>

int main(){
	float aposta1, aposta2, aposta3, total_aposta= 0;
	float premio = 0;
	float porcentagem1, porcentagem2, porcentagem3, porcentagem_total;
	float premio1, premio2, premio3, total_premios;

	printf("Digite quanto o primeiro apostador deu: ");
	scanf("%f", &aposta1);

	printf("Digite quanto o segundo apostador deu: ");
	scanf("%f", &aposta2);

	printf("Digite quanto o terceiro apostador deu: ");
	scanf("%f", &aposta3);

	printf("Digite o valor do premio: ");
	scanf("%f", &premio);

	total_aposta = (float)(aposta1 + aposta2 +aposta3);
	printf("O total de apostas foi de %.2f\n", total_aposta);

	porcentagem1 = (float)(aposta1 / total_aposta);
	porcentagem2 = (float)(aposta2 / total_aposta);
	porcentagem3 = (float)(aposta3 / total_aposta);
	porcentagem_total = (float)(porcentagem1 + porcentagem2 + porcentagem3);
	printf("O total de porcentagens é %.2f\n", porcentagem_total);

	premio1 = (float)(premio * porcentagem1);
	premio2 = (float)(premio * porcentagem2);
	premio3 = (float)(premio * porcentagem3);
	total_premios = (float)(premio1 + premio2 +premio3);
	printf("O total em premios é %.2f\n", total_premios);

	printf("O apostador 1 apostou %.2f que corresponde a %.2f e deverá receber o premio de %.2f\n", aposta1, porcentagem1, premio1);
	printf("O apostador 1 apostou %.2f que corresponde a %.2f e deverá receber o premio de %.2f\n", aposta2, porcentagem2, premio2);
	printf("O apostador 1 apostou %.2f que corresponde a %.2f e deverá receber o premio de %.2f\n", aposta3, porcentagem3, premio3);


}
