#include<stdio.h>
/*
1- Carregue um vetor de inteiros com 100 posições e desenvolva um programa para:
a) Exibir o maior elemento e sua posição;
b) Imprimir a soma dos elementos que estão nos índices pares;
c) Exiba a soma dos elementos impares.
*/
int main()
{
	int i, num[10], maiorPos = 0, maiorNum = 0, somaPar = 0, somaImpar = 0;
	for(i=1; i<=10; i++)
	{
		printf("Informe o numero na posicao %d: ", i);
		scanf("%d", &num[i]);		
	}
	for(i=1; i<=10; i++)
	{
		if(num[i] > maiorNum)
		{
			maiorNum = num[i];
			maiorPos = i;
		}
	}
	for(i=1; i<=10; i++)
	{
		if(i % 2 == 0)
		{
			somaPar = somaPar + num[i];
		}
		else
		{
			somaImpar = somaImpar + num[i];
		}
	}
	printf("O maior numero foi %d na posicao %d\n", maiorNum, maiorPos);
	printf("A soma das posicoes pares foram: %d\n", somaPar);
	printf("A soma das posicoes impares foram: %d\n", somaImpar);
}
