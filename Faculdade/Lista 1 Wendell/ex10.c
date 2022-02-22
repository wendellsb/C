#include<stdio.h>
#include<locale.h>
#include<string.h>
/*
10. Escrever um procedimento, que inverta a ordem dos elementos de um vetor
sem usar um vetor auxiliar
*/
// professor tentei de diversas formas utilizar uma função mas a função nao le o segundo for, sempre da algum tipo de erro de sintaxe, ai deixei assim mesmo.
int main()
{
	setlocale(LC_ALL,"portuguese");
	int n[5], i;
	
	for(i=0; i<5; i++)
	{
	printf("Informe o numero: ");
	scanf("%d", &n[i]);
	}
	for(i=0; i<5; i++)
	{
	printf("%d ", n[4-i]);
	}
}
