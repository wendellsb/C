/*
13. Elabore um programa para efetuar o cálculo da quantidade de litros de 
cerveja consumida por um determinado bloco durante o carnaval. O programa 
recebe como entrada a quantidade  de packs de cerveja consumidos durante o período. 
    - considerar que o carnaval possui cinco dias;
    - considerar que uma pack de cerveja tem 12 latas;
    - sabe-se que cada lata tem 350ml e que 1litro tem 1000ml;
    - Supondo que cada pack custa R$18.00, informar também o gasto em cerveja do referido bloco;
*/
#include<stdio.h>
int main(){
	float pec, pec_dias, pec_latas,total_ml, total;
	float valor_pec;
	printf("Informe a quantidade de PECs: ");
	scanf("%f", &pec);
	pec_dias = pec*5;
	pec_latas = pec_dias*12;
	total_ml = pec_latas*350;
	total = total_ml/1000;
	valor_pec = pec*18.00;
	printf("\nForam consumidos: %.2f de PECs.", pec_dias);
	printf("\nForam consumidos: %.2f Latas.", pec_latas);
	printf("\nForam consumidos em de Latas: %.0f ml.", total_ml);
	printf("\nForam gastos: R$ %.2f.", valor_pec);
}
