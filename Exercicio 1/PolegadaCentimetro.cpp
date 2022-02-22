#include<stdio.h>

int main(){
	int polegada;
	float centimetro, aux;
	centimetro = 2.54;
	printf("Informe o valor em polegadas para ser convertido: ");
	scanf("%d", &polegada);
	aux = polegada*centimetro;
	printf("O valor da conversao foi %d pol = %.2f cm", polegada, aux);
}
