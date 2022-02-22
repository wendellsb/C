#include<stdio.h>

int main(){
	int n1, n2;
	 
	printf("Informe o Primeiro numero: ");
	scanf("%d", &n1);
	printf("Informe o Segundo numero: ");
	scanf("%d", &n2);
	if (n1 > n2){
		printf("O maior numero foi: %d", n1);
	} else {
		printf("O maior numero foi: %d", n2);
	}
}
