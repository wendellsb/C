#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
/*
17- Carregar uma matriz A 90 X 90 de inteiros. Gerar uma matriz B, onde cada elemento corresponderá a subtração entre o
elemento de A e o valor do elemento da diagonal principal que está na referida linha.
*/
// não conseguir subtrair a diagona eu consigo pegar mas pra subtrair os numeros pegam da memoria
int main()
{
	int mA[5][5], mB[5][5], i, j, sub;
	
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			printf("Informe o %d: ", i);
			scanf("%d", &mA[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			printf("[%d]", mA[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			if(i == j)
			{
				sub = mA[i][j];
			}
		}
	}
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			mB[i][j] = mA[i][j] - sub;
		}
	}
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			printf("[%d] ", mB[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	
	return 0;
}















