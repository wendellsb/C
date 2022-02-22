#include<stdio.h>
#include<locale.h>
#include<string.h>
/*
9. Escreva uma função que determina se três valores inteiros fornecidos
como parâmetros representam medidas de um triângulo retângulo. Suponha que
os parâmetros são fornecidos em ordem decrescente.
*/
int verifica(int a, int b, int c)
{
	setlocale(LC_ALL,"Portuguese");
	if((c > b) && (b > a))
	{
		return printf("É um triângulo retângulo");
	}
	else
	{
		return printf("Não é um triângulo retângulo");
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
