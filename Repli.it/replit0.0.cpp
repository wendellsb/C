#include<stdio.h>
/*
Estude o c�digo e fa�a com que o programa leia 3 vari�veis e mostre-as na tela.
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
