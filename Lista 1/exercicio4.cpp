/* 4 - Faça um programa que, dados pelo usuário dois números inteiros m e n, 
com m > n, escreve os valores de uma tripla Pitagórica (lado1, lado2 e hipotenusa) 
gerada a partir de m e n, através das fórmulas:
Lado1 = m² – n²
Lado2 = 2mn
Hipotenusa = m² + n²
*/

#include<stdio.h>

int main(){
	int m, n, lado1, lado2, hipo;
	
	printf("O primeiro numero deve ser maior que o segundo, para ser feita a tripla Pitagorica!\n");
	printf("Informe o primeiro numero: ");
	scanf("%d", &m);
	printf("Informe o segundo numero: ");
	scanf("%d", &n);
	if(m>n){
		lado1 = m*m - n*n;
		lado2 = 2*(m*n);
		hipo = m*m + n*n;
		printf("\nO primeiro lado e igual a : %d", lado1);
		printf("\nO segundo lado e igual a : %d", lado2);
		printf("\nA hipotenusa e igual a : %d", hipo);
	} else {
		printf("\nO segundo numero nao foi maior que o primeiro!");
	}
	return 0;
}


 


