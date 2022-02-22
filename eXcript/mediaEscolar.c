#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
	/*
	<ctype.h> - biblioteca testa grupos de caractere
	toupper(c) - deixa o C maiusculo
	*/
	float nota1, nota2, nota3, nota4, media;
	
	printf("Didite a primeira nota: ");
	scanf("%f", &nota1);
	printf("Didite a segunda nota: ");
	scanf("%f", &nota2);
	printf("Didite a terceira nota: ");
	scanf("%f", &nota3);
	printf("Didite a quarta nota: ");
	scanf("%f", &nota4);
	
	media = (nota1+nota2+nota3+nota4)/4;
	
	if(media>=6){
		printf("Aluno Aprovado com media: %.2f", media);
	} else if(media>=4){
		printf("Aluno em Recuperacao com media: %.2f", media);
	} else {
		printf("Aluno Reprovado com media: %.2f", media);
	}
	
	return 0;
}







