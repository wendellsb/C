#include<stdio.h>
#include<stdlib.h>
int main(){
	int i=20;
	do{
		printf("%i\n", i);
		i--;
	}
	while(i>=10);
	printf("\n");	
	int x=1;
	do{
		printf("%i\n", x);
		x++;
	}
	while(x<=10);
	printf("\n");
	int cont = 1, num;
	do{
		printf("\nDigite 0 para sair do loop: ");
		scanf("%d", &num);
		printf("O numero digitado foi %i\n", num);
		printf("Quantidade de vezes: %i\n", cont);
		cont++;
	}while(num != 0);
	
	return 0;
}








