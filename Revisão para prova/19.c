/*
5.  Ler três números a partir do teclado e apresentá-los em ordem decrescente.
*/
#include<stdio.h>
int main(){
	int n1, n2, n3;
	printf("informe o primeiro numero: ");
	scanf("%d", &n1);
	printf("informe o segundo numero: ");
	scanf("%d", &n2);
	printf("informe o terceiro numero: ");
	scanf("%d", &n3);
	if(n1>n2 && n1>n3){
		if(n2>n3){
			printf("A ondem decresente: %d > %d > %d", n1, n2, n3);
		} else {
			printf("A ondem decresente: %d > %d > %d", n1, n3, n2);
		}
	}
	if(n2>n1 && n2>n3){
		if(n1>n3){
			printf("A ondem decresente: %d > %d > %d", n2, n1, n3);
		} else {
			printf("A ondem decresente: %d > %d > %d", n2, n3, n1);
		}
	}
	if(n3>n1 && n3>n2){
		if(n1>n2){
		printf("A ondem decresente: %d > %d > %d", n3, n1, n2);	
	} else {
		printf("A ondem decresente: %d > %d > %d", n3, n2, n1);	
	}	}	}
	
	
	
	
	
	
	
	
