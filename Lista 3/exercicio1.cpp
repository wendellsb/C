/*
	1 -Faça um programa que leia uma sequência de 100 números e informe 
quantos números digitados são negativos.
*/
#include<stdio.h>
int main(){
	int i, numero, negativo = 0;
	
	for(i=1; i<=5; i++){
		printf("Informe o %d numero: ", i);
		scanf("%d", &numero);
		if(numero < 0){
			negativo++;
		}
	}
	printf("A quantidade de numeros negativos foi: %d", negativo);
}
