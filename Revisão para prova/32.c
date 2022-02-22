/*
2. Faça um programa que leia a quantidade e o preço de 50 produtos que foram comprados
por uma empresa. Ao final deve ser escrito o total gasto pela empresa.
*/
#include<stdio.h>
int main(){
	int i;
	float quant, preco, soma = 0;
	for(i=1; i<=3; i++){
		printf("Informe o a quantidade de produtos: ");
		scanf("%f", &quant);
		printf("Informe o preco do produto: ");
		scanf("%f", &preco);
		soma = soma+(quant*preco); 
	}
	printf("O valor total foi: %.2f", soma);
	
}
