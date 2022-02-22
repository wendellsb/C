#include<stdio.h>
#include<strings.h>
#include<locale.h>
//\n
/*
9- Escreva um programa em C que receba um texto, na string ENT, e devolva, em SAI, este mesmo texto tendo sido eliminado
todos os espaços brancos. Exiba o tamanho das strings ENT e SAI (sem utilizar a função strlen).
*/
int main()
{
// space = 32
	setlocale(LC_ALL,"portuguese");
	char ent[50], sai[50];
	int i, tamEnt=0;
	
	printf("Informe o texto: ");
	gets(ent);
	for(i=0; i<50; i++)
	{
		if(ent[i] != '\0'){
			tamEnt++;
		} else {
			break;
		}
	}
	for(i=0; i<50; i++)
	{
		if(ent[i] != ' ')
		{
			sai[i] = ent[i];
		} else{
			sai[i]=ent[i+1];
			
		}
			
	}
	printf("\no texto foi: %s\n", sai);
	//printf("\nA entreda de caracteres do texto foi: %d\n", tamEnt);
	
	return 0;
}
