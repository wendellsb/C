/*
	3. Elabore um programa que leia um número de 50 idades. 
Calcule e escreva a idade média deste grupo de indivíduos.
*/
#include<stdio.h>
int main(){
	int i, idade;
	float soma=50, media;
	for(i=1; i<=2; i++){
		printf("Informe a %d idade: ", i);
		scanf("%d", &idade);
		soma = soma + idade;
	}
	media = soma/50;
	printf("A media das 50 idades foi: %f", media);
}
