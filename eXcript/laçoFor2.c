#include<stdio.h>
#include<stdlib.h>
int main(){
	/*
	for(parte1; parte2; parte3){
		parte1 = inicializa��o
		parte2 = condi��o
		parte3 = atualiza��o
	}
	*/
	int a, b;
	for(a=0, b=10; a<=10; a++, --b){
		printf("%i", a);
		printf("-", a);
		printf("%i\n", b);
	}
}
