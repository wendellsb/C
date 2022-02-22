/*
	6. Entrar com nota da AV1 e nota da AV2 de um aluno. 
Imprimir: nota de cada AV, média e uma das mensagens: 
Aprovado , Reprovado ou AV3 (a média é 6.0 para aprovação).
*/
#include<stdio.h>

int main(){
	float av1, av2, media;
	
	printf("Informe a nota da AV1: ");
	scanf("%f", &av1);
	printf("Informe a nota da AV1: ");
	scanf("%f", &av2);
	
	media = (av1 + av2)/2;
	
	if(media >= 6){
		printf("O aluno tirou %.2f na AV1 e %.2f na AV2.", av1, av2);
		printf("\nA media do aluno foi: %.2f.\n", media);
		printf("Aluno Aprovado!");
	} else if((media > 4) && (media < 6)){
		printf("O aluno tirou %.2f na AV1 e %.2f na AV2.", av1, av2);
		printf("\nA media do aluno foi: %.2f.\n", media);
		printf("Aluno na AV3!");
	} else if(media < 4){
		printf("O aluno tirou %.2f na AV1 e %.2f na AV2.", av1, av2);
		printf("A media do aluno foi: %.2f.\n", media);
		printf("\nAluno Reprovado!");
	}	
	
	return 0;
}
