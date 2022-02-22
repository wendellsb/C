/*
8. Construa um programa que leia vários números 
inteiros e mostre qual foi o maior e o menor 
valor fornecido. Para cada valor digitado, deve 
ser solicitado ao usuário que ele digite se ele 
deseja continuar entrando com valores. 
- OBS: O usuário deve responder “N” para sair.
*/
#include<stdio.h>
int main(){
	int num, maior = 0, menor=0;
	do{
		printf("Para sair do loop digite '0'\n");
		printf("Informe um numero: ");
		scanf("%d", &num);	
		if(num>maior){
			maior=num;	
		} else if(num>menor && num<maior){
			menor=num;
		}	
	} while(num != 0);
		printf("\nmaior = %d", maior);
		printf("\nmenor= %d", menor);
}
