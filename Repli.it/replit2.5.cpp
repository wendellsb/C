/*
No c�digo dado escreva uma instru��o switch para imprimir "Vogal" se o caractere 
for um de 'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I ',' O ',' U '. Se n�o for, mostre na tela "N�o � uma vogal".
Dica:Se voc� n�o usar o break, voc� pode executar v�rios cases para um mesmo switch. 
*/
#include <stdio.h>

int main() {
  char ch;
  printf("Digite um caractere:");
  scanf("%c",&ch);
  
  switch(ch){
  	case 'a':
  	case 'A':
  		printf("A letra digitada -- %c -- e uma vogal", ch);
  		break;
  	case 'e':
  	case 'E':
  		printf("A letra digitada -- %c -- e uma vogal", ch);
  		break;
  	case 'i':
  	case 'I':
  		printf("A letra digitada -- %c -- e uma vogal", ch);
  		break;
  	case 'o':
  	case 'O':
  		printf("A letra digitada -- %c -- e uma vogal", ch);
  		break;
  	case 'u':
  	case 'U':
  		printf("A letra digitada -- %c -- e uma vogal", ch);
  		break;
  	default:
  		printf("A letra digitada -- %c -- nao e uma vogal!", ch);
  }
  
  return 0;
}
