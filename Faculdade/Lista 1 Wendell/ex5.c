#include<stdio.h>
/*
5. Escreva uma fun��o potenciaInt(base, expoente) que retorne o valor de
base expoente. N�o use nenhuma das fun��es da biblioteca matem�tica.
*/
#include <stdio.h>

int func(int b, int e){
  int r;
  r = b;

  for(int i = 1; i < e; i++){
    b = b*r;
  }
  return (b);
}

int main(void) {
  int base, exp, result=0;

  scanf("%d %d", &base, &exp);

  result = func(base, exp);

  printf("%d", result);

  return 0;
}
