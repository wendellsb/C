#include <stdio.h>

int main(){
  int escalaDeFelicidade;
  printf("Em uma escala de 1 a 10, o que feliz voce esta?\n");
  scanf("%d", &escalaDeFelicidade);
  
  if (escalaDeFelicidade >= 8){
    printf("Que maravilha!\n");
    printf("As coisas estao indo bem para voce!\n");
  } else if(escalaDeFelicidade >= 5){
    printf("Melhor que a media, certo?\n");
    printf("Talvez as coisas melhorem em breve!\n");
  } else if(escalaDeFelicidade >= 3){
    printf("Que pena que voce nao esta se sentindo tao bem.\n");
    printf("Espero que as coisas mudem em breve ...\n");
  } else {
    printf("Aguenta ai as coisas tem que melhorar, certo?\n");
    printf("Sempre fica mais escuro antes do amanhecer.\n");
  }
  
  return 0;
}
