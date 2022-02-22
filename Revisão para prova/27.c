/*
13. Um vendedor necessita de um programa que calcule o preço total 
devido por um cliente, que comprou um produto em sua loja. O programa 
deve receber o código do produto e a quantidade comprada, para então 
calcular e imprimir na tela o preço total, usando a tabela abaixo:
codigo	preço unitario
1001		5,32
1324		6,45
6548		2,37
0987		5,32
7623		6,45
*/
#include<stdio.h>
int main(){
	int codigo;
	float quant, total;
	printf("Informe o codigo do produto: ");
	scanf("%d", &codigo);
	printf("Informe a quantidade comprada: ");
	scanf("%f",&quant);
	switch(codigo){
		case 1001:
			total = quant*5.32;
			printf("O valor total comprado foi, %.2f", total);
			break;
		case 1324:
			total = quant*6.45;
			printf("O valor total comprado foi, %.2f", total);
			break;
		case 6548:
			total = quant*2.37;
			printf("O valor total comprado foi, %.2f", total);
			break;
		case 987:
			total = quant*5.32;
			printf("O valor total comprado foi, %.2f", total);
			break;
		case 7623:
			total = quant*6.45;
			printf("O valor total comprado foi, %.2f", total);
			break;
		default:
			printf("Codigo invalido");
	}
}
