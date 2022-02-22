#include<stdio.h>
#include<stdlib.h>
int main(){
	
	int x = 0;
	int valDigitado = 0;
	printf("informe quantas vezes deve ser repetido: ");
	scanf("%d", &valDigitado);
	
	while(x<valDigitado){
		printf("%d\n", x*10);
		x++;
	}
	
	
	
	return 0;
}
