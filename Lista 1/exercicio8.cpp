/*
	8. Faça um programa que, dados pelo usuário os três coeficientes a, b e c de uma equação
do 2º grau, escreve os valores das raízes dessa equação.
*/

#include<stdio.h>
#include<math.h>

int main(){
	int a, b, c, delta, x1, x2;
	
	printf("Digite o valor de A: ");
	scanf("%d", &a);
	printf("Digite o valor de B: ");
	scanf("%d", &b);
	printf("Digite o valor de C: ");
	scanf("%d", &c);
	delta = b*b - 4*a*c; /* fiquei mais de 30 minutos com o codigo dando valor 
	incorreto pq no lugar do -4*a*c eu havia colocado -4*a*b...
	*/
	printf("Delta = %d", delta);
	
	if(delta < 0){
		printf("\nNao da para calcular a equacao de 2 grau");
	} else {
		x1 = ((-b) +sqrt(delta))/(2*(a));
		x2 = ((-b) -sqrt(delta))/(2*(a));
		printf("\nO valor de x1=%d", x1);
		printf("\nO valor de x2=%d", x2);
	}
	return 0;
}

