//Faça um programa que leia 10 números e escreva o maior e o menor valor lido

#include <stdio.h>

int main(){
    // Declaração das variáveis
    int numero, maior, menor;

    // Loop para ler 10 números
    for(int i = 0; i < 10; i++){
        // Solicita ao usuário que informe um valor
        printf("Informe o valor de %d de 10: ", i + 1);

        // Lê o valor fornecido pelo usuário e armazena em 'numero'
        scanf("%d", &numero);

        // Verifica se é o primeiro número lido
        if(i == 0){
            // Se for o primeiro, define tanto 'maior' quanto 'menor' como o número lido
            maior = numero;
            menor = numero;
        }

        // Verifica se o número lido é maior que o maior número até agora
        if(numero > maior){
            // Se for maior, atualiza 'maior' com o valor lido
            maior = numero;
        }

        // Verifica se o número lido é menor que o menor número até agora
        if(numero < menor){
            // Se for menor, atualiza 'menor' com o valor lido
            menor = numero;
        }
    }
    // Exibe o número maior e o número menor até o momento
    printf("O numero maior é %d e o menor é %d\n", maior, menor);

    // Fim do programa
}
