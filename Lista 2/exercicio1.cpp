/*
	1.  Construir um programa que leia dois valores numéricos e 
efetue a adição, caso o resultado seja maior que 10 apresentá-lo
*/
#include<stdio.h>
int main(){
	int num1, num2, soma;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &num1);
	printf("Digite o segundo numero: ");
	scanf("%d", &num2);
	soma = num1 + num2;
	if(soma >= 10){
		printf("A soma e maior que 10!");
	} else {
		printf("A soma e menor que 10!");
	}
	return 0;
}
