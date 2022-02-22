#include<stdio.h>
#include<stdlib.h>
#include<strings.h>
/*
6- Escreva um programa que leia uma string - 80 caracteres - e imprima o total de pares de consoantes dobradas (rr e ss).
*/
int main()
{
	char string[] = "wendell";
	int i, x, dobrada;
	
	printf("%s\n", string);
	
	for(i=0; i<8; i++)
	{
			if(string[i] == string[++i])
			{
				dobrada++;
			}
	}
	printf("Foram %d dobradas", dobrada);
}
