#include<stdio.h>

int main(){
	float libra, aux;
	int grama;
	aux = 453.59237;
	printf("Informe o valor em libra para ser convertido para gramas: ");
	scanf("%f", &libra);
	grama = libra*aux;
	printf("O valor convertido para gramas: %d gramas", grama);
	
}
