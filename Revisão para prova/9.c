/*
9. Efetuar o cálculo da quantidade de litros de combustível gastos em uma viagem, 
utilizando-se um automóvel que faz X Km/litro. Para obter o cálculo, o usuário deverá 
fornecer a distância em KM percorridos e quantos KM/Litro o carro faz.
*/
#include<stdio.h>
int main(){
	float litros, dist, km_litro;
	
	printf("Informe a distancia: ");
	scanf("%d", &dist);
	printf("Informe a quantidade de Litros: ");
	scanf("%d", &litros); 
	
	km_litro=dist/litros;
	printf("A quantidade de litros gasta foi: %.2f", km_litro);
}
