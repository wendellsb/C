/*
16. Fa�a um programa que leia dia, m�s e ano. Depois verifique 
se foi digitada uma data v�lida. Ou seja, verifique se o m�s est� 
entre 1 e 12, e se o dia existe naquele m�s. Note que Fevereiro 
tem 29 dias em anos bissextos, e 28 dias em anos n�o bissextos.
Um ano � bissexto se o ano � divis�vel por 400. Ou se o ano � divis�vel por 4 e n�o � divis�vel por 100
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
