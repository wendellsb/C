/*
4) Escreva uma fun��o que calcule a soma dos n�meros pares e a soma dos n�meros impares de 0 at� um
n�mero inteiro n passado como par�metro. A fun��o deve exibir a soma dos pares e a soma dos
impares.
*/
// n�o entendi o pq n�o funciona com fun��o, fiz o teste fazendo direto e esta funcionando, porem na fun��o nao me retorna nada apos o scanf
#include<stdio.h>
#include<locale.h>
int soma(int a);
int main()
{
	int num,i, somaPar=0, somaImpar=0;;
	printf("Informe um numero: ");
	scanf("%d", &num);
	int soma(num);
	return 0;
}
int soma(int a){
	int i, somaImpar=0, somaPar=0;
	for(i=0; i<a; i++)
	{
		if(i%2==0){
			somaPar += i;
		}
		else {
			somaImpar += i;
		}
	}
	printf("A soma dos Pares: %d\n", somaPar);
	printf("A soma dos Pares: %d\n", somaImpar);
	return 0;
}










