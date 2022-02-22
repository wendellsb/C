#include <stdio.h>
#include<stdio.h>
int main(){
	int n,i=1,maiorn=0, menorn=9999;
	char letra;
	do{
		printf("digite um numero: ");
		scanf("%d", &n);
    if(n>maiorn){
    	maiorn=n;
    }if(n<menorn){
    	menorn=n;
    }
    printf("\npara sair do loop digite N");
    
	}while(n == letra);
	printf("\n%d maior", maiorn);
	printf("\n%d menor\n", menorn);
	}
