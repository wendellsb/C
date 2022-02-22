#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
/*
18- Carregar uma matriz MAT 30 X 30, inteiros, gerar um vetor LIN, cujos elementos serão a soma dos elementos de cada linha da
matriz e um vetor COL, cujos elementos serão a soma dos elementos de cada coluna da matriz.
*/
int main()
{
	setlocale(LC_ALL,"portuguese");
	int matriz[3][3], lin[3], col[3],i, j;
	
	for(i=0;i<3;i++)
	{
			lin[i]=0;
			col[i]=0;
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Informe o %d: ", i);
			scanf("%d", &matriz[i][j]);
			lin[i] = lin[i] + matriz[i][j];
			col[j] = col[j] + matriz[i][j];
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("[%d]", matriz[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		printf("A soma das linhas %d: %d\n", i, lin[i]);
		printf("A soma das colunas %d: %d\n", i, col[i]);
		printf("\n");
	}
}




