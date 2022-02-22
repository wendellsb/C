/*
6. Faça um programa que leia a idade de 100 pessoas. Ao final:
- Calcule e mostre a idade média desse grupo de indivíduos.
- Escreva também a porcentagem de pessoas entre 21 e 65 anos.
*/
#include<stdio.h>
int main(){
	int idade, i, soma=0, entre=0, media=0, porc=0;
	
	for(i=1; i<=3; i++){
	printf("\ninforme sua idade: ");
	scanf("%d", &idade);
	soma=soma+idade;
	if(idade >= 21 && idade <=65){
		entre++;
	}
	}
	media= soma/3;
	porc=entre*100/3;
	printf("\na media foi: %d", media);
	printf("\na porcentagem foi: %d", porc);
}
