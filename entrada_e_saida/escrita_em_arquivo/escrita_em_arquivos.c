#include <stdio.h>

int main(){

	char fruta[10];
	FILE *arq;
	arq = fopen("arquivo.txt", "w"); // escrita

	if(arq){
		printf("Informe uma fruta, ou 0 para sair\n");
		fgets(fruta, 10, stdin); //stdin = standard input
		while(fruta[0] != '0'){
			fputs(fruta, arq);
			printf("Informe uma fruta, ou 0 para sair\n");
			fgets(fruta, 10, stdin);
		}

	}else{
		printf("Nao foi possivel criar o arquivo");
	}
	fclose(arq);
	return 0;
}
