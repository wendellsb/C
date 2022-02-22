#include<stdio.h>
#include<stdlib.h>
int main(){
	/*
	&& - (true)&&(true)	  verdadeiro
	|| - (true)&&(false)  verdadeiro
	!  - negação
	*/
	int i=40;
	int condicao = (i>20)&&(i<100);
	
	printf("%d\n", condicao);
	printf("%d\n", !condicao);

	
}
