#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
/*
12- Escreva um programa que recebe um texto e imprime o mesmo texto, duplicando cada uma das letras deste texto. Exemplo:
texto recebido: INSTITUTO DE INFORMATICA
texto devolvido: IINNSSTTIITTUUTTOO DDEE IINNFFOORRMMAATTIICCAA
*/
int main()
{
	setlocale(LC_ALL,"portuguese");
	char texto[50], duplicado[50];
	int i, tamanho;
	
	printf("Informe o texto: ");
	gets(texto);
	tamanho = strlen(texto);
	
	
	for(i=0; i<tamanho; i++)
	{
		printf("%c%c", texto[i], texto[i]);
	}
	
}






