#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
/*
15- Carregar uma matriz 10 X 10, de inteiros, ordenados e sem repeti��o, desenvolva um programa que verifique se um determinado
n�mero dado existe na matriz, caso n�o exista emitir mensagem correspondente.
*/
int main()
{
	setlocale(LC_ALL,"portuguese");
	int matriz[3][3], i, j, entrada;
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("Informe o %d: ", i);
			scanf("%d", &matriz[i][j]);			
		}	
	}
	printf("\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("[%d]", matriz[i][j]);			
		}	
		printf("\n");
	}
	printf("\n");
	
	printf("Informe um numero para verificar na matriz: ");
	scanf("%d", &entrada);
	printf("\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			if(matriz[i][j] == entrada)
			{
				printf("O numero %d n�o esta na matriz!\n", entrada);
			}
			else
			{
				printf("O numero %d esta na matriz!\n", entrada);
			}
			break;
		}	
		break;
		printf("\n");
	}
	printf("\n");
	
}
