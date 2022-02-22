/*
Operadores relacionais:
>   Maior que
>=  Maior que ou igual a
<   Menor que
<=  Menor ou igual a

Operadores de igualdade:
== é igual a
!= não é igual a

Operador lógico:
&& E
|| OU
! NÃO

Precedência dos operadores (de cima para baixo):
Operador lógico !
Aritmética
Relacional
Igualdade
Operador lógico &&
Operador lógico ||
Mude o valor da variável b para que as expressões 1 e 2 
resultem em 1 (verdadeira) e as expressões 3 e 4 resultem em 0 (falso)

*/
#include <stdio.h>

int main() {
  int a = 2, b = 4, c = 4;
  
  int exp1 = a>=b || c<=b;
  printf("Resultado da expressao 1 = %d\n",exp1);
  
  int exp2 = a!=b && c==b;
  printf("Resultado da expressao 2 = %d\n",exp2);
  
  int exp3 = c<b ||  a>b;
  printf("Resultado da expressao 3 = %d\n",exp3);
  
  int exp4 = c<b && a<b ;
  printf("Resultado da expressao 4 = %d\n",exp4);


  return 0;
}
