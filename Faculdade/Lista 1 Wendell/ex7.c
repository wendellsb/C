#include<stdio.h>
#include<locale.h>
#include<string.h>
/*
7. Faça uma função que receba um valor inteiro e positivo, calcule e
retorne o seu fatorial. Construa um programa que utilize essa função.
*/
int fatorial(int a)
{
	int i, res=1;
	for(i=1; i<=a; i++)
	{
		res = res*i;
	}
	return res;
}

int main()
{
	setlocale(LC_ALL,"portuguese");
	int i, num, res=1;
	printf("Informe o numero: ");
	scanf("%d", &num);
	fatorial(num);
	printf("O fatorial do numero %d foi: %d", num, fatorial(num));
}
