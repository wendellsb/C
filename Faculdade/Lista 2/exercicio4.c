/*
4) Escreva uma função que calcule a soma dos números pares e a soma dos números impares de 0 até um
número inteiro n passado como parâmetro. A função deve exibir a soma dos pares e a soma dos
impares.
*/
// não entendi o pq não funciona com função, fiz o teste fazendo direto e esta funcionando, porem na função nao me retorna nada apos o scanf
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










