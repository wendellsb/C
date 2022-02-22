/*
No programa dado, faça o seguinte:
 Adicione a + b e armazene o resultado em c.
 Tome módulo de c com 3 e armazene o resultado em d.
 Divida d por c e armazene o resultado na variável float chamada res.

ps: se você for colocar os valores dentro do próprio programa, não precisa de scanf.
*/
#include<stdio.h>

int main(){
	int a, b, c;
	float res, d;
	
	printf("Informe o valor de A: ");
	scanf("%d", &a);
	printf("Informe o valor de B: ");
	scanf("%d", &b);
	c = a+b;
	d = c % 3;
	res = (c / d);
	
	printf("\nA soma foi: %d", c);
	printf("\nA o modulo da soma foi: %.2f", d);
	printf("\nA divisao de %d por %.2f foi: %.2f", c, d, res);
}









