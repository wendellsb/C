/*
1. Fa�a um programa que leia uma sequ�ncia de 
100 n�meros e informe quantos n�meros digitados s�o negativos.
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
