/*
Para manter a alta qualidade do serviço prestado, os correios precisam taxar as mercadorias importadas. 
Se o valor da mercadoria for inferior a US $50, não haverá taxa independente do peso. 
Se for mais de US$50 e estiver com menos de 3kg, será imposta uma taxa de 7% em cima do valor.
Se a mercadoria pesar de 3kg até 10kg, a taxa passa a 10%.
Se a mercadoria pesar acima de 10kg, a taxa passa a ser 20%.
?? Exercício
Crie uma calculadora de imposto que solicite o valor da mercadoria (em dólares) e seu peso (em kg). 
Em seguida, exiba o novo valor a ser pago, aplicado a taxa.
*/
#include <stdio.h>
int main() {
	float valor,peso,taxa, total_valor;
	printf("Informe o valor da mercadoria em US: ");
	scanf("%f", &valor);
	printf("Informe o peso da mercadoria em KG: ");
	scanf("%f", &peso);
	if(valor <= 50){
		printf("\nNão havera taxa sobre o peso!");
	} else if(valor > 50 && peso < 3){
		total_valor = valor + ((valor*7)/100);
		printf("\nA taxa em cima do valor e de 7 porcento.");
		printf("\nO total do valor a ser pago: %.2f", total_valor);
	} else if((valor > 50) && (peso > 3 && peso < 10)){
		total_valor = valor + ((valor*10)/100);
		printf("\nA taxa em cima do valor e de 10 porcento.");
		printf("\nO total do valor a ser pago: %.2f", total_valor);
	} else if((valor > 50) && (peso > 10)){
		total_valor = valor + ((valor*20)/100);
		printf("\nA taxa em cima do valor e de 20 porcento.");
		printf("\nO total do valor a ser pago: %.2f", total_valor);
	}  
}
