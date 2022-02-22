/*
5. Faça um programa em C que leia um conjunto de 365 registros, 
cada um contendo a temperatura de um dia do ano, onde os valores 
são lidos ordenados por dia. O programa deverá calcular e imprimir:
- Temperatura média do ano;
- Número de dias do ano em que a temperatura foi superior a 27º .
*/
#include<stdio.h>
int main(){
	int i, temp, soma, superior, media;
	for(i=1; i<=3; i++){
		printf("Informe a temperatura do %i dia: ", i);
		scanf("%d", &temp);
		soma=soma+temp;
		if(temp>27){
			superior++;
		}
	}
	media=soma/3;
	printf("A temperatura media foi: %d e a quantidade de dias acima de 27 graus: %d", media, superior);
}
