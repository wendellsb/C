/*
6) Considerando a f�rmula para o c�lculo da dist�ncia entre dois pontos (x1; y1) e (x2; y2), escreva um
programa que contenha uma fun��o que receba como par�metros as coordenadas de dois pontos e
retorne a dist�ncia entre eles:
*/
// n�o consigo entender o pq n�o retorna o valor de mais de uma coordenada
#include<stdio.h>
int distancia(int a, int b, int c, int d);
int main(){
	int x1, x2, y1, y2;
	printf("Informe a sua 1 coordenada: ");
	scanf("%d", &x1);
	printf("Informe a sua 1 coordenada: ");
	scanf("%d",&y1);
	printf("Informe a sua 2 coordenada: ");
	scanf("%d", &y2);
	printf("Informe a sua 2 coordenada: ");
	scanf("%d", &y2);
	
	int distancia(x1, x2, y1, y2);
	printf("A distancia e de x=%d,y=%d", distancia(x1, x2, y1, y2));
}
int distancia(int a, int b, int c, int d){
	int dis, dis2;
	dis=((b-a)*2)/2;
	dis2=((d-c)*2)/2;
	
	return dis, dis2;
}
