#include<stdio.h>
#include<strings.h>
#include<locale.h>
/*
8- Carregar uma frase de até 1000 caracteres e trocar todas as possíveis ocorrências da letra n antes das letras p ou b pela letra m.
*/
int main()
{
	setlocale(LC_ALL,"portuguese");
	
	char string[50];
	int i, tam;
	
	printf("Informe a frase: ");
	gets(string);
	
	tam = strlen(string);
	
	for(i=0; i<tam; i++)
	{
		if((string[i-1] == 'n') && (string[i] == 'p' || string[i] == 'b'))
		{
			string[i-1] = 'm';
		}
	}
	
	printf("\n%s\n", string);
}




