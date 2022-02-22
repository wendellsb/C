/*
	9. Faça um programa que receba o salário de um trabalhador 
	e o valor da prestação de um empréstimo, se a prestação for 
	maior que 20% do salário imprima: Empréstimo não concedido, 
	caso contrário imprima: Empréstimo concedido
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
