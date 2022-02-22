/*
	2.  Escreva um programa que leia um número inteiro e determine se ele é par ou ímpar.
*/

#include<stdio.h>

int main(){
	int n;
	
	printf("Informe um numero: ");
	scanf("%d", &n);
	if(n%2==0){
		printf("O numero e par!");
	} else{
		printf("O numero e impar!");
	}
}
