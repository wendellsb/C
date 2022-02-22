#include<stdio.h>
#include<stdlib.h>
int main(){
	/*
	1- soma -> +=
	2- subtração -> -=
	3- multiplicação -> *=
	4- divisao -> /=
	5- resto (modulo) -> #=
	*/
	int i=1;
	printf("Incremento\n");
	printf("%d\n", i);
	printf("%d\n", ++i);
	printf("%d\n", i++);
	printf("%d\n", ++i);
	printf("%d\n\n\n", i);
	
	int i2= 5;
	printf("Decremento\n");
	printf("%d\n", i2);
	printf("%d\n", --i2);
	printf("%d\n", i2--);
	printf("%d\n", --i2);
	printf("%d\n", i2--);
	printf("%d\n", i2);	
	return 0;
}
