/*
9. Fa�a um programa que solicite ao usu�rio para digitar 
valores num�ricos inteiros positivos. Encerre a entrada de 
dados quando for digitado um n�mero negativo ou zero. 
Calcule a m�dia dos n�meros positivos digitados.
*/
#include<stdio.h>
int main(){
	
	float n, total=0, media=0, cont=0;
	while(n>0){
		printf("Informe um numero: ");
		scanf("%f", &n);
		if(n>0){
			media = media+n;
			cont++;
		} else {
			break;
		}
	}
	total=media/cont;
	printf("A media foi %.2f", total);
	
}
