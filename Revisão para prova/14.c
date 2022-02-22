/*
14. Faça um programa que leia um valor inteiro em segundos, 
e depois mostrá-lo em horas, minutos e segundos.
Exemplo de saída do programa:
36800 segundos são 10 horas e 13 minutos e 20 segundos
*/
#include<stdio.h>
int main(){
	int segundos, horas, minutos, total, tempo;

	printf("Informe o valor em segundos: ");
	scanf("%d", &tempo);
	horas = tempo/3600;
	minutos = (tempo%3600)/60;
	segundos = (tempo-(horas*3600)-(minutos*60));
	printf("%d segundos sao %d horas e %d minutos e %d segundos", tempo, horas, minutos, segundos);
}
