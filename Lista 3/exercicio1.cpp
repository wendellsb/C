/*
	1 -Fa�a um programa que leia uma sequ�ncia de 100 n�meros e informe 
quantos n�meros digitados s�o negativos.
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
