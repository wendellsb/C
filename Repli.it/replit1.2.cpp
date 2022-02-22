/*
Complete o programa. Divida o número por 6 e salve na variável número.
 Depois peque esse número resultante e some 10.
*/
#include <stdio.h>

int main() {
  float numero, soma;
  printf("Digite um numero: ");
  scanf("%f", &numero);
  numero = numero/6;
  soma = numero+10;
  printf("O numero final ficou: %.2f", soma);
  
  return 0;
}
