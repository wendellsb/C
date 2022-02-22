#include<stdio.h>
#include<strings.h>
#include<locale.h>
/*
10- Escreva um programa que recebe uma palavra de até 50 caracteres e exibe quantas letras diferentes ela contém.
*/
int main()
{
	setlocale(LC_ALL,"portuguese");
	char palavra[50];
	int i, j, tam, contador;
	
	printf("Informe a palavra: ");
	gets(palavra);
	tam = strlen(palavra);
	for(i=0; i<tam; i++)
	{
		for(j=i+1; j<tam; j++){
			if(palavra[i] != palavra[j])
			{
				contador++;
			}
		}
	}
	printf("Foram %d letras diferentes", contador);
}
