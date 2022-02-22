/*
12.  Fa�a um programa que leia os valores de A, B e C, calcule apenas o �delta� da equa��o. 
Classifique a equa��o em completa ou incompleta, al�m disso diga se existe solu��o. 
Se n�o houver, exiba uma mensagem de erro.  
- A equa��o � incompleta se alguns de seus coeficientes (a,b ou c) s�o iguais a 0
- Se delta < 0 n�o existe solu��o
*/
#include<stdio.h>
int main(){
	int a, b, c, delta;
	printf("Informe o valor de a: ");
	scanf("%d", &a);
	printf("Informe o valor de b: ");
	scanf("%d", &b);
	printf("Informe o valor de c: ");
	scanf("%d", &c);
	
	delta = (b*b)-4*a*c;
	printf("\nO valor de Delta foi: %d", delta);
	if((a=0) || (b=0) || (c=0)){
		printf("\nEquacao incompleta!");
	} else {
		printf("\nEquacao completa");
	}
	if(delta < 0){
		printf("\nNao existe solucao!");
	} else {
		printf("\nExiste solucao");
	}
	
	return 0;
	}
