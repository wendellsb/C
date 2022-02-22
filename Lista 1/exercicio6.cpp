/*
	6 - Faça um programa que leia os valores de anos, meses e dias e imprima tudo em dias.
*/
#include<stdio.h>

int main(){
	int ano, mes, dia, dia_inf, mes_inf, ano_inf, total;

	
	printf("Informe quantos anos: ");
	scanf("%d", &ano_inf);
	printf("Informe quantos meses: ");
	scanf("%d", &mes_inf);
	printf("Informe quantos dias: ");
	scanf("%d", &dia_inf);
	ano = 365;
	mes = 30;
	dia = 1;	
	total = (ano*ano_inf) + (mes*mes_inf) + (dia*dia_inf);
	printf("\nO total de dias foi: %d", total);
	
	
}
