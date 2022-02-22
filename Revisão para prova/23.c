/*
9. Faça um programa que receba o salário de um trabalhador 
e o valor da prestação de um empréstimo, se a prestação for 
maior que 20% do salário imprima: Empréstimo não concedido, 
caso contrário imprima: Empréstimo concedido
*/
#include<stdio.h>
int main(){
	int salario, emp, porc;
	printf("Informe seu salario: ");
	scanf("%d", &salario);
	printf("Informe o valor da prestacao: ");
	scanf("%d", &emp);
	porc=(salario*1.20)-salario; 
	if(emp > porc){
		printf("Emprestimo nao concedido.");
	} else {
		printf("Emprestimo concedido.");
	}
	}
