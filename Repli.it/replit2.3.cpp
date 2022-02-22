/*
Complete o c�digo para:
Informar se o valor m � divis�vel por n, se n�o for, informe se � divis�vel por n-1, se n�o for nenhuma das duas, informe
Informar se ch1 � uma vogal min�scula, se n�o for, veja se ela � uma vogal mai�scula, se n�o for nenhuma das duas, informe
Dica r�pida:
Voc� pode verificar se um caractere � mai�sculo ao realizar a seguinte compara��o:
if (ch1 >= 'A' & ch1 <= 'Z')
Para verificar se � min�sculo � o mesmo processo.
*/
#include <stdio.h>
int main() {
	int m,n;
	char ch1;
	printf("Digite um caractere:");
	scanf("%c",&ch1);
	printf("Digite numero: ");
	scanf("%d",&m);
	printf("Digite numero: ");
	scanf("%d",&n);
  // complete com as condi��es
	if(m%n == 0){
	printf("%d e divisivel por %d\n",m,n); 
    }else if(m%(n-1) == 0){
	printf("%d e divisivel por %d\n",m,n-1); 
    }else{
	printf("%d NAO e divisivel por %d ou por %d\n",m,n,n-1); 
	}
  // complete com as condi��es
	if((ch1 == 'a') || (ch1 == 'e') || (ch1 == 'i') || (ch1 == 'o') || (ch1 == 'u')){
	    printf("%c e uma vogal minuscula \n", ch1);
    } else if((ch1 == 'A') || (ch1 == 'E') || (ch1 == 'I') || (ch1 == 'O') || (ch1 == 'U')){
    	printf("%c e uma vogal maiuscula \n", ch1);
    } else {
	printf("%c NAO e uma vogal minuscula ou maiuscula \n",ch1);
	} 
  return 0;
}
