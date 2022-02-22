#include <stdio.h>

int main() {
  int segundos, horas, minutos, resto;

  printf("Digite quantos segundos passaram da meia noite:");
  scanf("%d", &segundos);
  horas = segundos / 3600;
  minutos = segundos % 3600;
  minutos = minutos/60;

  printf("%dh:%dmin",horas, minutos);
}
/*
int main() {
  int segundos;
  printf("Digite quantos segundos passaram da meia noite:");
  scanf("%d", &segundos);
  
  // quantas horas completas tenho?
  int horas = segundos / 3600;
  // quantos segundos me restam?
  // segundos = 
  // transforme os segundos restantes em minutos:
  // int minutos = 
  

  printf("%dh:%dmin",horas, minutos);
  */
