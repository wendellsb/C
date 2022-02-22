/*
	3. Elaborar um algoritmo que leia o nome de um time de futebol, seu número de vitórias,
empates e derrotas no campeonato, e calcule o número de pontos obtidos. Lembrando
que cada vitória vale 3 pontos, empate 1 ponto e derrota nenhum ponto.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	char time[60];
	int p_vit = 3, p_der = 0, p_emp = 1, vitoria, derrota, empate, total;
	printf("************************************************\n");
	printf("Informe o nome do time de Futebol: ");
	scanf("%s", &time);
	printf("************************************************\n");
	printf("Informe o numero de vitorias do time: ");
	scanf("%d", &vitoria);
	printf("************************************************\n");
	printf("Informe o numero de empates: ");
	scanf("%d", &empate);
	printf("************************************************\n");
	printf("Informe o numero de derrotas: ");
	scanf("%d", &derrota);
	total = (vitoria*p_vit)+ (empate*p_emp);
	printf("****************************************************************\n");
	printf("O numero de saldo do %s no campeonato foi: %d pontos", time, total);
	printf("\n****************************************************************");
	return 0;
}
