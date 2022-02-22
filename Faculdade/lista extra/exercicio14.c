#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
/*
14- Leia uma matriz 40 X 50, de caracteres não ordenados. Pesquisar e imprimir o maior caracter e sua posição.
*/
/*
	************************************************************************
	professor esse eu fiz o codigo porem não consigo ler a matriz de string corretamente, 
	fiz o teste com a matriz de inteiros e funcionou normal
	************************************************************************
*/
int main()
{
	setlocale(LC_ALL,"portuguese");
	char matriz[2][2];
	int i, j, posi=0, posj=0, maior=0;
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("informe %d: ", i);
			scanf("%s", &matriz[i][j]);
			if((matriz[i][j] >= 97) && (matriz[i][j] <= 121))
			{
				if(matriz[i][j] >= maior)
				{
					maior = matriz[i][j];
					posi = i;
					posj= j;
				}
			}
		}	
	}
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("[%c]", matriz[i][j]);			
		}	
		printf("\n");
	}
		printf("O maior foi %c\n", maior);
		printf("linha i foi %d\n", posi);
		printf("coluna j foi %d\n", posj);
	
}

