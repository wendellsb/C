/*
9. Efetuar o c�lculo da quantidade de litros de combust�vel gastos em uma viagem, 
utilizando-se um autom�vel que faz X Km/litro. Para obter o c�lculo, o usu�rio dever� 
fornecer a dist�ncia em KM percorridos e quantos KM/Litro o carro faz.
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
