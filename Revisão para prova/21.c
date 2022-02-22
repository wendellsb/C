/*
7. Entrar com um número e informar se ele é divisível por 10, 
ou é divisível por 5, ou é divisível por 2 ou se não é divisível por nenhum destes.
*/
#include<stdio.h>
int main(){
	int num, div;
	printf("Informe um numero: ");
	scanf("%d", &num);
	if(num%10==0){
		printf("Numero divisivel por 10.");
	} else if(num%5==0){
		printf("Numero divisivel por 5.");
	} else if(num%2==0){
		printf("Numero divisivel por 2.");
	} else {
		printf("Numero nao e divisivel por 10, 5 ou 2.");
	}
}
