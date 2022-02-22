/*
	4. Escreva um programa para ler três números inteiros distintos e determinar o menor deles.
*/

#include<stdio.h>
int main(){
	int n1, n2, n3, menor;
	
	printf("Informe o primeiro numero: ");
	scanf("%d", &n1);
	printf("Informe o segundo numero: ");
	scanf("%d", &n2);
	printf("Informe o terceiro numero: ");
	scanf("%d", &n3);
	
	if((n1 < n2) && (n1 < n3)){
		printf("O menor numero e: %d", n1);
	} if((n2 <= n1) && (n2 < n3)){
		printf("O menor numero e: %d", n2);
	} else if((n3 < n1) && (n3 < n2)){
		printf("\nO menor numero e: %d", n3);
	}	
	
}
