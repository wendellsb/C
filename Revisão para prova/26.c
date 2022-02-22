/*
12.  Faça um programa que leia os valores de A, B e C, calcule 
apenas o “delta” da equação. Classifique a equação em completa 
ou incompleta, além disso diga se existe solução. Se não houver, 
exiba uma mensagem de erro.  
- A equação é incompleta se alguns de seus coeficientes (a,b ou c) são iguais a 0
- Se delta < 0 não existe solução
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
