#include<stdio.h>
#include<locale.h>
/*
8. Escreva uma fun��o omega(n:integer):integer que retorne a soma dos
divisores de n exceto ele pr�prio. Exemplo: omega(15) = 1+3+5 = 9
Usando a fun��o omega solicitada acima, escreva um programa que imprima
todos os n�meros primos entre 2 e 10000.
*/
int omega(int n)
{
	setlocale(LC_ALL,"portuguese");
	int soma=0, i;
	for(i=1; i < n; i++)
	{
		if((n%i) == 0)
		{
		soma = soma + i;
		}
	}
	return (soma);
}
int main()
{
	int entrada, res;
	
	printf("Informe o numero: ");
	scanf("%d", &entrada);
	
	res = omega(entrada);
	
	if(res ==1)
	{
		printf("O numero %d �  primo.", entrada);
	}
	else
	{
		printf("O numero %d n�o � primo.", entrada);
	}
}








