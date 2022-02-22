#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
/*
20- Calcular a média das 3 notas bimestrais obtidas por cada aluno e a média da turma, Sabe-se que as notas estão registradas em
cada linha da matriz. Os 45 alunos estão codificados com valores seqüências, identificados pelo índice da linha da matriz
*/
/*
professor a unica forma que eu consegui que a soma e a media não pegassem resto de memoria foi essa.
*/
int main()
{
	setlocale(LC_ALL,"portuguese");
	float matriz[3][3], soma[3], media[3];
	int i, j;
	for(i=0; i<3; i++)
	{	
			soma[i]=0;
			media[i]=0;
	}
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("Informe as notas do %d: ", i);
			scanf("%f", &matriz[i][j]);
			soma[i]=soma[i]+matriz[i][j];
		}
		media[i] = soma[i]/3;
		printf("\n");
	}
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("notas do %d foram: %.1f\n", i, matriz[i][j]);
			
		}
		printf("soma do %d foi: %.1f\n", i, soma[i]);
		printf("media do %d foi: %.1f\n", i, media[i]);
		printf("\n");
	}
	
}
