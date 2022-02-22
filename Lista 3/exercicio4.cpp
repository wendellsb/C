/*
	4. Escreva um programa que pergunte ao usuário quantos alunos 
	tem na sala dele. Em seguida, pede ao usuário para que entre 
	com as notas AV1 de todos os alunos da sala, um por vez. Por fim,
	o programa deve mostrar a média aritmética, da turma.
*/
#include<stdio.h>
int main(){
	int alunos, i;
	float media, nota, soma = 0;
	printf("Informe quantos alunos tem na sala: ");
	scanf("%d", &alunos);
	for(i=1; i <= alunos; i++){
		printf("Informe a nota da Av1 do %d aluno: ", i);
		scanf("%f", &nota);
		soma = soma + nota; 
	} 
	media = soma/alunos;
	printf("A media da turma foi: %.2f", media);
}
