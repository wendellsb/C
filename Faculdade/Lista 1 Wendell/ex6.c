#include<stdio.h>
#include<locale.h>
#include<string.h>
/*
6. Elabore uma fun��o que receba 2 n�meros inteiros a e b e um caracter
c. A fun��o deve imprimir uma "moldura" de tamanho a x b, feita usando um
caracter c e devolver o n�mero de caracteres impressos. O programa deve
executar a fun��o e imprimir seu valor de retorno.
*/
int moldura(int a, int b)
{
	int i, j, contador;
	char letra[3];
	printf("Informe a letra: ");
	scanf("%s", letra);
	printf("\n");
	for(i=0; i<a; i++)
	{
		for(j=0; j<b; j++)
		{
			if((i==0) || (j==0) || (i==a-1) || (j==b-1))
			{
				printf("%s ", letra);
				contador++;	
			}
			else 
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	printf("\n");
	printf("Foram imprimidos %d caracteres.", contador);
}
int main()
{
	setlocale(LC_ALL,"portuguese");
	int linha, coluna;
	
	
	printf("Informe quantas linhas: ");
	scanf("%d", &linha);
	printf("Informe quantas colunas: ");
	scanf("%d", &coluna);
	
	moldura(linha, coluna);
	
}











