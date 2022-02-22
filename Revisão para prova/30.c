/*
16. Faça um programa que leia dia, mês e ano. Depois verifique 
se foi digitada uma data válida. Ou seja, verifique se o mês está 
entre 1 e 12, e se o dia existe naquele mês. Note que Fevereiro 
tem 29 dias em anos bissextos, e 28 dias em anos não bissextos.
Um ano é bissexto se o ano é divisível por 400. Ou se o ano é divisível por 4 e não é divisível por 100
- Ver como fazer o condicional.

*/
#include<stdio.h>
int main(){
	int dia, mes, ano, bissexto;
	printf("Informe o dia: ");
	scanf("%d", &dia);
	printf("Informe o mes: ");
	scanf("%d", &mes);
	printf("Informe o ano: ");
	scanf("%d", &ano);
	if(mes >= 1 && mes<=12){
		printf("Mes valido");
	}
	if(ano%400==0 || ano%4==0 && ano!=100){
		printf("Ano bissexto");
	}
}
