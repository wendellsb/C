/*
	2.  Escreva um programa que leia um n�mero inteiro e determine se ele � par ou �mpar.
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
