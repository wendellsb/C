/*
7. Fazer um programa que pergunta do usuário o valor em metros e 
imprime o correspondente em pés. Considerando que 1 metro equivale a 3. 28084 pés
*/
#include<stdio.h>
int main(){
	int metro;
	float pes;
	printf("Informe o valor em metros: ");
	scanf("%d", &metro);
	pes = metro*3.28084;
	printf("O valor convertido para pes foi: %.5f", pes);
}
