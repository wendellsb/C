/*
11.  Fazer um programa em "C" que leia o preço de um produto. 
Se o preço for menor que R$500,00, conceda um desconto de 8,7%.  
Acima deste valor, conceda um desconto de 10%.
*/
#include<stdio.h>
int main(){
	float p, d;
	printf("Informe o preco do produto: ");
	scanf("%f", &p);
	if(p<500){
		d=p-((p*1.087)-p);
		printf("\nO desconto foi de 8,7%");
		printf("\nValor atualizado: %.2f", d);
	} else {
		d=p-((p*1.10)-p);
		printf("\nO desconto foi de 10%");
		printf("\nValor atualizado: %.2f", d);
	}
}
