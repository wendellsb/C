/*
11. Chico tem 1,50 metro e cresce 2 cent�metros por ano, 
enquanto Ze tem 1,10 metros e cresce 3 cent�metros por ano. 
Construa um programa que calcule e imprima quantos anos ser�o
necess�rios para que Z� seja maior que Chico.
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
	float chico = 1.50, ze=1.10;
	int cont;
	while(ze<chico){
		chico=chico+0.02;
		ze=ze+0.03;
		cont++;
	}
	printf("\nanos %d", cont);
	printf("\nchico %.2f", chico);
	printf("\nze %.2f", ze);
}
