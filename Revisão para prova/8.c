/*
8.  Deseja-se calcular a conta de consumo de energia el�trica de um consumidor. 
Para isto, escreva um programa que leia o c�digo do consumidor, o pre�o do KW e 
a quantidade de KW consumido, e exiba o c�digo do consumidor e o total a pagar.
total a pagar = pre�o x quantidade                 total a pagar m�nimo = R$ 21.23
*/
#include<stdio.h>
int main(){
	int codigo;
	float precokw, quantkw, total;
	printf("Informe o Codigo: ");
	scanf("%d", &codigo);
	printf("Informe o preco do KW: ");
	scanf("%f", &precokw);
	printf("Informe a quantidade de KW consumida: ");
	scanf("%f", &quantkw);
	
	total = precokw*quantkw;
	if(total < 21.23){
		printf("O codigo foi %d e o total a pagar e: R$ 21.23", codigo);
	} else {
		printf("O codigo foi %d e o total a pagar e: %.2f", codigo, total);
	}
}
