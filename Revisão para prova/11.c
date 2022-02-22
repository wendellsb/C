/*
11. Faça um programa que solicite ao usuário a digitação de 2 números e informe:
    - A soma dos números;
    - O produto do primeiro número pelo quadrado do segundo;
    - O resto da divisão do primeiro número pelo segundo
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
	printf("A resto da divisão foi: %d", resto);
}
