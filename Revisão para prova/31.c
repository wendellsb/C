/*
1. Faça um programa que leia uma sequência de 
100 números e informe quantos números digitados são negativos.
*/
#include<stdio.h>
int main(){
	int num, i, negativo=0;

	for(i=1; i<=3; i++){
		printf("Informe um numero: ");
		scanf("%d", &num);
		if(num<0){
			negativo++;
		}
	}
	printf("Negativos foram: %d", negativo);
}
