/*
	9. Fa�a um programa que receba o sal�rio de um trabalhador 
	e o valor da presta��o de um empr�stimo, se a presta��o for 
	maior que 20% do sal�rio imprima: Empr�stimo n�o concedido, 
	caso contr�rio imprima: Empr�stimo concedido
*/
#include<stdio.h>

int main(){
	float sal, emp, por_sal;
	
	printf("Informe o seu salario: ");
	scanf("%f", &sal);
	printf("Informe o valor do emprestimo: ");
	scanf("%f", &emp);
	por_sal = (sal*20)/100;
	if(por_sal > emp){
		printf("Emprestimo concedido!");
	} else {
		printf("Emprestimo negado!");
	}
 
 return 0;
}
