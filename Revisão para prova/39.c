/*
9. Faça um programa que solicite ao usuário para digitar 
valores numéricos inteiros positivos. Encerre a entrada de 
dados quando for digitado um número negativo ou zero. 
Calcule a média dos números positivos digitados.
*/
#include<stdio.h>
int main(){
	
	float n, total=0, media=0, cont=0;
	while(n>0){
		printf("Informe um numero: ");
		scanf("%f", &n);
		if(n>0){
			media = media+n;
			cont++;
		} else {
			break;
		}
	}
	total=media/cont;
	printf("A media foi %.2f", total);
	
}
