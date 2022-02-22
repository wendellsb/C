/*
Complete o código para::
Informar se o valor m é divisível por n
Informar se ch1 é uma vogal
*/
#include <stdio.h>
int main(void) {
	int m,n, divisao;
	char ch1;
	printf("Digite um caractere: ");
	scanf("%c",&ch1);
	printf("Digite um numero: ");
	scanf("%d",&m);
	printf("Digite um numero: ");
	scanf("%d", &n);

    divisao = m%n;
  
   // complete com a condição
	if(divisao == 0){
	printf("\n%d e divisivel por %d\n", m, n); 
	} else {
	printf("\n%d NAO e divisivel por %d\n", m, n); 
	}
  // complete com a condição
	if((ch1 == 'a') || (ch1 == 'e') || (ch1 == 'i') || (ch1 == 'o') || (ch1 == 'u')){
  	printf("\n%c e uma vogal \n",ch1);
	} else {
	printf("%c NAO E uma vogal \n",ch1);
	}
  return 0;
}
