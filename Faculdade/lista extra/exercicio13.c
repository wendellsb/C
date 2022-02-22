#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
/*
13- Faça um programa para ler cada elemento de uma matriz 140 X 40 de inteiros, calcular e imprimir a soma dos elementos
*/
int main()
{
	setlocale(LC_ALL,"portuguese");
	int i, j, matriz[2][2], soma=0;
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("informe: ");
			scanf("%d", &matriz[i][j]);
			soma = soma + matriz[i][j];
		}
	}
	
	printf("A soma foi: %d", soma);
	
}
