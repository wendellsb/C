/*
14. Uma empresa concederá um aumento de salário aos seus funcionários, 
variável de acordo com o tipo de funcionário, conforme a tabela abaixo. 
Faça um programa que leia o salário e o tipo de um funcionário e calcule 
o novo salário. Se o cargo do funcionário não estiver na tabela, ele deverá, 
eentão, receber 40% de aumento. Mostre o salário antigo, o novo salário e a diferença.
ccodigo	tipo	percentual
101		1		10%
102		2		20%
103		3		30%
*/
#include<stdio.h>
int main(){
	float salario, novo, dif;
	int tipo;
	printf("Informe seu salario: ");
	scanf("%f", &salario);
	printf("Informe o tipo: ");
	scanf("%d", &tipo);
	switch(tipo)
	{
		case 1:
			novo=salario*1.10;
			dif=novo-salario;
			printf("O salario antigo era: %.2f, o novo salario: %.2f e a diferenca: %.2f", salario, novo, dif);
			break;
		case 2:
			novo=salario*1.20;
			dif=novo-salario;
			printf("O salario antigo era: %.2f, o novo salario: %.2f e a diferenca: %.2f", salario, novo, dif);
			break;
		case 3:
			novo=salario*1.30;
			dif=novo-salario;
			printf("O salario antigo era: %.2f, o novo salario: %.2f e a diferenca: %.2f", salario, novo, dif);
			break;
		default:
			novo=salario*1.40;
			dif=novo-salario;
			printf("O salario antigo era: %.2f, o novo salario: %.2f e a diferenca: %.2f", salario, novo, dif);
			break;
	}
}
	
