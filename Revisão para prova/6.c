/*
6. Escreva um programa que leia duas vari�veis reais e troque o conte�do entre elas.
*/
#include<stdio.h>
int main(){
	int num1, num2, aux;
	printf("Digite o primeiro numero: ");
	scanf("%d", &num1);
	printf("Digite o segundo numero: ");
	scanf("%d", &num2);
	aux = num2;
	num2 = num1;
	num1 = aux;
	printf("\nA troca foi o primeiro numero: %d", num1);
	printf("\nA troca foi o segundo numero: %d", num2);
}
