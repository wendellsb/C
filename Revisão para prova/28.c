/*
14. Uma empresa conceder� um aumento de sal�rio aos seus funcion�rios, 
vari�vel de acordo com o tipo de funcion�rio, conforme a tabela abaixo. 
Fa�a um programa que leia o sal�rio e o tipo de um funcion�rio e calcule 
o novo sal�rio. Se o cargo do funcion�rio n�o estiver na tabela, ele dever�, 
eent�o, receber 40% de aumento. Mostre o sal�rio antigo, o novo sal�rio e a diferen�a.
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
	
