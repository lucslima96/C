#include <stdio.h>

int main(){
	FILE *arq;
	char c;

	arq = fopen("arquivo.txt", "r"); // leitura

	if(arq){
		while((c = getc(arq)) != EOF){ //EOF = End Of File
			printf("%c", c);
		}
	}else{
		printf("Nao achei o arquivo");
	}
	fclose(arq);

	return 0;
}
