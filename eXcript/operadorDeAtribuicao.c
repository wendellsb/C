#include<stdio.h>
#include<stdlib.h>
int main(){
	/*
	1-	soma
		x++ -> x+1
		x += 1 -> x+1 
	
	2-	subtração
		x-- -> x-1
		x -=1 -> x-1
		
	3-	multiplicação
		x*=1 -> x*1
	
	4-	divisao
		x/=1 -> x/1
		
	5-	resto da divisao
		x%=2 - > x%2
	*/
	int i=50;
	printf("%i soma\n", i+=100);
	printf("%i subtracao\n", i-=50);
	printf("%i multiplicacao\n", i*=3);
	printf("%i divisao\n", i/=3);
	printf("%i resto da divisao\n", i%=3);
	return 0;
}









