#include<stdio.h>
#include<locale.h>
#include<string.h>
/*
9. Escreva uma fun��o que determina se tr�s valores inteiros fornecidos
como par�metros representam medidas de um tri�ngulo ret�ngulo. Suponha que
os par�metros s�o fornecidos em ordem decrescente.
*/
int verifica(int a, int b, int c)
{
	setlocale(LC_ALL,"Portuguese");
	if((c > b) && (b > a))
	{
		return printf("� um tri�ngulo ret�ngulo");
	}
	else
	{
		return printf("N�o � um tri�ngulo ret�ngulo");
	}
}
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int n1, n2, n3;
	
	printf("Informe o primeiro: ");
	scanf("%d", &n1);
	printf("Informe o segundo: ");
	scanf("%d", &n2);
	printf("Informe o terceiro: ");
	scanf("%d", &n3);
	verifica(n1, n2, n3);
	
}
