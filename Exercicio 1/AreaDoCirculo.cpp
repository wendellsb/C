#include<stdio.h>

int main(){
	
	float raio, area, pi;
	pi = 3.14159;
	printf("Informa o valor do do raio do circulo: ");
	scanf("%f", &raio);
	area = (raio*raio)*pi;
	printf("A area do circulo e de: %.4f", area);
}
