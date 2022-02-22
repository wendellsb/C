/*
	9. (Repetição) Faça um algoritmo que leia o nome e idade de 20 pessoas e ao final
informe quantas pessoas são acima de 18 anos.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	int idade, i, cont = 0, aux, acima_18;
	char nome[60];
	
	for(i=0; i<2; i++){
	printf("Informe o Nome: ");
	scanf("%s", &nome);
	printf("Informe a idade: ");
	scanf("%d", &idade);
	printf("O %s tem idade de %d\n\n\n", nome, idade);
	if(idade > 18){
		cont++;
		aux = cont;
	}
	}
	acima_18 = aux;
	printf("O numero de pessoas acima de 18 anos foram: %d", acima_18);
	return 0;	
}





