/*
13. Deseja-se fazer uma pesquisa a respeito do consumo mensal 
de energia el�trica em uma determinada cidade.
Para isso, s�o fornecidos os seguintes dados:
- pre�o do kWh consumido;
- n�mero do consumidor;
- quantidade de kWh consumidos durante o m�s;
**O n�mero do consumidor igual a zero deve ser usado para interromper a entrada de dados.** 
Fa�a um programa que leia os dados descritos acima, calcule e imprima:
a) para cada consumidor o total a pagar,
b) o maior consumo verificado,
c) o menor consumo verificado,
d) a m�dia geral de consumo.
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
	int cont=0;
	float con, p_kwh, total_kwh, total_c=0, maior=0, menor=0, media, total, aux;
	do{
	printf("Informe o numero do consumidor: ");
	scanf("%f", &con);
	if(con==0){
		break;
	}
	printf("Informe o preco do kWh consumido: ");
	scanf("%f", &p_kwh);
	printf("Informe o total de kWh consumido: ");
	scanf("%f", &total_kwh);
	total=p_kwh*total_kwh;
	total_c=total_c+(p_kwh*total_kwh);
	
	if(total_kwh>maior){
		maior=total_kwh;
	}
	if(total_kwh<maior){
		maior=total_kwh;
	}
	cont++;
	}while(con!=0);
	media= total_c/cont;
	printf("\ntotal consumo: %.2f", total_c);
	printf("\nmaior consumo: %.2f", maior);
	printf("\nmenor consumo: %.2f", menor);
	printf("\nmedia consumo: %.2f", media);
}



















