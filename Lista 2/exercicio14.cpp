/*
14. Uma empresa conceder� um aumento de sal�rio aos seus funcion�rios, 
vari�vel de acordo com o tipo de funcion�rio, conforme a tabela abaixo. 
Fa�a um programa que leia o sal�rio e o tipo de um funcion�rio e calcule 
o novo sal�rio. Se o cargo do funcion�rio n�o estiver na tabela, ele dever�, 
ent�o, receber 40% de aumento. Mostre o sal�rio antigo, o novo sal�rio e a diferen�a.

codigo	tipo	percentual
101		1			10%
102		2			20%
103		3			30%


*/
#include<stdio.h>
int main(){
	int cod;
	float salario, por_salario, total_salario; 
	
	printf("Informe o Codigo do funcionario: ");
	scanf("%d", &cod);
	printf("Informe o Salario do funcionario: ");
	scanf("%f", &salario);
	
	
	switch(cod){
		case 101:
			por_salario = ((salario*10)/100);
			total_salario = (salario - por_salario);
			printf("O salario antigo era: %.2f", salario);
			printf("\nO salario novo e: %.2f", total_salario);
			printf("\nO aumento no salario foi: %.2f", por_salario);
		break;
		case 102:
			por_salario = (salario*20)/100;
			total_salario = salario - por_salario;
			printf("O salario antigo era: %.2f", salario);
			printf("\nO salario novo e: %.2f", total_salario);
			printf("\nO aumento no salario foi: %.2f", por_salario);
		break;
		case 103:
			por_salario = (salario*30)/100;
			total_salario = salario - por_salario;
			printf("O salario antigo era: %.2f", salario);
			printf("\nO salario novo e: %.2f", total_salario);
			printf("\nO aumento no salario foi: %.2f", por_salario);
		break;
		default:
			por_salario = (salario*40)/100;
			total_salario = salario - por_salario;
			printf("O salario antigo era: %f", salario);
			printf("\nO salario novo e: %f", total_salario);
			printf("\nO aumento no salario foi: %f", por_salario);
}
}
