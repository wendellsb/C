/*
	7. (condicional) Fa�a um algoritmo que receba um n�mero e diga se este n�mero est� no
intervalo entre 100 e 200.
*/

#include<stdio.h>

int main(){
	int num;
	
	printf("Informe um numero para teste: ");
	scanf("%d", &num);
	if((num > 100)&&(num < 200)){
		printf("O numero '%d' esta entre o numero 100 e 200.", num);
	} else {
		printf("O numero '%d' nao esta entre 100 e 200", num);
	}
}
