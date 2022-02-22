#include<stdio.h>
/*
1. Faça uma função que receba dois números positivos por parâmetro e
retorne a soma dos N números inteiros existentes entre eles.
*/
int soma(int n1, int n2){	
	return n1+n2;
}
int main(void){
	int n1, n2, x, y;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &n1);
	
	printf("Digite o segundo numero: ");
	scanf("%d", &n2);
	
	printf("A soma foi: %d", soma(n1, n2));
	
	return 0;
}

