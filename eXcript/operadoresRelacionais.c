#include<stdio.h>
#include<stdlib.h>
int main()
{
	int idade;
	printf("Informe a sua idade: ");
	scanf("%d", &idade);
	 if(idade < 18){
	 	printf("Jovem");
	 } else if(idade >= 18 && idade<65){
	 	printf("Adulto");
	 } else {
	 	printf("Idoso");
	 }
	return 0;
}
