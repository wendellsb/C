/*
10. Uma empresa contrata um encanador a R$ 30.00 por dia. Crie um programa 
que solicite o n�mero de dias trabalhados pelo encanador e imprima a quantia
 l�quida que dever� ser paga, sabendo-se que s�o descontados 8% para imposto de renda.
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
