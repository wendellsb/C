#include <stdio.h>

int main() {
  int   meuInt;  
  float meuFloat;

  meuFloat = 1.0 / 2;         /* meuFloat recebe 0.5 */ 
  meuInt = 1 / 3;               /*  meuInt recebe  0 */ 
  meuFloat = (1 / 2) + (1 / 2); /* meuFloat recebe 0.0 */ 
  meuFloat = 3.0 / 2.0;         /* meuFloat recebe 1.5 */ 
  meuInt = meuFloat;            /* meuInt recebe 1 */ 
 
  
  return 0;
}

