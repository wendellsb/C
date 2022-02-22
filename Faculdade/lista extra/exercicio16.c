#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
/*
16- Carregar duas matrizes A e B de tamanho 50 X 50, de números reais, desenvolva um 
programa que gere uma MATRIZ C, resultante da soma das matrizes A e B.
*/
int main()
{
	setlocale(LC_ALL,"portuguese");
	int mA[2][2], mB[2][2], mC[2][2], i, j;
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("Informe a %d da matriz A: ", i);
			scanf("%d", &mA[i][j]);			
		}	
		printf("\n");
	}
	printf("\n");
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("Informe a %d da matriz B: ", i);
			scanf("%d", &mB[i][j]);			
		}	
		printf("\n");
	}
	printf("\n");
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("[%d]", mA[i][j]);			
		}	
		printf("\n");
	}
	printf("\n");
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("[%d]", mB[i][j]);			
		}	
		printf("\n");
	}
	printf("\n");
	
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			mC[i][j] = mA[i][j] + mB[i][j];			
		}	
	}
	printf("\n");
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("[%d]", mC[i][j]);			
		}	
		printf("\n");
	}
	printf("\n");
	
	
}
