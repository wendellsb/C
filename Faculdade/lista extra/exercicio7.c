#include<stdio.h>
#include<strings.h>
#include<locale.h>
/*
7- Escreva um pequeno programa que l� do teclado uma string e imprimir quantos caracteres dessa string s�o d�gitos. Por
exemplo:
ENTRADA: "Niter�i, 06 de mar�o de 2004" EXIBIR: A frase "Niter�i, 06 de mar�o de 2004" tem 6 d�gitos
*/

int main()
{
	setlocale(LC_ALL,"portuguese");
	char x[] = "Niter�i, 06 de mar�o de 2004";
	int i, cont=0, tam;
	tam = strlen(x);
	for(i=0; i<tam; i++)
	{
		if((x[i] >= 48) && (x[i] <= 57))
		{
			cont++;
		}
	}
	
	printf("Niter�i, 06 de mar�o de 2004 tem %d d�gitos", cont);
}
