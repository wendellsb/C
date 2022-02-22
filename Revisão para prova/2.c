#include<stdio.h>
#include<stdlib.h>
/*
	2. Leia um valor em reais. Em seguida, imprima o valor correspondente em dólares e euros. 
    Considerar que 1 real vale 0.24 dólares e 0.21 euros
*/

int main(){
	float reais, dolar, euros;
	printf("Informe o valor em reais: ");
	scanf("%f", &reais);
	dolar=reais*0.24;
	euros=reais*0.21;
	printf("O valor em Dolares: %.2f", dolar);
	printf("\nO valor em Euros: %.2f", euros);
}
