#include <stdio.h>
#include <stdlib.h>

int main() {
	/*
	
	1- toda variavel possui nome
	2- toda varivavel ppossui tipo
	3- toda variavel possui nome
	4- toda variavel possui um valor
	
	A - temporario na memoria
	B - quando um programa � fechado ou o 
	pc for desligado, tudo que estiver sera perdido
	C - valores armazenados na memoria s�o volateis
	D - o valor antigo da var, sempre sera sobreposto
	
	*/
	int i=1; // declara��o de variavel
	char a, b;
	a = '1';
	b = '2';
	printf("%d\n", i);
	printf("%c, %c", a, b);
	return 0;
}
