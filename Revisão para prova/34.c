/*
4. Escreva um programa que pergunte ao usuário quantos 
alunos tem na sala dele. Em seguida, pede ao usuário para 
que entre com as notas AV1 de todos os alunos da sala, 
um por vez. Por fim, o programa deve mostrar a média aritmética, da turma.

#include<stdio.h>
int main(){
	int i, sala;
	float nota=0, media=0, soma=0;
	printf("Informe quantos alunos tem em sala: ");
	scanf("%d", &sala);
	for(i=1; i <= sala; i++){
		printf("Informe a nota Av1 do %d aluno: ", i);
		scanf("%f", &nota);
		soma=soma+nota;
	}
	media=soma/sala;
	printf("A media da turma: %.2f", media);
		}
		*/
		
		#include <stdio.h>
int main ()
{
	int c=0;
	float conta,media,av1,a,alunos;
	printf ("quantos alunos tem na sala ?:");
	scanf ("%f",&a);
	while (c<a){
		printf ("digite a nota da av1:");
		scanf ("%f",&av1);
		conta = conta + av1;
		c++;
	}
	media = conta/a;
	printf ("a media da turma e %.2f",media);
	return 0;
}
