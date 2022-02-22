/*
	2. Faça um programa que receba o salário de um funcionário, calcule e mostre o novo
salário, sabendo-se que este sofreu um aumento de 25%.
*/

#include<stdio.h>

int main(){
	float salario, aux, total;
	printf("Informe o salario do funcionario: ");
	scanf("%f", &salario);
	aux = (salario*25)/100;
	total = salario + aux;
	printf("O salario com aumento foi %.2f", total);
	return 0;
}
