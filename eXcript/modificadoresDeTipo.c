#include<stdio.h>
#include<stdlib.h>
int main(){
	/*
		1- char
		2- int
		3- float
		4- double
		5- void - vazio
		
		1- signed	- + e -
		2- unsigned	- +
		3- long		- aumentar a capacidade de armazenamento da var
		4- short	- queremos diminuir o tamanho de armazenamento
	*/
	int i=10;
	unsigned short int u;
	printf("%i -> variavel i\n", sizeof(i));
	printf("%i -> variavel i\n", sizeof(u));
	
	return 0;	
}
