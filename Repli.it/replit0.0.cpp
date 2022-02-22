#include<stdio.h>
/*
Estude o código e faça com que o programa leia 3 variáveis e mostre-as na tela.
*/
int main(){
	int a, b, c;
	printf("Informe o primeiro numero: ");
	scanf("%d", &a);
	printf("Informe o segundo numero: ");
	scanf("%d", &b);
	printf("Informe o terceiro numero: ");
	scanf("%d", &c);
	printf("\nO primeiro numero informado foi: %d", a);
	printf("\nO segundo numero informado foi: %d", b);
	printf("\nO terceiro numero informado foi: %d", c);
	
	return 0;
}
