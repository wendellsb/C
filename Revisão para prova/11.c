/*
11. Fa�a um programa que solicite ao usu�rio a digita��o de 2 n�meros e informe:
    - A soma dos n�meros;
    - O produto do primeiro n�mero pelo quadrado do segundo;
    - O resto da divis�o do primeiro n�mero pelo segundo
*/
#include<stdio.h>
int main(){
	int n1, n2, soma, resto;
	printf("informe o primeiro numero: ");
	scanf("%d", &n1);
	printf("informe o segundo numero: ");
	scanf("%d", &n2);
	soma=n1+n2;
	resto=n1%n2;
	printf("A soma foi: %d", soma);
	printf("A resto da divis�o foi: %d", resto);
}
