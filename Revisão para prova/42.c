/*
12. Considere dois tanques de água A e B com,respectivamente, 55 e 30 litros. 
Desenvolver um programa para calcular e imprimir em quantas horas qual dos 
tanques esvaziará primeiro. Sabe-se que o tanque A esvazia 5.1 litros 
por hora e recebe de uma bica 0.3 litros por minuto, e o tanque B  escoa 0.8 
litros por minuto e recebe de uma bica 5 litros por hora.
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
	float a=55, b=30, hora_a=5.1, min_a=0.3*60, hora_b=5, min_b=0.8*60, totala, totalb;

	while(totala > 0 || totalb > 0){
	totala = a-hora_a+min_a;
	totalb = b-min_b+hora_b;
	if(totala<0){
		printf("Tanque A esvaziou primeiro");
		break;
	}
	if(totalb<0){
		printf("Tanque B esvaziou primeiro");
		break;
	}
	}
	
}
