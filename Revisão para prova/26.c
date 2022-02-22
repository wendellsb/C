/*
12.  Fa�a um programa que leia os valores de A, B e C, calcule 
apenas o �delta� da equa��o. Classifique a equa��o em completa 
ou incompleta, al�m disso diga se existe solu��o. Se n�o houver, 
exiba uma mensagem de erro.  
- A equa��o � incompleta se alguns de seus coeficientes (a,b ou c) s�o iguais a 0
- Se delta < 0 n�o existe solu��o
delta=b*b-4.a.c
*/
#include<stdio.h>
int main(){
	int a, b, c, delta;
	printf("Informe o valor de A: ");
	scanf("%d", &a);
	printf("Informe o valor de B: ");
	scanf("%d", &b);
	printf("Informe o valor de C: ");
	scanf("%d", &c);
	delta=b*b-4*a*c;
	if(a==0 || b==0 || c==0){
		printf("Equacao incompleta");
	} else if(delta < 0){
		printf("Nao existe equacao");
	} else {
		printf("O valor de delta e: %d", delta);
	}
}
