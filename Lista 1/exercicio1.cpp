/*
	1. Fa�a um programa que receba tr�s notas, calcule e mostre a m�dia aritm�tica entre
elas.
*/
#include <stdio.h>

int main(){
	float nota1, nota2, nota3, media;
	printf("*********************************\n");
	printf("Digite a primeira nota: ");
	scanf("%f", &nota1);
	printf("*********************************\n");
	printf("Digite a segunda nota: ");
	scanf("%f", &nota2);
	printf("*********************************\n");
	printf("Digite a terceira nota: ");
	scanf("%f", &nota3);
	
	media=(nota1+nota2+nota3)/3;
	
	printf("*********************************\n");
	printf("A media das tres notas e : %.2f", media);
}
