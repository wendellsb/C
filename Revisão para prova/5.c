/*
5. Ler uma temperatura em graus Cent�grados e apresent�-la convertida em graus Fahrenheit. 
A f�rmula de convers�o �:  F = (9*C+160)/5. Onde F � a temperatura em Fahrenheit e C � a temperatura em Cent�grados.
*/
#include<stdio.h>
int main(){
	int c, f;
	printf("Informe a temporatura em graus Centigrados: ");
	scanf("%d", &c);
	f=(9*c+160)/5;
	printf("A temperatura em Fahrenheit: %d", f);
}
