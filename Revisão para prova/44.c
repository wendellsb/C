/*
14. (adicional)**(jogo)** Fa�a um programa que gera um 
n�mero aleat�rio de 1 a 1000. O usu�rio deve tentar acertar 
qual o n�mero foi gerado, a cada tentativa o programa dever� 
informar se o chute � menor ou maior que o n�mero gerado. 
O programa acaba quando o usu�rio acerta o n�mero gerado. 
O programa deve informar em quantas tentativas o n�mero foi descoberto.
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
	int cont=0,num, r=0;
	r=rand()%1000;
		printf("%d\n", r);
    do{
    	
		printf("\nTente um numero: ");
		scanf("%d", &num);
		if(num==r){
			printf("Acertou");
		}else if(num>r){
			printf("\nnumero acima");
		} else{
			printf("\nnumero abaixo");
		}
		cont++;
	}while(num!=r);
	printf("Voce errou %d", cont);
}
