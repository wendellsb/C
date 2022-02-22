/*
6. Entrar com nota da AV1 e nota da AV2 de um aluno. Imprimir: 
nota de cada AV, média e uma das mensagens: Aprovado , 
Reprovado ou AV3 (a média é 6.0 para aprovação).
*/
#include<stdio.h>
int main(){
	
	float av1, av2, media;
	printf("Informe a nota da Av1: ");
	scanf("%f", &av1);
	printf("Informe a nota da Av2: ");
	scanf("%f", &av2);
	media=(av1+av2)/2;
	
	printf("\nA nota na Av1:%.2f, na Av2:%.2f e a media foi:%.2f", av1, av2, media);
	if(media>6){
		printf("\nAluno aprovado");
	} else if(media>=4){
		printf("\nAluno em recuperacao");
	} else {
		printf("\nAluno Reprovado");
	}
}
