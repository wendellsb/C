/*
13. Um vendedor necessita de um programa que calcule o preço total 
devido por um cliente, que comprou um produto em sua loja. O programa 
deve receber o código do produto e a quantidade comprada, para então 
calcular e imprimir na tela o preço total, usando a tabela abaixo:
1001 = 5.32
1324 = 6.45
6548 = 0.37
0987 = 5.32
7623 = 6.45
*/
#include<stdio.h>
int main(){
	int cod, quant;
	float total;
	
	printf("Informe o codigo do produto: ");
	scanf("%f", &cod);
	printf("Informe a quantidade comprada: ");
	scanf("%f", &quant);
	
	switch(cod):
		case 1001:
			total = 5.32*quant;
			printf("O valor a ser pago e: %.2f", total);
		break;
		case 1324:
			total = 6.45*quant;
			printf("O valor a ser pago e: %.2f", total);
		break;
		case 6548:
			total = 0.37*quant;
			printf("O valor a ser pago e: %.2f", total);
		break;
		case 0987:
			total = 5.32*quant;
			printf("O valor a ser pago e: %.2f", total);
		break;
		case 7623:
			total = 6.45*quant;
			printf("O valor a ser pago e: %.2f", total);
		break;
		deafult: 
		printf("Este código é invalido!");
	}
	return 0;
}
