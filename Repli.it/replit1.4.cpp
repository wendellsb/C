#include<stdio.h>

int main(void) {
  float altura;
  int idade;
  printf("digite sua altura em cm: ");
  scanf("%f", &altura);
  printf("digite sua idade: ");
  scanf("%d", &idade);
  
  printf("Voce tem %d anos e %.2f de altura \n", idade, altura);
  return 0;
}
