#include<stdio.h>
/*
4. Escreva uma fun��o que determina se tr�s valores inteiros fornecidos
como par�metros representam medidas de um tri�ngulo ret�ngulo. Suponha que
os par�metros s�o fornecidos em ordem decrescente.
*/
void teste(int n1, int n2, int n3)
{
	if(n1 > n2 && n2 > n3)
	{
		printf("E triangulo retangulo");
	}
	else
	{
		printf("Nao e um triangulo retangulo");
	}
	return;
}

int main(void)
{
	int lado1, lado2, lado3;
	
	printf("Informe a primeiro: ");
	scanf("%d", &lado1);
	printf("Informe a segundo: ");
	scanf("%d", &lado2);
	printf("Informe a terceiro: ");
	scanf("%d", &lado3);
	
	teste(lado1, lado2, lado3);
	
}
