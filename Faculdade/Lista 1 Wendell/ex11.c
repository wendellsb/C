#include<stdio.h>
#include<locale.h>
#include<string.h>
/*
11. Fa�a um procedimento que carregue um vetor com 80 posi��es e encontre
o maior e menor valor. Ap�s isto, o procedimento dever� trocar o maior
valor com a primeira posi��o e o menor valor com a �ltima posi��o.
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

