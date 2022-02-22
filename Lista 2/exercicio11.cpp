/*
	11.  Fazer um programa em "C" que leia o preço de um produto. Se o preço for menor 
	que R$500,00, conceda um desconto de 8,7%.  Acima deste valor, conceda um desconto de 10%.
*/
#include<stdio.h>

int main(){
	
	float produto, des_menor, des_maior, total;
	
	printf("Informe o valor do produto para desconto: ");
	scanf("%f", &produto);
	
	if(produto <= 500){
		des_menor = (produto*8.7)/100;
		total = produto - des_menor;
		printf("O valor do produto com desconto: %.2f", total);
	} else {
		des_maior = (produto*10)/100;
		total = produto - des_maior;
		printf("O valor do produto com desconto: %.2f", total);
	}
		
	
	return 0;
}
