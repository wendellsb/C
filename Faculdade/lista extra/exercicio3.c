#include<stdio.h>
/*
3- Carregue um vetor de 50 elementos inteiros e n�o ordenados. Leia um determinado n�mero e pesquise se o mesmo existe no
VETOR. Caso exista, imprimir seu valor e em que posi��o ele est�, caso contr�rio, exiba uma mensagem.
*/
int main()
{
	int vetor[5], i, numero, posicao, pesquisa;
	
	for(i=1; i<=5; i++)
	{
		printf("Informe o numero na %d posicao: ", i);
		scanf("%d", &vetor[i]);		
	}
	printf("Informe um numero para pesquisano vetor: ");
	scanf("%d", &pesquisa);
	
	for(i=1; i<=5; i++)
	{
		if(vetor[i] == pesquisa)
		{
			numero = vetor[i];
			posicao = i;
		}	
	}
	printf("o valor %d repetiu na posicao %d", numero, posicao);
}
