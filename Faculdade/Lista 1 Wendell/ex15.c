#include<stdio.h>
#include<locale.h>
#include<string.h>
/*
15. Escreva uma fun��o divis�o, que retorne a divis�o inteira de dividendo
por divisor e armazena no par�metro resto, passado por refer�ncia o resto
da divis�o. Construa um programa utilizando esta fun��o.
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
	
	printf("Divis�o: %d, e o resto %d", result, resto);
}
