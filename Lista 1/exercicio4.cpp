/* 4 - Fa�a um programa que, dados pelo usu�rio dois n�meros inteiros m e n, 
com m > n, escreve os valores de uma tripla Pitag�rica (lado1, lado2 e hipotenusa) 
gerada a partir de m e n, atrav�s das f�rmulas:
Lado1 = m� � n�
Lado2 = 2mn
Hipotenusa = m� + n�
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


 


