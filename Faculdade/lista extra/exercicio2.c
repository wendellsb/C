#include<stdio.h>
/*
2- Carregue um vetor de n�meros reais com 80 posi��es e desenvolva 
um programa para encontrar o maior e o menor valor. Ap�s isto, o 
programa dever� trocar o maior valor com o da primeira posi��o e 
o menor valor com o da �ltima posi��o.
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


















