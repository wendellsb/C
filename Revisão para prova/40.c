/*
10. Foi realizada uma pesquisa para determinar o 
índice de mortalidade infantil em um certo período 
de tempo. Fazer um programa que:
- leia inicialmente o número de crianças a serem computadas no período;
- Para cada criança, faça leia o sexo ('m', ou  'f') e o número de meses de vida da criança.
- determine e escreva:
a) A porcentagem de crianças do sexo masculino no período;
b) A porcentagem de crianças do sexo feminino no período;
c) A porcentagem de crianças que viveram 24 meses ou menos no período.
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
	char sexo;
	int tempo,cont;
	float criancas=0, cont_m=0, cont_f=0, meses_vida=0, cont_meses, totalmasculino, totalfemenino, totalmeses;
	
	printf("Numero de criancas: ");
	scanf("%f", &criancas);
	while(criancas>cont){
		printf("Sexo 'm' ou 'f': ");
		scanf("%s", &sexo);
		if(sexo=='m'){
			cont_m++;
		}
		if(sexo=='f'){
			cont_f++;
		}
		printf("Numero de meses de vida da crianca: ");
		scanf("%f", &meses_vida);
		if(meses_vida<=24){
			cont_meses++;
		}
		cont++;
	}
	totalmasculino= (100*cont_m)/criancas;
	printf("\nA porcentagem de criancas do sexo masculino no periodo: %.0f", totalmasculino);
	totalfemenino= (100*cont_f)/criancas;
	printf("\nA porcentagem de criancas do sexo femenino no periodo: %.0f", totalfemenino);
	totalmeses= (100*cont_meses)/criancas;
	printf("\nA porcentagem de criancas que viveram 24 meses no periodo: %.0f", totalmeses);
}





