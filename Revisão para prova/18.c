/*
4. Escreva um programa para ler três números inteiros distintos e determinar o menor deles.
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
	
	if(n1 < n2 && n2 < n3){
		printf("O menor numero: %d", n1);
	} else if(n1 > n2 && n2 < n3){
		printf("O menor numero: %d", n2);
	} else {
		printf("O menor numero: %d", n3);
	}
}
