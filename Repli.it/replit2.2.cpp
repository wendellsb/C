#include <stdio.h>

int main() {
  int a,b,c,menor;
  
  printf("Informe o primeiro numero: ");
  scanf("%d", &a);
  printf("Informe o segundo numero: ");
  scanf("%d", &b);
  printf("Informe o terceiro numero: ");
  scanf("%d", &c);
  
  if(a < b && a < c){
    printf("O menor foi: %d", a);
  } else if(b < a && b < c){
  	printf("O menor foi: %d", b);
  } else {
  	printf("O menor foi: %d", c);
  }  
  return 0;
}
