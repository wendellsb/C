/*
3. Elabore um programa que leia um n�mero de 50 idades. 
Calcule e escreva a idade m�dia deste grupo de indiv�duos.
*/
#include<stdio.h>
int main(){
	int i, idade;
	float media, soma;
	for(i=1; i<=3; i++){
	printf("Informe a idade: ");
	scanf("%d", &idade);
	soma = soma+idade;
	}
	media = soma/3;
	printf("A media de idades: %.1f", media);
	
}
