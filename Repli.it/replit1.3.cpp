/*
Escreva um programa que leia o comprimento da base e a altura de um 
tri�ngulo ret�ngulo e imprima a �rea. Cada n�mero � dado em uma linha separada.
Complete o programa de forma a receber 2 valores, base e altura. O programa deve 
imprimir na tela a �rea do tri�ngulo.
Exemplo de entrada
3
5
Exemplo de sa�da
7.500000
*/
#include<stdio.h>

int main(){
	float h, b, area;
	
	printf("Informe o valor da base: ");
	scanf("%f", &b);
	printf("Informe o valor da altura: ");
	scanf("%f", &h);
	
	area = (b*h)/2;
	
	printf("A area do triangulo: %.2f", area);



}
