/*
	3. Entrar com a sigla do estado de uma pessoa e imprimir uma das
mensagens: Carioca, Paulista, mineiro, outros estados
- Para esse programa, assuma que os estados são representados pela sua letra inicial
*/

#include<stdio.h>
#include<stdlib.h>
int main(){
	char letra, c = 'Carioca', p = 'Paulista', m = 'Mineiro';
	
	printf("Digite a letra do estado que voce pertence: ");
	scanf("%c", &letra);
	
	switch(letra){
		case 'c':
			printf("Voce e Carioca");
			break;
		case 'p':
			printf("Voce e Paulista");
			break;
		case 'm':
			printf("Voce e Mineiro");
			break;
		default:
			printf("Voce e de um estado nao registrado");
			break;
	}
	
}
