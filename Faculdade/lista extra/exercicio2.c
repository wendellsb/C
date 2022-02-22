#include<stdio.h>
/*
2- Carregue um vetor de números reais com 80 posições e desenvolva 
um programa para encontrar o maior e o menor valor. Após isto, o 
programa deverá trocar o maior valor com o da primeira posição e 
o menor valor com o da última posição.
*/
int main()
{
	int i, num[10], maiorPos, menorPos, maiorNum = 0, menorNum = 99999, primeiro, ultimo;
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
		if(num[i] < menorNum)
		{
			menorNum = num[i];
			menorPos = i;
		}
	}
	primeiro = num[1];
	ultimo = num[10];
	
	num[1] = maiorNum;
	num[10] = menorNum;
	
	num[maiorPos] = primeiro;
	num[menorPos] = ultimo;
	
	for(i=1; i<=10; i++)
	{
		printf(" %d: \n", num[i]);		
	}
}


















