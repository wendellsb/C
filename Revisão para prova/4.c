/*
4. Ler um número inteiro e imprimir seu sucessor e seu antecessor.
*/
#include<stdio.h>
int main(){
	int num, ant, pos;
	printf("Informe um numero: ");
	scanf("%d", &num);
	ant = num-1;
	pos = num+1;
	printf("\nO numero sucessor foi: %d", pos);
	printf("\nO numero antecessor foi: %d", ant);
}
