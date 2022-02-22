/*
8. Construir um programa que indique se o número 
digitado está compreendido entre 20 e 90 ou não.
*/
#include<stdio.h>
int main(){
	int num;
	printf("Informe um numero: ");
	scanf("%d", &num);
	if(num >= 20 && num <= 90){
		printf("O numero esta entre 20 e 90");
	} else {
		printf("O numero nao esta entre 20 e 90");
	}
}
