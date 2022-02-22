/*
5. Ler uma temperatura em graus Centígrados e apresentá-la convertida em graus Fahrenheit. 
A fórmula de conversão é:  F = (9*C+160)/5. Onde F é a temperatura em Fahrenheit e C é a temperatura em Centígrados.
*/
#include<stdio.h>
int main(){
	int c, f;
	printf("Informe a temporatura em graus Centigrados: ");
	scanf("%d", &c);
	f=(9*c+160)/5;
	printf("A temperatura em Fahrenheit: %d", f);
}
