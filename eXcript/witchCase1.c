#include<stdio.h>
#include<stdlib.h>
int main(){
	/*
	switch(expressao){
		case(expressao-const):
			break;
		case(true):
			break;
		default:
			//bao precisa de break;
	}
	*/
	int i;
	printf("Digite um valor entre 0 e 7\n");
	scanf("%i", &i);
	switch(i){
		case 0:
			printf("A opcao digitada foi 'um'");
			break;
		case 1:
			printf("A opcao digitada foi 'um'");
			break;
		case 2:
			printf("A opcao digitada foi 'dois'");
			break;
		case 3:
			printf("A opcao digitada foi 'tres'");
			break;
		case 4:
			printf("A opcao digitada foi 'quatro'");
			break;
		case 5:
			printf("A opcao digitada foi 'cinco'");
			break;
		case 6:
			printf("A opcao digitada foi 'seis'");
			break;
		case 7:
			printf("A opcao digitada foi 'sete'");
			break;
		default:
			printf("A opcao default");
	}
	return 0;
}














