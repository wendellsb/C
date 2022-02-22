/*
3. Entrar com a sigla do estado de uma pessoa e imprimir 
uma das mensagens: Carioca, Paulista, mineiro, outros estados
- Para esse programa, assuma que os estados são representados pela sua letra inicial
*/
#include<stdio.h>
int main(){
	char letra, c, p, m;
	printf("Carioca, Paulista, Mineiro");
	printf("\nDigite a letra inicial do seu estado: ");
	
	scanf("%c", &letra);
	switch(letra){
		case 'c':
		case 'C':
			printf("CARIOCA");
			break;
		case 'p':
		case 'P':
			printf("PAULISTA");
			break;
		case 'm':
		case 'M':
			printf("MINEIRO");
			break;
		default:
			printf("Nao cadastrado");
			break;
	}
}

