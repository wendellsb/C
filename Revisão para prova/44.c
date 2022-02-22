/*
14. (adicional)**(jogo)** Faça um programa que gera um 
número aleatório de 1 a 1000. O usuário deve tentar acertar 
qual o número foi gerado, a cada tentativa o programa deverá 
informar se o chute é menor ou maior que o número gerado. 
O programa acaba quando o usuário acerta o número gerado. 
O programa deve informar em quantas tentativas o número foi descoberto.
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
