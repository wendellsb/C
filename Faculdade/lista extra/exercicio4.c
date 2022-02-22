#include<stdio.h>
/*
4- Carregue dois vetores A e B de números inteiros com 40 e 50 elementos respectivamente. Desenvolva um programa para gerar
um terceiro VETOR C com os elementos diferentes existentes nos vetores A e B.
*/
int main()

// buguei nesse aqui, não consegui completar

{
	int vetorA[4], vetorB[5], vetorc = 0, i, vetorC;
	
	for(i=1; i<=4; i++)
	{
		printf("Vetor A: ");
		scanf("%d", &vetorA[i]);
	}
	for(i=1; i<=5; i++)
	{
		printf("Vetor B: ");
		scanf("%d", &vetorB[i]);	
	}
	for(i=1; i<=5; i++)
	{
		if(vetorA != vetorB)
		{
			vetorc = vetorc + 1;
		}	
	}
	for(i=1; i<=vetorc; i++)
	{
		if(vetorA[i] != vetorB[i])
		{
			vetorC[i] = ;
		}	
	}
	
}
