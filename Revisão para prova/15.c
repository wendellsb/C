/*
1.  Construir um programa que leia dois valores numéricos 
e efetue a adição, caso o resultado seja maior que 10 apresentá-lo
*/
#include<stdio.h>
int main(){
	int n1, n2, soma;
	
	printf("informe o primeiro numero: ");
	scanf("%d", &n1);
	printf("informe o segundo numero: ");
	scanf("%d", &n2);
	soma=n1+n2;
	if(soma > 10){
		printf("%d", soma);
	} else{
		printf("Menos que 10");
	}
}
