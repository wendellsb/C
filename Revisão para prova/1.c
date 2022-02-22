#include<stdio.h>
#include<stdlib.h>

/*
1.	Faça um programa que leia um valor de conta de restaurante, 
	representando o gasto realizado pelo cliente e imprimir o valor
 	total a ser pago, considerando que o restaurante cobra 10% de
 	taxa de serviço do garçom.
*/
int main(){
	float conta, total; 
	
	printf("Informe qual foi o valor da conta: ");
	scanf("%f", &conta);
	total = conta*1.1;
	printf("O valor total foi de R$ %.2f", total);
}
