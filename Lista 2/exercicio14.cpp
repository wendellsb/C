/*
14. Uma empresa concederá um aumento de salário aos seus funcionários, 
variável de acordo com o tipo de funcionário, conforme a tabela abaixo. 
Faça um programa que leia o salário e o tipo de um funcionário e calcule 
o novo salário. Se o cargo do funcionário não estiver na tabela, ele deverá, 
então, receber 40% de aumento. Mostre o salário antigo, o novo salário e a diferença.

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
