#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
/*
11- Fa�a um programa que armazene os dados de 20 funcion�rios de uma empresa em 2 arranjos: um com os nomes dos
funcion�rios e outro com seus sal�rios. �ndices iguais nos arranjos indicam informa��es relativas ao mesmo funcion�rio. Depois:
a) exibir os dados lidos (nome e sal�rio correspondente);
b) exiba o ultimo sobrenome dos funcion�rios com sal�rio inferior � metade do maior sal�rio pago na empresa;
c) escrever os sal�rios de todos os funcion�rios cujo primeiro nome � Maria.
*/
int main()
{
	setlocale(LC_ALL,"portuguese");
	char nome[3][20], sobrenome[3][20];
	int i;
	float salario[i], maiorSalario=0, metade;
	
	for(i=0; i<3; i++)
	{
		printf("Informe o nome do funcionario %d: ", i);
		gets(nome[i]);
		printf("Informe o sobrenome do funcionario %d: ", i);
		gets(sobrenome[i]);
		printf("\n");
		
	}
	printf("\n\n");
	for(i=0; i<3; i++)
	{
		printf("Informe o salario do %d funcionario: ", i);
		scanf("%f", &salario[i]);
	}
	printf("\n\n");
	for(i=0; i<3; i++)
	{
		printf("\nO funcionario %d: %s %s recebe %.2f\n", i, nome[i], sobrenome[i], salario[i]);
	}
	printf("\n\n");
	for(i=0; i<3; i++)
	{
		if(salario[i] > maiorSalario)
		{
			maiorSalario = salario[i];
			metade = maiorSalario/2;
		}
	}
	for(i=0; i<3; i++)
	{
		if(salario[i] < metade)
		{
			printf("O sobrenome de quem recebe metado do maior salario �: %s\n", sobrenome[i]);
		}
	}
	printf("\n\n");
	for(i=0; i<3; i++)
	{
		if((nome[i] == 'Maria') || (nome[i] == 'Maria'))
		{
			printf("A %d %s recebe: %.2f\n", i, nome[i], salario[i]);
		}
	}
	printf("\n\n");	
}












