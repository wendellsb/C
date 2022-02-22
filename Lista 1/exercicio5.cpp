/*
	5. (condicional) Faça um algoritmo que receba um número e mostre uma mensagem caso
este número seja maior que 10.
*/

#include<stdio.h>

int main(){
	int num;
	printf("Informe um numero para teste: ");
	scanf("%d", &num);
	if(num > 10){
		printf("O numero digitado foi maior que 10");
	} else {
		printf("O numero digitado foi menor que 10");
	}
	return 0;
}
