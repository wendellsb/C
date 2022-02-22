/*
2.  Escreva um programa que leia um número inteiro e determine se ele é par ou ímpar.
*/
#include<stdio.h>
int main(){
	int n1;
	printf("informe um numero: ");
	scanf("%d", &n1);
	if(n1%2==0){
		printf("\nNumero par");
	} else {
		printf("\nNumero impar");
	}
}
