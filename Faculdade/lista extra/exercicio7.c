#include<stdio.h>
#include<strings.h>
#include<locale.h>
/*
7- Escreva um pequeno programa que lê do teclado uma string e imprimir quantos caracteres dessa string são dígitos. Por
exemplo:
ENTRADA: "Niterói, 06 de março de 2004" EXIBIR: A frase "Niterói, 06 de março de 2004" tem 6 dígitos
*/

int main()
{
	setlocale(LC_ALL,"portuguese");
	char x[] = "Niterói, 06 de março de 2004";
	int i, cont=0, tam;
	tam = strlen(x);
	for(i=0; i<tam; i++)
	{
		if((x[i] >= 48) && (x[i] <= 57))
		{
			cont++;
		}
	}
	
	printf("Niterói, 06 de março de 2004 tem %d dígitos", cont);
}
