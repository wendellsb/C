/*
9. Fa�a um programa que receba o sal�rio de um trabalhador 
e o valor da presta��o de um empr�stimo, se a presta��o for 
maior que 20% do sal�rio imprima: Empr�stimo n�o concedido, 
caso contr�rio imprima: Empr�stimo concedido
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
