/*
	2. Faça um programa que leia a quantidade e o preço de 50 produtos que foram comprados
por uma empresa. Ao final deve ser escrito o total gasto pela empresa.
*/
#include<stdio.h>
int main(){
	float total = 0, preco, quant;
	int i;
	for(i=1; i<=3; i++){
		printf("Informe a quandidade do %d produto: ", i);
		scanf("%f", &quant);
		printf("Informe o preco da unidade: ");
		scanf("%f", &preco);
		total = total + (quant * preco);
	}
	printf("Total gasto foi: %.2f", total);
}
