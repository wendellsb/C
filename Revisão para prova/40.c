/*
10. Foi realizada uma pesquisa para determinar o 
�ndice de mortalidade infantil em um certo per�odo 
de tempo. Fazer um programa que:
- leia inicialmente o n�mero de crian�as a serem computadas no per�odo;
- Para cada crian�a, fa�a leia o sexo ('m', ou  'f') e o n�mero de meses de vida da crian�a.
- determine e escreva:
a) A porcentagem de crian�as do sexo masculino no per�odo;
b) A porcentagem de crian�as do sexo feminino no per�odo;
c) A porcentagem de crian�as que viveram 24 meses ou menos no per�odo.
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





