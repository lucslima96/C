#include <stdio.h>

enum dias_da_semana{
	segunda, //0
	terca, //1
	quarta, //2
	quinta, //3
	sexta, //4
	sabado, //5
	domingo //6
};

int main(){
	enum dias_da_semana d1, d2;

	d1 = quinta; //3
	d2 = 3;

	if(d1 ==d2){
		printf("Os dias são iguais.");
	}
	else{
		printf("Os dias não são iguais...");
	}


	return 0;
}
