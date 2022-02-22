/*
	15. Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode 
	ou não se aposentar. As condições para aposentadoria são 
    - Ter pelo menos 65 anos,
    - Ou ter trabalhado pelo menos 30 anos,
    - Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.
*/

#include<stdio.h>
int main(){
	int idade, tempo;
	printf("Informe sua idade: ");
	scanf("%d", &idade);
	printf("Informe sua idade: ");
	scanf("%d", &tempo);
	
	if(idade > 65){
		printf("Voce pode se aposentar!");
	} else if(tempo > 30){
		printf("Voce pode se aposentar!");
	} else if((idade > 60) && (tempo > 25)){
		printf("Voce pode se aposentar!");
	} else {
		printf("Voce nao pode se aposentar!");
	}
	}
	
