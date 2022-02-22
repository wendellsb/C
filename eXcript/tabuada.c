#include<stdio.h>
#include<stdlib.h>
int main(){
	int i, tabuada;
	printf("Informe: ");
	scanf("%d", &tabuada);
	for(i=1; i<=10; i++){
		printf("\n%ix%i = %i", i, tabuada, i*tabuada);
	}
}
