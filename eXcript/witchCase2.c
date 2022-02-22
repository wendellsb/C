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
		case 1:
		case 2:
		case 3:
		case 4:
			printf("A opcao digitado foi entre 0 e 4");
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
		// o default executa
		// caso nao esteja na lista
		// caso nao tenha breack	
		
	}
	return 0;
}

