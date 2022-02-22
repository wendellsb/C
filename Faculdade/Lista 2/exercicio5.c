/*
5) Faça um programa completo que utilize a função criada em (3)
*/
#include<stdio.h>
int potencia(int a, int b);
int soma(int a, int b);
int main()
{
	int base, expoente, num, total=0, pot;	
	printf("Informe a base: ");
	scanf("%d", &base);
	printf("Informe a expoente: ");
	scanf("%d", &expoente);
	printf("Informe um numero: ");
	scanf("%d", &num);
	int potencia(base, expoente);
	pot = potencia(base, expoente);
	int soma(pot, num);
	total = soma(pot, num);
	printf("\nA potencia foi: %d", pot);
	printf("\nO numero %d + %d e: %d", num, pot, total);
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
int soma(int a, int b)
{
	int res2;
	res2 = a+b;
	return res2;
}







