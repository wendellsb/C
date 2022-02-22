/*
No código dado escreva uma instrução switch para imprimir "Vogal" se o caractere 
for um de 'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I ',' O ',' U '. Se não for, mostre na tela "Não é uma vogal".
Dica:Se você não usar o break, você pode executar vários cases para um mesmo switch. 
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
