/*
10. Uma empresa contrata um encanador a R$ 30.00 por dia. Crie um programa 
que solicite o número de dias trabalhados pelo encanador e imprima a quantia
 líquida que deverá ser paga, sabendo-se que são descontados 8% para imposto de renda.
*/
#include<stdio.h>
int main(){
	
	float  dias, diast, total;
	
	printf("Informe os dias trabalhados: ");
	scanf("%f", &dias);
	diast = (dias*30.00)*0.08;
	total = dias*30.00-diast;
	printf("O total liquido: %.2f", total);
return 0;
}
