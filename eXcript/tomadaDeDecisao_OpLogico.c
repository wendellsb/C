#include<stdio.h>
#include<stdlib.h>
int main()
{
	/*
	== comparação
	= atribuição
	!= diferente (sinal de NOT)
	1 - positivo = 1
	2 - negativo = 2
	
 	int i=10;
	printf("\n%d\n", i!=1); resposta 1
	printf("\n%d\n", !(i==1)); resposta 1
	*/
	int i=10;
	printf("Digite um numero != de 5: \n");
	scanf("%d", &i);
	if(i==5){
		printf("A expressao e: ");
		printf("TRUE");
	} else {
		printf("A expressao e: ");
		printf("FALSE");
	}
	
	
	return 0;
}
