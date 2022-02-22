#include<stdio.h>

int main(){
	/*
		
		printf("%tipo_de_saida", valor_a_ser_impresso);
		printf("%tipo1 %tipo2", var1, var2);

		int = %i ou %d
		float, double = %f
		char = %c
		string = %s
		%u modulo de um numero
		%p endereço de memoria
		%e ou %E para unprimir numero ou notação cientifica
		%% simbolo de porcentagem no printf
		
	*/
	int num = 1111;
	printf("%d\n", num);
	
	float f = 2.2;
	printf("%.2f\n", f);
	
	int x=10;
	printf("%d\n", x);
	
	float ff = 4.12;
	printf("%d - %.2f", x, ff);
	
	
return 0;
}
