#include<stdio.h>

int main(){
	float n1, n2, n3, media;
	
	printf("Digite a primeira nota do aluno: ");
	scanf("%f", &n1);
	printf("Digite a segunda nota do aluno: ");
	scanf("%f", &n2);
	printf("Digite a terceira nota do aluno: ");
	scanf("%f", &n3);
	media = (n1 + n2 + n3)/3;
	if(n1 > 5.99){
		printf("Aluno aprovado com media: %.2f", media);
	}else if(4 < n2 < 5.9){
		printf("Aluno em recuperacao com media: %.2f", media);
	} else{
		printf("Aluno reprovado com media: %.2f", media);
	}
return 0;
}
