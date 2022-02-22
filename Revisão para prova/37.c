/*
7. Uma pesquisa sobre algumas características físicas 
da população de uma determinada região coletou os 
seguintes dados, referentes a cada habitante, para serem analisados: 
- Sexo ? masculino ('m'), feminino ('f')
- Cor dos olhos ? azuis ('a'), verdes ('v'),  castanhos ('c')
- Cor dos cabelos ? louros ('l'), castanhos ('c'), pretos ('p')
- Idade em anos
Fazer um programa que leia os valores de 50 habitantes e ao final escreva: 
a) a maior idade dos habitantes; 
b) a porcentagem de indivíduos do sexo feminino cuja idade está entre 
18 e 35 anos inclusive e que tenham olhos verdes e cabelos louros.
c) a quantidade de indivídos do sexo masculino cuja idade seja menor que 18 anos
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int sexo, olhos, cabelo; 
	int i, idade, maior=0;
	float porc_f, quant_m, totalm, totalf;
		
	for(i=1; i<=2; i++){
	printf("Sexo- masculino (1), feminino (2): ");
	scanf("%d", &sexo);
	printf("Cor dos olhos- azuis(1), verdes(2), castanhos(3): ");
	scanf("%d", &olhos);	
	printf("Cor dos cabelos- loiros(1), castanhos(2), pretos(3): ");
	scanf("%d", &cabelo);
	printf("Idade: ");
	scanf("%d", &idade);
	printf("\n\n");
	if(idade > maior){
		maior=idade;
	}
	if(sexo == 2){
		if(idade>=18 && idade <=35 && olhos == 2 && cabelo == 1){
			porc_f++;
		}
	}
	if(sexo == 1 && idade < 18){
		quant_m++;
	}
	}
	printf("\nA maior idade dos habitantes: %d", maior);
	totalf= porc_f*100/2;
	printf("\nA porcentagem femenina: %.2f", totalf);
	
	totalm= quant_m*100/2;
	printf("\nA porcentagem masculina: %.2f", totalm);
	
}











