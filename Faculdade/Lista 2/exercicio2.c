/*
2) Escreva uma função chamada de potencia que calcula a potência entre dois números inteiros não
negativos (base e expoente) passados como parâmetros e retorna este valor.
*/
#include<stdio.h>
#include<locale.h>
int potencia(int a, int b);
int main()
{
	int base, expoente;
	
	printf("Informe a base: ");
	scanf("%d", &base);
	printf("Informe a expoente: ");
	scanf("%d", &expoente);
	
	int potencia(base, expoente);
	
	printf("A potencia foi: %d", potencia(base, expoente));
	
}

int potencia(int a, int b)
{
	int i, res=1;
	for(i = 1; i<=b; i++)
	{
		res*=a;
	}
	return res;
}











