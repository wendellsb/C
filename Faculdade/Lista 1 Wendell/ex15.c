#include<stdio.h>
#include<locale.h>
#include<string.h>
/*
15. Escreva uma função divisão, que retorne a divisão inteira de dividendo
por divisor e armazena no parâmetro resto, passado por referência o resto
da divisão. Construa um programa utilizando esta função.
*/
int divisao(int a, int b, int *r)
{
	int q=a/b;
	*r=a%b;
	
	return q;
}
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int c, d, resto;
	printf("Informe dois numeros: ");
	scanf("%d%d", &c, &d);
	int result= divisao(c, d, &resto);
	
	printf("Divisão: %d, e o resto %d", result, resto);
}
