#include<stdio.h>
#include<locale.h>
#include<string.h>
/*
11. Faça um procedimento que carregue um vetor com 80 posições e encontre
o maior e menor valor. Após isto, o procedimento deverá trocar o maior
valor com a primeira posição e o menor valor com a última posição.
*/
int vet[10];

int main()
{
	setlocale(LC_ALL,"Portuguese");
	for(i=0; i<10; i++)
	{
		printf("Informe o numero do vetor: ");
		scanf("%d", vet[i]);
	}
}

