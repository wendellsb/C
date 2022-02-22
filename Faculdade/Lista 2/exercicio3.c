/*
3) Faça um programa completo que utilize a função potencia. O programa deve ler a base e o expoente
e imprimir o resultado.
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

