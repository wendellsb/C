#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num1, num2, soma, subtracao, mult, div;
	
	printf("informe o primeiro numero: ");
	scanf("%d", &num1);	
	printf("informe o segundo numero: ");
	scanf("%d", &num2);	
	
	soma = num1 + num2;
	subtracao = num1 - num2;
	mult = num1 * num2;
	div = num1 / num2;
	printf("A soma foi %d\n", soma);
	printf("A subtracao foi %d\n", subtracao);
	printf("A multiplicacao foi %d\n", mult);
	printf("A divisao foi %d\n", div);
	return 0;
}
